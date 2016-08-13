//
//  mad-lib enums.c
//  Small mad-lib game
//
//  Created by Dan Esrey on 2016/12/08.
//  Copyright © 2016 Dan Esrey. All rights reserved.
//

#include "mad-lib enums.h"

char *AdjGetStringName(Adj input1) {
    switch (input1) {
        case AdjScary: {
            return "scary";
        }
        case AdjFluffy: {
            return "fluffy";
        }
        case AdjFlatulent: {
            return "flatulent";
        }
        case AdjTired: {
            return "tired";
        }
        default: {
            return NULL;
        }
    }
} /*
char *NounsGetStringName(Nouns input2) {
    switch (input2) {
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
}*/
