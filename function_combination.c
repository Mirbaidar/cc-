  #include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main()

{
    int n; int ncr;
    printf("enter the number n");
    scanf("%d", &n);

    int r;
    printf("enter the number r");
    scanf("%d", &r);

   // int nfact = factorial(n);
    //int rfact = factorial(r);
    //int nrfact = factorial(n - r);

 ncr=factorial(n)/(factorial(r)*factorial(n-r));
   // ncr=nfact/(rfact*nrfact);
    printf("ncr is equal to = %d",ncr);
    return 0;
}