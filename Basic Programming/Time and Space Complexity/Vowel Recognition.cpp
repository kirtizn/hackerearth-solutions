
#include<bits/stdc++.h>
using namespace std;
  
        
int main(){
    int tc;
    scanf("%d", &tc);
    while(tc--){
      string s;
      cin>>s;
      long long int count,length;
      length = s.length();
      count =0;
    //  cout << length << " =length" <<endl;
      for(int i = 0; i < length; i++)
         {
             char c = s[i];
             if(c == 'a' || c == 'e' || c == 'i' ||  c == 'o' ||  c == 'u' ||
             c == 'A' || c == 'E' || c == 'I' ||  c == 'O' ||  c == 'U'){
                 count = count + (length - i) * (i+1);
             }
         }
     cout<<count<<endl;
     
     

    }
    return 0;
}
