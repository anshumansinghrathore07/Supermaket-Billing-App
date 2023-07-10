#include<iostream>
#include<fstream>

using namespace std;

class shopping
{
    int pcode;
    float price;
    float dis;
    string pname;

    public:
        void menu();
        void administrator();
        void buyer();
        void add();
        void edit();
        void rem();
        void list();
        void receipt();


};

void shopping :: menu(){
    m:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t________________________________\n";
    cout<<"\t\t\t\t                                \n";
    cout<<"\t\t\t\t           Main Menu            \n";
    cout<<"\t\t\t\t                                \n";
    cout<<"\t\t\t\t________________________________\n";

    cout<<"\t\t\t\t                                \n";
    cout<<"\t\t\t\t  1) Administrator   \n";
    cout<<"\t\t\t\t                                \n";
    cout<<"\t\t\t\t  2) Buyer   \n";
    cout<<"\t\t\t\t                                \n";
    cout<<"\t\t\t\t Please select no.->> 1 or 2!  \n";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\t\t\t Please login \n";
        cout<<"\t\t\t Enter Email";
        cin>>email;
        cout<<"\t\t\t Enter Password";
        cin>>password;

        if (email==admin@gmail.com && password==iamadmin)
        {
            administrator();
        }
        else
        {
            cout<<"Invalid email or password";

        }

    case 2:
        {
            buyer();
        }

    case 3:
        {
            exit(0);
        }    

        default:
        {
            cout<<"Please select from given options";            
        }

}
goto m;
}

void shopping :: administrator(){


    m:
    int choice;
    cout<<"\n\n\n\t\t\t Administrator menu";
    cout<<"\n\t\t\t|___1)Add the prodeuct___|";
    cout<<"\n\t\t\t|                         ";
    cout<<"\n\n\n\t|___2)Modify the product__";
    cout<<"\n\t\t\t|                         ";
    cout<<"\n\n\n\t|___3)Delete the product__";
    cout<<"\n\t\t\t|                         ";
    cout<<"\n\n\n\t|___4)Back to main menu__";
    cout<<"\n\t\t\t|                         ";
    

    cout<<"\n\n\t Please enter your choice";
    cin>>choice;





switch (choice)
{
    case 1:
    add();
    break;

    case 2:
    edit();
    break;

    case 3:
    rem();
    break;

    case 4:
    menu();
    break;

    default :
    cout<<"Invalid choice";


}
goto m;

}

void shopping :: buyer()
{
    int choice;
    cout<<"\t\t\t 1)Buy "
}

