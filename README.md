# Digital Wardrobe (Smart Closet) - C++ Relational Logic

![C++](https://img.shields.io/badge/C++-17-blue.svg?style=flat-square&logo=c%2B%2B)
![Logic](https://img.shields.io/badge/Logic-Relational-green.svg?style=flat-square)

Este proyecto es una herramienta de organización de armario que permite clasificar prendas bajo categorías dinámicas. Fue desarrollado como parte de un entrenamiento intensivo en C++ para dominar la gestión de datos relacionales y el uso de la STL.

## 🧠 Desafío de Ingeniería
El objetivo principal fue implementar un **sistema de búsqueda relacional** en memoria. En lugar de almacenar el nombre de la categoría directamente en cada prenda (lo que causaría redundancia), el sistema utiliza un `categoryId` como referencia. 

El mayor reto técnico consistió en realizar un **"Join" manual** durante la generación del reporte, buscando en el catálogo de categorías el nombre correspondiente a cada prenda en tiempo de ejecución.



## 🚀 Características Técnicas
* **Relaciones uno-a-muchos**: Vinculación lógica entre las estructuras `Category` y `Garment`.
* **Algoritmos de la STL**: Uso de `std::find_if` con expresiones Lambda para recuperar nombres de categorías de forma eficiente.
* **Manipulación de Buffer**: Implementación de `std::ws` junto a `std::getline` para capturar descripciones complejas con espacios sin interrumpir el flujo de entrada.
* **Reporte Tabular**: Uso de `<iomanip>` (`setw`, `left`) para crear una interfaz de consola limpia y alineada.

## 📊 Ejemplo de Salida
```text
---GARMENT CLOSET---
[1].Top   [2].Bottom   [3].Shoes
Choice: 2

Enter the garment name: Levi's 501
Enter the color: Blue

ID    Color          Description              Category
============================================================
1     Blue           Levi's 501               Bottom
