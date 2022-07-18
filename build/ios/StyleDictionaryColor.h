
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Mon, 18 Jul 2022 17:26:29 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBaseGrayLight,
ColorBaseGrayMedium,
ColorBaseGrayDark,
ColorBaseRed,
ColorBaseGreen,
ColorColorSnowwhite,
ColorColorSingularity,
ColorColorCelestialSphere,
ColorColorPGradient1,
ColorColorPGradient2,
ColorColorPDark,
ColorFontBase,
ColorFontSecondary,
ColorFontTertiary
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
