#include <iostream>
using namespace std;
 
int main (){
    for (int i=3; i<=100; ++i)
    {
        if (i%3 != 0)
        continue;
        else
        cout << i << endl;
        
    }
 system ("pause");
 return 0;
}