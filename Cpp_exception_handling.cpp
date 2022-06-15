#include<bits/stdc++.h>
using namespace std;
int largest_div(int n){
    
      for(int i = n-1 ; i>0 ; i--){
        if(n%i==0){
            return i;
        }
    }

    
    
   
    return 0;

}

void display(int a){
    if( a==0){
        cout<<"largest proper divisor is not defined for n="<<a<<endl;
        cout<<"returning control flow to caller"<<endl;
    }
    else{
        cout<<"result="<<a<<endl;
         cout<<"returning control flow to caller"<<endl;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n; 
    if(n==1){
        cout<<"largest proper divisor is not defined for n="<<n<<endl;
        cout<<"returning control flow to caller"<<endl;
    }
    else{
    display(largest_div(n));

    }

    return 0;
}