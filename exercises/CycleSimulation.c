#include <stdio.h>
#include <stdlib.h>

type_t* MAR;
type_t MBR;
type_t PC = fgetc(stdin);
type_t* IR;

type_t* fetch(PC){  
    MAR = *PC;
    PC++;  
    MBR = &MAR;
    IR = *MBR;
    
    return NULL;
}

type_t* execute(){

    return NULL;
}
int main(int argv, [[maybe_unused]] char* argc[argv + 1]){

    return EXIT_SUCCESS;
}