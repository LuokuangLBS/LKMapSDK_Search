//
//  LKPOIDetailSearchRequest.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import "LKSearchRequest.h"

/// POI详情检索请求报文类
@interface LKPOIDetailSearchRequest : LKSearchRequest

#pragma mark 必填参数

/// POI的id数组
@property (nonatomic, copy) NSArray <NSString *> *poiIDs;

#pragma mark 选填参数

/// 是否返回面状POI边界坐标点 (只有面状数据返回)。默认YES
@property (nonatomic, assign) BOOL boundary;
@end
