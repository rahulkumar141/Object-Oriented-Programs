#include<iostream>
using namespace std;
class student
{
		char name[100];
		float per;
        public:
		void input()
		{
			int i,j,n,temp;
			cout<<"\nEnter student name: ";
			cin >>name;
			cout<<"Enter percentage: ";
			cin>>per;
		}
		void output()
		{
			cout<<"\nNAME : "<<name;
			cout<<"\nPERCENTAGE : "<<per<<"\n";
		}
	void sort(int n);
};

student s[10],t;
void student:: sort(int n)
{
    int i,j;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
		if(s[j].per<s[j+1].per)
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
}
int main()
{
    student sort;
	int n,i;
	cout<<"Enter number of students (max. 10): ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].input();
	}
	sort.sort(n);
	cout<<"\n\nStudentinformation in terms of percentage (i.e.Rankwise):\n";
	for(i=0;i<n;i++)
	{
		s[i].output();
	}
	return 0;

}
