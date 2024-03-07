// factorail by using (for)
int main(void) {

    int number;
    int factorail =1;

    printf("Enter a number please: ");
    scanf("%d" , &number);

    if(number == 0) {
        printf("Factorail is: %d" , factorail);
    }
    else if(number < 0) {
        printf("wrong value enter a positive integer pls");
    }
    else for(; factorail > 0; factorail--);
        factorail *= number;
        printf("Factorial is: %d" , factorail);
    
    
        
    

    return 0;
}