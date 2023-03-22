class Primes {
    public static void main(String[] args){

        System.out.print("\033[H\033[2J");


        final double startTime = System.currentTimeMillis();

        int numOfPrimes = 100000;
        int numsPrinted = 0;
        int numberIterator = 2;
        int recordedPrimes[] = new int[numOfPrimes];
        
        boolean composite = false;
        while (numsPrinted<numOfPrimes){
            composite = false;


            for (int i = 0; recordedPrimes[i]>0; i++){
                if (numberIterator%recordedPrimes[i]==0){
                    composite = true;
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