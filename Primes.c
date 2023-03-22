#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void main()
{
    clock_t begin = clock();

    char int_str[5];
    int numOfPrimes = 1000;
    int numsPrinted = 0;
    int numberIterator = 2;
    bool composite = false;
    while (numsPrinted<numOfPrimes){
        composite = false;
        int i = 2;
        while (i<numberIterator){
            if (i!=numberIterator){
                if (numberIterator%i==0){
                    composite = true;
                }
                    
            }
            i++;
        }
    
        if (!composite){
            sprintf(int_str, "%d", numberIterator);
            printf("%s\n", int_str);
            numsPrinted++;
        }
            
        numberIterator++;

    }

    clock_t end = clock();
    double time_spent = (double)(end-begin) / (double)CLOCKS_PER_SEC;
    printf("--- %f seconds ---\n", time_spent);
}