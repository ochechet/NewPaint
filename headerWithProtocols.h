//
//  headerWithProtocols.h
//  IosPaint
//
//  Created by Olexandr_Chechetkin on 1/4/16.
//  Copyright © 2016 Olexander_Chechetkin. All rights reserved.
//

#ifndef headerWithProtocols_h
#define headerWithProtocols_h


#endif /* headerWithProtocols_h */
#import "FigureDrawer.h"

@protocol ResizerProtocol <NSObject>

- (void)resizeFileManagingContainerHeightTo:(CGFloat)height;
- (void)resizeColorContainerHeightTo:(CGFloat)height;
- (void)moveLayerManagingContainerLeftOnWidth:(CGFloat)width;

@end

@protocol PanelsDelegate <NSObject>

- (void)didSelectWidth:(NSInteger)width;
- (void)didSelectColor:(UIColor *)color;
- (void)didSelectShape:(NSInteger)shape;
- (void)didSelectImage:(UIImage *)image;
- (void)didSelectOperation:(NSInteger)operation;
- (void)writeFigureToFile:(NSString *)pathComponent;
- (void)saveFigureToGallery;
- (void)loadDataFromFile:(NSString *)docFilePath;
- (void)Undo;
- (void)allClear;

@end

@protocol FileManagerGelegate <NSObject>

- (void)showCurrentOperation:(NSString *)operation;

@end

@protocol LayerManagerGelegate <NSObject>

- (void)changeLayerName:(NSInteger)layer toName:(NSString *)name;
- (NSArray *)takeArrayOfSubviews;
- (void)highLightLayerAtIndex:(NSInteger)index;
- (void)unHighlightLayerAtIndex:(NSInteger)index;
- (void)putUpCurrentLayerAtIndex:(NSInteger)index;
- (void)putDownCurrentLayerAtIndex:(NSInteger)index;

@end