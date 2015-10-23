//----------------------------------------------------------------//
// Copyright (c) 2010-2011 Zipline Games, Inc. 
// All Rights Reserved. 
// http://getmoai.com
//----------------------------------------------------------------//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "RefPtr.h"

#import <AVFoundation/AVFoundation.h>


@class MoaiVC;
@class MoaiView;

//================================================================//
// MoaiAppDelegate
//================================================================//
@interface MoaiAppDelegate : NSObject < UIApplicationDelegate > {
@private

	MoaiView*	mMoaiView;
	UIWindow*	mWindow;	
	MoaiVC*		mMoaiVC;
}

@property ( nonatomic, retain ) UIWindow* window;
@property ( nonatomic, retain ) UIViewController* rootViewController;

@property (strong) AVAudioPlayer *audioPlayer;

- (int)playSoundAtPath:(NSString *)path volume:(double)volume pitch:(double)pitch pan:(double)pan looping:(BOOL)looping;
- (void)loadSoundAtPath:(NSString *)path;

@end
