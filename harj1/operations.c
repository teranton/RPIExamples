#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

int printEnvironment(void){
    char* pwd = getenv("PWD");

    if(pwd != NULL){
        printf("PWD is: %s\n", pwd);
        return 0;
    }

    return -1;
} 
