//problem: WAP to identify whether the enetered character is a vowl or consonant using unformatted function to read character.
#include <stdio.h>
#include <conio.h>

int main(){
    char character;
    printf("Enter any character:\n");
    character = getche();
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U'){
        printf(" is a vowel.");
    } else{
        printf(" is a consonant");
    }
    return 0;
}