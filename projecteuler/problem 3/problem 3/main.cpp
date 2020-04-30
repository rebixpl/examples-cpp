#include <iostream>

using namespace std;
int main()
{
long long num = 600851475143, answer;

cout<<"The prime factors are: ";



for (long long i=2; i <= num; i++)
{
 while(num % i == 0)
 {
   num /= i;// "num" divided by "i" is now "num"
   answer+=i;
   cout<<i<<" ";
 }
}
}
