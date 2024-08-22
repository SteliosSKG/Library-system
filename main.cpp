//this library system will give the user the option to buy the book , rent a book , return it , sell it's own book


#include <iostream>
#include <string>

using namespace std;

//data structure for books in order to save them to memory
struct Books
{
    string title;
    string author;
    int year;
    int count;
    double price;

};

//rent book function
void rent_book(double cashier,Books books[])
{


}

//buy book function
void buy_book(double cashier,Books books[])
{
    int answer2;
    cout<<"Your choice is; "<<endl;
    cin>>answer2;

        if (answer2 > 10 && answer2 < 1 )
        {
            cout<<"Sorry this book doesnt exist on the list please check the list above"<<endl;
        }else
        {
            for (int i = 0; i < 10; i++)
            {
            books[i].count -= 1;
            cashier += books[i].price;

            }
            cout<<"Thanks for buying"<<endl;
    }
}

//check choice in order to use the right function for this program
void check_choice(const string choice,double cashier, Books books[])
{

        if (choice == "1")
        {
            cout<<"Our available book are : "<<endl;
            for(int i = 0; i < 10; i++)
            {

                cout<<"Title: "<<books[i].title<<" || Author: "<<books[i].author<<" || Year: "<<books[i].year<<" || Price: "<<books[i].price<<" $"<<endl;
            }
            string answer;
            cout<<"Are you interested in something;"<<endl;
            cin>>answer;
            if (answer == "yes")
            {
                buy_book(cashier,books);

            }

        }else if (choice == "2")
        {
            cout<<"Our available book are : "<<endl;
            for(int i = 0; i < 10; i++)
            {

                cout<<"Title: "<<books[i].title<<" || Author: "<<books[i].author<<" || Year: "<<books[i].year<<" || Rent Price 5$/hour"<<endl;
            }
            string answer;
            cout<<"Are you interested in something;"<<endl;
            cin>>answer;
            if (answer == "yes")
            {
                rent_book(cashier,books);

            }

        }

    }


int main()
{
    double cashier = 0.0 ;
    Books books[10]
    {
        {"Whispers in the Wind","Ava Sinclair",2023,5,15.99},
        {"The Last Echo","Thomas Reed",2021,3,16.99},
        {"Underneath the Stars","Mia Lawson",2020,4,11.99},
        {"The Forgotten Path","Jake Holloway",2005,2,8.99},
        {"Fragments of Time","Sara Bennett",2009,1,8.99},
        {"The Alchemist's Secret","Oliver Price",20011,2,23.99},
        {"Echoes of the Heart","Mia Lawson",2014,5,15.99},
        {"Chasing Shadows","Ava Sinclair",1992,12,5.99},
        {"A Journey Beyond","Oliver Price",1999,3,10.99},
        {"The Painted Veil","Oliver Price",2022,1,11.99}

    };
    string choice;
    cout<<"Hello how can i help you today"<<endl;
    cout<<"1.Buy Book"<<endl;
    cout<<"2.Try Book"<<endl;
    cout<<"3.Return Book"<<endl;
    cout<<"4.Sell Book"<<endl;
    cout<<"5.Quit"<<endl;
    cout<<"6.Check money"<<endl;
    cin>>choice;
    if (choice == "1" or choice == "2" or choice == "3" or choice == "4" or choice == "5" or choice == "6")
    {
        check_choice(choice,cashier,books);
    }else
    {
        cout<<"Wrong choice"<<endl;
    }


    return 0;
}