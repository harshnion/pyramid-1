#include <iostream>

using namespace std;

int main()
{   
    int a,b,i,j,c;
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=i;j>0;j--){
            
            cout<<j;
            
        } 
        for(c=2;c<=i;c++){
            cout<<c;
        }
        cout<<"\n";
    }

    return 0;
}
