//
//  LKSearchManager.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/29.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LKGeocoderSearchRequest.h"
#import "LKGeocoderSearchResponse.h"
#import "LKReverseGeocoderSearchRequest.h"
#import "LKReverseGeocoderSearchResponse.h"
#import "LKPOIDetailSearchRequest.h"
#import "LKPOIDetailSearchResponse.h"
#import "LKSuggestSearchRequest.h"
#import "LKSuggestSearchResponse.h"
#import "LKPolygonSearchRequest.h"
#import "LKPolygonSearchResponse.h"
#import "LKAlongSearchRequest.h"
#import "LKAlongSearchResponse.h"

@protocol LKSearchManagerDelegate;

/// 检索类
@interface LKSearchManager : NSObject

/// 代理
@property (nonatomic, weak) id <LKSearchManagerDelegate> delegate;

/**
 * 创建检索实例
 */
+ (instancetype)manager;

/**
 * 地理编码
 *
 * @param request 请求报文
 */
- (void)geocoderSearchRequest:(LKGeocoderSearchRequest *)request;

/**
 * 地理反编码
 *
 * @param request 请求报文
 */
- (void)reverseGeocoderSearchRequest:(LKReverseGeocoderSearchRequest *)request;

/**
 * POI详情检索
 *
 * @param request 请求报文
 */
- (void)poiDetailSearchRequest:(LKPOIDetailSearchRequest *)request;

/**
 * 建议检索
 *
 * @param request 请求报文
 */
- (void)suggestSearchRequest:(LKSuggestSearchRequest *)request;

/**
 * 几何区域检索
 *
 * @param request 请求报文
 */
- (void)polygonSearchRequest:(LKPolygonSearchRequest *)request;

/**
 * 沿途检索
 *
 * @param request 请求报文
 */
- (void)alongSearchRequest:(LKAlongSearchRequest *)request;
@end

#pragma mark --
/// 检索协议
@protocol LKSearchManagerDelegate <NSObject>

@optional

/**
 * 地理编码回调
 *
 * @param manager 检索实例
 * @param response 响应报文
 * @param code 状态码
 */
- (void)searchManager:(LKSearchManager *)manager
      geocodeResponse:(LKGeocoderSearchResponse *)response
            errorCode:(LKNetworkCode)code;

/**
 * 地理反编码回调
 *
 * @param manager 检索实例
 * @param response 响应报文
 * @param code 状态码
 */
- (void)searchManager:(LKSearchManager *)manager
reverseGeocodeResponse:(LKReverseGeocoderSearchResponse *)response
            errorCode:(LKNetworkCode)code;

/**
 * POI详情检索回调
 *
 * @param manager 检索实例
 * @param response 响应报文
 * @param code 状态码
 */
- (void)searchManager:(LKSearchManager *)manager
    poiDetailResponse:(LKPOIDetailSearchResponse *)response
            errorCode:(LKNetworkCode)code;

/**
 * 建议检索回调
 *
 * @param manager 检索实例
 * @param response 响应报文
 * @param code 状态码
 */
- (void)searchManager:(LKSearchManager *)manager
      suggestResponse:(LKSuggestSearchResponse *)response
            errorCode:(LKNetworkCode)code;

/**
 * 几何区域检索回调
 *
 * @param manager 检索实例
 * @param response 响应报文
 * @param code 状态码
 */
- (void)searchManager:(LKSearchManager *)manager
      polygonResponse:(LKPolygonSearchResponse *)response
            errorCode:(LKNetworkCode)code;

/**
 * 沿途检索回调
 *
 * @param manager 检索实例
 * @param response 响应报文
 * @param code 状态码
 */
- (void)searchManager:(LKSearchManager *)manager
        alongResponse:(LKAlongSearchResponse *)response
            errorCode:(LKNetworkCode)code;
@end

