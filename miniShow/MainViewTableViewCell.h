//
//  MainViewTableViewCell.h
//  miniShow
//
//  Created by Jessie Serrino on 2/17/15.
//  Copyright (c) 2015 Ironhack. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;


@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *behindCountLabel;

// Do not change: UITableViewCell already uses variable name imageView
@property (weak, nonatomic) IBOutlet UIImageView *iv;

- (void) adjustCellAppearance;

@end
