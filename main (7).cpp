#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
    char row[n];    
    for(int j=0;j<n;j++){
    row[j]=ch;
    ch++;
    if(ch>'Z')ch='A';
    }
    if(i%2==0){
        for(int j=0;j<n;j++){
            cout<<row[j]<<" ";
        }
    }
    else{
        for(int j=n-i;j>=0;j--){
            cout<<row[j]<<" ";
        }
    }
        cout<<endl;
    }
    return 0;
}