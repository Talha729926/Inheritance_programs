#include <iostream>
using namespace std;
class parent
{
		protected:
			void money()
			{
				cout<<"20000000 \n";
			}
};
class child1:public parent
{
	protected:
	void bike()
	{
		cout<<"CD 70 \n";
	}
	void show_money()
	{
		money ();
	}
};
class child2:public parent
  {
	protected:
	
		void car()
		{
			cout<<"civic \n";
		}
		void showmoney()
		{
			money();
		}
   };
class grand_child:public child1,public child2
{
	public:
		void getcar()
		{
			car();
		}
		void getbike()
		{
			bike();
		}
		void salaryshow()
		{
			show_money();
		}
		void salary_show()
		{
			showmoney();
		}
};
int main()
{
	grand_child d;
	d.getbike();
	d.getcar();
	d.salaryshow();
	d.salary_show();
	return(0);
}