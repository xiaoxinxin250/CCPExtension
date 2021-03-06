//
//  UILabel+CCPLabel.h
//  CCPExtension
//
//  Created by Ceair on 17/6/27.
//  Copyright © 2017年 ccp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (CCPLabel)
/*
 * 固定高度 自适应宽度
 * h 高度
 */
- (CGFloat)widthBy:(CGFloat)h;
/*
 * 固定宽度 自适应高度
 * w 宽度
 */
- (CGFloat)heightBy:(CGFloat)w;
@end
