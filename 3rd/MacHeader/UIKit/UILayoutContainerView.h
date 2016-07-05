/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

@class UIRoundedCornerView;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding> {
	id _delegate;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	BOOL _usesRoundedCorners;
	float _cornerRadius;
	BOOL _fastMode;
	UIRoundedCornerView* _roundedCornerView;
	BOOL _usesInnerShadow;
	BOOL _shadowViewsInstalled;
	UIView* _shadowView;	
#endif
}
@property(assign, nonatomic) id delegate;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(assign, nonatomic) BOOL usesRoundedCorners;
@property(assign, nonatomic) BOOL useFastMode;
@property(assign, nonatomic) BOOL usesInnerShadow;
-(void)_installShadowViews;
-(void)_tearDownShadowViews;
-(void)_beginFastMode;
-(void)_endFastMode;
#endif
@end
