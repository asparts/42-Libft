# 42-Libft

A foundational C library developed as part of the 42 School curriculum. This project involves re-implementing a selection of standard C library functions, providing a deeper understanding of their inner workings.

## Overview

The libft project is designed to reinforce proficiency in C programming by recreating essential functions from the standard library. This exercise emphasizes memory management, pointer operations, and adherence to coding standards.

## ✨ Features

The library includes a variety of functions categorized as follows:

### Character Classification and Conversion

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### String Manipulation

- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

### Memory Management

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### Conversion Functions

- `ft_atoi`
- `ft_itoa`

### File Descriptor Output

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

## 🗂️ Project Structure
```
42-Libft/
├── ft_*.c          # Individual function implementations
├── libft.h         # Header file with function prototypes
├── Makefile        # Build script
└── README.md       # Project documentation
```
## ⚙️ Getting Started

### 📋 Prerequisites

- GCC compiler
- Make utility

---

## 🛠️ Installation

1. **Clone the repository:**  <br>
   git clone https://github.com/asparts/42-Libft.git <br>
   cd 42-Libft <br>
2. **Compile the library:**  <br>
   make <br>
   This will generate a libft.a static library file. <br>

## Usage
Include the header file in your source code: <br>
#include "libft.h" <br>

Compile your program with the libft.a library: <br>
gcc your_program.c libft.a -o your_program <br>
