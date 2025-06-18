# Libft
A project from the 42 curriculum to recreate a personal C library by reimplementing essential standard library functions and creating useful additional utilities.

My very first own library!

## 📑 Table of Contents

- [Project Description](#project-description)  
- [Core Functions](#core-functions)
- [Bonus Functions](#bonus-functions)
- [How It Works](#how-it-works)  
- [Concepts Learned](#concepts-learned)  
- [Notes](#notes)  
- [Bonus Objectives Achieved](#bonus-objectives-achieved)
- [Character Checks (ctype-like functions)](#character-checks-ctype-like-functions)  
- [String Functions](#string-functions)  
- [Memory Functions](#memory-functions)  
- [Conversion Functions](#conversion-functions)  
- [Output Functions (using write)](#output-functions-using-write)  
- [Linked List Functions (Bonus)](#linked-list-functions-bonus)  

## 📚 Project Description
**libft** is a custom C library that includes a wide range of fundamental functions, such as string manipulation, memory management, character checks, and linked list operations. This project is designed to deepen your understanding of C programming fundamentals including pointers, memory allocation, and low-level algorithm implementation.

## ✅ Core Functions
Includes reimplementations of many standard C functions such as:
```bash
size_t  ft_strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
char    *ft_strchr(const char *s, int c);
int     ft_isalpha(int c);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);
```
And many more for strings, memory, and character checks.

## Bonus Functions
Includes additional utilities such as:
```bash
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}               t_list;

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
void    ft_lstclear(t_list **lst, void (*del)(void *));
```
These functions handle singly linked lists and give you a solid foundation for working with dynamic data structures.

## ⚙️ How It Works
- Each function mimics the behavior of the original standard function.
- Memory is managed manually using malloc, free, and write.
- Utility functions are modular and reusable.
- Code is written in C with strict adherence to 42 coding standards.

## 🧠 Concepts Learned
- Manual memory management (malloc, free).
- Pointer manipulation and string processing.
- Implementation of common C standard library functions.
- Linked list creation and management.
- Writing modular, reusable C code.
- Understanding and following coding standards.

## 📌 Notes
- All functions were tested for correct behavior and edge cases.
- Make sure to handle memory leaks and invalid inputs carefully.
- The library serves as a foundation for many future 42 projects.

## 🏁 Bonus Objectives Achieved
✅ Implemented linked list functions.
✅ Created additional utility functions beyond the mandatory ones.
✅ Ensured code quality and readability according to 42 standards.
✅ Thoroughly tested functions for robustness.

---

# Libft — Function List
## 🅰️ Character Checks (ctype-like functions)
| Function     | Description                         |
| ------------ | ----------------------------------- |
| `ft_isalpha` | Checks if character is alphabetic   |
| `ft_isdigit` | Checks if character is a digit      |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII        |
| `ft_isprint` | Checks if character is printable    |

## 🔤 String Functions
| Function     | Description                                       |
| ------------ | ------------------------------------------------- |
| `ft_strlen`  | Returns the length of a string                    |
| `ft_strchr`  | Locates the first occurrence of a character       |
| `ft_strrchr` | Locates the last occurrence of a character        |
| `ft_strncmp` | Compares two strings up to n characters           |
| `ft_strlcpy` | Copies a string with size limit                   |
| `ft_strlcat` | Concatenates strings with size limit              |
| `ft_strdup`  | Duplicates a string                               |
| `ft_substr`  | Returns a substring from a given string           |
| `ft_strjoin` | Joins two strings into a new one                  |
| `ft_strtrim` | Trims characters from beginning and end           |
| `ft_split`   | Splits a string by a delimiter into an array      |
| `ft_strmapi` | Applies a function to each character (with index) |

## 🧠 Memory Functions
| Function     | Description                         |
| ------------ | ----------------------------------- |
| `ft_memset`  | Fills memory with a constant byte   |
| `ft_bzero`   | Sets memory to zero                 |
| `ft_memcpy`  | Copies memory area                  |
| `ft_memmove` | Copies memory area, handles overlap |
| `ft_memchr`  | Scans memory for a byte             |
| `ft_memcmp`  | Compares two memory areas           |
| `ft_calloc`  | Allocates and zeroes memory         |

## 🔢 Conversion Functions
| Function  | Description                |
| --------- | -------------------------- |
| `ft_atoi` | Converts string to integer |
| `ft_itoa` | Converts integer to string |

## 📤 Output Functions (using write)
| Function        | Description                                 |
| --------------- | ------------------------------------------- |
| `ft_putchar_fd` | Writes a character to given file descriptor |
| `ft_putstr_fd`  | Writes a string to given file descriptor    |
| `ft_putendl_fd` | Writes a string followed by newline         |
| `ft_putnbr_fd`  | Writes an integer to given file descriptor  |

## 🔗 Linked List Functions (Bonus)
| Function          | Description                               |
| ----------------- | ----------------------------------------- |
| `ft_lstnew`       | Creates a new list node                   |
| `ft_lstadd_front` | Adds a node at the beginning of a list    |
| `ft_lstsize`      | Returns the number of elements in a list  |
| `ft_lstlast`      | Returns the last node of a list           |
| `ft_lstadd_back`  | Adds a node at the end of a list          |
| `ft_lstdelone`    | Deletes a node using a delete function    |
| `ft_lstclear`     | Deletes and frees the entire list         |
| `ft_lstiter`      | Applies a function to each list element   |
| `ft_lstmap`       | Creates a new list by applying a function |
