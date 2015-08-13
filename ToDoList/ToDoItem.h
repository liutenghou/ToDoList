//
//  ToDoItem.h
//  ToDoList
//
//  Created by Teng Liu on 8/7/15.
//  Copyright (c) 2015 Leo Teng Hou Liu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
