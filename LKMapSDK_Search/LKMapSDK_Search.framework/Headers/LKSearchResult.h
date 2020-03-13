//
//  LKSearchResult.h
//  LKMapSDK_Search
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LKSearchProperties.h"

/// 检索响应结果
@interface LKSearchResult : NSObject

/// POI 点地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

/// POI 属性信息
@property (nonatomic, strong) LKSearchProperties *properties;

@end



