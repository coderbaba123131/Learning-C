

    //Declaration: void *malloc(size_t size); 
    //Return:      returns a pointer to the memory.  If there is insufficient memory, malloc() returns a null pointer. 
     
      
     
      #include<stdio.h>
     
      struct addr {
        char name[40];
        char street[40];
        char zip[10];
      };
     
      main()
      {
        struct addr *p;
     
        p = malloc(sizeof(struct addr));
     
        if(p==NULL) {
          printf("Allocation Error\n");
          exit(1);
        }
        return p;
      }
     

