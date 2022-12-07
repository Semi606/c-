#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;
 
int main()
{
srand(time(NULL));
system("color A");
 
const short int size = 12;
int a[size];
 
//Заповнення
cout<< "\n" << "First array: " <<endl;
for (int i = 0; i<size; ++i)
{
a[i] = rand() % 1000;
cout<< a[i] << "\t";
}
cout<<endl;
 
// Сортування
int count = 0;     // К-сть проходів
for (int i = 0; i<size - 1; ++i)
{
for (int j = 0; j<size - i - 1; ++j)
{
if (a[j] > a[j + 1]) {
swap(a[j], a[j + 1]);
count++;
}
}
}
 
// Вивід
cout<< "\n" << "Result: " <<endl;
for (int i = 0; i <size; ++i)
cout<< a[i] << "\t";
cout<<endl;
cout<< "\n" << "counter = " <<count<<endl;
 
system("pause");
return 0;
}