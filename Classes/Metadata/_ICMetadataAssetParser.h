//
//  _ICMetadataAssetParser.h
//  InstacastMac
//
//  Created by Martin Hering on 26.06.13.
//  Copyright (c) 2013 Vemedio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICMetadata.h"

@class AVAsset;

@interface _ICMetadataAssetParser : NSObject

- (id) initWithAVAsset:(AVAsset*)asset metadataAsset:(ICMetadataAsset*) metadataAsset;

- (void) loadAsynchronouslyWithCompletionHandler:(ICMetadataCompletionHandler)completionHandler;

@end
