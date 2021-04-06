//Find factorial
#include<iostream>
using namespace std;
int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else{
		return n +fact(n-1);
	}
}
int main()
{   
    int n;
    cout<<"Enter a number whose factorial you want to find: ";
    cin>>n;
	fact(n);
	cout<<"Answer is: "<<fact(n);
	return 0;
}
//int main() {
//	int number;
//	int factorial_value=1
//	cin>>number;
//	for (int x=1;x<=number;x++) {
//		factorial_value= factorial_value *x;
//	}
//	cout<<"Factorial of Given Number is ="<<factorial_value<<endl;
//	return 0;
//}
