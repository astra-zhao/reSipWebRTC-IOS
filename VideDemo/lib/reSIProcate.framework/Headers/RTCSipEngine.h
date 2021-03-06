
#import <Foundation/Foundation.h>
//#import "RTCMacros.h"

@class RTCCallManager;
@class RTCRegistrationManager;

//RTC_OBJC_EXPORT

@interface RTCSipEngine : NSObject
-(void)Initialize;
-(void)Terminate;
-(void)startSipEngineCore;
-(void)stopSipEngineCore;
-(RTCCallManager*)GetCallManager;
-(RTCRegistrationManager*)GetRegistrationManager;
@end
