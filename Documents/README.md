# Práctica 1 · Cómo empezar

**UEA 1151039 · Métodos Numéricos en Ingeniería · 26-O · UAM Azcapotzalco**

La Práctica 1 es la continuación de la Tarea 1 y **se hace en equipo, en el repositorio
de la Tarea 1 de uno de ustedes**. Desde hoy ése es el repositorio del equipo: ahí van
también las prácticas siguientes, cada una en su carpeta.

## 0 · Elijan el repositorio

Escojan el repositorio de la Tarea 1 de un integrante. Su dueño invita a los demás y al
profesor como colaboradores: en GitHub, **Settings → Collaborators → Add people**. Cada
quien acepta la invitación que le llega por correo y lo clona en su computadora.

## 1 · Copien esta carpeta al repositorio

A la **raíz** del repositorio (donde está la carpeta `tarea1/`) copien:

- la carpeta `practica1/`
- `compose.yaml`, `Dockerfile` y `.dockerignore`

Si ya había un `compose.yaml` y un `Dockerfile` en la raíz, reemplácenlos por éstos: son el
mismo entorno, pero éste ve todo el repositorio.

El repositorio debe quedar así:

```
repositorio-del-equipo/
├── LICENSE
├── .gitignore
├── compose.yaml
├── Dockerfile
├── .dockerignore
├── tarea1/          ← la del dueño del repositorio; se queda como está
└── practica1/
    ├── COMO_CORRER.md
    ├── README.md        ← aquí escriben el reporte
    ├── maclaurin.c
    ├── maclaurin.m
    └── maclaurin.py
```

## 2 · Agreguen una línea al `.gitignore`

```
practica1/maclaurin
```

Es el ejecutable que crea `gcc`; no se sube al repositorio.

## 3 · Prendan el contenedor desde la raíz del repositorio

Cada integrante, en su computadora:

```bash
docker compose up -d
docker compose exec metodos bash
cd practica1
```

La imagen ya la construyeron en la Tarea 1, así que tarda dos segundos.

> **¿Sale `The container name "/metodos_equipo" is already in use`?** Ya hay otro
> contenedor con ese nombre. Bórrenlo con `docker rm -f metodos_equipo` y vuelvan a
> prender. Los archivos no se pierden.

Antes de empezar a trabajar, `git pull`; al terminar, `git add`, `git commit` y `git push`.
Cada integrante hace al menos una confirmación.

## 4 · Sigue `practica1/COMO_CORRER.md`

Ahí están los comandos de cada programa y la tabla que debe salir.
## DATOS DEL EJERCICIO 4 
| Cifras significativas (`CIFRAS`) | Términos necesarios | Aproximación obtenida | Error verdadero  |
| :---: | :---: | :---: | :---: |
| 3 | 6 | 1.648697916666667 | 0.00141649 % |
| 6 | 9 | 1.648721265035962 | 3.43549e-07 % |
| 17 | 16 | 1.648721270700128 | 2.69354e-14 % |
##Pregunta 1: ¿Cuántos términos hacen falta con 3, 6 y 17 cifras?
 Para 3 cifras significativas se requirieron 6 términos. Para 6 cifras hicieron falta 9 términos. Finalmente, con 17 cifras significativas se necesitaron 16 términos para detener el ciclo.
##Pregunta 2: En cada fila, ¿ es mayor o menor que ? ¿Por qué conviene detenerse con ?
 En cada iteración, el error relativo aproximado  es mayor que el error verdadero . Conviene detenerse utilizando  (criterio de paro) porque en problemas reales no conocemos el valor verdadero de antemano, por lo que es desconocido. El error aproximado  nos garantiza que la solución ha alcanzado la precisión deseada calculándose únicamente a partir de las aproximaciones actuales y anteriores.    
 ##Pregunta 3: Con 17 cifras el programa termina. ¿Cuántas cifras del resultado son correctas en realidad? Relaciónenlo con $0.1 + 0.2$ de la Tarea 1. 
  Aunque se especifican 17 cifras en el programa, el tipo de dato double de 64 bits en la arquitectura de la computadora tiene una precisión de punto flotante limitada a aproximadamente 15 a 17 cifras decimales significativas (precisión de la máquina). En realidad, solo alrededor de 15 a 16 cifras son completamente exactas. Esto se relaciona con el experimento de $0.1 + 0.2$ de la Tarea 1, donde el almacenamiento binario IEEE 754 genera pequeños errores de redondeo que impiden representar y calcular de forma matemáticamente exacta más allá de la precisión finita del hardware. 
  