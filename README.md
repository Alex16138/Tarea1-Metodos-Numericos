# Tarea 1: Introducción a los Métodos Numéricos y Entorno de Trabajo
* **Unidad de Enseñanza-Aprendizaje:** Métodos Numéricos en Ingeniería (Clave 1151039)
* **Trimestre:** 26-O
* **Licenciatura:** Ingeneria Mecanica
* **Alumno:** Jonathan Alexander Alvarado Alcocer 
* **Matrícula:** 2233040654
* **Profesor:** M. en C. Gabriel Hurtado Avilés
* **Fecha:** 10 de octubre de 2026

## 1. ¿Qué son los métodos numéricos?

Los métodos numéricos son técnicas mediante las cuales es posible formular problemas matemáticos de tal forma que puedan resolverse utilizando operaciones aritméticas (Chapra & Canale, 2015). 

A diferencia de las soluciones analíticas —las cuales ofrecen una solución exacta expresada mediante funciones o fórmulas matemáticas cerradas—, los métodos numéricos obtienen resultados aproximados o numéricos a través de procedimientos iterativos (Burden & Faires, 2011). 

Dado que los computadores trabajan con una representación finita de números reales (punto flotante), el resultado de un método numérico siempre involucra un margen de incertidumbre. En este contexto, el **error** desempeña un papel fundamental: nos permite cuantificar la discrepancia entre el valor verdadero (o exacto) y la aproximación calculada. La comprensión y el control de los errores (como los errores de redondeo por representación finita y los errores de truncamiento por aproximar procesos infinitos) garantizan que las soluciones obtenidas sean confiables y estables en la práctica de la ingeniería (Chapra & Canale, 2015).

## 2. ¿Cómo se aplican en mi ingeniería?

En **Ingeniería Mecánica**, los métodos numéricos son fundamentales para analizar el comportamiento térmico, estructural y de fluidos en componentes mecánicos donde la geometría o las condiciones de operación son complejas.

Dos problemas concretos en esta área son:

1. **Análisis de distribución de temperatura en aletas de enfriamiento (Transferencia de Calor):**
   * **Qué se calcula:** El perfil de temperatura a lo largo y ancho de una aleta de disipación de calor en un motor o equipo electrónico.
   * **Por qué no basta una fórmula cerrada:** Cuando la conductividad térmica del material varía con la temperatura, la geometría no es uniforme o las condiciones de frontera involucran radiación y convección simultáneas, la ecuación diferencial de transferencia de calor se vuelve no lineal y no puede resolverse mediante integración analítica directa, requiriendo métodos de diferencias finitas o elementos finitos (Chapra & Canale, 2015).

2. **Análisis de esfuerzos y deformaciones en estructuras mecánicas complejas (Análisis Estructural):**
   * **Qué se calcula:** La distribución de esfuerzos mecánicos y deformaciones en un chasis de automóvil o un eje de transmisión sujeto a cargas combinadas.
   * **Por qué no basta una fórmula cerrada:** Las fórmulas clásicas de resistencia de materiales solo aplican a geometrías muy simples (barras rectangulares, cilindros macizos). Para piezas mecánicas reales con orificios, muescas o geometrías irregulares, es imposible obtener una función analítica exacta, por lo que se recurre a la resolución numérica de grandes sistemas de ecuaciones mediante el Método del Elemento Finito (FEM) (Burden & Faires, 2011).

## 3. Herramientas para trabajar con métodos numéricos

El panorama tecnológico para el cálculo numérico se divide en diversas familias de software y lenguajes:

* **Lenguajes compilados (C, C++, Fortran):** Proporcionan máxima velocidad de ejecución y control directo de la memoria, ideales para código de alto rendimiento (HPC) e infraestructura base.
* **Lenguajes interpretados:** Permiten un desarrollo y prototipado rápido, priorizando la legibilidad sobre el rendimiento puro.
* **Entornos matriciales (MATLAB, GNU Octave):** Herramientas optimizadas para el manejo y manipulación directa de matrices y vectores con sintaxis matemática expresiva.
* **Python científico (NumPy, SciPy, Matplotlib):** Ecosistema de código abierto que combina la simplicidad de Python con bibliotecas optimizadas en C para operaciones matriciales, algoritmos numéricos y visualización de datos.
* **Álgebra simbólica (Mathematica, Maple, SymPy):** Diseñados para la manipulación algebraica y cálculo analítico exacto de ecuaciones.
* **Bibliotecas de base (BLAS, LAPACK):** Rutinas estándar de bajo nivel escritas en C/Fortran altamente optimizadas para operaciones algebraicas lineales fundamentales.

### Herramientas empleadas en la bibliografía consultada:
* **Burden & Faires (2011):** Utilizan principalmente **C**, **Fortran** y algoritmos adaptados para **MATLAB** y **Maple**.
* **Chapra & Canale (2015):** Emplean **VBA (Excel)**, **MATLAB** y pseudocódigo estructurado aplicable a **C/C++** o **Python**.

## 4. Herramientas usadas en este curso

* **Docker:** Plataforma de virtualización a nivel de sistema operativo que permite empaquetar una aplicación y sus dependencias en un contenedor aislado.
* **Docker frente a una máquina virtual:** A diferencia de una máquina virtual tradicional —que hipervisores y ejecuta un sistema operativo invitado completo sobre recursos virtualizados—, un contenedor de Docker comparte el núcleo (kernel) del sistema operativo anfitrión, siendo mucho más ligero, eficiente en consumo de memoria RAM y rápido de arrancar.
* **Uso de Docker en el curso:** Se utiliza un entorno estandarizado mediante un archivo `Dockerfile` (que define la imagen) y un `compose.yaml` (que orquestará el servicio). Los comandos clave empleados son:
  * `docker compose up -d`: Levanta y ejecuta el contenedor en segundo plano.
  * `docker compose exec`: Ejecuta comandos dentro del contenedor activo.
  * `docker compose stop`: Detiene la ejecución del contenedor sin borrar sus datos.
  * `docker compose down`: Detiene y elimina los contenedores y redes creadas.
  * `docker compose ps`: Muestra el estado actual de los contenedores.
  * `docker compose logs`: Muestra los registros de salida de la terminal del contenedor.
  * *Diferencia entre apagar y borrar:* Apagar un contenedor (`stop`) suspende su ejecución guardando su estado actual, mientras que borrarlo (`down` / `rm`) destruye la instancia del contenedor, requiriendo volver a crearlo a partir de la imagen.
* **GNU Octave:** Entorno matricial y lenguaje de alto nivel de código abierto compatible con la sintaxis de MATLAB, utilizado para prototipado rápido de algoritmos numéricos.
* **Python:** Lenguaje interpretado de propósito general ampliamente utilizado en cálculo científico gracias a librerías como NumPy y SciPy.
* **C con gcc:** Lenguaje compilado de bajo/medio nivel y su compilador estándar GNU, que permiten entender el rendimiento, el manejo explícito de memoria y la representación exacta de tipos de datos en la arquitectura del computador.

## Referencias

* Burden, R. L., & Faires, J. D. (2011). *Análisis Numérico* (9a ed.). Cengage Learning.
* Chapra, S. C., & Canale, R. P. (2015). *Métodos Numéricos para Ingenieros* (7a ed.). McGraw-Hill.
