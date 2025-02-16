#include "minitalk.h"

void handle_signal(int sign, siginfo_t *info, void *context)
{
    if(sign == SIGUSR1)
        printf("0");
    else if(sign == SIGUSR2)
        printf("1");
    (void)info;
    (void)context;
}
int main()
{
    struct sigaction sa;

    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = handle_signal;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    printf("MY PID----->%d\n", getpid());
    while (1)
    {
        pause();
    }
    
    return (0);
}
