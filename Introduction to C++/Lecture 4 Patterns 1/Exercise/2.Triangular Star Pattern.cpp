/*Print the following pattern for the given N number of rows.
Pattern for N = 4
*
**
***
****
Note : There are no spaces between the stars (*).
Input format :
Integer N (Total no. of rows)*/

#include<iostream>
using namespace std;


int main(){
	int N,i=1,j;
	cin>>N;
     while(i<=N)
	 {
		 j=1;
		 while(j<=i)
		 {
			 cout<<'*';
			 j=j+1;
		 }
		cout<<endl;
		i=i+1;
	 }
}