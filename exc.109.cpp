#include <iostream>
using namespace std;
int main () {
    char c='*';
    int n;
    cin>>n;
   for(int i=0; i<n; i++){
       if(i%2==0){
             for(int j=0; j<7; j++){
         cout<<c;
        }
       }
   else {
        for(int j=0; j<4; j++){
            cout<<c;
        }
     }
       cout<<endl;
   }
return 0;
}
