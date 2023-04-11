#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct persoana
{
    char nume[24], prenume[24], oras[24], liceu[24];
    int nr_hobby;
    char hobby[24][24];
} x;

void afisare()
{
    printf("\n");
    printf("Nume: %s", x.nume);
    printf("Prenume: %s", x.prenume);
    printf("Oras: %s", x.oras);
    printf("Liceu: %s", x.liceu);
    printf("Hobby-uri: ");
    for (int j = 0; j < x.nr_hobby; j++) {
        printf("%s ", x.hobby[j]);
    }
}
void sortare(int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(x.hobby[i], x.hobby[j]) > 0) {
                char aux[24];
                strcpy(aux, x.hobby[i]);
                strcpy(x.hobby[i], x.hobby[j]);
                strcpy(x.hobby[j], aux);
            }
        }
    }
}

int main()
{
    int n,i=0;
  char c;
    printf("Nume: ");
    fgets(x.nume, 24, stdin);
    printf("Prenume: ");
    fgets(x.prenume, 24, stdin);
    printf("Oras: ");
    fgets(x.oras, 24, stdin);
    printf("Liceu: ");
    fgets(x.liceu, 24, stdin);
    printf("Numarul de hobby-uri: ");
    scanf("%d", &x.nr_hobby);
    printf("Hobby-uri:");
    putc(c,stdin);
    char str[20];
    while(scanf("%s", str) == 1 && i<x.nr_hobby)
      {
        strcpy(x.hobby[i++], str);
        }
    sortare(x.nr_hobby);
    afisare();

    return 0;
}