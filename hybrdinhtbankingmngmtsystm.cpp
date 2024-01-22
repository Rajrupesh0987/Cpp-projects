#include<iostream>
using namespace std;

class bank
{
    public:
    //int bp,rate,tp;
    string acc_no,balance;
    string bank_name, bank_address, acc_type;
    
};
 class current_acc:public bank
 {
     public:
     void get1()
    {
    cout<<"Enter bank name:"<<endl;
    cin>>bank_name;
    cout<<"Enter bank address:"<<endl;
    cin>>bank_address;
    cout<<"Enter acc type:"<<endl;
    cin>>acc_type;
    cout<<"Enter acc number:"<<endl;
    cin>>acc_no;
 }
 void show1()
 {
    cout<<"bank name is: "<<bank_name<<endl;
    cout<<"bank address is: "<<bank_address<<endl;
    cout<<"acc type is: "<<acc_type<<endl;
    cout<<"acc number is: "<<acc_no<<endl;
   }
 };
  class saving_acc:public bank
  {
      public:
      void get2()
    {
    cout<<"\n\nEnter bank name:"<<endl;
    cin>>bank_name;
    cout<<"Enter bank address:"<<endl;
    cin>>bank_address;
    cout<<"Enter acc type:"<<endl;
    cin>>acc_type;
    cout<<"Enter acc number:"<<endl;
    cin>>acc_no;
 }
 void show2()
 {
    cout<<"bank name is:  "<<bank_name<<endl;
    cout<<"bank address is: "<<bank_address<<endl;
    cout<<" acc type is:  "<<acc_type<<endl;
    cout<<"acc number is: "<<acc_no<<endl;
   }
};
 class fixed_deposit_acc:public bank
 {
     public:
     void get3()
    {
    cout<<"\n\nEnter bank name:"<<endl;
    cin>>bank_name;
    cout<<"Enter bank address:"<<endl;
    cin>>bank_address;
    cout<<"Enter acc type:"<<endl;
    cin>>acc_type;
    cout<<"Enter acc numbe<<endlr:"<<endl;
    cin>>acc_no;
 }
 void show3()
 {
    cout<<"bank name is:  "<<bank_name<<endl;
    cout<<"bank address is: "<<bank_address<<endl;
    cout<<" acc type is:  "<<acc_type<<endl;
    cout<<"acc number is: : "<<acc_no<<endl;
   }
 };

 class L_T_F_D:fixed_deposit_acc
{
   public:
   void get4()
   {
     cout<<"\n\nEnter bank name:"<<endl;
    cin>>bank_name;
    cout<<"Enter bank address:"<<endl;
    cin>>bank_address;
    cout<<"Enter acc type:"<<endl;
    cin>>acc_type;
    cout<<"Enter acc number:"<<endl;
    cin>>acc_no;
 }
 void show4()
 {
    cout<<"bank name is:  "<<bank_name<<endl;
    cout<<"bank address is:  "<<bank_address<<endl;
    cout<<" acc type is:  "<<acc_type<<endl;
    cout<<"acc number is::  "<<acc_no<<endl; 
   }
};
class S_T_F_D:fixed_deposit_acc
{
   public:
   void get5()
   {
     cout<<"\n\nEnter bank name: "<<endl;
    cin>>bank_name;
    cout<<"Enter bank address: "<<endl;
    cin>>bank_address;
    cout<<"Enter acc type: "<<endl;
    cin>>acc_type;
    cout<<"Enter acc no: "<<endl;
    cin>>acc_no;
 }
 void show5()
 {
    cout<<"bank name is:  "<<bank_name<<endl;
    cout<<"bank address is:" <<bank_address<<endl;
    cout<<" acc type is:  "<<acc_type<<endl;
    cout<<"acc number is: "<<acc_no<<endl; 
   }
};
 class M_T_F_D:fixed_deposit_acc
{
   public:
   void get6()
   {
     cout<<"\n\nEnter bank name:"<<endl;
    cin>>bank_name;
    cout<<"Enter bank address:"<<endl;
    cin>>bank_address;
    cout<<"Enter acc type:"<<endl;
    cin>>acc_type;
    cout<<"Enter acc number:"<<endl;
    cin>>acc_no;

 }
 void show6()
 {
    cout<<"bank name is: "<<bank_name<<endl;
    cout<<"bank address is: "<<bank_address<<endl;
    cout<<" acc type is: "<<acc_type<<endl;
    cout<<"acc number is: "<<acc_no<<endl;
   }
};

 int main()
 {
   current_acc obj1;
   obj1.get1();
   obj1.show1();

   saving_acc obj2;
   obj2.get2();
   obj2.show2();

fixed_deposit_acc obj3;
   obj3.get3();
   obj3.show3();

   L_T_F_D obj4;
   obj4.get4();
   obj4.show4();

    S_T_F_D obj5;
   obj5.get5();
   obj5.show5();

    M_T_F_D obj6;
   obj6.get6();
   obj6.show6();

return 0;
    
 }