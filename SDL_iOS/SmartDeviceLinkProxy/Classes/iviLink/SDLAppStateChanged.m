/*
 *
 * SDLP SDK
 * Cross Platform Application Communication Stack for In-Vehicle Applications
 *
 * Copyright (C) 2013, Luxoft Professional Corp., member of IBS group
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; version 2.1.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 *
 */

#import "SDLAppStateChanged.h"
#include "IVINames.h"

@implementation SDLAppStateChanged

-(id) init {
    self = [super initWithName: IVI_NAMES_appStateChanged];
    return self;
}

-(id) initWithDictionary:(NSMutableDictionary*) dict {
    self = [super initWithDictionary:dict];
    return self;
}

-(void) setMobileAppState:(SDLMobileAppState*)mobileAppState {
    if (mobileAppState != nil) {
        [parameters setObject:mobileAppState forKey:IVI_NAMES_TAG_mobileAppState];
    } else {
        [parameters removeObjectForKey:IVI_NAMES_TAG_mobileAppState];
    }
}

-(SDLMobileAppState*) mobileAppState {
    NSObject * obj = [parameters objectForKey: IVI_NAMES_TAG_mobileAppState];
    if ([obj isKindOfClass:SDLMobileAppState.class]) {
        return (SDLMobileAppState*)obj;
    } else {
        return [SDLMobileAppState valueOf:(NSString*)obj];
    }
}
@end
