//
//  AppDelegate.h
//  gitCommit
//
//  Created by 蒋汝辉的Mac on 2019/4/25.
//  Copyright © 2019 蒋汝辉的Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

