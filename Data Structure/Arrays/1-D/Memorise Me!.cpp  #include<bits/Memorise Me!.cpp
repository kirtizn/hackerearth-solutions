

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,t,i,temp;
    scanf("%d",&n);
    unordered_map<int,int> freq;
    for(i=0;i<n;i++){
    scanf("%d",&temp);
         freq[temp]++;
    }
    
    scanf("%d",&q);
    while(q--){
   scanf("%d",&t);
    if(freq.find(t)==freq.end())
        printf("NOT PRESENT\n");
    else
        printf("%d\n",freq[t]);

    }
}
