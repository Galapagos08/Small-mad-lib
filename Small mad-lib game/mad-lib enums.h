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
    AdjFluffy,
    AdjFlatulent,
    AdjTired,
    AdjNull = INT_MIN,
    AdjFirst = AdjScary,
    AdjLast = AdjTired
    
} Adj;

char *AdjGetStringName (Adj adj);

/*
typedef enum Nouns {
    puppy = 1,
    pillow,
    notebook,
    laptop,
    NounsNull = INT_MIN,
    NounsFirst = puppy,
    NounsLast = laptop
    
} Nouns;

char *NounsGetStringName (Nouns nouns);

typedef enum Verbs {
    fly,
    destroy,
    run,
    investigate,
    program,
    VerbsNull = INT_MIN,
    VerbsFirst = fly,
    VerbsLast = program
} Verbs;

char *VerbsGetStringName (Verbs verbs);
*/
#endif /* mad_lib_enums_h */
