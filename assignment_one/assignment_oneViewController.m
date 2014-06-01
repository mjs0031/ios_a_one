//
//  assignment_oneViewController.m
//  assignment_one
//
//  Created by Matthew Swann on 6/1/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import "assignment_oneViewController.h"

@interface assignment_oneViewController ()

@end

@implementation assignment_oneViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction) textFieldDoneEditing:(id)sender{
    [sender resignFirstResponder];
}

- (IBAction) backgroundTap:(id)sender{
    [self.text_entry resignFirstResponder];
}

@end
