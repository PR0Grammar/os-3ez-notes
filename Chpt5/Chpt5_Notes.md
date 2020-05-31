# Chapter 5 - Process API

## 5.1 - fork()

Creates a new process

## 5.2 - wait()

waits for child process to finish executing
waitpid(pid) waits for pid to finish executing


# 5.3 - exec()

hands control over to another program and executes that program rather than the same program (when child process is created)

no execution of code from the original program is done after exec() call.

# 5.4 - Why?

fork() and exec() separation is eseential for a UNIX shell. The shell can run code after fork() but before exec() (allowing for OS env to adjust to programs that are about to run)

Example:

Redirection from std out (to a file)
    wc abc.txt > output.txt

Piping of input & outputs (pipe() sys call)
    grep -o abc file.txt | wc -l 

# 5.5 - Process Control and Users

