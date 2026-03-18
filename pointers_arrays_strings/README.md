# C - Pointers, arrays and strings

![Project Badge](https://img.shields.io/badge/Project-0%25-red)  

**Author:** Julien Barbier  
**Level:** Amateur  
**Weight:** 1  

Este proyecto es parte de la formación en Holberton/ALX y está enfocado en el manejo de **punteros, arrays y cadenas de caracteres en C**.  

---

## Learning Objectives

Al final de este proyecto, se espera que puedas explicar a cualquiera, sin necesidad de buscar en Google:

- Qué son los **punteros** y cómo usarlos.  
- Qué son los **arrays** y cómo usarlos.  
- Las diferencias entre **punteros y arrays**.  
- Cómo usar y manipular **strings**.  
- El **scope de las variables** en C.  

---

## Resources

Para completar este proyecto, puedes leer o ver:

- [C - Arrays](https://intranet.hbtn.io/rltoken/arrays_link)  
- [C - Pointers](https://intranet.hbtn.io/rltoken/pointers_link)  
- [C - Strings](https://intranet.hbtn.io/rltoken/strings_link)  
- [Memory Layout](https://intranet.hbtn.io/rltoken/memory_layout_link)  

---

## Requirements

- Editores permitidos: `vi`, `vim`, `emacs`  
- Todo el código se compila en **Ubuntu 20.04 LTS** usando `gcc` con las opciones:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- Todos los archivos deben terminar con una nueva línea.  
- Se debe usar **Betty style** (comprobable con `betty-style.pl` y `betty-doc.pl`).  
- No se permiten variables globales.  
- Máximo 5 funciones por archivo.  
- No se permite usar la **librería estándar**, excepto `_putchar`.  
- No hace falta subir `_putchar.c`, se usará el que provee Holberton/ALX.  
- Los prototipos de todas las funciones y de `_putchar` deben estar en el archivo **`main.h`**.  
- Se pueden usar `main.c` de ejemplo para probar las funciones, pero se usarán los **main.c oficiales** al evaluar.  

---

## Project Tasks

| Task | File | Description |
|------|------|-------------|
| 0 | `0-reset_to_98.c` | Función `void reset_to_98(int *n);` que actualiza un entero a 98 usando un puntero. |
| 1 | … | … |
| 2 | … | … |

*(Completar la tabla con todas las tareas a medida que las vayas haciendo.)*  

---

## Compilation Example

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
./0-98
