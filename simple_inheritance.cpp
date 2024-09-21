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
	void ID()
	{
		cout<<"BSITF23M27 \n";
	}
		void show_ID()
		{
			ID();
		}
		protected:
		void name()
		{
			cout<<"M.T.M \n";
		}
};
int main ()
{
	student a;
	a.dept();
	a.show_ID();
	return 0;
}