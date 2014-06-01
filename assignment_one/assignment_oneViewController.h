//
//  assignment_oneViewController.h
//  assignment_one
//
//  Created by Matthew Swann on 6/1/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface assignment_oneViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *text_display;

@property (weak, nonatomic) IBOutlet UITextField *text_entry;

- (IBAction) button_pressed:(UIButton *)sender;

- (IBAction) textFieldDoneEditing:(id)sender;

- (IBAction) backgroundTap:(id)sender;

@end
