//
//  iTermScriptFunctionCall+Private.h
//  iTerm2
//
//  Created by George Nachman on 5/20/18.
//

#import "iTermScriptFunctionCall.h"

@interface iTermScriptFunctionCall()

@property (nonatomic, copy) NSString *name;

- (void)addParameterWithName:(NSString *)name value:(id)value;

@end
