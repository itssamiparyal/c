// wap to find the bmi using weight and height of a person
// bmi = weight in kg/height in meter * height in meter
// if bmi< 18.5 print underweight
// else if bmi>=18.5 and bmi < 24.9 print normal
// else if bmi >= 24.9 and bmi <30 print overweight
// else print obese

# include <stdio.h>


int main(){
    // variable declaration
    float weight , height , bmi , hm;

    printf("Enter weight (kg):\n");
    scanf("%f",&weight);
    printf("Enter height (feet):\n");
    scanf("%f",&height);

    hm = height * 0.3048;

    bmi = weight/(hm * hm);

    if(bmi < 18.5)
        printf("your bmi is %f (underweight)",bmi);
    else if(bmi >= 18.5 && bmi < 24.9)
        printf("your bmi is %f (normal)",bmi);
    else if(bmi >= 24.9 && bmi < 30)
        printf("your bmi is %f (overweight)",bmi);
    else
        printf("your bmi is %f (obese)",bmi);
    return 0;
}