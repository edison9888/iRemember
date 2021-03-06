//
//  WaterFlowViewCell.h
//  WaterFlowStyle
//
//  Created by siqin.ljp on 12-5-16.
//  Copyright (c) 2012年 Taobao. All rights reserved.
//

#import <UIKit/UIKit.h>


/* ************************************************** */
@class WFIndexPath;

@interface WaterFlowViewCell : UIButton

@property (nonatomic, retain) NSString      *reuseIdentifier;
@property (nonatomic, retain) WFIndexPath   *indexPath;

@property (nonatomic, retain) UIImageView   *backImageView;
@property (nonatomic, retain) UILabel *contentLabel;

@property (nonatomic, assign) id delegate;

- (id)initWithIdentifier:(NSString *)identifier;
- (id)initWithIdentifier:(NSString *)identifier background:(NSString *)background;

@end


/* ************************************************** */
@interface WFIndexPath : NSObject

+ (WFIndexPath *)indexPathForRow:(NSInteger)row inColumn:(NSInteger)column;

@property (nonatomic) NSInteger column;
@property (nonatomic) NSInteger row;

@end