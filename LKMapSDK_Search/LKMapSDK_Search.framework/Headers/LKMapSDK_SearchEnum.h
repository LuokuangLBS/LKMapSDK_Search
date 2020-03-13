//
//  LKMapSDK_SearchEnum.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/12/23.
//  Copyright © 2019 luokung. All rights reserved.
//

#ifndef LKMapSDK_SearchEnum_h
#define LKMapSDK_SearchEnum_h

/// 检索区域几何形状
typedef NS_ENUM(NSUInteger, LKSearchShapeType) {
    
    /// 矩形
    LKSearchShapeTypeRectangle = 1,
    
    /// 圆形
    LKSearchShapeTypeCircle,
    
    /// 多边形
    LKSearchShapeTypePolygon,
};

/// 地理几何类型
typedef NS_ENUM(NSUInteger, LKSearchGeometryType) {
    
    /// 点
    LKSearchGeometryTypePoint = 1,
    
    /// 多边形
    LKSearchGeometryTypePolygon,
};
#endif /* LKMapSDK_SearchEnum_h */
