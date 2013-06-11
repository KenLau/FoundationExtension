//
//  NSAttributedString+UIKit.h
//  FoundationExtension
//
//  Created by Jeong YunWon on 12. 11. 1..
//  Copyright (c) 2012 youknowone.org. All rights reserved.
//

/*!
 *  @file
 *  @brief [NSMutableAttributedString][0] attributes dictionary and data type to support it.
 *      [0]: https://developer.apple.com/library/ios/#documentation/Cocoa/Reference/Foundation/Classes/NSMutableAttributedString_Class/Reference/Reference.html#//apple_ref/occ/cl/NSMutableAttributedString
 *  @details NSAttributedString uses dictionary to set or add attribute to string. But this interface is very human-unfriendly. This file adds new interface for attributes dictionary.
 *
 *  Available in iOS 6.0 or later.
 *  UIKit is required.
 *
 *  Before iOS 6.0, use CoreText.
 */

#if __IPHONE_OS_VERSION_MIN_REQUIRED >= 60000

#import <FoundationExtension/NSADictionary.h>

#if __IPHONE_OS_VERSION_MIN_REQUIRED < 70000

/*!
 *  @brief Type for NSUnderlinePattern*, NSUnderlineStyle* and NSUnderlineMask*.
 *  @see [NSUnderlineStyleAttributeName][0]
 *  @see [NSStrikethroughStyleAttributeName][0]
 *  @see [NSUnderlinePattern*][2]
 *  @see [NSUnderlineStyle*][3]
 *  @see [NSUnderlineMask][4]
 *      [0]: https://developer.apple.com/library/mac/documentation/Cocoa/Reference/ApplicationKit/Classes/NSAttributedString_AppKitAdditions/Reference/Reference.html#//apple_ref/c/data/NSUnderlineStyleAttributeName
 *      [1]: https://developer.apple.com/library/mac/documentation/Cocoa/Reference/ApplicationKit/Classes/NSAttributedString_AppKitAdditions/Reference/Reference.html#//apple_ref/c/data/NSStrikethroughStyleAttributeName
 *      [2]: https://developer.apple.com/library/mac/documentation/Cocoa/Reference/ApplicationKit/Classes/NSAttributedString_AppKitAdditions/Reference/Reference.html#//apple_ref/doc/constant_group/Underlining_Patterns
 *      [3]: https://developer.apple.com/library/mac/documentation/Cocoa/Reference/ApplicationKit/Classes/NSAttributedString_AppKitAdditions/Reference/Reference.html#//apple_ref/doc/constant_group/Underlining_Styles
 *      [4]: https://developer.apple.com/library/mac/documentation/Cocoa/Reference/ApplicationKit/Classes/NSAttributedString_AppKitAdditions/Reference/Reference.html#//apple_ref/doc/constant_group/Underline_Masks
 */
typedef NSUInteger NSUnderlineStyle;

#endif

/*!
 *  @brief Values for ligature style.
 *  @see [NSLigatureAttributeName][0]
 *      [0]: http://developer.apple.com/library/ios/documentation/UIKit/Reference/NSAttributedString_UIKit_Additions/Reference/Reference.html#//apple_ref/doc/c_ref/NSLigatureAttributeName
 */
enum {
    NSLigatureStandard = 0,
    NSLigatureNo = 1, // default
};
/*!
 *  @brief Type for ligature style.
 *  @see [NSLigatureAttributeName][0]
 *      [0]: http://developer.apple.com/library/ios/documentation/UIKit/Reference/NSAttributedString_UIKit_Additions/Reference/Reference.html#//apple_ref/doc/c_ref/NSLigatureAttributeName
 */
typedef NSUInteger NSLigatureType;


/*!
 *  @brief Values for vertical glyph form.
 *  @see [NSVerticalGlyphFormAttributeName][0]
 *      [0]: http://developer.apple.com/library/ios/documentation/UIKit/Reference/NSAttributedString_UIKit_Additions/Reference/Reference.html#//apple_ref/doc/c_ref/NSVerticalGlyphFormAttributeName
 */
enum {
    NSVerticalGlyphFormHorizontal = 0,
    NSVerticalGlyphFormVertical = 1,
};
/*!
 *  @brief Type for vertical glyph form.
 *  @see [NSVerticalGlyphFormAttributeName][0]
 *      [0]: http://developer.apple.com/library/ios/documentation/UIKit/Reference/NSAttributedString_UIKit_Additions/Reference/Reference.html#//apple_ref/doc/c_ref/NSVerticalGlyphFormAttributeName
 */
typedef NSUInteger NSVerticalGlyphForm;


/*!
 *  @brief Dictionary with easy attribute interface.
 */
@interface NSMutableAttributedString (AttributeProperties)

