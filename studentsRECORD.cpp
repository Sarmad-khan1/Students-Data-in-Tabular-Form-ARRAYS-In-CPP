#include <iostream>
using namespace std;
int main()
{
	int numberStudents;
	cout<<"Enter the number of students: ";
	cin>>numberStudents;
	
	string names[numberStudents];
	int rollnumbers[numberStudents];
	float gpas[numberStudents];
	
	for(int i=0; i<numberStudents; i++)
	{
		cout<<"Name "<<i+1<<": ";
		cin>>names[i];
		
		cout<<"Roll Numbers: "<<": ";
		cin>>rollnumbers[i];
		
		cout<<"GPA's: "<<": ";
		cin>>gpas[i];
		
		
	}
	cout<<"Names"<<"          "<<"Roll Numbers"<<"          "<<"GPA's"<<"          "<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<numberStudents; i++ )
	{	
		cout<<names[i]<<"          "<<rollnumbers[i]<<"          "<<gpas[i]<<"          "<<endl;
	}
	
}