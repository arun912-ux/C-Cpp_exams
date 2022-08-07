
import java.util.Objects;
import java.util.Scanner;

public class Person {

    private String name;
    private int age;
    private char gender;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public char getGender() {
        return gender;
    }

    public void setGender(char gender) {
        this.gender = gender;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Person person = (Person) o;
        return getAge() == person.getAge() && getGender() == person.getGender() && Objects.equals(getName(), person.getName());
    }

    @Override
    public int hashCode() {
        int result = name != null ? name.hashCode() : 0;
        result = 31 * result + age;
        result = 31 * result + (int) gender;
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Person p1  = new Person();
        Person p2  = new Person();
        String name = sc.nextLine();
        int age = sc.nextInt(); sc.nextLine();
        char g = sc.nextLine().charAt(0);
        p1.setAge(age);
        p1.setGender(g);
        p1.setName(name);

        name = sc.nextLine();
        age = sc.nextInt(); sc.nextLine();
        g = sc.nextLine().charAt(0);
        p2.setAge(age);
        p2.setGender(g);
        p2.setName(name);

        if(p1.equals(p2)){
            System.out.println("Same");
        }else {
            System.out.println("Different");
        }

    }
}
