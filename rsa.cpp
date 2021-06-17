#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<time.h>
using namespace std;

unsigned long long int to_b_prime(int a){

  int size = pow(a, 10);
  int range = pow(10, 4);
  unsigned long long int n = rand()% range + size;
  return n;
}

int power(int x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;

    while (y > 0)
    {

        if (y & 1)
            res = (res*x) % p;


        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}


bool miillerTest(int d, unsigned long long int n)
{

    int a = 2 + rand() % (n - 4);


    int x = power(a, d, n);

    if (x == 1  || x == n-1)
       return true;


    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;

        if (x == 1)      return false;
        if (x == n-1)    return true;
    }


    return false;
}


bool isPrime(unsigned long long int n, int k)
{

    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;


    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;


    for (int i = 0; i < k; i++)
         if (!miillerTest(d, n))
              return false;

    return true;
}

unsigned long long int prime_checked(int a){
  /*int first_primes_list[100] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
                     31, 37, 41, 43, 47, 53, 59, 61, 67,
                     71, 73, 79, 83, 89, 97, 101, 103,
                     107, 109, 113, 127, 131, 137, 139,
                     149, 151, 157, 163, 167, 173, 179,
                     181, 191, 193, 197, 199, 211, 223,
                     227, 229, 233, 239, 241, 251, 257,
                     263, 269, 271, 277, 281, 283, 293,
                     307, 311, 313, 317, 331, 337, 347, 349};*/

  int k = 4;
  bool loop = true;
  while(loop)
  {
      unsigned long long int n = to_b_prime(a);
      if(n%2 != 0)
      {
        if(isPrime(n,k))
        {
          //cout<<n<<"true"<<endl;
          loop = false;
          return n;

        }

      }

      /*else
      {
        cout<<n<<endl;
      }*/

  }

}

int main(){
  srand(time(0));
  unsigned long long int p = prime_checked(2);

  unsigned long long int q = prime_checked(3);

  int e = 3;
  int k = 2;
  unsigned long long int n = p * q;
  double d = (k*(p-1)*(q-1) + 1)/e;

  string input;

  cout<<"Enter the data to be encrypted: "<<endl;
  cin>>input;
  int len = input.length();

  int converted[len];

  int encrypted_data[len];

  for(int i = 0; i < len; i++)
  {
    converted[i] = input[i];
  }

  cout<<"Encrypted data: "<<endl;

  for(int i = 0; i < len; i++)
  {
    int z = pow(converted[i], e);
    encrypted_data[i] = z % n;
    cout<<encrypted_data[i]<<" ";
  }

  






}
