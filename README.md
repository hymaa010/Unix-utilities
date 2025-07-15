# Simple Unix Utilities in C

This repository contains simplified implementations of common Unix command-line tools written in C:

- `pwd` — Print current working directory  
- `echo` — Print input string to stdout  
- `cp` — Copy a file from source to destination  
- `mv` — Move (or rename) a file to a new location  
- `cat` — Display the contents of a file to stdout  

## 🛠 Compilation Commands

You can compile each program using `gcc`:

```bash
gcc pwd.c -o pwd
gcc echo.c -o echo
gcc cp.c -o cp
gcc mv.c -o mv
gcc cat.c -o cat
```

## ▶️ Usage Examples

### `pwd`
Prints the current working directory:
```bash
$ ./pwd
/home/ibrahim/projects/unix-utils
```

### `echo`
Prints a message to stdout:
```bash
$ ./echo Hello World
Hello World
```

### `cp`
Copies a file to a new location:
```bash
$ ./cp file.txt /tmp/file_copy.txt
```

### `mv`
Moves (or renames) a file:
```bash
$ ./mv /tmp/file.txt /home/reda/new_name.txt
```

### `cat`
Displays the contents of a file:
```bash
$ ./cat file.txt
This is the content of file.txt
```

## ⚙️ Notes

- These are basic versions of the utilities; they don’t support flags or advanced behavior.
- System calls used include: `getcwd()`, `read()`, `write()`, `open()`, `close()`, `unlink()`, and `rename()`.
- Each program includes error checking and usage messages.
