//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-6

//Program-11
#include <iostream>
using namespace std;

int main() {
    int i, j, k=1;
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
1	
2	3	
4	5	6	
7	8	9	10	
11	12	13	14	15	
*/
