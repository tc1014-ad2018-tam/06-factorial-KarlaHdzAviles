/*this program shows the factorial of any whole number given by the user
 *
 * Author: Karla Alexandra Hdz Aviles
 * Date: 06/09/2018
 * E-mail: A01411843@itesm.mx
 * */

#include <stdio.h>

int main() {
    //Declaration of variables
    int fact =1;
    int n;
    int k = 1;

    printf("Welcome,I will help you, Which number would you like to know the factorial of?\n");
    scanf("%i", &n);

    //the program show a message if the number is smaller than 0
    if (n<0) {
        printf("The factorial of negative numbers doesnt exist.\n");
    } else {  while (k <= n){
        fact = fact * k ;
        k++;

    } printf("The factorial of %i=%i\n", n , fact ); }

    return 0;
}