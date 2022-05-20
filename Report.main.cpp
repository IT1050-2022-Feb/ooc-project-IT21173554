#include<iostream>
#include "Report.h"
#include "Admin.h"
using namespace std;

int main()
{
  Report rpt1;
  Report rpt2;

  Admin Adm1;
  Admin Adm2;

  rpt1.Report_Details("Internal Reports" ,0014 );

  rpt2.Report_Details("Product Reports" , 0015 );

  Adm1.Admin_Details("Nishanth" , 0011 , "nishanth123@gmail.com", "seniorAdmin" );

  Adm2.Admin_Details("Kumar" , 0012 , "kumar1212@gmail.com", "supportAdmin");

  return 0;
}
