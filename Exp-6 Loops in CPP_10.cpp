//UPLOAD
//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-6

//Program-10
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number:";
    cin >> n;
  for(int i = 1;i <= n;i++){
    for(int k = 0; k <i-1; k++) {
        cout << "  "; 
    }
    
    
    for(int j = i;j<=n;j++){
        cout << "* ";
    }
    
    cout << "\n";  
  }
  return 0;
}


/*==========OUTPUTS==========
Enter Number:5
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
    */
