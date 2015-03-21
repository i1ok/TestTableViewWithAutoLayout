//
//  TableViewCell.h
//  TestTableViewWithAutoLayout
//
//  Created by Keita on 3/20/15.
//  Copyright (c) 2015 Keita Ito. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Event;

@interface TableViewCell : UITableViewCell

- (void)setupWithModel:(Event *)event;

@end



@interface EventImageCell : TableViewCell
@property (weak, nonatomic, readonly) IBOutlet UIImageView *imageView;

@end

@interface EventNameCell : TableViewCell
@property (weak, nonatomic) IBOutlet UILabel *eventNameLabel;

@end

@interface EventDescriptionCell : TableViewCell
@property (weak, nonatomic) IBOutlet UILabel *eventDescriptionLabel;

@end
