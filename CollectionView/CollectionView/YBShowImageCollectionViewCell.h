//
//  YBShowImageCollectionViewCell.h
//  CollectionView
//
//  Created by Caad on 2017/1/5.
//  Copyright © 2017年 X. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YBShowImageCollectionViewCell : UICollectionViewCell

@property (nonatomic,strong) UIScrollView *scrollView;
@property (nonatomic,strong) UIImageView *imageView;
@property (nonatomic,strong) UIImage *image;
@property (nonatomic,copy)   NSString *imageURL;

- (void)toScale:(CGFloat)scale animated:(BOOL)animated;

@end
