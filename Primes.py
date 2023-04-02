import numpy as np

import time
start_time = time.time()
numOfPrimes = 100000
numsPrinted = 0
numberIterator = 2
recordedPrimes = np.zeros(numOfPrimes+1)

composite = False
while numsPrinted<numOfPrimes:
    celingCheck = numberIterator**0.5
    composite = False

    i = 0
    while recordedPrimes[i]<=celingCheck and recordedPrimes[i]!=0:
        if numberIterator%recordedPrimes[i]==0:
            composite = True
        i+=1
    if not composite:
        print(numberIterator)
        recordedPrimes[numsPrinted]=numberIterator
        numsPrinted+=1
    numberIterator+=1
end_time = time.time()
print("--- %s seconds ---" % (end_time-start_time))