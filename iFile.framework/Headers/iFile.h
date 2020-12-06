//
//  iFile.h
//  iFile
//
//  Created by John Blaine on 12/6/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ZFileViewCell.h"

//! Project version number for iFile.
FOUNDATION_EXPORT double iFileVersionNumber;
FOUNDATION_EXPORT const unsigned char iFileVersionString[];


//@interface iFile : UIView
//
////@property (nonatomic, retain) UIImageView *logo;
////@property (nonatomic, retain) UITextView *dscr;
////@property (nonatomic, retain) HPhoto *cimg;
////@property (nonatomic, retain) UIButton *editBtn;
////@property (nonatomic, retain) UIButton *filter;
////
////- (NSString*) fetchDscr;
////
////- (void) addDscr:(nullable NSString*)d;
////- (void) addPhoto:(nullable NSString*)u date:(nullable NSString*)d;
////- (void) addLogo:(nullable NSString*)u date:(nullable NSString*)d;
////- (void) refresh;
////- (void) addFilter:(nullable UIColor*) c alp:(float) a;
//
//@end
NS_ASSUME_NONNULL_BEGIN

typedef void (^CBlock)(NSInteger i);

@interface iFile : UIView <UITableViewDataSource, UITableViewDelegate>
    @property (strong, nonatomic) UITableView *tbl;
    @property (strong, nonatomic) NSMutableArray *myData;
    @property (strong, nonatomic) NSString *cPath;
    @property (nonatomic, retain) UIButton *backBtn;
    @property (nonatomic, retain) UIButton *symbol;

- (void)beginTask3WithName:(NSString *)name completion:(NSString*(^)(int))callback success:(NSString*(^)(int))callback2;
- (void)beginTask4WithName:(NSString *)name completion:(NSString*(^)(int))callback  success:(void (^)(NSInteger i))cblock;

@property (copy, nonatomic) CBlock cback;

@end

NS_ASSUME_NONNULL_END
