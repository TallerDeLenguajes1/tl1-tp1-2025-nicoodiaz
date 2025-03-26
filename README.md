# TP01 - Taller de Lenguajes I - 2025

Primer trabajo practico **Taller de Lenguajes I - 2025**

## Ejercicio 2

2. 
    #### ¿Por qué es conveniente incluirlo?
    - El archivo `.gitignore` evita que Git rastree archivos innecesarios, como configuraciones locales, dependencias generadas o archivos temporales, manteniendo el repositorio limpio y eficiente.
    #### ¿Cuándo se debe hacer?
    - Se debe crear antes de hacer el primer commit o al agregar nuevos archivos que no deban ser rastreados. También es útil al clonar un repositorio para evitar cambios accidentales en archivos locales.
    #### ¿Cómo configuraría el archivo .gitignore?
    - Se configura listando los archivos y carpetas que deben ser ignorados.

## Ejercicio 3

### C
- Los archivos que se subieron al hacer ```git push```. Fueron el de extension .c y ademas su ejecutable al compilar el archivo. Este archivo no hace falta que se encuentr en nuestro repositorio remoto. Por eso, se crea el ```.gitignore```. Pero esto al crearlo despues de compilar y subir los archivos, se deben ejecutar un par de comandos en la terminal.
```
git rm -r --cached .
git add .
git commit -m "Aplicar .gitignore"

``` 

### G
- Esto se debe a que se esta mostrando lo mismo de dos maneras distintas. Se imprime la _direccion de memoria_ de **variable** 
- En el punto 4, tambien se obtiene la _direccion de memoria_ pero en este caso es la del **puntero**. No es lo mismo, ya que no son las mismas variables. Si bien el puntero guarda la direccion de memoria de la variable. Este tiene su propia direccion de memoria, la cual se puede acceder mediante ```&pVariable```.