/**
 * Copyright (c) 2015-present, Peel Technologies, Inc.
 * All rights reserved.
 */
#ifndef TcpSockets_h
#define TcpSockets_h
#import <React/RCTBridgeModule.h>

#import <Foundation/Foundation.h>
#import <Availability.h>
#import "GCDAsyncSocket.h"
#import "TcpSocketClient.h"
#import <React/RCTBridge.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTAssert.h>
#import <React/RCTConvert.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTLog.h>

@interface TcpSockets : NSObject<SocketClientDelegate, RCTBridgeModule>

@end

#endif
