//
//  LKAlongSearchRequest.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import "LKSearchRequest.h"
#import <LKMapSDK_Base/LKLocation.h>

/// 沿途检索请求报文类
@interface LKAlongSearchRequest : LKSearchRequest

#pragma mark 必填参数

/// 搜索关键字，不支持多个关键字搜索
@property (nonatomic, copy) NSString *keyword;

/// 路线地理坐标数组
@property (nonatomic, copy) NSArray <LKLocation *> *locations;

#pragma mark 选填参数

/// 搜索半径。单位：千米，默认1千米
@property (nonatomic, assign) CGFloat radius;

/// POI 分类。例如：@[@"美食", @"酒店"]
@property (nonatomic, copy) NSArray <NSString *> *categories;

/// 行政区域编码
@property (nonatomic, copy) NSString *adcode;

/// 返回的结果数。最大40。默认10
@property (nonatomic, assign) NSInteger size;
@end
