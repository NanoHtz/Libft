<!-- ===================== BANNER ===================== -->
<p align="center">
  <img src="https://raw.githubusercontent.com/NanoHtz/Assets/main/libft/banner.svg" alt="Libft banner">
</p>

<p align="center"><i>🧱 Libft — Tu biblioteca estándar en C desde cero: memoria, strings, caracteres y listas enlazadas; base reutilizable para el resto de proyectos 42.</i></p>

<p align="center">
  <img src="https://raw.githubusercontent.com/NanoHtz/Assets/main/100.png" alt="Libft nota" height="120">
</p>


## Índice
- [Resumen](#resumen)
- [¿Para qué?](#para-que)
- [Explicación](#explicacion)
- [Compilación](#compilacion)
- [Pruebas](#pruebas)

---
<a id="resumen"></a>
## ✅ Resumen del proyecto<br>

**Libft** es una biblioteca en C que reimplementa funciones esenciales de la libc (manejo de memoria, cadenas, conversión y comprobación de caracteres) y añade utilidades propias (substring, split, join, trim, I/O sobre file descriptors y una **lista enlazada simple** `t_list` como bonus).  
El resultado es un **archivo estático** `libft.a` que podrás vincular en todos tus proyectos del cursus.

---

<a id="para-que"></a>
## 🧩 ¿Para qué?

**¿Qué se aprende?**
- **Punteros y memoria**: regiones contiguas, `memcpy` vs `memmove`, ownership, `malloc`/`free`.
- **Cadenas y caracteres**: funciones seguras de copia/concatenación (`strlcpy`, `strlcat`), búsquedas y cortes.
- **Conversión y validación**: `atoi`/`itoa`, `isalpha`/`isdigit`…, y tratamiento de edge cases.
- **Makefile & organización**: compilar en `libft.a`, reglas `all/clean/fclean/re/bonus`.

---

<a id="explicacion"></a>
  <summary><h3>📝 Explicación</h3></summary>

### 📚 Módulos y funciones

**1) Cadenas**
<br>
- `ft_strlen:` Calcula la longitud de una cadena.
- `ft_strcpy, ft_strncpy:` Copian una cadena en otra.
- `ft_strdup:` Duplica una cadena en un nuevo bloque de memoria.
- `ft_strcat, ft_strncat:` Concatenan cadenas.
- `ft_strchr, ft_strrchr:` Localizan caracteres dentro de una cadena.
- `ft_strcmp, ft_strncmp:` Comparan cadenas de caracteres.
- `ft_strstr, ft_strnstr:` Encuentran subcadenas dentro de una cadena

**2) Caracteres**

- `ft_isalpha:` Verifica si el carácter es alfabético.
- `ft_isdigit:` Verifica si el carácter es numérico.
- `ft_isalnum:` Verifica si el carácter es alfanumérico.
- `ft_isascii:` Verifica si el carácter es ASCII.
- `ft_isprint:` Verifica si el carácter es imprimible.

**3) Conversion**

- `ft_atoi:` Convierte una cadena en un número entero.
- `ft_itoa:` Convierte un número entero en una cadena.
- `ft_tolower, ft_toupper:` Convierten caracteres entre mayúsculas y minúsculas.

**4) Memoria**

- `ft_memset:` Rellena un bloque de memoria con un valor específico.
- `ft_bzero:` Llena con ceros un bloque de memoria.
- `ft_memcpy, ft_memccpy:` Copian memoria de una ubicación a otra.
- `ft_memmove:` Mueve un bloque de memoria (seguro ante solapes).
- `ft_memchr:` Busca un byte en un bloque de memoria.
- `ft_memcmp:` Compara dos bloques de memoria.
- `ft_calloc:` Reserva y limpia un bloque de memoria.

**5) Adicionales**

- `ft_substr:` Crea una subcadena a partir de una cadena dada.
- `ft_strjoin:` Une dos cadenas en una nueva cadena.
- `ft_strtrim:` Elimina caracteres en blanco al inicio y final de una cadena.
- `ft_split:` Divide una cadena en subcadenas utilizando un delimitador.
- `ft_strmapi:` Aplica una función a cada carácter de una cadena, generando una nueva.

**6) Salida por FD (`_fd`)**

- `ft_putchar_fd:` Escribe un carácter en un descriptor de archivo.
- `ft_putstr_fd:` Escribe una cadena en un descriptor de archivo.
- `ft_putendl_fd:` Escribe una cadena seguida de un salto de línea en un descriptor de archivo.
- `ft_putnbr_fd:` Escribe un número en un descriptor de archivo.

**6) Bonus: `t_list`**
```c
typedef struct s_list {
  void          *content;
  struct s_list *next;
} t_list;
```

`ft_lstnew:` Crea un nuevo nodo de lista.
`ft_lstadd_front:` Añade un nodo al inicio de la lista.
`ft_lstadd_back:` Añade un nodo al final de la lista.
`ft_lstsize:` Calcula el número de nodos en una lista.
`ft_lstlast:` Devuelve el último nodo de la lista.
`ft_lstdelone:` Elimina un nodo de la lista sin liberar la lista entera.
`ft_lstclear:` Elimina todos los nodos de la lista y libera la memoria.
`ft_lstiter:` Aplica una función a cada nodo de la lista.
`ft_lstmap:` Crea una nueva lista aplicando una función a cada nodo.

<a id="compilacion"></a>

🛠️ Compilación
Antes de compilar, asegurate de tener un main.

⬇️ Descarga
```bash
git clone https://github.com/NanoHtz/libft.git
```
🏗️ Makefile
```bash
make         # compila libft.a (mandatory)
make bonus   # añade las funciones de listas a libft.a
make clean   # elimina .o
make fclean  # elimina .o y libft.a
make re      # recompila desde cero
```
<a id="pruebas"></a>
🛠️ Pruebas
Recomiendo mucho el tester:
<br>
https://github.com/Tripouille/libftTester
