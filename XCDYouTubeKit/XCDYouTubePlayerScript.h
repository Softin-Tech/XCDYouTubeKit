//
//  Copyright (c) 2013-2016 Cédric Luthi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XCDYouTubePlayerScript : NSObject

+ (void)setAdditionalSignatureRegxes:(NSArray<NSString*>*)regexes;

- (instancetype) initWithString:(NSString *)string;

- (NSString *) unscrambleSignature:(NSString *)scrambledSignature;

@end
