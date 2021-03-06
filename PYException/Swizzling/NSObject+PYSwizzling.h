//
//  NSObject+PYSwizzling.h
//  PYExceptionDemo
//
//  Created by mac on 2017/10/3.
//  Copyright © 2017年 于浦洋. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PYExceptionGlobal.h"

@interface NSObject (PYSwizzling)
+ (void)py_swizzleMethod:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector;
+ (void)py_swizzleClassMethod:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector;
@end
