class Primes {
    public static void main(String[] args){

        System.out.print("\033[H\033[2J");


        final double startTime = System.currentTimeMillis();

        int numOfPrimes = 10000;
        int numsPrinted = 0;
        int numberIterator = 2;
        int recordedPrimes[] = new int[numOfPrimes+1];
        int ceilingCheck;
        
        boolean composite = false;
        while (numsPrinted<numOfPrimes){
            ceilingCheck = numberIterator;
            composite = false;

            for (int i = 0; (recordedPrimes[i]<ceilingCheck)&(recordedPrimes[i]!=0); i++){
                if (numberIterator%recordedPrimes[i]==0){
                    composite = true;
                }
                else {
                    ceilingCheck=numberIterator/recordedPrimes[i];
                }
            }

            if (!composite){
                System.out.println(numberIterator);
                recordedPrimes[numsPrinted]=numberIterator;
                numsPrinted++;
            }
                
            numberIterator++;

        }

        final double endTime = System.currentTimeMillis();

        System.out.println("--- " + ((endTime - startTime)/1000) + " seconds ---");
    }
}