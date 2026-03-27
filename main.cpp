#include <iostream>

using namespace std;

int main()
{
    int n=4;

   for(char i=0;i<=n;i++){ // for lines that how much lines we want
   char ch='A';
    for(int j=0 ; j<=n; j++){ // and this loop for k humein jo print karwana hai wo kitni dfa ho mtlb kitne numbers tk ho
        cout<<ch;
        ch= ch+1;
        }
        cout<<endl;
   }
    return 0;
}
