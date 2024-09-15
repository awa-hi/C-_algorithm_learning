#include <iostream>
using namespace std;
int x = 3;
int y = 3;
int x_y[3][3] = { 0 };
int a[3][3] = { {1,1,1},
                {1,0,0},
                {1,0,0} };
int main()
{

    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
      
            std::cout << a[x][y];
        };
        printf("\n");
        
    };
    a[0][0] = 0;
    std::cout << a[0][0];
    return 0;
}
