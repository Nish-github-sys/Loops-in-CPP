//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-6

//Program-8
#include <iostream>
using namespace std;

int main() {
    int i, j, k;
    int n=5;

     for(i=1; i<=n; i++)
    {
        for(k=(n-i); k>=0; k--){
            cout<<" ";
        }
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


/*==========OUTPUTS==========
     *
    **
   ***
  ****
 *****
*/
