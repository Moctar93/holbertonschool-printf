printf()
le projet printf est un projet de collaboration de Moctar , et ** Gao **, étudiantes de première année du programme de base à l'école Holberton, dans lequel une fonction nommée "_printf" imite la commande "printf" réelle située dans le Bibliothèque <stdio.h>. il contient certaines des caractéristiques et fonctions de base trouvées dans le manuel 3 de "printf".

_printf() est une fonction qui effectue une conversion de sortie formatée et imprime les données. son prototype est le suivant :

int _printf(const char *format, ...);

Compalation La ligne de code que nous utilisons pour compiler :

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Exigences

.Éditeur utilisé : vi .Tous les fichiers seront compilés sur Ubuntu 20.04 LTS Le code doit suivre le style Betty .Les variables globales ne sont pas autorisées .Pas plus de 5 fonctions par fichier .Tous les prototypes de fonctions doivent être inclus dans le fichier d'en-tête main.h .Fonctions et macros autorisées : write (man 2 write), malloc (man 3 malloc), free (man 3 free), va_start (man 3 va_start), va_end (man 3 va_end), va_copy (man 3 va_copy), va_arg ( homme 3 va_arg)
