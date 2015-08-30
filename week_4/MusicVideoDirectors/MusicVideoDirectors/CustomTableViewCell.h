//
//  CustomTableViewCell.h
//  MusicVideoDirectors
//
//  Created by joy on 8/29/15.
//  Copyright (c) 2015 Grandiose. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *birthplaceLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;


@end
