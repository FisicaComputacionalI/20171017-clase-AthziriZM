//Programa que calcula la suma de números impares del 1 al 10
//Athziri Zúñiga Méndez
#include <iostream>
using namespace std;

int main()
{
  int sum=0;
  int count=1;
  while (count<10) {
    if ((count%2)>0)
      {
	sum=sum+count;
      }
    count++;
  }
  cout<<"suma"<<sum<<endl;
  return 0;
}
