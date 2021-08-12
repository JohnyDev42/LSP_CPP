#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>

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
    int size,fd;
    char buff[10];
    fd= open("file.txt",O_RDWR|O_CREAT,0777);
    pid_t mypid;
    mypid = getpid();
    size = read(fd,&buff,10);

    cout<<mypid<<endl<<buff<<endl;
    return 0;
}