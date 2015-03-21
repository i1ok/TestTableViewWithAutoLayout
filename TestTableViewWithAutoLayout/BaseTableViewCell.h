//
//  TableViewCell.h
//  TestTableViewWithAutoLayout
//
//  Created by Keita on 3/20/15.
//  Copyright (c) 2015 Keita Ito. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Event;

@interface BaseTableViewCell : UITableViewCell

- (void)setupWithModel:(Event *)event;

@end



@interface EventImageCell : BaseTableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *eventImageView;

@end

@interface EventNameCell : BaseTableViewCell
@property (weak, nonatomic) IBOutlet UILabel *eventNameLabel;

@end

@interface EventDescriptionCell : BaseTableViewCell
@property (weak, nonatomic) IBOutlet UILabel *eventDescriptionLabel;

@end
