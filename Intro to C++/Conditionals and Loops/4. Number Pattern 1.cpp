Number Pattern 1

Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
	cin>>n;


	int i=1;
	while(i<=n){
    		int col=1;
    		int value=i;
    		while(col<=i){
    			cout<<value;
    			col=col+1;
    			value=value+1;
        	}
    		cout<<endl;
		i=i+1;
	}
  
}

//Or

/*
#include<iostream>
using namespace std;


int main(){
	
	int  n;
	cin>>n;
	
	for(int i = 1; i<=n; i++01){
		for(int j = 1; j<=i; j++){
			cout<<j+i-1;
		}
		cout<<endl;
	}
}
*/

