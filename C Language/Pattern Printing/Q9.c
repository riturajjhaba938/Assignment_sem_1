int main()
{
    printf("Enter no. of alphabates you want to print: ");
   int n;
   scanf("%d",&n);
   for (int i=65; i<=65+n-1; i++){
       for (int j=65; j<=i; j++){
           printf("%c",j);
       }
       printf("\n");
   }

    return 0;
}
