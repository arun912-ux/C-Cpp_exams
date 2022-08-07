
class Admin{

    int adminId;
    String emailId;
    String firstName;
    String password;
    
    @Override
    public String toString() {
        return "Admin [adminId=" + adminId + ", emailId=" + emailId + ", firstName=" + firstName + ", password="
                + password + "]";
    }
    public Admin(int adminId, String emailId, String firstName, String password) {
        this.adminId = adminId;
        this.emailId = emailId;
        this.firstName = firstName;
        this.password = password;
    }
}



class Book {

    int bookId;
    String title;
    String description;
    String author;
    int availableQuantity;
    int totalQuantity;
    double price;
    double rentPerDay;
    Book book;


    public Book(int bookId, String title, String description, 
                String author, int availableQuantity, int totalQuantity,
                double price, double rentPerDay, Book book) {

        this.bookId = bookId;
        this.title = title;
        this.description = description;
        this.author = author;
        this.availableQuantity = availableQuantity;
        this.totalQuantity = totalQuantity;
        this.price = price;
        this.rentPerDay = rentPerDay;
        this.book = book;
        

    }

    @Override
    public String toString() {
        return "Book [ bookId=" + bookId + ", title=" + title + ", description=" + description + ", author=" + author
        + ", price=" + price + ", totalQuantity=" + totalQuantity + ", availableQauntity=" + availableQuantity 
        + ", rentPerDay=" + rentPerDay + "]";

    }

}

class BookRental{

    int rentalId;
    int userId;
    int bookId;
    int quantity;
    in


}



