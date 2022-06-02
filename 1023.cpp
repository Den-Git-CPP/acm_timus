#include <iostream>
#include <math.h>

int main(){
	int n;
    bool flag;
    
    std::cin>>n;
	flag=false;

	for(int i=3;i<=sqrt((double)n);++i)
		if(n%i==0){
			std::cout<<i-1<<std::endl;
			flag=true;
			return 0;
		}

	if(!flag){
		while(n%2==0 && n>4) n/=2;
		std::cout<<n-1<<std::endl;
	}

	return 0;
}