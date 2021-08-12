#include<iostream>
#include<sys/types.h>
#include<unistd.h>

using namespace std;

class file_ops
{
private:
    /* data */
public:
    file_ops(/* args */);
    ~file_ops();
};

file_ops::file_ops(/* args */)
{
}

file_ops::~file_ops()
{
}

int main(){
    pid_t mypid;
    mypid = getpid();
    cout<<mypid;
    return 0;
}