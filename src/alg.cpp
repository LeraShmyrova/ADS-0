// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
   if ((b==0)||(a==0)){
       return (a+b);
   }
   else if(b>a) {
       if (b%a==0){
           return (a);
       }
       else {
          return (a/(b%a)); 
       }

   }
   else if(a>b) {
       if (a%b==0){
           return (b);
       }
       else {
          return (b/(a%b)); 
       }

   }
    return 0;
}

   cout<<gcd(18,30);
