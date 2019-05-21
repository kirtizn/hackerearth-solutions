#include<bits/stdc++.h>
using namespace std;


int prime(int n){
    int check=0;
    for(int j=2; j<=sqrt(n); j++){
	        if(n % j == 0){  check=1;   break;  }
	  }
	    if(check == 0)
	        return 1;
	    else
	        return 0;
}


int main() {
	int sum,pr,pr1,n1,n2;
	cin >> n1>>n2;									
	for(int i=n1; i<=n2; i++){
	   int pr =  prime(i);
	    if(pr == 1){
	        sum=0;
	        int rem,num = i;
	        while(num!=0){
	            rem = num % 10;
	            sum =sum  + rem;
	            num = num/10;
	        }
	        
	        if(sum % 2 == 0 && sum!=2)
	            continue;
	        else{
	             pr1 = prime(sum);
	             if(pr1== 1)
	                 cout<< i << " "; }
	   }
	}
	return 0;
}

