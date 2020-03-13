//
//  LKPolygonSearchRequest.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <LKMapSDK_Base/LKTypes.h>
#import <LKMapSDK_Base/LKLocation.h>
#import "LKSearchRequest.h"
#import "LKMapSDK_SearchEnum.h"

/// 多边形检索请求报文类
@interface LKPolygonSearchRequest : LKSearchRequest

#pragma mark 必填参数

/// 检索词
@property (nonatomic, copy) NSString *keyword;

#pragma mark 选填参数

/// POI 分类。例如：@[@"美食", @"酒店"]
@property (nonatomic, copy) NSArray <NSString *> *categories;

/// 检索区域几何形状
@property (nonatomic, assign) LKSearchShapeType shapeType;

/// 圆形的中心点地理坐标。圆形区域检索必填参数，shapeType设置为LKSearchShapeCircle时生效
@property (nonatomic, assign) CLLocationCoordinate2D circleCenter;

/// 圆形的半径。单位：千米。默认50千米。圆形区域检索必填参数，shapeType设置为LKSearchShapeCircle时生效
@property (nonatomic, assign) CGFloat circleRadius;

/// 矩形范围。shapeType设置为LKSearchShapeTypeRectangle时生效
@property (nonatomic, assign) LKCoordinateBounds rectangleBounds;

/// 多边形坐标点数组。首尾坐标必须相同
@property (nonatomic, copy) NSArray <LKLocation *> *locations;

/// 返回POI数量。默认10， 最大40
@property (nonatomic, assign) NSInteger size;
@end
