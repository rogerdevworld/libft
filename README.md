# Libft README.md

**Libft** es una biblioteca personalizada escrita en C que implementa una colección de funciones estándar de la biblioteca C, junto con funciones adicionales para manipulación de cadenas, memoria y estructuras de listas. El objetivo de este proyecto es crear una base sólida de funciones reutilizables para futuros proyectos.

---

## Funciones incluidas

### Funciones de la biblioteca estándar (my_libft)

1. **ft_atoi**: Convierte una cadena de caracteres a un número entero.  
```bash
man ft_atoi
```
2. **ft_isascii**: Verifica si un carácter es un carácter ASCII.  
```bash
man ft_isascii
```
3. **ft_memcpy**: Copia un bloque de memoria de un lugar a otro.  
   - 
```bash
   man ft_memcpy
   ```
4. **ft_putstr_fd**: Imprime una cadena de caracteres a un descriptor de archivo.
   - 
```bash
   man ft_putstr_fd
   ```
5. **ft_strlcat**: Añade una cadena al final de otra de manera segura.  
   - 
```bash
   man ft_strlcat
   ```
6. **ft_strrchr**: Busca la última ocurrencia de un carácter en una cadena.  
   - 
```bash
   man ft_strrchr
   ```
7. **ft_isdigit**: Verifica si un carácter es un dígito numérico.  
   - 
```bash
   man ft_isdigit
   ```
8. **ft_memmove**: Mueve un bloque de memoria de un lugar a otro, gestionando solapamientos.  
   - 
```bash
   man ft_memmove
   ```
9. **ft_strlcpy**: Copia de manera segura una cadena a otra.  
   - 
```bash
   man ft_strlcpy
   ```
10. **ft_strtrim**: Elimina los caracteres especificados al principio y final de una cadena.  
   - 
```bash
    man ft_strtrim
```
11. **ft_bzero**: Rellena un bloque de memoria con ceros.  
   - 
```bash
    man ft_bzero
```
12. **ft_isprint**: Verifica si un carácter es imprimible.  
   - 
```bash
    man ft_isprint
```
13. **ft_memset**: Rellena un bloque de memoria con un valor específico.  
   - 
```bash
    man ft_memset
```
14. **ft_strchr**: Busca la primera ocurrencia de un carácter en una cadena.  
   - 
```bash
    man ft_strchr
```
15. **ft_strlen**: Calcula la longitud de una cadena.  
   - 
```bash
    man ft_strlen
```
16. **ft_calloc**: Reserva memoria e inicializa a cero.  
   - 
```bash
    man ft_calloc
```
17. **ft_putchar_fd**: Imprime un solo carácter en un descriptor de archivo.  
   - 
```bash
    man ft_putchar_fd
```
18. **ft_strdup**: Crea una copia de una cadena.  
   - 
```bash
    man ft_strdup
```
19. **ft_strmapi**: Aplica una función a cada carácter de una cadena y devuelve la nueva cadena.  
   - 
```bash
    man ft_strmapi
```
20. **ft_tolower**: Convierte un carácter a minúscula.  
   - 
```bash
    man ft_tolower
```
21. **ft_substr**: Extrae una subcadena de una cadena.  
   - 
```bash
    man ft_substr
```
22. **ft_isalnum**: Verifica si un carácter es alfanumérico.  
   - 
```bash
    man ft_isalnum
```
23. **ft_memchr**: Busca un carácter dentro de un bloque de memoria.  
    - `man ft_memchr`
24. **ft_putendl_fd**: Imprime una cadena seguida de un salto de línea en un descriptor de archivo.  
    - `man ft_putendl_fd`
25. **ft_striteri**: Aplica una función a cada carácter de una cadena, pasando su índice.  
    - `man ft_striteri`
26. **ft_strncmp**: Compara dos cadenas hasta un número específico de caracteres.  
    - `man ft_strncmp`
27. **ft_toupper**: Convierte un carácter a mayúscula.  
    - `man ft_toupper`
28. **ft_isalpha**: Verifica si un carácter es una letra alfabética.  
    - `man ft_isalpha`
29. **ft_memcmp**: Compara dos bloques de memoria.  
    - `man ft_memcmp`
30. **ft_putnbr_fd**: Imprime un número entero en un descriptor de archivo.  
    - `man ft_putnbr_fd`
31. **ft_strjoin**: Concatena dos cadenas.  
    - `man ft_strjoin`
32. **ft_strnstr**: Busca una subcadena dentro de una cadena hasta un número específico de caracteres.  
    - `man ft_strnstr`
33. **ft_split**: Divide una cadena en un array de cadenas según un delimitador.  
    - `man ft_split`
34. **ft_itoa**: Convierte un número entero en una cadena.  
    - `man ft_itoa`

---

### Funciones adicionales (Bonus)

1. **ft_lstnew_bonus**: Crea un nuevo nodo de lista.  
2. **ft_lstadd_front_bonus**: Añade un nodo al principio de una lista.  
3. **ft_lstsize_bonus**: Calcula el tamaño de una lista.  
4. **ft_lstlast_bonus**: Devuelve el último nodo de una lista.  
5. **ft_lstadd_back_bonus**: Añade un nodo al final de una lista.  
6. **ft_lstdelone_bonus**: Elimina un nodo de la lista.  
7. **ft_lstclear_bonus**: Elimina todos los nodos de la lista.  
8. **ft_lstiter_bonus**: Aplica una función a cada nodo de la lista.  
9. **ft_lstmap_bonus**: Aplica una función a cada nodo de la lista y devuelve una nueva lista.  

---

## Compilación con `make`

El proyecto incluye un único **Makefile** que compila automáticamente todos los archivos de la biblioteca.

Para compilar la biblioteca y generar el archivo estático `libft.a`, simplemente ejecuta el siguiente comando en la terminal:

```bash
make
```
## Compilación con `make bonus`

El comando make bonus compila tanto las funciones estándar como las funciones adicionales (bonus). Esto incluye las funciones relacionadas con listas enlazadas y otras funcionalidades extra.

Para compilar la biblioteca y generar el archivo estático `libft.a`, simplemente ejecuta el siguiente comando en la terminal:

```bash
make bonus
```
## Eliminar con `make clean`

El comando make clean elimina los archivos objeto `.o` generados durante la compilación, pero no elimina el archivo final `libft.a`.

Para eliminar los archivo `.o` creado  `libft.a`, simplemente ejecuta el siguiente comando en la terminal:

```bash
make clean
```
## Eliminar con `make fclean`

El comando make fclean elimina todos los archivos generados durante la compilación:

--Elimina los archivos objeto `.o`.
--Elimina el archivo de la biblioteca estática `libft.a`.
Para eliminar los archivo `.o` Y `libft.a`, simplemente ejecuta el siguiente comando en la terminal:

```bash
make fclean
```
