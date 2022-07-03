#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> v;
        for(int i = 0 ; i< 2*n ; i++){
            long long int temp;
            cin>>temp;
            v.push_back(temp);

        }

        long long int even = 0 ;
        long long int odd= 0 ;

        for(int i= 0 ; i<2*n ; i++){
            if(v[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

        long long int diff;
        if(even==odd){
            cout<<0<<endl;
        }
        else if(odd>even){
            diff=odd-even;
            cout<<diff/2<<endl;
        }

        else{
       diff=even-odd;
            cout<<diff/2<<endl;
    }
        
    


    } 
    return 0;
}