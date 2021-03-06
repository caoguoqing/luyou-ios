//
//  MineViewController.h
//  路由管理
//
//  Created by zhaoyuan on 15/9/9.
//  Copyright (c) 2015年 赵远. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MineViewController : UIViewController
@property(nonatomic, strong) UITableView *tableView;

/*!
 @property  isLogined
 @abstract  标识位，标识是否有用户登录
 */
@property (nonatomic, readonly) BOOL isLogined;

@end
