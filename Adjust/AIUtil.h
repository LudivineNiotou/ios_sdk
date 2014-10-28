//
//  AIUtil.h
//  Adjust
//
//  Created by Christian Wellenbrock on 2013-07-05.
//  Copyright (c) 2013 adjust GmbH. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "AIUserAgent.h"

@interface AIUtil : NSObject

+ (NSString *)baseUrl;
+ (NSString *)clientSdk;
+ (AIUserAgent *)userAgent;

+ (void)excludeFromBackup:(NSString *)filename;
+ (NSString *)dateFormat:(double)value;
+ (NSDictionary *) buildJsonDict:(NSString *)jsonString;

@end
