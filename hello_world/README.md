# 0x00. C - Hello, World

## Description
Ce projet fait partie du cursus de programmation en C. Il couvre les bases de la compilation, les fonctions d'affichage et l'introduction aux outils de développement en C.

## Environnement
- **OS** : Ubuntu 20.04 LTS
- **Compilateur** : gcc (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0
- **Style** : Betty style

## Fichiers du projet

| Fichier | Description |
|---------|-------------|
| `0-preprocessor` | Script qui exécute un fichier C via le préprocesseur et sauvegarde le résultat |
| `1-compiler` | Script qui compile un fichier C sans le linker |
| `2-assembler` | Script qui génère le code assembleur d'un fichier C |
| `3-name` | Script qui compile un fichier C et crée un exécutable nommé `cisfun` |
| `4-puts.c` | Programme C qui affiche une chaîne de caractères avec la fonction `puts` |

## Compilation

### Compilation standard :
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o programme

