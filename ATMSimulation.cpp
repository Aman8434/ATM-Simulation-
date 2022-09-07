#include <iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu()
{
    clrscr();
    float balance1;
    int i ,pin,npin ,option;
    double balance = 20000,withdraw, deposit;
    textcolor(YELLOW);
    clrscr();
       cout<<"\t\t\t  ***************************************** "<<endl;
       cout<<"\t\t\t    *************************************   "<<endl;
       cout<<"\t\t\t       ***********   ***   ************     "<<endl;
       cout<<"\t\t\t          ********   ***   *********        "<<endl;
       cout<<"\t\t\t              ****   ***   ****             "<<endl;
       cout<<"\t\t\t              ****   ***   ****             "<<endl;
       cout<<"\t\t\t              ****   ***   ****             "<<endl;
       cout<<"\t\t\t              ****   ***   ****             "<<endl;
       cout<<"\t\t\t              ****   ***   ****             "<<endl;
       cout<<"\t\t\t                **   ***   **               "<<endl;
       cout<<"\t\t\t                 *   ***   *                "<<endl;
       cout<<"\t\t\t                      *                     "<<endl;
       cout<<"=============================================================================";
       cout<<"\t\t            Welcome To [ AMAN ATM ] Service                  "<<endl;
       cout<<"\t\t                     Architect By:                           "<<endl;
       cout<<"\t\t        #####      AMAN KUMAR SINGH       #####             "<<endl;
       cout<<"==============================================================================\n";
       cout<<"\t\t*******         PIN FOR USER IS  1212      ***********\n";
       
       cout<<"\n\t\t\t   =*= Welcome User =*=\n ";
       for (i=0;i<3;i++)
       {
           cout<<" \t\t\t     Enter Your pin: ";
           cin>>pin;
       
       balance1=balance;
       if(pin==1212)
       {
           textcolor(15);
       
       clrscr();
       repeat:
       
       for(i=1; i<=3;i++)
       {
           cout<<"\n\n";
           cout<<"\t\t      ***  Automated Teller Machine  ***"<<endl;
           cout<<"\t\t*************************************************"<<endl;
           cout<<"\t\t*            Main Menu                          *"<<endl;
           cout<<"\t\t*************************************************"<<endl;
           cout<<"\t\t*        1 - View My Balance                    *"<<endl;
           cout<<"\t\t*        2 - Withdraw Cash                      *"<<endl;
           cout<<"\t\t*        3 - Deposit Funds                      *"<<endl;
           cout<<"\t\t*        4 - Change Pin                         *"<<endl;
           cout<<"\t\t*        5 - Exit                               *"<<endl;
           cout<<"\t\t*************************************************"<<endl;
           cout<<"\t\t*************************************************"<<endl;
           cout<<"\t\t            Enter Option: ";
           cin>>Option;
           
           switch(Option)
           {
               case 1:
               cout<<"\n\t\t\t [[[% BALANCE INQUIRY %]]]\n\n";
               cout<<"\t\t\t*****************************************"<<endl;
               cout<<"\t\t\t   Your Bar Is: rs "<<balance<<endl;
               cout<<"\t\t\t******************************************"<<endl;
               getch();
               clrscr();
               goto repeat;
               break;
               
               case 2:
               repe:
               cout<<"\n\t\t\t   [[[% WITHDRAW %]]]";
               cout<<"\n\t\t\t  Enter amount in Rupees: ";
               cin>>Withdraw;
           
               if(withdraw<=balance1)
               {
                   balance1 = balance1 - withdraw;
                   cout<<"\t\t\t You withdraw RS: "<<withdraw<< endl;
                   cout<<"\t\t\t Your remaining balance is RS: "<<balance1<<endl;
               }
               else
               {
                   cout<<"\t\t!! You have only Rs.20,000 balance in Your account. !!\n";
                   goto repe;
               }
               getch();
               clrscr();
               goto repeat;
               break;
               
               case 3:
               
               cout<<"\n\t\t\t [[[% DEPOSIT %]]]\n";
               cout<<"\n\t\t\t Enter amount in RS: ";
               cin>>deposit;
               balance1 = balance1 + deposit;
               cout<<"\n\t\t\t You deposited RS: "<< deposit<< endl;
               cout<<"\n\t\t\t You new balance is RS: "<< balance1<<endl;
               getch();
               goto repeat;
               break;
               
               pinchange: case 4:
               cout<<"\n\t\t\t Enter Your old Pin: ";
               cin>>pin;
               if(pin==1212)
               {
                   cout<<"\t\t\t Enter new Pin: ";
                   cin>>npin;
                   cout<<"\n\t\t\t pin Changed Sucessfully.";
               }
               else
               {
                   cout<<"\n\t\t\t Wrong pin !! Enter pin Again.\n" ;
                   goto pinchange;
               }
               grtch();
               clrscr();
               goto repeat;
               break;
               
               case 5:
               exit(0);
               break;
               default:
               cout<<"\n\t\t\t That is an invalid option Plz enter option. \n";
               getch();
               clrscr();
               break;
           }
       }
       }
       else
       cout<<"\t\t\tpls trv again!!! Wrong pin entered.\n\n";
       }
       grtch();
}
       
       
       }
}



git hub link - :  https://github.com/Aman8434
  
