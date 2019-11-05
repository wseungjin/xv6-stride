// #include "types.h"
// #include "stat.h"
// #include "user.h"

// int main(void)
// {
//     int rc =fork();
//     printf(1,"hello world (pid:%d)\n",getpid());

//     if(rc<0)
//     {
//         exit();
//     }
//     else if(rc==0)
//     {
//         printf(1,"hello world, I am child (pid:%d)\n",getpid());
//         mysyscall(getpid());
//         exit();
//     }
//     else
//     {
//         wait();
//         printf(1,"hello world, I am parent of (pid:%d)\n",rc,getpid());
//         mysyscall(getpid());
//         exit();
//     }
    
// }