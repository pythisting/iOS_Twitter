//
//  User.h
//  Twitter
//
//  Created by Pythis Ting on 2/4/15.
//  Copyright (c) 2015 Yahoo!, inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *screenname;
@property (nonatomic, strong) NSString *profileImageUrl;
@property (nonatomic, strong) NSString *tagline;

- (id)initWithDictionary:(NSDictionary *)dictionary;

+ (User*)currentUser;
+ (void)setCurrentUser:(User *)currentUser;

@end
