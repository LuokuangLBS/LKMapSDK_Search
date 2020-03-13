//
//  LKGeocoderRequest.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/29.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import "LKSearchRequest.h"

/// 地理编码请求报文类
@interface LKGeocoderSearchRequest : LKSearchRequest

#pragma mark 必填参数

/// 待解析的地址。大陆、港、澳地区的地理编码可以将国家选择性的忽略，但省、市、城镇等级别地址不能忽略
@property (nonatomic, copy) NSString *address;

#pragma mark 选填参数

/// 行政区域编码
@property (nonatomic, copy) NSString *adcode;

@end
