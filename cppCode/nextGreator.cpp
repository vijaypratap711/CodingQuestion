/**************************************************
*_____Vijay Pratap Singh__________________________*
*_____Computer Science & Engineering______________*
*_____National Institute of Technology Agartala___*
*_____Mail: vps711@outlook.com____________________*
***************************************************
Question: https://leetcode.com/problems/next-greater-element-iii/
556. Next Greater Element III
Given a positive 32-bit integer n, you need to find the smallest 32-bit integer 
which has exactly the same digits existing in the integer n and is greater in value than n.
 If no such positive 32-bit integer exists, you need to return -1.

 Solution Explanation:
 Scan from last digit and find 1st small digit to its right digit.
**************************************************/
#include<bits/stdc++.h>
using namespace std;
int nextGreator( int n){
	 try{
            std::vector<int> v;
	int maxInt=n%10;
	n=n/10;
	
	while(n!=0 & n%10 >= maxInt ){

		v.push_back(maxInt);
		maxInt=n%10;
		
		n=n/10;
	}
	v.push_back(maxInt);
	//printf("%d\n",INT_MAX);
	if(n!=0){
		int s;
		for(int i=0,j=v.size(); i<j;i++){
			if(v[i]> (n%10) ){
				s=n%10;
				n/=10;
				n=n*10+v[i];
				if(n%10!=v[i])
					return -1;
				v[i]=s;
				break;
			}
		}

		for(int i=0,j =v.size(); i<j;i++){
			n=n*10+v[i];
			if(n%10!=v[i])
			return -1;
		}

		return n;
	}
        }
        catch(exception e){
            return -1;
        }
        
	return -1;
 
}
int main(){
	int n;
	cin>>n;
	cout<<nextGreator(n)<<endl;
	return 0;
}