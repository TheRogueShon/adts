#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
 L1.insert(9,1);
 
 L1.insert(8,2);
 
 L1.insert(3,3);
 
 L1.display();
 
 L1.size();
 
 L1.get(2);
 
 L1.clear();
 
 L1.display();
 
 cout<<endl;
 
 L2.insert(6,1);
 
 L2.insert(5,2);
 
 L2.insert(4,3);
 
 L2.remove(2);
 
 L2.display();

}
