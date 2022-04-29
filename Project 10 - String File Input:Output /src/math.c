
#include "math.h"


// goal: read equations from a file and write them in a solved state to another
// file
//   NOTE: format details specified in instructions
// param qfile: file with math questions to solve
// param afile: file to write equations with answers in
// example:
//   qfile at start of function:
//     12 + 13
//     24 / 5
//     8 * 234
//     65 - 78
//     239 % 13
//   afile after function:
//      12 +  13 = 25
//      24 /   5 = 4
//       8 * 234 = 1872
//      65 -  78 = -13
//     239 %  13 = 5
//
// TODO: Complete the function
void solve(const char* qfile, const char* afile) {
    FILE *inputFile = fopen(qfile,"r");
    FILE *outputFile = fopen(afile,"w");

    if (inputFile != NULL && outputFile != NULL) {
        int int1;
        int int2; 
        int answer;
        char op;
        // while (length == fscanf(inputFile, "%d %c %d\n", &int1, &op, &int2) == 3){
        //while (length = fscanf(inputFile, "%d %c %d\n", &int1, &op, &int2) == 1){
        while(fscanf(inputFile, "%d %c %d", &int1, &op, &int2) > 0){
            //fscanf(inputFile, "%d %c %d\n", &int1, &op, &int2);
            switch(op) {
                case '*': 
                    answer = int1 * int2;
                    break;
                case '/': 
                    answer = int1 / int2;
                    break;
                case '+':
                    answer = int1 + int2;
                    break;
                case '-':
                    answer = int1 - int2;
                    break;
                case '%':
                    answer = int1 % int2;
                    break;
                default: continue;
            }
            fprintf(outputFile,"%3d %c %3d = %d\n", int1, op, int2, answer);
        }

        fclose(inputFile);
        fclose(outputFile);

    } else if (inputFile == NULL && outputFile != NULL){
        fclose(outputFile);
        return;
    } else if (inputFile != NULL && outputFile == NULL){
        fclose(inputFile);
        return;
    } else if (inputFile == NULL && outputFile == NULL){
        return;
    }
}


