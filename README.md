# libft
School 21 (Ecole 42) project. The aim of this project is to code a C library regrouping usual functions.

### Libc functions

* [ft_memset](/srcs/memory/ft_memset.c)
* [ft_bzero](/srcs/memory/ft_bzero.c)
* [ft_memcpy](/srcs/memory/ft_memcpy.c)
* [ft_memccpy](/srcs/memory/ft_memccpy.c)
* [ft_memmove](/srcs/memory/ft_memmove.c)
* [ft_memchr](/srcs/memory/ft_memchr.c)
* [ft_memcmp](/srcs/memory/ft_memcmp.c)
* [ft_strlen](/srcs/string/ft_strlen.c)
* [ft_strdup](/srcs/string/ft_strdup.c)
* [ft_strcpy](/srcs/string/ft_strcpy.c)
* [ft_strncpy](/srcs/string/ft_strncpy.c)
* [ft_strcat](/srcs/string/ft_strcat.c)
* [ft_strncat](/srcs/string/ft_strncat.c)
* [ft_strlcat](/srcs/string/ft_strlcat.c)
* [ft_strchr](/srcs/string/ft_strchr.c)
* [ft_strrchr](/srcs/string/ft_strrchr.c)
* [ft_strstr](/srcs/string/ft_strstr.c)
* [ft_strnstr](/srcs/string/ft_strnstr.c)
* [ft_strcmp](/srcs/string/ft_strcmp.c)
* [ft_strncmp](/srcs/string/ft_strncmp.c)
* [ft_atoi](/srcs/conv/ft_atoi.c)
* [ft_isalpha](/srcs/char/ft_isalpha.c)
* [ft_isdigit](/srcs/char/ft_isdigit.c)
* [ft_isalnum](/srcs/char/ft_isalnum.c)
* [ft_isascii](/srcs/char/ft_isascii.c)
* [ft_isprint](/srcs/char/ft_isprint.c)
* [ft_toupper](/srcs/char/ft_toupper.c)
* [ft_tolower](/srcs/char/ft_tolower.c)

### Additional functions

| Name  | Prototype | Description | 
| ---   |    ---    |     ---     | 
| [ft_memalloc](/srcs/memory/ft_memalloc.c) | void \*ft_memalloc(size_t size) | Allocates (with malloc(3)) and returns a "fresh" memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL. |
| [ft_memdel](/srcs/memory/ft_memdel.c) | void  ft_memdel(void \*\*ap) | Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL. |
| [ft_strnew](/srcs/string/ft_strnew.c) | char \*ft_strnew(size_t size) | Allocates (with malloc(3)) and returns a "fresh" string ending with '\0'. Each character of the string is initialized at '\0'. If the allocation fails the function returns NULL. |
| [ft_strdel](/srcs/string/ft_strdel.c) |  void  ft_strdel(char \*\*as) | Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL. |
| [ft_strclr](/srcs/string/ft_strclr.c) | void  ft_strclr(char \*s) | Sets every character of the string to the value '\0'. |
| [ft_striter](/srcs/string/ft_striter.c) | void  ft_striter(char \*s, void (\*f)(char \*)) | Applies the function _f_ to each character of the string passed as argument. Each character is passed by address to _f_ to bemodified if necessary. |
| [ft_striteri](/srcs/string/ft_striteri.c) | void  ft_striteri(char \*s, void (\*f)(unsigned int, char \*) | Applies the function _f_ to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to _f_ to be modified if necessary. |
| [ft_strmap](/srcs/string/ft_strmap.c) | char \*ft_strmap(char const \*s, char (\*f)(char)) | Applies the function _f_ to each character of the string given as argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of _f_. |
| [ft_strmapi](/srcs/string/ft_strmapi.c) | char \*ft_strmapi(char const \*s, char(\*f)(unsigned int, char)) | Applies the function _f_ to each character of the string passed as argument by giving its index as first argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of _f_. |
| [ft_strequ](/srcs/string/ft_strequ.c) | int  ft_strequ(char const \*s1, char const \*s2) | Lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise. |
| [ft_strnequ](/srcs/string/ft_strnequ.c) | int  ft_strnequ(char const \*s1, char const \*s2, size_t n) | Lexicographical comparison between s1 and s2 up to _n_ characters or until a '\0' is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise. |
| [ft_strsub](/srcs/string/ft_strsub.c) | char \*ft_strsub(char const \*s, unsigned int start, size_t len) | Allocates (with malloc(3)) and returns a "fresh" substring from the string given as argument. The substring begins at index _start_ and is of size _len_. If _start_ and _len_ aren't refering to a valid substring, the behavior is undefined.  If the allocation fails, the function returns NULL. |
| [ft_strjoin](/srcs/string/ft_strjoin.c) | char \*ft_strjoin(char const \*s1, char const \*s2) | Allocates (with malloc(3)) and returns a "fresh" string ending with '\0', result of the concatenation of _s1_ and _s2_. If the allocation fails the function returns NULL. |
| [ft_strtrim](/srcs/string/ft_strtrim.c) | char \*ft_strtrim(char const \*s) | Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ' ', '\n' and '\t'. If _s_ has no whitespaces at the beginning or at the end, the function returns a copy of _s_. If the allocation fails the function returns NULL. |
| [ft_strsplit](/srcs/string/ft_strsplit.c) | char \*\*ft_strsplit(char const \*s, char c) | Allocates (with malloc(3)) and returns an array of "fresh" strings (all ending with '\0', including the array itself) obtained by spliting _s_ using the character _c_ as a delimiter. If the allocation fails the function returns NULL. Example: _ft_strsplit("\*hello\*fellow\*\*\*students\*", '\*')_ returns the array \["hello", "fellow", "students"\]. |
| [ft_itoa](/srcs/conv/ft_itoa.c) | char \*ft_itoa(int n) | Allocate (with malloc(3)) and returns a "fresh" string ending with '\0' representing the integer _n_ given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL. |
| [ft_putchar](/srcs/put/ft_putchar.c) | void  ft_putchar(char c) | Outputs the character _c_ to the standard output. |
| [ft_putstr](/srcs/put/ft_putstr.c) | void  ft_putstr(char const \*s) | Outputs the string _s_ to the standard output. |/
| [ft_putendl](/srcs/put/ft_putendl.c) | void  ft_putendl(char const \*s) | Outputs the string _s_ to the standard output followed by a '\n'. |
| [ft_putnbr](/srcs/put/ft_putnbr.c) | void  ft_putnbr(int n) | Outputs the integer _n_ to the standard output. |
| [ft_putchar_fd](/srcs/put/ft_putchar_fd.c) | void  ft_putchar_fd(char c, int fd) | Outputs the char _c_ to the file descriptor fd. |
| [ft_putstr_fd](/srcs/put/ft_putstr_fd.c) | void  ft_putstr_fd(char const \*s, int fd) | Outputs the string _s_ to the file descriptor fd. |
| [ft_putendl_fd](/srcs/put/ft_putendl_fd.c) | void  ft_putendl_fd(char const \*s, int fd) | Outputs the string _s_ to the file descriptor fd followed by a '\n'. |
| [ft_putnbr_fd](/srcs/put/ft_putnbr_fd.c) | void  ft_putnbr_fd(int n, int fd) | Outputs the integer _n_ to the file descriptor fd. |
