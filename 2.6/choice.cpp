#include<iostream>
#include<vector>
#include<algorithm>

void SelectionSort(std::vector<int>& values) {
  for (auto i = values.begin(); i != values.end(); ++i) {
    auto j = std::min_element(i, values.end());
    std::swap(*i, *j);
  }
}

int main(){
	int a;
    std::cin >> a;
    std::vector<int> v;
    int b;
    for (int i = 0; i < a; i++){
        std::cin >> b;
    	v.push_back(b);
    }
    SelectionSort(v);
    for(int i : v){
    	std::cout << i << " ";
    }
    std::cout << "\n";
}
