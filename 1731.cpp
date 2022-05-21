#include <iostream>
int main()
{    
	int N,M,i,result;
    std::cin>>N>>M;
 	for (i = 1; i <= N; i++){
        std::cout<<i<<' ';
        };
    std::cout<<std::endl;
 	result=M;
     for (i = 1; i <= M; i++){
        if (i % 2 == 0){
        result =result*2;
        std::cout<<result<<' ';
        } else{
        result=result+2;
        std::cout<<result<<' ';
        };
     };
     std::cout<<std::endl;
	return 0;
}