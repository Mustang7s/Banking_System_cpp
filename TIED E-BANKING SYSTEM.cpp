//WELCOME TO TIED E-BANKING SYSTEM
//Developed By...: The TIED Group
//
//Name: Mactilda Matsotso
//Reg No: 145187
//
//Name: Rutto Evans
//Reg No:139691
//
//Name: Dorry Omondi
//Reg No: 140351
//
//Submitted to : Mr.Kelvin Ndambuki

//Project Name :TIED Electronic Banking System

#include<iostream>
#include<string>
#include<sstream>
#include<windows.h>
#include<fstream>
using namespace std;
string Username,username,UN,un,Password,password,pw,PW;
int PRESS,CHOICE,out,press;
float deposit;
float withdraw;
float balance=0;
int choice;
string PASSWORD,pASSWORD,PSW,Psw;
fstream fin;
fstream fout;
int main()
{
int option;
bool successfullogin=false;
bool Success=false;
do{
cout <<"----------WELCOME TO TIED E-BANKING SYSTEM----------"<<endl;
cout<< " "<<endl;
cout <<"               1. Administrator. "<<endl;
cout <<"               2. Customer. "<<endl;
cout <<"               3. Exit."<<endl;
 cout<< " "<<endl;
cout <<"------------------------------------------------------------------------"<<endl;
cout<< " "<<endl;
cout <<"     Choose your option to proceed."<<endl;
cout <<"     option:";
cin >>option;
system ("cls");// clear console
if(option==1)
{
cout <<"------------------------------------------------------------------------"<<endl;
cout<<"                  Welcome to Registration and Deposit page. "<<endl;
cout<< " "<<endl;
cout<<"   Enter Administrator username and password."<<endl;
cout<< " "<<endl;
do{
cout<<"   Enter username:";
cin >>Username;
cout<<"   Enter password:";
cin>>Password;
fin.open("admin.txt");
fin>>UN;
fin>>PW;
fin.close();
if (Password==PW && Username==UN)

 {
cout <<"------------------------------------------------------------------------"<<endl;
 cout<< "                   welcome Admin ..."<<endl;
 cout<< " "<<endl;
 cout<<"       1. Register Customer."<<endl;
 cout<<"       2. Deposit money for Customer."<<endl;
 cout<<"       3. Reset password."<<endl;
  cout<< " "<<endl;
 cout <<"------------------------------------------------------------------------"<<endl;
 successfullogin=true;
 cout <<" Choose your option to proceed."<<endl;
 cout <<" option:";
 int choice;
 cin>>choice;
 system("cls");
switch(choice)
{
 case 1:
 {
 cout <<"------------------------------------------------------------------------"<<endl;
  cout<< " "<<endl;
cout<<"                    Welcome to registration page." <<endl;
cout<< " "<<endl;
 cout <<"       Input Customer's username: ";cin >>username;
 cout <<"       select a password for the Customer: ";cin>>password;
 cout<<" "<<endl;
 fout.open("Customer.txt");
 fout<<username<<endl;
 fout<<password<<endl;
 fout<<balance<<endl;
 fout.close();
 cout<<"Registration successfully !!<<Username<<\n";
 cout <<"------------------------------------------------------------------------"<<endl;
 }
 Sleep(200);
 break;
 Sleep(200);
 case 2:
 {
 cout <<"------------------------------------------------------------------------"<<endl;
 cout<< " "<<endl;
cout<<"                Welcome to Deposit page." <<endl;
cout<< " "<<endl;
 cout<<"    Enter Amount to Deposit for a client: " ;
 cin >>deposit;
 balance += deposit;
 fout.open("Customer.txt");
 fout<<username<<endl;
 fout<<password<<endl;
 fout<<balance<<endl;
 fout.close();
 cout<<" "<<endl;
 cout<<"   Deposited successfully!"<<endl;
 cout <<"------------------------------------------------------------------------"<<endl;
  Sleep(200);
 break;
}
case 3:
 {

do{
cout <<"------------------------------------------------------------------------"<<endl;
cout<< " "<<endl;
 cout <<"   1. Press 1 to Proceed to change your password."<<endl;
cout <<"    2. Press 2 to exit."<<endl;
cout<< " "<<endl;
cout<<"     Option: ";
cin>>press;
system("cls");
switch (press)
 {
case 1:
{
 cout <<"------------------------------------------------------------------------"<<endl;
 cout<< " "<<endl;
 cout <<"   Enter your current Password:"<<endl;
 cout<<"    Password: ";
 cin>>PSW;
 fin.open("admin.txt");
 fin>>UN;
 fin>>PW;
 fin.close();
 if ( PSW==PW)
 {
 cout <<"   Enter your new password: ";
 cin>>PASSWORD;
 cout<<"    Confirm your new password: ";
 cin>>pASSWORD;

 if (pASSWORD==PASSWORD)
 {
 PW=PASSWORD;
 fout.open("admin.txt");
 fout<<UN<<endl;
 fout<<PW<<endl;
 fout.close();
 cout<< " "<<endl;
 cout<< "   Password changed successfully!"<<endl;
 }
 if( pASSWORD!=PASSWORD)
 {
 cout<<"    your new password does not match!"<<endl;
 }
 }
 else
 {
 cout <<"   Invalid password"<<endl;
 } }}
 }while (press != 2) ;

 }
 Sleep(200);
 break;
}

 }
else
{
cout<< " "<<endl;
cout <<"Invalid Password or Username ,Please try again."<<endl;
cout<< " "<<endl;
}
}while (!successfullogin);
}
else if (option==2)
{
do{
cout <<"------------------------------------------------------------------------"<<endl;
cout<< " "<<endl;
cout <<"          1. Press 1 to Proceed to login."<<endl;
cout <<"          2. Press 2 exit."<<endl;
cout<< " "<<endl;
cout<<"           Option: ";
cin>>out;
switch(out)
{
case 1:
{
cout <<"------------------------------------------------------------------------"<<endl;
cout<< " "<<endl;
cout<<" ***********Welcome to Customer login page. "<<endl;
cout<< " "<<endl;
cout<<"   Enter username and password."<<endl;
do{
cout<<"   Enter username:";
cin >> username;
cout<<"   Enter password:";
cin>>password;
fin.open("Customer.txt");
fin>>un;
fin>>pw;
fin.close();
if ( username==un && password==pw )
 {
cout <<"------------------------------------------------------------------------"<<endl;
 cout<< "              Welcome Our Customer. "<<endl;
 cout<< " "<<endl;
 cout<<"      1. Withdraw Cash."<<endl;
 cout<<"      2. Check Account balance."<<endl;
 cout<<"      3. Reset password."<<endl;
 cout<< " "<<endl;
cout <<"------------------------------------------------------------------------"<<endl;
 Success=true;
 cout<< " "<<endl;
 cout <<" Choose your option to proceed."<<endl;
 cout <<" Option:";
 int choice;
 cin>>choice;
switch(choice)
{
 case 1:
 {
 do{
cout <<"------------------------------------------------------------------------"<<endl;
cout <<"   1. Press 1 to Proceed to withdraw."<<endl;
cout <<"   2. Press 2 exit."<<endl;
cout<< " "<<endl;
cout<<"    Option: ";
Sleep(200);
cin>>PRESS;
system("cls");
 switch (PRESS) {
case 1: {
 cout <<"   Enter amount to Withdraw: "<<endl;
 cin >>withdraw;
 Sleep(200);

 if(withdraw <= balance )
 {
 balance-=withdraw;
 fout.open("Customer.txt");
 fout<<username<<endl;
 fout<<password<<endl;
 fout<<balance<<endl;
 fout.close();
 cout<<"     withdrawal succesful! You balance is:"<<balance <<endl;
}
 else{
 cout<<"Dear "<<username<<" you have Insufficient funds in your account to withdraw :"<<withdraw<< " Please check your balance and try again. "<<endl;
}}
break;
}
}while(PRESS != 2);
}
break;
 case 2:
 {
do{
cout <<"------------------------------------------------------------------------"<<endl;
cout<< " "<<endl;
 cout <<"  1. Press 1 to check your balance."<<endl;
cout <<"   2. Press 2 exit."<<endl;
cout<<"    Option: ";
cin>>CHOICE;
system ("cls");
 switch (CHOICE)
 {
case 1:
{
 cout<<"your balance is: ";
 cout<<balance<<endl;
}
break;
}
}while(CHOICE != 2);
}
 break;

 case 3:
 {
 do{

cout <<"------------------------------------------------------------------------"<<endl;
cout<< " "<<endl;
cout <<"   1. Press 1 to Proceed to change your password."<<endl;
cout <<"   2. Press 2 exit."<<endl;
cout<<"    Option: ";
cin>>press;
system("cls");
 switch (press)
 {
case 1:
 cout <<"Kindly input your current Password:"<<endl;
 cout<< " "<<endl;
 cout<<"Password: ";
 cin>>pw;
 if ( pw==password)
 {
 cout <<"  Enter your new password: ";
 cin>>PSW;
 system("cls");
 cout<<"   Confirm your new password: ";
 cin>>Psw;
 if (PSW==Psw);
 {
 pw=Psw;
 fout.open("Customer.txt");
 fout<<un<<endl;
 fout<<pw<<endl;
 fout<<balance<<endl;
 fout.close();
 cout<< "   Password changed successfully!!";
}
if(PSW !=Psw)
 {
 cout<<"   your new password does not match please try again!";
 }

 }

 else
 {
 cout <<"Invalid password";
 }
 }
 break;
 }while (press !=2);

 }
 break;

}
 }
else
{
 cout<< " "<<endl;
cout <<"Make sure you are registered in the system."<<endl;
cout<< " "<<endl;
 cout<<"Invalid Password or Username Please try again!"<<endl;
  cout << "\n\n";
        system("PAUSE");
        Sleep(500);
cout<< "***Thank you for being TIEDS' Customer**** "<<endl;
}

}while (!Success);
}
break;
}
}while(out != 2);
}
}while (option !=3);
return 0;
}
                                 //******END OF PROJECT*****//
