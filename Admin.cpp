#include<iostream>
#include<cstring>
#include "Admin.h"
using namespace std;

Admin :: Admin()
{
  
}
void Admin::Admin_Details(string aName , int aId , string aEmail, string aType )
{
  adminName = aName;
  adminId = aId;
  adminEmail = aEmail;
  adminType = aType; 
  
}

void Admin :: Display_Admin_Details()
{
  cout<<"aName:"<<adminName<<endl;
  cout<<"aId:"<<adminId<<endl;
  cout<<"aEmail:"<<adminEmail<<endl;
  cout<<"atype:"<<adminType<<endl<<endl;
}

void Admin :: Manage_user_account()
{
  
}

void Admin :: Check_login_details()
{
  
}

void Accept_project()
{
	
}

