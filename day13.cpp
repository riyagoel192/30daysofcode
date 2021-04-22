

// Declare your class here. Do not use the 'public' access modifier.
    // Declare the price instance variable
    class MyBook extends Book{
        int price;
        MyBook(String title,String author,int p)
        {
            super(title,author);
            price=p;
        }

        void display()
        {
            System.out.println("Title: "+title);
            System.out.println("Author: "+ author);
            System.out.println("Price: "+ price);
        }
    };
    /**   
    *   Class Constructor
    *   
    *   @param title The book's title.
    *   @param author The book's author.
    *   @param price The book's price.
    **/
    // Write your constructor here
    
    /**   
    *   Method Name: display
    *   
    *   Print the title, author, and price in the specified format.
    **/
    // Write your method here
    
// End class

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}



