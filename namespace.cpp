#include <iostream>
namespace apple
{
    void printVal()
    {
        std::cout << "this is from apple namespace";
    }
}

int main(int argc, char const *argv[])
{
    /* code */

    apple::printVal();
    return 0;
}
