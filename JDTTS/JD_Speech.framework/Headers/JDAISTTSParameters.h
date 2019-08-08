//
//  JDAISTTSParameters.h
//  JDAISSpeechManager
//
//  Created by 满达 on 2018/7/5.
//  Copyright © 2018年 Beijing Jingdong Shangke Information Technology Co., Ltd. All rights reserved.
//

#ifndef JDAISTTSParameters_h
#define JDAISTTSParameters_h

#import <Foundation/Foundation.h>

/*
 * JDAIS_TTS_TEXT
 * Value explanation:   进行语音合成的文本
 * Value type:          NSString
 * Default value:       -
 */
extern NSString *const JDAIS_TTS_TEXT;                // 播报文本

#pragma mark - TTS参数配置

/*
 * JDAIS_TTS_STREAM_TYPE
 * Value explanation:   从哪个音频通道输出，iOS暂时不需要
 * Value type:          -
 * Default value:       -
 */
//extern NSString *const JDAIS_TTS_STREAM_TYPE;       // 播报流类型

/*
 * JDAIS_TTS_TTS_SAMPLE_RATE
 * Value explanation:   设置语音合成后音频采样率
 * Value type:          TJDAISTextToSpeechSampleRateFlags
 * Default value:       @(EJDAIS_TextToSpeechSampleRate24K)
 */
extern NSString *const JDAIS_TTS_TTS_SAMPLE_RATE;     // 采样率

/*
 * JDAIS_TTS_VOLUME_LEVEL
 * Value explanation:   合成语音音量大小
 * Value type:          float
 * Default value:       2.0f 取值范围:[0.1, 10.0]
 */
extern NSString *const JDAIS_TTS_VOLUME_LEVEL;      // 合成音量大小

/*
 * JDAIS_TTS_SPEED_LEVEL
 * Value explanation:   合成语音语速大小
 * Value type:          float
 * Default value:       1.0f 取值范围:[0.5, 2.0]
 */
extern NSString *const JDAIS_TTS_SPEED_LEVEL;

/*
 * JDAIS_TTS_APP_ID
 * Value explanation:   Application Id
 * Value type:          NSString
 * Default value:       -
 */
extern NSString *const JDAIS_TTS_APP_ID;            // APPID(String)

/*
 * JDAIS_TTS_APP_KEY
 * Value explanation:   Application Key
 * Value type:          NSString
 * Default value:       -
 */
extern NSString *const JDAIS_TTS_APP_KEY;           // appKey(String)

/*
 * JDAIS_TTS_SECRET_KEY
 * Value explanation:   Secret Key
 * Value type:          NSString
 * Default value:       -
 */
extern NSString *const JDAIS_TTS_SECRET_KEY;        // secretKey(String)

/*
 * JDAIS_TTS_SERVER_URL
 * Value explanation:   服务器地址
 * Value type:          NSString
 * Default value:       -
 */
extern NSString *const JDAIS_TTS_SERVER_URL;        // 服务器URL(String)

/*
 * JDAIS_TTS_LANGUAGE
 * Value explanation:   合成语言
 * Value type:          TJDAISTextToSpeechLanguage
 * Default value:       @(EJDAIS_TextToSpeechLanguageMandarin)
 */
extern NSString *const JDAIS_TTS_LANGUAGE;          // 0：普通话 1：广东话 2：英语

/*
 * JDAIS_TTS_TIM_TYPE
 * Value explanation:   合成语音音色
 * Value type:          JDAISynthesizerSpeaker
 * Default value:       @(EJDAIS_SYNTHESIZER_SPEAKER_FEMALE)
 */
extern NSString *const JDAIS_TTS_TIM_TYPE;          // 音色（int 0,男声 1 女生）

/*
 * JDAIS_TTS_AUE_TYPE
 * Value explanation:   合成语音音频格式
 * Value type:          TJDAISTextToSppechAudioFormat
 * Default value:       @(EJDAIS_TextToSppechAudioFormatOPUS)
 */
extern NSString *const JDAIS_TTS_AUE_TYPE;          // 0：wav 1：pcm 2：opus

#endif /* JDAISTTSParameters_h */