/*!
 *  @brief Adds font attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeFont:(UIFont *)font range:(NSRange)range;
/*!
 *  @brief Removes font attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeFontFromRange:(NSRange)range;

/*!
 *  @brief Adds paragraphStyle attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeParagraphStyle:(NSParagraphStyle *)paragraphStyle range:(NSRange)range;
/*!
 *  @brief Removes paragraphStyle attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeParagraphStyleFromRange:(NSRange)range;

/*!
 *  @brief Adds foregroundColor attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeForegroundColor:(UIColor *)foregroundColor range:(NSRange)range;
/*!
 *  @brief Removes foregroundColor attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeForegroundColorFromRange:(NSRange)range;

/*!
 *  @brief Adds backgroundColor attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeBackgroundColor:(UIColor *)backgroundColor range:(NSRange)range;
/*!
 *  @brief Removes backgroundColor attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeBackgroundColorFromRange:(NSRange)range;

/*!
 *  @brief Adds ligature attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeLigature:(NSLigatureType)ligature range:(NSRange)range;
/*!
 *  @brief Removes ligature attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeLigatureFromRange:(NSRange)range;

/*!
 *  @brief Adds kern attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeKern:(float)kern range:(NSRange)range;
/*!
 *  @brief Removes kern attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeKernFromRange:(NSRange)range;

/*!
 *  @brief Adds strikethroughStyle attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeStrikethroughStyle:(NSUnderlineStyle)strikethroughStyle range:(NSRange)range;
/*!
 *  @brief Removes strikethroughStyle attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeStrikethroughStyleFromRange:(NSRange)range;

/*!
 *  @brief Adds underlineStyle attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeUnderlineStyle:(NSUnderlineStyle)underlineStyle range:(NSRange)range;
/*!
 *  @brief Removes underlineStyle attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeUnderlineStyleFromRange:(NSRange)range;

/*!
 *  @brief Adds strokeColor attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeStrokeColor:(UIColor *)strokeColor range:(NSRange)range;
/*!
 *  @brief Removes strokeColor attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeStrokeColorFromRange:(NSRange)range;

/*!
 *  @brief Adds strokeWidth attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeStrokeWidth:(float)strokeWidth range:(NSRange)range;
/*!
 *  @brief Removes strokeWidth attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeStrokeWidthFromRange:(NSRange)range;

/*!
 *  @brief Adds shadow attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeShadow:(NSShadow *)shadow range:(NSRange)range;
/*!
 *  @brief Removes shadow attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeShadowFromRange:(NSRange)range;

/*!
 *  @brief Adds verticalGlyphForm attribute value to the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)addAttributeVerticalGlyphForm:(NSVerticalGlyphForm)verticalGlyphForm range:(NSRange)range;
/*!
 *  @brief Removes verticalGlyphForm attribute from the characters in the specified range.
 *  @details Generated by NSAttributedStringCategoryInterface.py
 */
- (void)removeAttributeVerticalGlyphFormFromRange:(NSRange)range;


@end


@interface NSAttributedStringAttributeDictionary : NSAMutableDictionary

/*!
 *  @brief Set or get font attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) UIFont *font;
/*!
 *  @brief Set or get paragraphStyle attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) NSParagraphStyle *paragraphStyle;
/*!
 *  @brief Set or get foregroundColor attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) UIColor *foregroundColor;
/*!
 *  @brief Set or get backgroundColor attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) UIColor *backgroundColor;
/*!
 *  @brief Set or get ligature attribute as NSNumber form.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) NSNumber *ligatureNumber;
/*!
 *  @brief Set or get ligature attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(assign) NSLigatureType ligature;
/*!
 *  @brief Set or get kern attribute as NSNumber form.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) NSNumber *kernNumber;
/*!
 *  @brief Set or get kern attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(assign) float kern;
/*!
 *  @brief Set or get strikethroughStyle attribute as NSNumber form.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) NSNumber *strikethroughStyleNumber;
/*!
 *  @brief Set or get strikethroughStyle attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(assign) NSUnderlineStyle strikethroughStyle;
/*!
 *  @brief Set or get underlineStyle attribute as NSNumber form.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) NSNumber *underlineStyleNumber;
/*!
 *  @brief Set or get underlineStyle attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(assign) NSUnderlineStyle underlineStyle;
/*!
 *  @brief Set or get strokeColor attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) UIColor *strokeColor;
/*!
 *  @brief Set or get strokeWidth attribute as NSNumber form.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) NSNumber *strokeWidthNumber;
/*!
 *  @brief Set or get strokeWidth attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(assign) float strokeWidth;
/*!
 *  @brief Set or get shadow attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) NSShadow *shadow;
/*!
 *  @brief Set or get verticalGlyphForm attribute as NSNumber form.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(retain) NSNumber *verticalGlyphFormNumber;
/*!
 *  @brief Set or get verticalGlyphForm attribute.
 *  @details Generated by script NSAttributedStringDictionaryInterface.py
 */
@property(assign) NSVerticalGlyphForm verticalGlyphForm;


@end

#endif
