//
//  LKReverseGeocoderRequest.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/29.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import "LKSearchRequest.h"

/// 反地理编码请求报文类
@interface LKReverseGeocoderSearchRequest : LKSearchRequest

#pragma mark 必填参数

/// 地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;

#pragma mark 选填参数

/// 搜索半径。单位：千米，默认1千米
@property (nonatomic, assign) CGFloat radius;

/// POI 分类。例如：@[@"美食", @"酒店"]
@property (nonatomic, copy) NSArray <NSString *> *categories;

/// 返回的结果数。最大40。默认10
@property (nonatomic, assign) NSInteger size;
@end
