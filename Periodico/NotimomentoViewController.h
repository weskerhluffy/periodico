//
//  NotimomentoViewController.h
//  Periodico
//
//  Created by Ernesto Alvarado on 30/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NotimomentoViewController : UIViewController
{
	
	IBOutlet UIWebView *webView;
}

@property (nonatomic, retain) UIWebView *webView;
- (IBAction)nacionalesPressed:(id)sender;
@end
