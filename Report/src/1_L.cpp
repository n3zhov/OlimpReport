#include <iostream>

int main() {
    int m,n;
    std::cin >> m >> n;
    if( m > n){
        std::cout << m - n;
    }else{
        std::cout << 0;
    }

    return 0;
}