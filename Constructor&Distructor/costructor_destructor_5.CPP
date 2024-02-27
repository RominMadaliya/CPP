// Private members of the class BOOK are
// BOOK NO integer type
// BOOKTITLE 20 characters
// PRICE float (price per copy)
// TOTAL_COST() A function to calculate the total cost for N number of copies where N
// is passed to the function as argument.
// Public members of the class BOOK are
// INPUT() function to read BOOK_NO. BOOK TITLE, PRICE
// PURCHASE() function to ask the user to input the number of copies to be
// purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user

#include<iostream>

using namespace std;

class BOOK
{
    int bookno;
    char booktitkle[20];
    float price;

    int no;
    float total;

    float total_cost(int no, float price)
    {
        total=no*price;
        return total;
    }

    public:

    //void input()
    BOOK()
    {
        cout<<"Enter book number:";
        cin>>bookno;
        cin.ignore();
        cout<<"Enter Book title :";
        gets(booktitkle);
        cout<<"Enter Book Price :";
        cin>>price;
    }

    void purchase()
    {
        cout<<"Enter the quantity :";
        cin>>no;

       total_cost(no,price);

        cout<<"Book no is :"<<bookno<<endl;
        cout<<"Book title is :"<<booktitkle<<endl;
        cout<<"Book price is :"<<price<<endl;
        cout<<"Book quantity is :"<<no<<endl;
        cout<<"total cost paid by the usre  :"<<total<<endl;
    }

    
     ~BOOK()
     {
      cout<<"Deallocate the data  ";
     }

};

int main()
{
    BOOK data;
    // data.input();

    cout<<"-------------------"<<endl;
    data.purchase();
}