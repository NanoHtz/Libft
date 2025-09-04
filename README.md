<!-- ===================== BANNER ===================== -->
<p align="center">
  <img src="https://raw.githubusercontent.com/NanoHtz/Assets/main/libft/banner.svg" alt="Libft banner">
</p>

<p align="center"><i>🧱 Libft — Tu biblioteca estándar en C desde cero: memoria, strings, caracteres y listas enlazadas; base reutilizable para el resto de proyectos 42.</i></p>

---

## Índice
- [Resumen](#resumen)
- [¿Para qué?](#para-que)
- [Explicación](#explicacion)
- [Compilación](#compilacion)

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
- **Diseño de API**: prefijo `ft_`, firmas consistentes, documentación mínima por función.
- **Makefile & organización**: compilar en `libft.a`, reglas `all/clean/fclean/re/bonus`.

---

<a id="explicacion"></a>
  <summary><h3>📝 Explicación</h3></summary>

### 📚 Módulos y funciones

**1) Memoria**
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

**2) Cadenas (string)**
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strdup`, `ft_strnstr`

**3) Caracteres (ctype)**
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

**4) Extra (utilidades)**
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_atoi`

**5) Salida por FD (`_fd`)**
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**6) Bonus: `t_list`**
```c
typedef struct s_list {
  void          *content;
  struct s_list *next;
} t_list;
```

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
``
