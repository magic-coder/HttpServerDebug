//
//  HSDManager.h
//  HttpServerDebug
//
//  Created by chenjun on 07/07/2017.
//  Copyright © 2017 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol HSDDelegate;
@class HSDConsoleLogController;

@interface HSDManager : NSObject

/**
 *  set the default db file path, that you can inspect when click the db inspect entrance in the index.html
 */
+ (void)updateDefaultInspectDBFilePath:(NSString *)path;

/**
 *  set the delegate, that implements hsd's delegate protocol
 */
+ (void)updateHSDDelegate:(id<HSDDelegate>)delegate;

/**
 *  invoke before starting http server, if you need to set the port
 *  @param port  port number. nil will use random number.
 */
+ (void)updateHttpServerPort:(NSString *)port;

/**
 *  is hsd started
 */
+ (BOOL)isHttpServerRunning;

/**
 *  start hsd
 */
+ (void)startHttpServer;

/**
 *  stop hsd
 */
+ (void)stopHttpServer;

/**
 *  return all site addresses, that you may connect to hsd
 */
+ (NSString *)fetchAlternateServerSites;

@end
