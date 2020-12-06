//
//  FSetting.h
//  Quantum
//
//  Created by John Blaine on 4/27/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FSetting : NSObject <NSCoding>{
    NSString *title;
    NSString *date;
    BOOL isDir;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *date;
@property (nonatomic) BOOL isDir;

@end

NS_ASSUME_NONNULL_END
