//
//  XZZSignInViewController.h
//  NSUserDefaults, Segues and Protocols Chanllenge Solution
//
//  Created by Zac on 13/12/2014.
//  Copyright (c) 2014 1st1k. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XZZSignInViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *usernameTextField;
@property (strong, nonatomic) IBOutlet UITextField *passwordTextField;

- (IBAction)loginButtonPressed:(id)sender;
- (IBAction)CreateAccountBarButtonItemPressed:(id)sender;

@end