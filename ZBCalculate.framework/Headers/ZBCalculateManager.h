//
//  ZBCalculateManager.h
//  ZBCalculate
//
//  Created by zeinber on 2018/11/2.
//  Copyright © 2018年 zeinber. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZBCalculateManager : NSObject
/**
 * A、B为运算因子
 * operator运算符，字符串类型，传 +、-、*、/
 * 返回结果
 */
+ (NSInteger)calA:(NSInteger)A B:(NSInteger)B operator:(NSString *)operator;
@end
