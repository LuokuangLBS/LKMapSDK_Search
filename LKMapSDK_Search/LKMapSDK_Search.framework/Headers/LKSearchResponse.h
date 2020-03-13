//
//  LKSearchResponse.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <LKMapSDK_Base/LKResponse.h>
#import "LKSearchResult.h"

/// 检索响应报文基类
@interface LKSearchResponse : LKResponse

/// 返回结果
@property (nonatomic, strong) NSArray <LKSearchResult *>*result;

/// 矩形区域
@property (nonatomic, assign) LKCoordinateBounds bounds;
@end

