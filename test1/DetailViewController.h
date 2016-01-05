//
//  DetailViewController.h
//  test1
//
//  Created by kakao on 2015. 12. 1..
//  Copyright © 2015년 kakao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

