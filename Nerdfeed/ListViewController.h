//
//  ListViewController.h
//  Nerdfeed
//
//  Created by Ryan Case on 10/11/13.
//  Copyright (c) 2013 Ryan Case. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RSSChannel;

@interface ListViewController : UITableViewController <NSXMLParserDelegate>
{
    NSURLConnection *connection;
    NSMutableData *xmlData;
    
    RSSChannel *channel;
}

- (void)fetchEntries;

@end