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
        printf("    %d for flatulent\n", AdjFlatulent);
        printf("    %d for tired\n", AdjTired);
        numberOfItemsScanned = scanf("%d", &adjChosen);
    }
    
    char *adjAsString = AdjGetStringName(adjChosen);
    printf("You chose the adjective %s\n\n", adjAsString);
    
    printf("Next, pease choose a noun:\n\n");
    
    Nouns nounChosen = NounsNull;
    int secondNumberOfItemsScanned = 0;
    
    while ((secondNumberOfItemsScanned != 1) ||
           (nounChosen < NounsFirst) || (nounChosen > NounsLast)) {
        fpurge(stdin);
        printf("please enter:\n");
        printf("    %d for puppy\n", NounPuppy);
        printf("    %d for pillow\n", NounPillow);
        printf("    %d for notebook\n", NounNotebook);
        printf("    %d for laptop\n", NounLaptop);
        secondNumberOfItemsScanned = scanf("%d", &nounChosen);
    }
    char *nounAsString = NounsGetStringName(nounChosen);
   
    
    printf("Lastly, pease choose a verb:\n\n");
    
    Verbs verbChosen = VerbsNull;
    int thirdNumberOfItemsScanned = 0;
    
    while ((thirdNumberOfItemsScanned != 1) ||
           (verbChosen < VerbsFirst) || (verbChosen > VerbsLast)) {
        fpurge(stdin);
        printf("please enter:\n");
        printf("    %d for fly\n", VerbFly);
        printf("    %d for run\n", VerbRun);
        printf("    %d for destroy\n", VerbDestroy);
        printf("    %d for investigate\n", VerbInvestigate);
        printf("    %d for program\n", VerbProgram);
        thirdNumberOfItemsScanned = scanf("%d", &verbChosen);
    }
    char *verbAsString = VerbsGetStringName(verbChosen);
    printf("You chose the adjective '%s,' the noun '%s,' and the verb '%s.'\n\n", adjAsString, nounAsString, verbAsString);
    
    
    return 0;
}
