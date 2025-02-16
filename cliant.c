#include "minitalk.h"

#include <stdlib.h>


void send_message(int pid, int message)
{
    if(message == 1)
        kill(pid, SIGUSR1);
    else if (message == 0)
    {
        kill(pid, SIGUSR2);
    }
    
    printf("done");
}
int main(int argc, char *argv[])
{
    int sig = atoi(argv[1]);
    int message = atoi(argv[2]);
    printf("%d\n", sig);
    send_message(sig, message);
    (void)argc;
}