//
//  assignment_oneViewController.h
//  assignment_one
//
//  Created by Matthew Swann on 6/1/14.
//  Copyright (c) 2014 xmera. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface assignment_oneViewController : UIViewController

//@interface assignment_oneViewController : UIViewController<UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UILabel *text_display;

@property (weak, nonatomic) IBOutlet UITextField *text_entry;

- (IBAction) button_pressed:(UIButton *)sender;

- (IBAction) textFieldDoneEditing:(id)sender;

- (IBAction) backgroundTap:(id)sender;

@end
