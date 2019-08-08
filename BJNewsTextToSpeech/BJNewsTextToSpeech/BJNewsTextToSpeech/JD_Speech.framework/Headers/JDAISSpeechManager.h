//
//  JDAISSpeechManager.h
//  JDAISSpeechManager
//
//  Created by 满达 on 2018/6/27.
//  Copyright © 2018年 Beijing Jingdong Shangke Information Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

// 引擎类型
extern NSString *const JDAIS_ENGINETYPE_ASR;         // 语音识别
extern NSString *const JDAIS_ENGINETYPE_WAKEUP;      // 语音唤醒
extern NSString *const JDAIS_ENGINETYPE_TTS;         // 语音合成

// JDAISSpeechManager接口
@interface JDAISSpeechManager : NSObject

+ (JDAISSpeechManager *) create : (NSString *)engineType;

- (void) setListener : (id)setListener;

- (void) send : (NSString *)cmd withParams:(NSString *)params;

- (NSString *)getSDKVersion;

@end
