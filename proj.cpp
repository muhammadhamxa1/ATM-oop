#include<conio.h>
#include<iostream>
using namespace std;
int er=6000;
class Account{
	private:
		friend class admin;
	int acc_NUM; string name,fat_nam;
	string pass;
	protected:
		void add_ac(){
		cout<<"Enter the name:-";cin>>name;
		cout<<name<<" father name:-"; cin>>fat_nam;
		cout<<"Unique Number y/n:-"; char ch; cin>>ch;
		switch(ch){
			case 'y':
				cout<<"Enter the unique acc number"; cin>>acc_NUM;
				break;
				case 'n':
					er=er+1; acc_NUM=er;
					cout<<"\tAutomatcally account number has been genrated\5\n\t\t AC/No# "<<acc_NUM<<" Password has been set\3\n";
					pass="hama";
					break;
					default:
						cout<<"Agin repeat the process.";}
			
						system("pause");
						system("cls");
					cout<<"Name:-"<<name<<"\nAccount Number:-"<<acc_NUM<<"\nFather name:-"<<fat_nam<<endl;
						}
						void show(){
							cout<<"Name:-"<<name<<"\nAccount Number:-"<<acc_NUM<<"\nFather name:-"<<fat_nam<<endl;
						}
						int ac_check(){
							return acc_NUM;
						}
						string ac_pass(){
							return pass;
						}
						void ac_pass2(string gh){
							pass=gh;
						}
};
class Money{
	private:
			int rupess;
	public:
		
			void Tra1(){
			int tra;
			cout<<"Enter Ammount to transaction:-"; cin>>tra;
			rupess=rupess-tra;
			cout<<"Transaction has been sucessfull"<<endl;
			}	
			void add1(){
			cout<<"Enter the rupess:-";cin>>rupess;
		}
		void show_mo1(){
			cout<<"Your total money is"<<rupess<<endl;
		}
			
		
};
class Tr:public Money{
	public:
				void Tra(){
				Money::Tra1();
	}
		
};
class Dep:public Money{
	public :
		void add(){
				Money::add1();
			}
	
		
};
class Show_mo:public Money{
	public:
			void show_mo(){
				Money::show_mo1();
			}
		
	
};


class AD:public Tr,public Show_mo,public Dep{
	
};

class user:public Account,public Money{
};
class admin:public user{
	private:
		user check;
		public:
		
			
			void ad(){
				check.add_ac();
			}
			void sh(){
				check.show();
				
			}
			void ac_ps2(string hj){
				check.ac_pass2(hj);
			}
			int ac_ch(){
				 return check.ac_check();}
				 string ac_pa(){
				 	return check.ac_pass();
				 }
};
int main(){
admin d[50]; string id;
int nu=0;
while(1){
cout<<"Enter your identity:-"; cin>>id;
if(id=="admin")
{ string ps="admin"; cout<<"Enter your password:-"; cin>>id;
if(id=="admin"){
	int wh_cr=1,chi=0;
while(chi!=3){
cout<<"1)Create account:-\n2)Display All Accounts Information\n3)Exit\n Enter:-";cin>>chi;
switch(chi){
	case 1:
		