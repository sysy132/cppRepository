#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

int main()
{
    std::string str;
    std::cout << str << std::endl;
    ::std::vector<int> res{1, 2, 3, 4};
    ::std::cout << ::std::this_thread::get_id() << ::std::endl;
    return 0;
}