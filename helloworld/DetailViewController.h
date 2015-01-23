//
//  DetailViewController.h
//  helloworld
//
//  Created by andy on 15/1/23.
//  Copyright (c) 2015年 andy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

