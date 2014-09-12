//
//  RootViewController.h
//  BenjaminNotes
//
//  Created by Sarang Kulkarni on 9/11/14.
//  Copyright (c) 2014 shirish. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController{

    
    IBOutlet UIBarButtonItem *addButtonItem;
    

}

@property (nonatomic, retain) UIBarButtonItem* addButtonItem;
@property (nonatomic,retain) NSMutableArray* Notes;

- (IBAction)addButtonPressed:(id)sender;

- (NSString *)applicationDocumentsDirectory;

@end
