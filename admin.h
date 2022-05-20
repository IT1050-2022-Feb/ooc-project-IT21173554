#define size10
#include<iostream>
using namespace std;

class Admin{
	private:
		string adminName;
		int adminId;
		string adminEmail;
		string adminType;


	public:
		Admin();
		void Admin_Details(string aName , int aId , string aEmail, string aType );
		void Display_Admin_Details();
		void Manage_user_account();
		void Check_login_details();
		void Accept_project();
};
