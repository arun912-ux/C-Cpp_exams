import java.util.*;

class PairInt{
    int first, second;
    PairInt(){

    }

    PairInt(int first, int second){
        this.first=first;
        this.second=second;
    }

    @Override
    public String toString() {
        return "PairInt [first=" + first + ", second=" + second + "]";
    }

    

}



class Solution_amazon{

    PairInt selectPackages(int truckSpace, int numPackages, ArrayList<Integer> packagesSpace){
                       
		Map<Integer, Integer> map = new HashMap<>();
		int max = Integer.MIN_VALUE;
		truckSpace -= 30;
		ArrayList<Integer> list = new ArrayList<>();
		for(int i=0; i < numPackages; i++) {
		    int val = packagesSpace.get(i);
		    if(map.containsKey(truckSpace-val)) {
		        int cMax = val > truckSpace-val ? val : truckSpace-val;
		        if(cMax > max) {
                    max = cMax;
		            list = new ArrayList<>();
		            list.add(map.get(truckSpace-val));
		            list.add(i);
		        }
		    }
		    map.putIfAbsent(val,i);
		}
		// list.forEach(x -> System.out.println(x));
        PairInt pairInt = new PairInt(list.get(0), list.get(1));

        return pairInt;

    }



    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Solution sol = new Solution();
        int truckSpace = sc.nextInt();sc.nextLine();
        int numPackages = sc.nextInt(); sc.nextLine();
        ArrayList<Integer> packagesSpace = new ArrayList<>();
        for(int i=0; i<numPackages; i++){
            packagesSpace.add(sc.nextInt());
        }
        sc.close();
        PairInt ret = sol.selectPackages(truckSpace, numPackages, packagesSpace);
        System.out.println(ret);
        
    }


}