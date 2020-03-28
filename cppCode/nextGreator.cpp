/**************************************************
*_____Vijay Pratap Singh__________________________*
*_____Computer Science & Engineering______________*
*_____National Institute of Technology Agartala___*
*_____Mail: vps711@outlook.com____________________*
***************************************************
Question: https://www.geeksforgeeks.org/find-next-greater-number-set-digits/
Find next greater number with same set of digits
Given a number n, find the smallest number that has same set of digits as n 
and is greater than n. If n is the greatest possible number with its set of 
digits, then print “not possible”.
Examples:
For simplicity of implementation, we have considered input number as a string.

Input:  n = "218765"
Output: "251678"

Input:  n = "1234"
Output: "1243"

Input: n = "4321"
Output: "Not Possible"

Input: n = "534976"
Output: "536479"
**************************************************/
#include<bits/stdc++.h>
using namespace std;
int nextGreator(long int n){
	std::vector<int> v;
	int maxInt=n%10;
	n=n/10;
	
	while(n!=0 & n%10 >= maxInt ){

		v.push_back(maxInt);
		maxInt=n%10;
		
		n=n/10;
	}
	v.push_back(maxInt);
	cout<<"n:"<<n<<endl;
	if(n!=0){
		int s;
		for(int i=0,j=v.size(); i<j;i++){
			if(v[i]> (n%10) ){
				s=n%10;
				n/=10;
				n=n*10+v[i];
				v[i]=s;
				break;
			}
		}

		for(int i=0,j =v.size(); i<j;i++){
			n=n*10+v[i];
		}

		return n;
	}
	return -1;
}
int main(){
	long int n;
	cin>>n;
	cout<<nextGreator(n)<<endl;
	return 0;
}