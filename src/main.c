#include "main.h"

int main(int argc, char *argv[]){

    if(argc != 4){
        printf("\nERROR: Command Line Arguments are less as compared to required number.");
        printf("\nPlease provide: <executable> <operand1> <operator> <operamd2>\n");
        return 1;
    }

    char *operand1 = argv[1];
    char *operand2 = argv[3];
    char operator = (char)*argv[2];

    if(validateOperand(operand1) == FAILURE){
        printf("\nOperand 1 is not valid ! Please provide valid operand (signed or unsigned) integer\n");
        return 2;
    }

    if(validateOperand(operand2) == FAILURE){
        printf("\nOperand 2 is not valid ! Please provide valid operand (signed or unsigned) integer\n");
        return 2;
    }

    printf("%s , %c, %s\n", operand1, operator, operand2);

    return 0;
}

Status validateOperand(char *operand){

    for(int c = 0; c < strlen(operand); c++){
        if(operand[c] < '0' || operand[c] > '9'){
            if(operand[c] != '+' || operand[c] != '-'){
                return FAILURE;
            } 
        }
    }

    return SUCCESS;
}