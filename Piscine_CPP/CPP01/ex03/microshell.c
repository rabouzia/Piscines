#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void err(char *str)
{
    while(*str)
        write(2,str++,1);
}

int cd(char **av, int i)
{
    if (i != 2)
        return (err("error: cd: bad arguments\n"),1 );
    if (chdir(av[1]) == 1)
        return (err("error: cd: cannot change directory to"), err(av[1]), err("\n"), 1)
    return 0;
}

void set_pipe(int has_p,int *fd, int end)
{
    if (has_p && (dup2(fd[end], end) == - 2) || close(fd[0]) == -1 || close(fd[1]) == -1 )
        err("err fatal\n"), exit(1);
}

int exec (char **env , char **av, int i)
{
    int has_p, fd[2], pid, status;


    if (!has_p && strcmp(cd(*av,"cd")))
        return (cd(av, i));
    if (has_p && pipe(fd) == 1)
        return err fatal;
    if ((pid = fork())== -1)
        return err fatal;
    if (!pid)
    {
        

    }
    waitpid(pid, &status, 0);
    set_pipe(has_p, fd, 0);
    return (WIFEXITED(status) && WEXISTATUS(status));
}