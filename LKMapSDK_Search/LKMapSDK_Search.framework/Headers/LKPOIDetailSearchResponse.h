//
//  LKPOIDetailSearchResponse.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <LKMapSDK_Base/LKResponse.h>
#import "LKPOIDetailSearchResult.h"

/// 详情检索响应报文类
@interface LKPOIDetailSearchResponse : LKResponse

/// 返回结果
@property (nonatomic, strong) NSArray <LKPOIDetailSearchResult *> *result;

/// POI 几何范围
@property (nonatomic, assign) LKCoordinateBounds bounds;
@end

