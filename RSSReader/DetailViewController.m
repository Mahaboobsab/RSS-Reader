//
//  DetailViewController.m
//  RSSReader
//
//  Created by Mahaboobsab Nadaf on 01/10/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController (){

    
}

@end

@implementation DetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSURL *myURL = [NSURL URLWithString: [self.url stringByAddingPercentEscapesUsingEncoding:
                                          NSUTF8StringEncoding]];
    NSURLRequest *request = [NSURLRequest requestWithURL:myURL];
    [self.webView loadRequest:request];
}



@end
