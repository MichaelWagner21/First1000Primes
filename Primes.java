class Primes {
    public static void main(String[] args){

        System.out.print("\033[H\033[2J");


        final double startTime = System.currentTimeMillis();

        int numOfPrimes = 1000;
        int numsPrinted = 0;
        int numberIterator = 2;
        boolean composite = false;
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
                System.out.println(numberIterator);
                numsPrinted++;
            }
                
            numberIterator++;

        }

        final double endTime = System.currentTimeMillis();

        System.out.println("--- " + ((endTime - startTime)/1000) + " seconds ---");
        
        
    }
    
}