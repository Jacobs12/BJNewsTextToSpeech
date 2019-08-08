//
//  JDAISTTSDefines.h
//  JDAISSpeechManager
//
//  Created by 满达 on 2018/7/5.
//  Copyright © 2018年 Beijing Jingdong Shangke Information Technology Co., Ltd. All rights reserved.
//

// SDK Version: 2.0.100

#ifndef JDAISTTSDefines_h
#define JDAISTTSDefines_h

#import <Foundation/Foundation.h>

#pragma mark - TTS Delegate

// JDAISSpeechManager状态回调
@protocol JDAISClientTTSDelegate<NSObject>
- (void)onEventTextToSpeech:(NSString *)event withResult:(NSString *)result withData:(NSData *)data;
@end

#pragma mark - Event of the Delegate above
// 回调事件
extern NSString *const EV_SJDAIS_TTS_PlayBegin;         // 开始播报
extern NSString *const EV_SJDAIS_TTS_PlayEnd;           // 结束播报
extern NSString *const EV_SJDAIS_TTS_PlaybackProgress;  // 播放进度
extern NSString *const EV_SJDAIS_TTS_SynthesizeData;    // 合成后的语音回调pcm
extern NSString *const EV_SJDAIS_TTS_SynthesizeFinish;  // 合成结束

#pragma mark - send cmd of TTS
// 语音合成命令
extern NSString *const JDAIS_TTS_CMD_START;   // 开始合成并播报
extern NSString *const JDAIS_TTS_CMD_PAUSE;   // 暂停播报
extern NSString *const JDAIS_TTS_CMD_RESUME;  // 继续播报
extern NSString *const JDAIS_TTS_CMD_STOP;    // 停止播报

#pragma mark - 设定采样率
typedef enum TJDAISTextToSpeechSampleRateFlags
{
    EJDAIS_TextToSpeechSampleRateAuto = 0,
    EJDAIS_TextToSpeechSampleRate8K   = 8000,
    EJDAIS_TextToSpeechSampleRate12K  = 12000,
    EJDAIS_TextToSpeechSampleRate16K  = 16000,
    EJDAIS_TextToSpeechSampleRate24K  = 24000,
}TJDAISTextToSpeechSampleRateFlags;

#pragma mark - 设置合成语言
typedef enum TJDAISTextToSpeechLanguage
{
    EJDAIS_TextToSpeechLanguageMandarin = 0,
    EJDAIS_TextToSpeechLanguageCantonese,
    EJDAIS_TextToSpeechLanguageEnglish,
}TJDAISTextToSpeechLanguage;

#pragma mark - 设置合成语音音色
typedef enum TJDAISynthesizerSpeaker
{
     EJDAIS_SYNTHESIZER_SPEAKER_FEMALE = 0,     /* 女声 */
     EJDAIS_SYNTHESIZER_SPEAKER_MALE   = 1,     /* 男声 */
}TJDAISynthesizerSpeaker;

#pragma mark - 设置合成音频格式
typedef enum TJDAISTextToSppechAudioFormat
{
    EJDAIS_TextToSppechAudioFormatWAV = 0,
    EJDAIS_TextToSppechAudioFormatPCM,
    EJDAIS_TextToSppechAudioFormatOPUS,
}TJDAISVoiceRecognizeAudioFormat;

#pragma mark - 语音合成错误通知状态
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeOK;              //= 0;                 // 合成成功
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeNotSupportParam; //= -2001;             // 不支持的参数
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeRequestCntl;     //= -2002;             // 服务器未完成初始化
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeServerBusy;      //= -2003;             // 服务器忙
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeTextTooShort;    //= -2004;             // 文本太短
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeTextTooLong;     //= -2005;             // 文本太长
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeSeqIDForSession; //= -2006;             // seqId不正确
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeEngineError;     //= -2007;             // 引擎出错
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeOpusError;       //= -2008;             // 服务端Opus 压缩出错
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeAuthError;       //= -2009;             // 鉴权失败,Appid 等非法
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodePlayerError;                 //= -2010;             // 播放器出错
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeNetworkConnectionFailed;     //= -2011;             // 网络连接失败
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeNetworkTimeout;              //= -2012;             // 网络读写超时
extern const NSInteger EVR_JDAIS_TTS_ClientErrorCodeJDCloudFaileError; //= -2013;             // 京东云网关系统错误

#endif /* JDAISTTSDefines_h */
