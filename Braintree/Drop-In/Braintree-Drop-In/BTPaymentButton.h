#import <UIKit/UIKit.h>

#import "BTUIThemedView.h"

@class BTClient, BTPaymentMethod;
@protocol BTPaymentMethodCreationDelegate;

@interface BTPaymentButton : BTUIThemedView

- (instancetype)initWithPaymentAuthorizationTypes:(NSOrderedSet *)paymentAuthorizationTypes;

@property (nonatomic, strong) NSOrderedSet *enabledPaymentProviderTypes;

@property (nonatomic, strong) BTClient *client;
@property (nonatomic, weak) id<BTPaymentMethodCreationDelegate> delegate;

@end
