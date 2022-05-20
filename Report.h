#include<iostream>
using namespace std;
class Report
	{
		private:
			string reportType;
			int reportId;

		public:
			Report();
			void Report_Details(string rType , int rId );
			void Admin_generat_report();
			
	};
