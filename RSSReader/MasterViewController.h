//
//  MasterViewController.h
//  RSSReader
//
//  Created by Mahaboobsab Nadaf on 01/10/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController<NSXMLParserDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
//@property (strong, nonatomic) DetailViewController *detailViewController;


@end

