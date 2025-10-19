# libft 📖

`libft` is a custom C library project from **School 42**. The goal of this project is to reimplement standard C library functions and create additional useful functions for future projects. This library is commonly used as a foundation in other 42 projects.

---

## Table of Contents

- [Description](#description)  
- [Installation](#installation)  
- [Usage](#usage)  
- [Functions](#functions)  
- [Contributing](#contributing)  
- [License](#license)  

---

## Description

The `libft` project allows you to:

- Reimplement standard C functions such as `strlen`, `strcpy`, `memcmp`, etc.  
- Create additional utility functions for string manipulation, memory management, linked lists, and more.  
- Practice low-level C programming and understanding of memory operations.  

The library is written in **C** and compiled into a static library (`libft.a`).

---

## Installation

Clone the repository and compile the library:

```bash
git clone https://github.com/dajose-p/libft.git
cd libft
make
```

This will generate `libft.a`, which you can include in your future C projects.

---

## Usage

Include the header in your project:

```c
#include "libft.h"
```

Link the library when compiling:

```bash
cc main.c -L. -lft -o my_program
```

---

## Functions

`libft` includes:

- **Character functions**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`  
- **String functions**: `ft_strlen`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strdup`  
- **Memory functions**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`  
- **Additional functions**: `ft_atoi`, `ft_calloc`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`  
- **Linked list functions**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

> Full function list and prototypes can be found in [`libft.h`](./libft.h).

---

## Contributing

This project is primarily for personal use in **42 school** projects.  
Contributions are welcome in the form of suggestions or improvements for function implementations.

---

*Made with ❤️ by danjose-*
