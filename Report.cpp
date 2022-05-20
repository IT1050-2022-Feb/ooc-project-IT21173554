#include<iostream>
#include<cstring>
#include "Report.h"
using namespace std;

Report :: Report()
{
  
}

void Report :: Report_Details(string rType , int rId )
{
  reportType = rType;
  reportId = rId;
 
}

void Report ::Report_Details ()
{
  cout<<"rType:"<<reportType<<endl;
  cout<<"rId:"<<reportId<<endl;

}

void Report:: Admin_generat_report()
{
  
}
