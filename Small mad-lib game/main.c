//
//  main.c
//  Small mad-lib game
//
//  Created by Dan Esrey on 2016/12/08.
//  Copyright © 2016 Dan Esrey. All rights reserved.
//

#include <stdio.h>
#include "mad-lib enums.h"

int main(int argc, const char * argv[]) {
    
    printf("Please choose an adjective:\n\n");
    
    Adj adjChosen = AdjNull;
    int numberOfItemsScanned = 0;
    
    while ((numberOfItemsScanned != 1) ||
           (adjChosen < AdjFirst) || (adjChosen > AdjLast)) {
        fpurge(stdin);
        printf("please enter:\n");
        printf("    %d for scary\n", AdjScary);
        printf("    %d for fluffy\n", AdjFluffy);
        printf("    %d for fltulent\n", AdjFlatulent);
        printf("    %d for tired\n", AdjTired);
        numberOfItemsScanned = scanf("%d", &adjChosen);
    }
    
    char *adjAsString = AdjGetStringName(adjChosen);
    printf("You chose the adjective %s\n\n", adjAsString);
    
    
    
    return 0;
}
