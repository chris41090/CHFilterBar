// Generated by Apple Swift version 4.0.2 effective-3.2.2 (swiftlang-900.0.69.2 clang-900.0.38)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("FilterBar")
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC9FilterBar11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions SWIFT_WARN_UNUSED_RESULT;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;
@class UIColor;
@class UIFont;
@class UIImage;
@class UICollectionViewFlowLayout;
@class UICollectionView;
@class CHFilterBlock;

SWIFT_CLASS("_TtC9FilterBar11CHFilterBar")
@interface CHFilterBar : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) CGFloat blockSpacing SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.blockSpacing' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIColor * _Nonnull blocksBackgroundColor SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.blocksBackgroundColor' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) CGFloat blocksCornerRadius SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.blocksCornerRadius' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIFont * _Nonnull blocksFont SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.blocksFont' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) UIEdgeInsets blocksLabelPadding SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.blocksLabelPadding' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) UIEdgeInsets blocksContainerPadding SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.blocksContainerPadding' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIColor * _Nonnull blocksTextColor SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.blocksTextColor' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIImage * _Nullable blocksCloseButtonImage SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.blocksCloseButtonImage' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UICollectionViewFlowLayout * _Nonnull collectionViewFlowLayout SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.collectionViewFlowLayout' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UICollectionView * _Nonnull collectionView SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.collectionView' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, copy) NSArray<CHFilterBlock *> * _Nonnull blocks SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBar.blocks' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)reload SWIFT_DEPRECATED_OBJC("Swift method 'CHFilterBar.reload()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)addWithBlock:(CHFilterBlock * _Nonnull)block at:(NSInteger)index SWIFT_DEPRECATED_OBJC("Swift method 'CHFilterBar.add(block:at:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)removeWithBlock:(CHFilterBlock * _Nonnull)block SWIFT_DEPRECATED_OBJC("Swift method 'CHFilterBar.remove(block:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)layoutSubviews;
@end

@class CHFilterBlockCollectionViewCell;

@interface CHFilterBar (SWIFT_EXTENSION(FilterBar))
- (void)filterBlockCollectionViewCellWithCell:(CHFilterBlockCollectionViewCell * _Nonnull)cell didTapClose:(CHFilterBlock * _Nonnull)filterBlock SWIFT_DEPRECATED_OBJC("Swift method 'CHFilterBar.filterBlockCollectionViewCell(cell:didTapClose:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end

@class UICollectionViewLayout;
@class UICollectionViewCell;

@interface CHFilterBar (SWIFT_EXTENSION(FilterBar)) <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9FilterBar13CHFilterBlock")
@interface CHFilterBlock : NSObject
@property (nonatomic, weak) CHFilterBar * _Nullable filterBar SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.filterBar' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) id _Nullable id SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.id' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, copy) NSString * _Nonnull title SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.title' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.backgroundColor' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, copy) void (^ _Nullable action)(CHFilterBlock * _Nonnull) SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.action' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, copy) void (^ _Nullable close)(CHFilterBlock * _Nonnull) SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.close' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) CGFloat cornerRadius SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.cornerRadius' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIFont * _Nonnull font SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.font' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) UIEdgeInsets labelPadding SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.labelPadding' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) UIEdgeInsets containerPadding SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.containerPadding' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIColor * _Nonnull textColor SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.textColor' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIImage * _Nullable closeButtonImage SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.closeButtonImage' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) BOOL isUserInteractionEnabled SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlock.isUserInteractionEnabled' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)tap SWIFT_DEPRECATED_OBJC("Swift method 'CHFilterBlock.tap()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)closeTap SWIFT_DEPRECATED_OBJC("Swift method 'CHFilterBlock.closeTap()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithId:(id _Nullable)id title:(NSString * _Nonnull)title action:(void (^ _Nullable)(CHFilterBlock * _Nonnull))action close:(void (^ _Nullable)(CHFilterBlock * _Nonnull))close OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'CHFilterBlock.init(id:title:action:close:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UILabel;
@class UIButton;
@class UIImageView;
@class NSLayoutConstraint;

SWIFT_CLASS("_TtC9FilterBar31CHFilterBlockCollectionViewCell")
@interface CHFilterBlockCollectionViewCell : UICollectionViewCell
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull identiefier SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlockCollectionViewCell.identiefier' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");)
+ (NSString * _Nonnull)identiefier SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlockCollectionViewCell.identiefier' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified container;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified label;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified button;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified closeButton;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified closeImageView;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * _Null_unspecified containerTopConstraint;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * _Null_unspecified containerBottomConstraint;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * _Null_unspecified containerLeftConstraint;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * _Null_unspecified containerRightConstraint;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * _Null_unspecified labelRightConstraint;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * _Null_unspecified labelLeftConstraint;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * _Null_unspecified labalTopConstraint;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * _Null_unspecified labelBottomConstraint;
@property (nonatomic, strong) CHFilterBlock * _Null_unspecified filterBlock SWIFT_DEPRECATED_OBJC("Swift property 'CHFilterBlockCollectionViewCell.filterBlock' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (IBAction)tap:(UIButton * _Nonnull)sender;
- (IBAction)close:(id _Nonnull)sender;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;

SWIFT_CLASS("_TtC9FilterBar14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, strong) IBOutlet CHFilterBar * _Null_unspecified filterBar;
@property (nonatomic) NSInteger item SWIFT_DEPRECATED_OBJC("Swift property 'ViewController.item' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (IBAction)add:(id _Nonnull)sender;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
