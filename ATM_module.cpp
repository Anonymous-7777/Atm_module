#include<iostream>
#include<conio.h>
#include <cstdlib>
using namespace std;

int main()
{
    long int ac;
    int pw,pwi,input,amount,y;
    int deposit = 0;
    int withdraw= 0;
    int balance=0;
    int x=1;
    cout<<"\t \t Welcome to DSCE Bank \n "<<endl;
    cout<<"Enter your Account number :"<<endl;
    cin>>ac;
    cout<<"Set up a pin : "<<endl;
    cin>>pw;
    cout<<"Pin setup successful"<<endl;
   while(x>0)
    {
        system("cls");
        cout<<"A/C No. "<<ac<<endl;
        cout<<"Enter the Pin : "<<endl;
        cin>>pwi;
        system("cls");
        if(pwi!=pw)
        {
            cout<<"Enter the valid Pin "<<endl;
            getch();
            system("cls");
        }

        else if(pwi==pw)
        {
            cout<<"\t \t choose 1 for Account summary, choose 2 for depositing the money, choose 3 for withdrawing money"<<endl;
            cin>>input;
            system("cls");
            if(input==1)
            {
                cout<<"Your current bank balance is "<<endl<<"Rs. " << balance<<endl;
                getch();
                cout<<"Your total deposit is : Rs. "<<deposit<<endl;
                cout<<"Your total Withdrawl is : Rs. "<<withdraw<<endl;
            }

            if(input==2)
            {
                cout<<"Enter the depositing amount :"<<endl;
                cin>>amount;
                balance = balance + amount;
                deposit = deposit + amount;
                cout<<"Rs. "<<amount<<"  is deposited to your account "<<endl;
                getch();
            }

            if(input==3)
            {
                cout<<"Enter the withdrawl amount :"<<endl;
                cin>>amount;
                if(amount<=balance)
                {
                    cout<<"Rs. "<<amount<<"  is withdrawn"<<endl;
                    getch();
                    balance = balance - amount;
                    withdraw = withdraw + amount;
                }
                else if(amount>balance)
                {
                    cout<<"Insufficient Balance"<<endl;
                    getch();
                }

                else
                {
                    cout<<"Please enter valid input "<<endl;
                }
            }

            cout<<endl<<" Want to continue the Transaction (press 1 for yes and 2 for no) : "<<endl;
            cin>>y;
            if(y==1)
            {
                x=x+0;
            }
            else if(y==2)
            {
                x=x-1;
            }
            else
            {
            cout<<"Please enter valid input "<<endl;
            }
        }

    }
    getch();
    cout<<"Thank you for using our services :-)";
    getch();
    system("cls");


}