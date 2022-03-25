
public class Solution_class{

    int id;
    String name;
    String email;

    public Solution_class() {
    }

    public Solution_class(int id, String name, String email) {
        this.id = id;
        this.name = name;
        this.email = email;
    }

    

    @Override
    public String toString() {
        return "{" +
            " id='" + getId() + "'" +
            ", name='" + getName() + "'" +
            ", email='" + getEmail() + "'" +
            "}";
    }


}