//
//  mad-lib enums.h
//  Small mad-lib game
//
//  Created by Dan Esrey on 2016/12/08.
//  Copyright © 2016 Dan Esrey. All rights reserved.
//

#ifndef mad_lib_enums_h

#define mad_lib_enums_h
#include <stdio.h>
#include <limits.h>

typedef enum Adj {
    AdjScary = 1,
    AdjDangerous,
    AdjFlatulent,
    AdjTired,
    AdjNull = INT_MIN,
    AdjFirst = AdjScary,
    AdjLast = AdjTired
    
} Adj;

char *AdjGetStringName (Adj adj);


typedef enum Nouns {
    NounPuppy = 1,
    NounPillow,
    NounNotebook,
    NounLaptop,
    NounsNull = INT_MIN,
    NounsFirst = NounPuppy,
    NounsLast = NounLaptop
    
} Nouns;

char *NounsGetStringName (Nouns nouns);

typedef enum Verbs {
    VerbEat =1 ,
    VerbRun,
    VerbDestroy,
    VerbInvestigate,
    VerbProgram,
    VerbsNull = INT_MIN,
    VerbsFirst = VerbEat,
    VerbsLast = VerbProgram
} Verbs;

char *VerbsGetStringName (Verbs verbs);

#endif /* mad_lib_enums_h */
