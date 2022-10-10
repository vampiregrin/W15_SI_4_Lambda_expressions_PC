#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <string>



std::vector<int> vect{ 10, 20, 30, -1, -5, 10, 0, -20 };


int positive_sum(const std::vector<int> arr) {

    int sum = 0;

    sum = std::accumulate(arr.begin(), arr.end(), 0, [](int sum, int i)
        {
            if (i > 0)
                return sum + i;
            else
                return sum;
        });
    return sum;
}


std::vector<int> MonkeyCount(int n) {
    
    std::vector<int> vec(n);

    std::generate(vec.begin(), vec.end(), []() {
        static int i;
        return ++i;
        });

    return vec;
}

std::vector<int> digitize(const int& n) {
    std::string s = std::to_string(n);
    std::vector<int> vec(s.length());
    std::transform(s.begin(), s.end(),
        vec.begin(),
        [](char c) {return (int)c - 48; });

    return vec;
}

int calc(const std::string& x) {
    
    int difference = 0;
    std::vector<int> temp(x.size());
    std::transform(x.begin(), x.end(), temp.begin(), [](char a) {return (int)a; });
    std::string s = "";
    for (size_t i = 0; i < temp.size(); i++) {
        s += std::to_string(temp[i]);
    }
    int N = std::count_if(s.begin(), s.end(), [](char liczba) { return (liczba == '7'); });
    difference = 6 * N;
    return difference;
}

int main() {
	//std::cout << positive_sum(vect);
    
   /*std::vector<int> v = MonkeyCount(5);
    for (auto i : v) {
        std::cout << i;
    }*/

    /*std::vector<int> vec = digitize(2137);
    for (auto i : vec) {
        std::cout << i;
    }*/
    return 0;

}