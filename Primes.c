#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void main()
{
    clock_t begin = clock();

    int numOfPrimes = 10000;
    int numsPrinted = 0;
    int numberIterator = 2;
    int recordedPrimes[numOfPrimes];
    bool composite = false;
    int ceilingCheck;

    while (numsPrinted<numOfPrimes){
        ceilingCheck = numberIterator;
        composite = false;
        int i = 0;

        while ((recordedPrimes[i]<ceilingCheck) & (recordedPrimes[i]!=0)){
            if (numberIterator%recordedPrimes[i]==0){
                    composite = true;
            }
            else {
                ceilingCheck=numberIterator/recordedPrimes[i];
            }
            i++;
        }
    
        if (!composite){
            printf("%d\n", numberIterator);
            recordedPrimes[numsPrinted]=numberIterator;
            numsPrinted++;
        }
            
        numberIterator++;

    }

    clock_t end = clock();
    double time_spent = (double)(end-begin) / (double)CLOCKS_PER_SEC;
    printf("--- %f seconds ---\n", time_spent);
}