//
//  DetailViewController.h
//  RSSReader
//
//  Created by Mahaboobsab Nadaf on 01/10/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (copy, nonatomic) NSString *url;
@property (weak, nonatomic) IBOutlet UIWebView *webView;


@end

