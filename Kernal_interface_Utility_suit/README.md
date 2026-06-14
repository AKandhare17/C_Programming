# Kernel Interface Utility Suite

**Technology:** C Programming, Linux System Programming, Native System Calls

---

## Project Overview

This project is a custom-built Kernel Interface Utility Suite that programmatically implements major Linux commands using native system calls.

Instead of relying on existing GNU utilities, each command is built from scratch to understand its internal working at the OS level. All commands are enhanced with additional features for improved user interaction and customization.

Executables are integrated into the system PATH, replacing default utilities for learning purposes. Each command is uniquely identified with the postfix letter `x` (e.g., `lsx`, `pwdx`, `cpx`).

---

## Commands Implemented

| Command  | Equivalent | Description                                         |
|----------|------------|-----------------------------------------------------|
| `pwdx`   | `pwd`      | Print current working directory                     |
| `lsx`    | `ls`       | List directory contents                             |
| `cdx`    | `cd`       | Change current directory                            |
| `rmx`    | `rm`       | Remove files or directories                         |
| `cpx`    | `cp`       | Copy files                                          |
| `mvx`    | `mv`       | Move or rename files                                |
| `catx`   | `cat`      | Display file contents                               |
| `touchx` | `touch`    | Create an empty file                                |
| `statx`  | `stat`     | Display file metadata (basic)                       |
| `statx2` | `stat`     | Display file metadata (extended alternate impl.)    |
| `unamex` | `uname`    | Print system and kernel information                 |
| `wcx`    | `wc`       | Count lines, words, and bytes in a file             |

---

## Native System Calls Used

Instead of using library-level functions, this suite is implemented using low-level system calls:

| Category              | System Calls                                   |
|-----------------------|------------------------------------------------|
| File I/O              | `open()`, `read()`, `write()`, `close()`       |
| File Metadata         | `stat()`, `lstat()`                            |
| Directory Operations  | `opendir()`, `readdir()`, `mkdir()`, `rmdir()` |
| File Management       | `unlink()`, `chmod()`                          |
| Process Control       | `fork()`, `exec()`, `wait()`                   |

This provides complete control over file handling, process creation, and directory traversal.

---

## Features

- Improved error handling and descriptive logging
- Input validation for safer execution
- Modular code structure — one command per file
- Standardized argument parsing across all commands
- Robust edge-case handling

---

## Project Structure

```
kernel-utility-suite/
├── catx.c
├── cdx.c
├── cpx.c
├── lsx.c
├── mvx.c
├── pwdx.c
├── rmx.c
├── statx.c
├── statx2.c
├── touchx.c
├── unamex.c
└── wcx.c
```

Each `.c` file is self-contained and compiles to a standalone executable.

---

## Build & Usage

### Compile
```bash
gcc pwdx.c -o pwdx
gcc wcx.c -o wcx
# repeat for each command
```

### Add executables to PATH
```bash
echo 'export PATH=$PATH:/path/to/your/executables' >> ~/.bashrc
source ~/.bashrc
```

### Run
```bash
pwdx
lsx /home/user
cpx source.txt destination.txt
wcx -l file.txt
wcx -w file.txt
wcx -c file.txt
```

---

## What This Project Demonstrates

- Deep understanding of Linux system calls
- How Linux commands actually work internally at the OS level
- File descriptor lifecycle management
- Directory handling and inode concepts
- Process creation and execution flow via `fork()` and `exec()`
- Understanding PATH variable and executable resolution
- Hands-on exposure to OS-level programming in C

---

## Environment

- **OS:** Linux (any POSIX-compliant distro)
- **Language:** C
- **Compiler:** GCC
- **Dependencies:** None — only standard POSIX headers (`unistd.h`, `fcntl.h`, `sys/stat.h`, `dirent.h`)

---

## Note

These commands are intended for learning purposes. Placing them in the system PATH replaces default utilities — use in an isolated or development environment only.