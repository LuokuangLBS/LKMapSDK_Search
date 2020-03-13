//
//  LKPOIDetailSearchResult.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/12/2.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LKMapSDK_Base/LKLocation.h>
#import "LKSearchProperties.h"
#import "LKMapSDK_SearchEnum.h"

@class LKSearchGeometry;

/// 详情检索响应结果
@interface LKPOIDetailSearchResult : NSObject

/// POI 几何描述信息
@property (nonatomic, strong) LKSearchGeometry *geometry;

/// POI 属性信息
@property (nonatomic, strong) LKSearchProperties *properties;

@end

/// 详情检索结果地理信息
@interface LKSearchGeometry : NSObject

/// geometryType等于LKSearchGeometryTypePoint时，coordinate为点坐标；等于LKSearchGeometryTypePoint时，coordinate为中心坐标
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

/// geometryType等于LKSearchGeometryTypePoint时，coordinates为空；等于LKSearchGeometryTypePolygon时，coordinates为地理坐标数组
@property (nonatomic, copy) NSArray <LKLocation *> *coordinates;

/// 地理几何类型
@property (nonatomic, assign) LKSearchGeometryType geometryType;
@end

