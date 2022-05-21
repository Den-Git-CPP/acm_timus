#include <iostream>
#include <string>
//https://codeforces.com/blog/entry/5217?locale=ru
 signed main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string s;     
    std::cin>>s;
    long long n;
    std::cin>>n;
    long long a = n/16777216;
    n = n%16777216;
    long long b = n/65536;
    n = n%65536;
    long long c = n/256;
    long long d = n%256;
    std::cout<<a + b*256+c*65536+d*16777216<<std::endl;

    return 0;
}