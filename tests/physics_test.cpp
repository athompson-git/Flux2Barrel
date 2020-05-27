#include <iostream>

#include "../src/physics.cc"


using namespace std;




int main() {

    Lorentz four_vec;

    cout << four_vec.Px() << endl;

    four_vec.Set(0.5, 0.5, 2.3, 1.7);


    std::cout << four_vec.Px() << std::endl;
    std::cout << "hello world!" << std::endl;


    return 0;



}