#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=n;i>=1;i--) {
        char ch ='A'+ i- 1;
        for(int j=i;j<=n;j++) {
            cout<<ch++<<" ";
        }
        cout << endl;
    }
    return 0;
}
