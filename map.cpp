#include<iostream>
#include<map>
#include<vector>

void print_vec(const std::vector<int>& vec)
{
    for (std::vector<int>::iterator x: vec) {
         std::cout << ' ' << x;
    }
    std::cout << '\n';
}
 
int main ()
{
    std::vector<int> vec(3,100);
    print_vec(vec);
 
    std::vector<int>::iterator it = vec.begin();
    it = vec.insert(it, 200);
    print_vec(vec);
 
    vec.insert(it,2,300);
    print_vec(vec);
 
    // "it" no longer valid, get a new one:
    it = vec.begin();
 
    std::vector<int> vec2(2,400);
    vec.insert(it+2, vec2.begin(), vec2.end());
    print_vec(vec);
 
    int arr[] = { 501,502,503 };
    vec.insert(vec.begin(), arr, arr+3);
    print_vec(vec);
}
