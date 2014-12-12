//
//  XZZCreateAccountViewController.h
//  NSUserDefaults, Segues and Protocols Chanllenge Solution
//
//  Created by Zac on 13/12/2014.
//  Copyright (c) 2014 1st1k. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XZZCreateAccountViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *usernameTextField;
@property (strong, nonatomic) IBOutlet UITextField *passwordTextField;
@property (strong, nonatomic) IBOutlet UITextField *confirmPasswordTextField;

- (IBAction)createAccountButtonPressed:(id)sender;
- (IBAction)cancelButtonPressed:(id)sender;

@end
