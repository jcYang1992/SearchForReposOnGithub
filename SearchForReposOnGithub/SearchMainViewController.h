//
//  SearchMainViewController.h
//  SearchForReposOnGithub
//
//  Created by WsdlDev on 17/1/10.
//  Copyright © 2017年 jcYang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchMainViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITableView *mSearchResultTableView;
@property (weak, nonatomic) IBOutlet UISearchBar *mSearchBar;

@end
