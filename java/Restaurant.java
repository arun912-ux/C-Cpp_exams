
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

class Dish {

    String name;
    int cost;

    public Dish(String name, int cost){
        this.name=name;
        this.cost=cost;
    }


}


public class Restaurant{

    public HashMap<Integer, ArrayList<Dish>> table = new HashMap<>();

    public String addTable(int tableNo, Dish dish){

        if(table.containsKey(tableNo)){
            ArrayList<Dish> dishes = table.get(tableNo);
            dishes.add(dish);
            table.put(tableNo, dishes);
            return "Added to the old order";
        }
        else{
            ArrayList<Dish> dishes = new ArrayList<>();
            dishes.add(dish);
            table.put(tableNo, dishes);
            return "Added to the old order";
        }

    }

    public int calculateBill(int tableNo){
        ArrayList<Dish> dishes = table.get(tableNo);
        Integer costBill = dishes.stream().map(x -> x.cost).reduce(0, Integer::sum);
        return costBill;
    }

    public int getAllDishStartsWith(char startingCharacter){

        long count =0;
        for(Map.Entry<Integer, ArrayList<Dish>> tt : table.entrySet()){
            ArrayList<Dish> ttValue = tt.getValue();
            count += ttValue.stream().map(x -> x.name).filter(x -> x.startsWith(String.valueOf(startingCharacter))).count();
        }

        return (int) count;
    }


    public static void main(String[] args) {
        Dish dish = new Dish("burger", 150);
        Dish dish1 = new Dish("Momos", 250);

        Restaurant restaurant = new Restaurant();
        System.out.println(restaurant.addTable(1, dish));
        System.out.println(restaurant.getAllDishStartsWith('b'));


    }

}