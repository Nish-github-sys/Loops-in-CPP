//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-6

//Program-12
#include <iostream>
using namespace std;

int main() {
    int i, j;
    char k=65;
    int n=5;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; ++j){
            cout<<k<<"\t";
             k++;
        }
        cout<<endl;
    }
    return 0;
}


/*==========OUTPUTS==========
A	
B	C	
D	E	F	
G	H	I	J	
K	L	M	N	O	
*/
