#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int, int);

void print_menu();

int main(){
    int choice;
    double first, second, result;
     while(1) {
        print_menu();
        scanf("%d", &choice);
        if(choice == 7) {
            break;
        }

        if (choice < 1 || choice > 7 ){
         fprintf(stderr, "Invalid menu choice.");
         continue;
        }

        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);
        printf("Now, enter the second number: ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1:// Add
           result = first + second;
          break;
        case 2:// subtract
           result = first - second;
          break;
        case 3: // multiply
          result = first * second;
          break;
        case 4: // Divide
         result = division(first, second);
          break;
        case 5:// Modulus
         result = modulus(first, second);
        break;
        case 6: // power
         result = pow(first , second);
        break;

      }  
      if (!isnan(result)) {
      printf("\nReasult of operation is: %.2f", result);
      }
     };

    return 0;
}

double division(double a, double b){
  if (b == 0) {
    fprintf(stderr, "Invalid Argument for Division");
    return NAN;
  } else {
    return a / b;
  }
}
double modulus(int a, int b){
  if (b == 0) {
    fprintf(stderr, "Invalid Argument for Modulus");
    return NAN;
  } else {
    return a % b;
  }
}

void print_menu(){
    printf("\n\n--------------------------------");
    printf("\nwelcome to simple Calculator\n");
    printf("\nChose one of the following options:");
    printf("\n1. Add");
    printf("\n2. subtract");
    printf("\n3. multiply");
    printf("\n4. Divisin");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\n Now, enter your choice:");

}