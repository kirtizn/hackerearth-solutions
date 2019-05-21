//Binary Queries.cpp

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,code,change;
    scanf("%d%d",&n,&q);
    int binary[n];
    for(int i=1;i<=n;i++){
       scanf("%d",&binary[i]);
    }
    while(q--){
       scanf("%d",&code);
        if(code == 1){
          scanf("%d",&change);
         binary[change]=(binary[change]==0) ? 1:0;
        }
        if(code == 0){
            int left,right;
            scanf("%d%d",&left,&right);
            if(binary[right] ==0) printf("EVEN\n");
            else printf("ODD\n");
        
        }
    }
    return 0;
}

