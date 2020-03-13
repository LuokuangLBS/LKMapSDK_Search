//
//  LKSuggestSearchRequest.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import "LKSearchRequest.h"

/// 建议检索请求报文类
@interface LKSuggestSearchRequest : LKSearchRequest

#pragma mark 必填参数

/// 搜索关键字，不支持多个关键字搜索
@property (nonatomic, copy) NSString *keyword;

#pragma mark 选填参数

/// 行政区域编码
@property (nonatomic, copy) NSString *adcode;

/// 是否只返回限定行政区域的结果。默认NO
@property (nonatomic, assign) BOOL regionLimit;

/// 地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;

/// POI 分类。例如：@[@"美食", @"酒店"]
@property (nonatomic, copy) NSArray <NSString *> *categories;
@end
