#include <iostream>
#include <map>
int main()
{
	const int people = 3;
	std::map<int, int> m;

	for (int i = 0; i < people; i++) {
		int n;
		std::cin >> n;
		for (int j = 0; j < n; j++) {
			int val; std::cin >> val;
			++m[val];
		}
	}

	std::map<int, int>::iterator m_iter = m.begin();
	int count = 0;
	while (m_iter != m.end()) {		
		if (m_iter->second == people){
        ++count;
         }
        ++m_iter;
	}
	std::cout << count;
    return 0;
}