//
//  TableViewCell.m
//  TestTableViewWithAutoLayout
//
//  Created by Keita on 3/20/15.
//  Copyright (c) 2015 Keita Ito. All rights reserved.
//

#import "BaseTableViewCell.h"
#import "Event.h"

@implementation BaseTableViewCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)setupWithModel:(Event *)event {
    
    NSLog(@"Called setupWithModel method");
}

@end

@implementation EventImageCell

- (void)setupWithModel:(Event *)event
{
    NSString *string = event.eventImageName;
    self.eventImageView.image = [UIImage imageNamed:string];
}

//- (void)layoutSubviews{
//    [super layoutSubviews];
//    
//    self.contentView.frame = self.bounds;
//    
//}

@end

@implementation EventNameCell

- (void)setupWithModel:(Event *)event
{
    self.eventNameLabel.text = event.eventName;
}

@end

@implementation EventDescriptionCell

- (void)setupWithModel:(Event *)event
{
    self.eventDescriptionLabel.text = event.eventDescription;
}

@end