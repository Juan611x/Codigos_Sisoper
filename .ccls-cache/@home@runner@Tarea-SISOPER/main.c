#include <stdio.h>
#include <stdbool.h>

void imprimirMenu(){
  printf("\n\n---- menu ----\n");
  printf("1. Numero primo\n");
  printf("2. Año viciesto\n");
  printf("3. Factorial\n");
  printf("4. Power\n");
  printf("5. Par o Impar\n");
  printf("6. Fibonachi\n");
  printf("7. Uppercase\n");
  printf("8. Lowercase\n");
  printf("9. Mayor\n");
  printf("10. Numero primo\n");
  printf("11. \n");
  printf("0. SALIR\n");
}


int primo(int a){
  if (a <= 1) {
      printf("No es un numero primo\n");
      return 0;
  }
  for (int i = 2; i * i <= a; i++) {
      if (a % i == 0) {
          printf("No es un numero primo\n");
          return 0;
      }
  }
  printf("Es un numero primo\n");
  return 0;
}

bool A_Bisiesto(int año) {
  return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}

int factorial(int a) {
    if (a == 0 || a == 1) {
        return 1;
    } 
    int ans = 1;
    for (int i = 2; i <= a; i++) {
        ans *= i;
    }
    return ans;
    
}

int power(int b, int e) {
    if (e == 0) {
        return 1;
    } else if (e < 0) {

        return 1 / (b * power(b, -e - 1));
    } else {
        return b * power(b, e - 1);
    }
}

void par(int a) {
    if(a % 2 == 0){
      printf("El número es par\n");
    }else{
      printf("El número NO es par\n");
    }
}

void fibonachi(int n){
  printf("0 ");
  printf("1 ");
  int a = 0;
  int b = 1;
  for(int i = 0; i < n ; i++){
    printf("%d ", a + b);
    int tmp = a + b;
    a = b;
    b = tmp;
  }
}


bool Mayuscula(char letra) {
    if(letra >= 'A' && letra <= 'Z'){
      printf("Es un letra Mayuscula.");
    }else{
      printf("NO es un letra Mayuscula.");
    }
}

bool Minuscula(char letra) {
    if(!(letra >= 'A' && letra <= 'Z')){
      printf("Es un letra Minuscula.");
    }else{
      printf("NO es un letra Minuscula.");
    }
}

int mayor(a, b, c){
  int temp[3] = {a,b,c};
  int mayor = temp[0];
  for(int i = 0; i < 3; i++){
    if(temp[i] > mayor){
      mayor = temp[i];
    }
  }
  return mayor;
}

int main(void) {
  
  int op = 0;
  imprimirMenu();
  printf("Ingrese una opcion: ");
  scanf("%d", &op);
  
  int a = 0;
  int b = 0;
  int c = 0;
  char e;
  
  while(op != 0){

    switch(op){
      case 1:
        printf("Ingrese un numero: ");
        scanf("%d", &a);
        primo(a);
        break;
      case 2:
        printf("Ingrese un año: ");
        scanf("%d", &a);
        if (A_Bisiesto(a)){
          printf("El año es Bisiesto\n");
        }else{
          printf("El año NO es Bisiesto\n");
        }
        break;
      case 3:
        printf("Ingrese un numero: ");
        scanf("%d", &a);
        printf("El resultado es %d\n", factorial(a));
        break;
      case 4:
        printf("Ingrese la base: ");
        scanf("%d", &a);
        printf("Ingrese el exponente: ");
        scanf("%d", &b);

        printf("El numero resultado es: %d", power(a, b));
        break;
      case 5:
        printf("Ingrese un numero: ");
        scanf("%d", &a);
        par(a);
        break;
      case 6:
        printf("Ingrese un numero: ");
        scanf("%d", &a);
        fibonachi(a);
        break;
      case 7:
        printf("Ingrese una letra: ");
        scanf(" %c", &e);
        Mayuscula(e);
        break;
      case 8:
        printf("Ingrese una letra: ");
        scanf(" %c", &e);
        Minuscula(e);
        break;
      case 9:
        printf("Ingrese un numero: ");
        scanf("%d", &a);
        printf("Ingrese un numero: ");
        scanf("%d", &b);
        printf("Ingrese un numero: ");
        scanf("%d", &c);
        printf("El numero mayot es: %d", mayor(a, b, c));
        break;
      case 10:
        break;
      case 11:
        break;
    }
    imprimirMenu();
    printf("Ingrese una opcion: ");
    scanf("%d", &op);
  }
  
  return 0;
}


