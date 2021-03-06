// NSString+CDColor.h
// cocoadialog
//
// Copyright (c) 2004-2017 Mark A. Stratman <mark@sporkstorms.org>, Mark Carver <mark.carver@me.com>.
// All rights reserved.
// Licensed under GPL-2.

#import <objc/runtime.h>
#import "CDColor.h"

extern BOOL NSStringCDColor;

@interface NSString (CDColor)

#pragma mark - Storage
@property (nonatomic) CDColor *color;
@property (nonatomic) NSString *originalString;

#pragma mark - Background colors
@property (readonly) NSString *onBlack;
@property (readonly) NSString *onRed;
@property (readonly) NSString *onGreen;
@property (readonly) NSString *onYellow;
@property (readonly) NSString *onBlue;
@property (readonly) NSString *onMagenta;
@property (readonly) NSString *onCyan;
@property (readonly) NSString *onWhite;

#pragma mark - Foreground colors
@property (readonly) NSString *black;
@property (readonly) NSString *red;
@property (readonly) NSString *green;
@property (readonly) NSString *yellow;
@property (readonly) NSString *blue;
@property (readonly) NSString *magenta;
@property (readonly) NSString *cyan;
@property (readonly) NSString *white;
@property (readonly) NSString *lightBlack;
@property (readonly) NSString *lightRed;
@property (readonly) NSString *lightGreen;
@property (readonly) NSString *lightYellow;
@property (readonly) NSString *lightBlue;
@property (readonly) NSString *lightMagenta;
@property (readonly) NSString *lightCyan;
@property (readonly) NSString *lightWhite;

#pragma mark - Styles
@property (readonly) NSString *bold;
@property (readonly) NSString *dim;
@property (readonly) NSString *italic;
@property (readonly) NSString *underline;
@property (readonly) NSString *blink;
@property (readonly) NSString *swap;

#pragma mark - Clearing
@property (readonly) NSString *clearAll;
@property (readonly) NSString *clearFg;
@property (readonly) NSString *clearBg;
@property (readonly) NSString *clearStyles;
@property (readonly) NSString *removeColor;

#pragma mark - Stopping
@property (readonly) NSString *stop;

#pragma mark - Public instance methods
- (NSString *)stringByPaddingToLength:(NSUInteger)newLength withString:(NSString *)padString startingAtIndex:(NSUInteger)padIndex ignoreColor:(BOOL)ignoreColor;

#pragma mark - Public chainable methods
- (NSString *(^)(CDColor* color)) addColor;

@end
