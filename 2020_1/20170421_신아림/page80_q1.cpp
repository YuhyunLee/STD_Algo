#include <iostream>

using namespace std;

void increase(int &a)
{
   a++;
}
void change(int &a)
{
   a*=-1;
}

int main()
{
   int num;
   cout<<"num : ";
   cin>>num;
   increase(num);
   cout<<"1���� �� : "<<num<<endl;
   change(num);
   cout<<"��ȣ �ٲ� �� : "<<num<<endl;

   return 0;
}