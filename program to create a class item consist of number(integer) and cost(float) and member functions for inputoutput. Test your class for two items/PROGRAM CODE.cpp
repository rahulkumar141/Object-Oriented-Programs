#include<iostream>

using namespace std;

class item
{
    private:
	int number;
	float cost;
	public:
		void input()

		{
		    cout<<"\nEnter the number = ";
			cin>>number;
			cout<<"\nEnter the cost = ";
			cin>>cost;
		}
		void output()
		{
			cout<< endl <<"Number is = "<<number<< endl <<endl << "Cost is = "<<cost<<endl;
		}
};

int main()
{
	item a,b;
	a.input();
	b.input();
	a.output();
	b.output();
    return 0;
}
