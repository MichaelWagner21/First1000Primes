#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

//Fastest personal algorithm so far

int main()
{
    clock_t begin = clock();

    int numOfPrimes = 100000;

    int numsPrinted = 0;
    int numberIterator = 2;
    int recordedPrimes[numOfPrimes+1];
    bool composite = false;
    double ceilingCheck;

    while (numsPrinted<numOfPrimes){
        ceilingCheck = sqrt(numberIterator);
        composite = false;

        for (int i = 0; (recordedPrimes[i]<=ceilingCheck)&(recordedPrimes[i]!=0); i++){
                if (numberIterator%recordedPrimes[i]==0){
                    composite = true;
                }
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


    return 0;
}