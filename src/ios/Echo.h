#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>


// ======================================================================= //

@interface Echo : CDVPlugin

- (void)echo:(CDVInvokedUrlCommand*)command;

@end
