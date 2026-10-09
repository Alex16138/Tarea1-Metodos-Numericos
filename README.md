# Tarea 1: Introducción a los Métodos Numéricos y Entorno de Trabajo

- **Unidad de Enseñanza-Aprendizaje:** Métodos Numéricos en Ingeniería (Clave 1151039)
- **Trimestre:** 26-O
- **Licenciatura:** Ingeniería Mecánica
- **Alumno:** Jonathan Alexander Alvarado Alcocer 
- **Matrícula:** 2233040654
- **Profesor:** M. en C. Gabriel Hurtado Avilés
- **Fecha:** 8 de octubre de 2026

## 1. ¿Qué son los métodos numéricos?

En palabras sencillas, los métodos numéricos son operaciones matemáticas (sumas, restas, multiplicaciones) que usamos para resolver problemas matemáticos difíciles usando una computadora (Chapra & Canale, 2015). 

A diferencia de las soluciones exactas que te dan una fórmula directa para despejar, los métodos numéricos nos dan **resultados aproximados** haciendo cálculos una y otra vez (Burden & Faires, 2011). 

Como las computadoras no pueden guardar números infinitos en su memoria, siempre va a existir un pequeño margen de error. Por eso el **error** es tan importante en esta materia: nos ayuda a saber qué tan cerca estamos del valor real y a estar seguros de que el resultado sea confiable para usarlo en un proyecto real (Chapra & Canale, 2015).

## 2. ¿Cómo se aplican en mi ingeniería?

En **Ingeniería Mecánica**, los métodos numéricos sirven para analizar piezas o sistemas complejos donde las fórmulas normales del libro ya no alcanzan.

Dos ejemplos de mi carrera son:

1. **Calor en aletas de enfriamiento (Transferencia de Calor):**
   * **Qué se calcula:** Cómo se distribuye la temperatura en una aleta que enfria un motor o un circuito.
   * **Por qué no basta una fórmula:** Si la pieza tiene una forma rara o el calor se transmite de varias formas al mismo tiempo (como radiación y aire), la ecuación se vuelve muy complicada y no se puede despejar a mano. Hay que resolverla por partes con métodos numéricos (Chapra & Canale, 2015).

2. **Esfuerzos en piezas y chasis (Análisis Estructural):**
   * **Qué se calcula:** Qué tanto se dobla o cuánto aguanta un chasis de carro o un eje cuando soporta peso.
   * **Por qué no basta una fórmula:** Las fórmulas normales solo sirven para tubos o barras simples. Para piezas reales con hoyos, curvas o formas irregulares, es imposible sacar una fórmula exacta, así que se usa el Método del Elemento Finito para calcularlo por computadora (Burden & Faires, 2011).

## 3. Herramientas para trabajar con métodos numéricos

Para hacer estos cálculos existen diferentes tipos de programas y lenguajes:

- **Lenguajes compilados (C, C++, Fortran):** Son muy rápidos y aprovechan al máximo la memoria de la computadora.
- **Lenguajes interpretados:** Son más fáciles de escribir y entender, ideales para probar ideas rápido.
- **Entornos matriciales (MATLAB, GNU Octave):** Programas hechos especialmente para trabajar con tablas de números (matrices) de forma muy práctica.
- **Python científico (NumPy, SciPy, Matplotlib):** Un lenguaje gratuito y fácil de aprender que tiene librerías muy potentes para cálculo y gráficas.
- **Álgebra simbólica (Mathematica, SymPy):** Herramientas para resolver ecuaciones despejando variables, como si lo hicieras a mano.
- **Bibliotecas de base (BLAS, LAPACK):** Código ya optimizado de fondo que usan otros programas para hacer operaciones pesadas.

### ¿Qué usan los libros que consulté?
- **Burden & Faires (2011):** Trabajan con programas en **C** y **Fortran**, además de adaptaciones para **MATLAB** y **Maple**.
- **Chapra & Canale (2015):** Muestran ejemplos en **VBA (Excel)**, **MATLAB** y algoritmos adaptables a **C** o **Python**.

## 4. Herramientas usadas en este curso

- **Docker:** Es un programa que nos permite crear un "paquete" (contenedor) con todo lo necesario para que los programas del curso corran igual en cualquier computadora.
- **Docker vs. Máquina Virtual:** Una máquina virtual instala un sistema operativo completo y consume mucha memoria. Docker es mucho más rápido y ligero porque comparte el sistema de tu propia computadora.
- **Uso de Docker en el curso:** Usamos un archivo llamado `Dockerfile` para configurar el entorno y un `compose.yaml` para arrancarlo. Los comandos básicos que usé fueron:
  * `docker compose up -d`: Inicia el contenedor en segundo plano.
  * `docker compose exec`: Entra al contenedor para ejecutar comandos.
  * `docker compose stop`: Pausa el contenedor sin borrar nada.
  * `docker compose down`: Apaga y elimina el contenedor generado.
  * `docker compose ps`: Revisa si el contenedor está prendido o apagado.
  * `docker compose logs`: Muestra las notas o errores que van saliendo en la terminal.
  * *Diferencia entre apagar y borrar:* Apagar (`stop`) es como poner la computadora en suspensión; borrar (`down`) es desinstalar todo para tener que volver a crearlo.
- **GNU Octave:** Programa gratuito muy parecido a MATLAB que usamos para hacer cálculos con matrices rápidamente.
- **Python:** Lenguaje de programación sencillo que usamos para los algoritmos numéricos.
- **C con gcc:** Lenguaje de programación tradicional que nos ayuda a entender cómo la computadora procesa los datos y los números desde la base.


## Referencias

- Burden, R. L., & Faires, J. D. (2011). *Análisis Numérico* (9a ed.). Cengage Learning.
- Chapra, S. C., & Canale, R. P. (2015). *Métodos Numéricos para Ingenieros* (7a ed.). McGraw-Hill.
