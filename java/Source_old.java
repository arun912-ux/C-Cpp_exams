
import java.util.*;

class Customer{
    int id;
    String name;
    String location;

    public Customer(int id, String name, String location) {
        this.id = id;
        this.name = name;
        this.location = location;
    }

    @Override
    public String toString() {
        return id + "\n" + name + "\n" +  location;
    }

}



public class Source_old{

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        List<Customer> cs = new ArrayList<>(0);
        
        for (int i=0; i<5; i++){
            int id = sc.nextInt(); sc.nextLine();
            String name = sc.nextLine();
            String loc = sc.nextLine();
            Customer c = new Customer(id, name, loc);
            cs.add(c);
        }
        
        sc.close();

        cs.sort((Customer o1, Customer o2) -> {
            return o1.name.compareTo(o2.name);
        });
        
        cs.forEach(System.out::println);        
    }


}

