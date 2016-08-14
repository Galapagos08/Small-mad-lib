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
        case AdjDangerous: {
            return "dangerous";
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
} 
char *NounsGetStringName(Nouns input2) {
    switch (input2) {
        case NounPuppy: {
            return "puppy";
        }
        case NounPillow: {
            return "pillow";
        }
        case NounNotebook: {
            return "notebook";
        }
        case NounLaptop: {
            return "laptop";
        }
        default: {
            return NULL;
        }
    }
}
char *VerbsGetStringName(Verbs input3) {
    switch (input3) {
        case VerbEat: {
            return "eat";
        }
        case VerbRun: {
            return "run";
        }
        case VerbDestroy: {
            return "destroy";
        }
        case VerbInvestigate: {
            return "investigate";
        }
        case VerbProgram: {
            return "program";
        }
        default: {
            return NULL;
        }
    }
}
