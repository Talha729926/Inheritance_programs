#include<iostream>
using namespace std;
class teacher
{
	int a;
	public: 
	void dept()
	{
		cout<<"BS IT \n";
	}
	private:
		void salary()
		{
			cout<<"100000 \n";
		}
		protected:
			void ID()
			{
				cout<<"6911 \n";
			}
};
class student:public teacher
{ 
    public:
	void s_ID()
	{
		cout<<"BSITF23M27 \n";
	}
		protected:
		void name()
		{
			cout<<"M.T.M \n";
		}
};
class junior_student:public student
{
	public:
		void j_s_ID()
		{
			cout<<"BSITF24M410";
		}
};
int main ()
{
	junior_student a;
	a.dept();
	a.s_ID();
	a.j_s_ID();
	return 0;
}