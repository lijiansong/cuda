#include<iostream>
#include<thread>
//using namespace std;
void hello()
{
    std::cout<<"hello world, pthread!\n";
}
int main()
{
    std::thread t(hello);
    t.join();
    return 0;
}
