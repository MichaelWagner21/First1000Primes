import time
start_time = time.time()
numOfPrimes = 100000
numsPrinted = 0
numberIterator = 2
composite = False
while numsPrinted<numOfPrimes:
    composite = False
    i = 2
    while i<numberIterator:
        if i!=numberIterator:
            if numberIterator%i==0:
                composite = True
        i+=1
    if not composite:
        print(numberIterator)
        numsPrinted+=1
    numberIterator+=1
print("--- %s seconds ---" % (time.time()-start_time))
