#include <iostream>

bool b[1000000];
unsigned long long p[1000000];
int np = 0;


void sieve(int N)
{
    for(unsigned long long i = 2; i < N; i++)
    {
        if(!b[i])
        {
            p[np++] = i;
            for(unsigned long long j = i*i; j > 0 && j < N; j += i)
                b[j] = true;
        }
    }
}

unsigned long long algo(unsigned long long L, unsigned long long R)
{
    unsigned long long tot = R-L+1;
    for(int i = 0; p[i]*p[i] <= R && i < np; i++)
    {
        int exp = 0;
        unsigned long long mul = 1;
        for(int j = 1; mul < R; j++)
        {
            while(exp++ < p[j] - 1)
            {
                mul *= p[i];
                if(mul > R)
                    break;
            }
            if(mul >= L && mul <= R)
                tot--;
            else if(mul > R)
                break;
            mul *= p[i];
        }
    }
    return tot;
}

int main()
{
    sieve(1000000);
    unsigned long long L, R;
    std::cin >> L >> R;
    std::cout << algo(L, R) << std::endl;
}