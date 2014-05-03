//
//  OWSpaceDataViewController.h
//  Out of this World
//
//  Created by ts on 5/2/14.
//  Copyright (c) 2014 mak Learning. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;


@end
