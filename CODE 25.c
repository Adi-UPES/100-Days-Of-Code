    #include<stdio.h>
    main()
    {
        float a,b;
        char choice;
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    printf("Enter your choice: ");1
    scanf(" %c",&choice);
    switch(choice)
    {
        case '+':
            printf("Sum = %f",a+b);
            break;
        case '-':
            printf("Difference = %f",a-b);
            break;
        case '*':
            printf("Product = %f",a*b);
            break;
        case '/':
                printf("Quotient = %f",a/b);
            break;
        default:
            printf("Invalid choice.");
            
    }
    return 0;
}
