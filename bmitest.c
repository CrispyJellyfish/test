# include <stdio.h>
int main () {
int age ;
float height ;
float weight;
float bmi;
//bmi = (float)weight/((float)height*height);

printf (" Enter your age: ") ;
scanf ("%d", & age ) ;
printf (" Enter your height in meters : ");
scanf ("%f", & height );
printf("Enter your weight in kg: ");
scanf("%f", &weight);
bmi = (float)weight/((float)height*height);

if(bmi <= 18.5){
    printf("Your bmi is %f and you are underweight. \n", bmi);
}else if(bmi>18.5 && bmi <25){
    printf("Your bmi is %f and you are normal weight. \n", bmi);
}else{
    printf("Your bmi is %f and you are overweight. \n", bmi);
}
}
