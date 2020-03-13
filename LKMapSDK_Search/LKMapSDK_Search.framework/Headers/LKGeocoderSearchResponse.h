//
//  LKGeocoderSearchResponse.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/29.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <LKMapSDK_Base/LKResponse.h>

@class LKGeocoderResult;

/// 地理编码响应报文类
@interface LKGeocoderSearchResponse : LKResponse

/// 返回结果
@property (nonatomic, strong) LKGeocoderResult *result;

@end

/// 地理编码响应结果
@interface LKGeocoderResult : NSObject

/// POI 地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

/// 是否精确查找
@property (nonatomic, assign) BOOL accuracy;
@end

