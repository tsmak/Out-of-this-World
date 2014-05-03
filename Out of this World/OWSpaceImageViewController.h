//
//  OWSpaceImageViewController.h
//  Out of this World
//
//  Created by ts on 4/30/14.
//  Copyright (c) 2014 mak Learning. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) OWSpaceObject *spaceObject; // Passing Data

@end
