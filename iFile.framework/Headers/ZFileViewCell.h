//
//  ZFileViewCell.h
//  Quantum
//
//  Created by John Blaine on 4/27/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface ZFileViewCell : UITableViewCell
//    @property (nonatomic, retain) UIButton *nextBtn;
    @property (nonatomic, retain) UIButton *fnameBtn;
    @property (nonatomic, retain) UIButton *dateBtn;
    @property (nonatomic, retain) UIImageView *img;

    - (NSString*)val;
    - (void)setVal:(NSString*)newValue;
    - (void)setDate:(NSString*)newValue;
    - (void)setDir:(Boolean)newValue;
- (void)addImage:(nullable NSString*)newValue;

@end

NS_ASSUME_NONNULL_END
