//
//  main.cpp
//  Task 2 (HW1)
//
//  Created by Никита on 11/13/19.
//

#include <iostream>

int countYears(const int &r, const int &m, const int &p) {
    double yeargrowe {0};
    int i {0};
    double sum = r;
    while (sum < m) {
        yeargrowe = (sum * p) / 100;
        sum = sum + yeargrowe;
        i++;
    }
    return i;
}

int main() {
    int r;
    std::cout << "Enter r: ";
    std::cin >> r;
    
    int m;
    std::cout << "Enter m: ";
    std::cin >> m;
    
    int p;
    std::cout << "Enter p: ";
    std::cin >> p;
    
    int i = countYears(r, m, p);
    std::cout << "Years = " << i << '\n';
    
    return 0;
}


