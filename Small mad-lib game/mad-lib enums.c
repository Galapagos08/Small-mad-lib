//
//  mad-lib enums.c
//  Small mad-lib game
//
//  Created by Dan Esrey on 2016/12/08.
//  Copyright © 2016 Dan Esrey. All rights reserved.
//

#include "mad-lib enums.h"

char *AdjectivesGetStringName(Adjectives input1) {
    switch (input1) {
        case scary: {
            return "scary";
        }
        case fluffy: {
            return "fluffy";
        }
        case flatulent: {
            return "flatulent";
        }
        case tired: {
            return "tired";
        }
        default: {
            return NULL;
        }
    }
}
