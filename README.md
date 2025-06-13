# Automatización en C con GitHub Actions

Este repositorio demuestra cómo automatizar compilación, pruebas, chequeo de código y generación de artefactos en proyectos de C usando **GitHub Actions**.

## Estructura

- `main.c`: Código fuente principal.
- `test.c`: Pruebas básicas para la función `suma`.
- `.github/workflows/ci.yml`: Workflow de integración continua.
- `README.md`: Este archivo.

## ¿Qué hace la automatización?

Cada vez que subas cambios a la rama `main`:
1. **Chequea el estilo del código** con `cppcheck` (análisis estático).
2. **Compila** el programa principal.
3. **Ejecuta pruebas** automáticas definidas en `test.c`.
4. **Genera un artefacto**: el binario resultante (`programa`) estará disponible para descargar desde la sección de artefactos del workflow en GitHub.

## ¿Cómo agregar más pruebas?

Solo agrega más funciones de prueba en `test.c` usando `assert`.

## Ejecución local (opcional)

Si quieres compilar y probar en tu PC:

```bash
gcc main.c -o programa
gcc -c main.c
gcc test.c main.o -o test_programa
./test_programa
```

## Requisitos

- Tener instalado `gcc` y `cppcheck` para compilar y analizar el código.

---

Hecho con ❤️ por [KevinDevSecOps](https://github.com/KevinDevSecOps)
