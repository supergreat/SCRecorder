//
//  SCPreviewView.h
//  SCRecorder
//
//  Created by Jarod Luebbert on 4/18/19.
//  Copyright © 2019 rFlex. All rights reserved.
//

#import <MetalKit/MetalKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SCPlayerView : MTKView

@property (nonatomic, assign) CVPixelBufferRef pixelBuffer;

@end

NS_ASSUME_NONNULL_END
