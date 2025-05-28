public class Library {
    static class Book {
        String title;
        String author;
        String ISBN;

        public Book(String title, String author, String ISBN) {
            this.title = title;
            this.author = author;
            this.ISBN = ISBN;
        }

        void displayDetails() {
            System.out.println("Title: " + title);
            System.out.println("Author: " + author);
            System.out.println("ISBN: " + ISBN);
        }
    }

    public static void main(String[] args) {
        Book book = new Book("Harry Potter", "JK Rowling", "707017");
        book.displayDetails();
    }
}