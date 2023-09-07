/*
   Project: NetHood

   Copyright (C) 2022 Free Software Foundation

   Author: Parallels

   Created: 2022-09-16 15:40:26 +0000 by parallels

   This application is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This application is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
*/

#ifndef _NETWORKSERVICES_H_
#define _NETWORKSERVICES_H_

#import <Foundation/Foundation.h>

@interface NetworkServices : NSObject {
  
  NSTask* task;
  NSFileHandle* fh;
  NSInteger status;
  NSMutableData* buff;
  NSMutableDictionary* li;
  
  NSMutableArray* services;
}
- (id) init;
- (NSInteger) status;

- (void) refresh;
- (NSArray*) foundServices;

@end

#endif // _NETWORKSERVICES_H_

