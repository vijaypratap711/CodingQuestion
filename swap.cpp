/**************************************************
*_____Vijay Pratap Singh__________________________*
*_____Computer Science & Engineering______________*
*_____National Institute of Technology Agartala___*
*_____Mail: vps711@outlook.com____________________*
***************************************************
Question: 
Swap two numbers without any temporary variable.
**************************************************/
#include<bits/stdc++.h>
using namespace std;
void swapNumbers(int &x,int &y){
	x=x+y;
	y=x-y;
	x=x-y;
}
int main(){
	int a,b;
	a=2;
	b=3;
	cout<<"Before Swap\n";
	cout<<"a: "<<a<<"\nb: "<<b;
	swapNumbers(a,b);
	cout<<"\nAfter Swap\n";
	cout<<"a: "<<a<<"\nb: "<<b<<"\n";
	return 0;
}