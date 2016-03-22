//
//  AppDelegate.h
//  iOsWithUnityIntegration
//
//  Created by user on 21.03.16.
//  Copyright © 2016 re-mondes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UnityAppController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UnityAppController *currentUnityController;
@property (strong, nonatomic) UIWindow *window;

@end

