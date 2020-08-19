//
//  LongLegHelper.h
//  001--PictureShowsDemo
//
//  Created by ZengCDing on 2020/8/19.
//  Copyright © 2020年 ZengCDing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OpenGLES/ES2/gl.h>

@interface LongLegHelper : NSObject

/**
 将一个顶点着色器和一个片段着色器挂载到一个着色器程序上，并返回程序的 id
 
 @param shaderName 着色器名称，顶点着色器应该命名为 shaderName.vsh ，片段着色器应该命名为 shaderName.fsh
 @return 着色器程序的 ID
 */
+ (GLuint)programWithShaderName:(NSString *)shaderName;

@end
