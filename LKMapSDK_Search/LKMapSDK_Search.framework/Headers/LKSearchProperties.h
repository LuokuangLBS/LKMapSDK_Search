//
//  LKSearchProperties.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/12/2.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LKMapSDK_Base/LKTypes.h>

/// 详细结果
@interface LKSearchProperties : NSObject

/// POI 唯一标识
@property (nonatomic, copy) NSString *poiID;

/// POI 名称
@property (nonatomic, copy) NSString *name;

/// POI 所属国家或地区名称
@property (nonatomic, copy) NSString *country;

/// POI 所属国家或地区编码
@property (nonatomic, copy) NSString *countryID;

/// POI 所属省份或直辖市名称
@property (nonatomic, copy) NSString *province;

/// POI 所属省份或直辖市编码
@property (nonatomic, copy) NSString *provinceID;

/// POI 所属城市名称
@property (nonatomic, copy) NSString *city;

/// POI 所属城市编码
@property (nonatomic, copy) NSString *cityID;

/// POI 所属区、县、县级市名称
@property (nonatomic, copy) NSString *county;

/// POI 所属区、县、县级市编码
@property (nonatomic, copy) NSString *countyID;

/// POI 所属乡镇名称
@property (nonatomic, copy) NSString *town;

/// POI 所属村庄名称
@property (nonatomic, copy) NSString *village;

/// POI 所属街道名称
@property (nonatomic, copy) NSString *street;

/// POI 地址信息
@property (nonatomic, copy) NSString *address;

/// POI 人性化的信息。包括一些细节，可用于向最终用户展示
@property (nonatomic, copy) NSString *label;

/// POI 位置距检索位置点的距离。单位：千米
@property (nonatomic, assign) CGFloat distance;

/// 可信度得分。用于衡量返回结果与检索内容之间的匹配程度
@property (nonatomic, assign) CGFloat confidence;

/// POI 点类型
@property (nonatomic, copy) NSString *accuracy;

/// POI 邮政编码
@property (nonatomic, copy) NSString *postalcode;

/// POI 对应的导航引导点坐标。面状 POI 的导航引导点，一般为各类出入口，结合导航、路线规划等服务使用
@property (nonatomic, assign) CLLocationCoordinate2D routeCoordinate;

/// 面 AOI 的边界范围
@property (nonatomic, assign) LKCoordinateBounds bounds;

/// 检索结果的类别
@property (nonatomic, copy) NSArray <NSString *> *categories;
@end
