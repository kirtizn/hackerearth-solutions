#include<iostream>
using namespace std;

int main(){
    char msg[51], gus[51];
    cin.getline(msg,50);
     cin.getline(gus,50);
     int freq1[200]={0},freq2[200]={0},check=0;
     for(int i=0;i<msg[i]!='\0' || gus[i]!='\0'; i++){
          int asci1 =(int) msg[i];
          int asci2 =(int) gus[i];
          freq1[asci1]++;
          freq2[asci2]++;

     }
     
      for(int i=0;i< gus[i]!='\0'; i++){
          int asci =(int) gus[i];
          if(asci>=65 && asci<=90){
            asci = asci + 32;
           freq2[asci] = freq1[asci];
          }
          if(freq1[asci] == freq2[asci])
          {
              continue;
          }
          else{
              
              if(asci==32){
                  continue;
              }
              
             check=1;
              break;
          }
     }
     if(check==1){
         cout<<"NO"<<endl;
     }else{
         cout<<"YES"<<endl;
     }


    
    return 0;
}
