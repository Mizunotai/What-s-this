//
//  ViewController.h
//  What's this
//
//  Created by 大氣 on 2015/01/04.
//  Copyright (c) 2015年 Taiki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>{
    
    IBOutlet UILabel *downLabel;
    int countDown ;
    NSTimer * countDownTimer;
    
    UIImage *img;
    UIImageView *mainBidama;
    UIButton *onemore;
    
    UITextField *tf;
    
}



@end

