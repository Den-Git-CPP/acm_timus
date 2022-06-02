#include <iostream>
int n;
int main(){
	std::cin>>n;
	
    if(n==2){
		std::cout<<"2\n";
		std::cout<<"2 2\n";
		return 0;
	};
	std::cout<<n+n-4;
	std::cout<<"2";
	for(int i=3;i<n;++i) {std::cout<<i;};
	for(int i=n-1;i>1;--i) {std::cout<<i;};
	std::cout<<"\n";
    
	return 0;
}