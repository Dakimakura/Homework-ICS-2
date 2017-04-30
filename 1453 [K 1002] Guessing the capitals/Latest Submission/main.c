 #include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
   char a[105][30] =
    { "Alabama" , "Montgomery" , 
    "Alaska" , "Juneau", 
    "Arizona" , "Phoenix",
    "Arkansas" , "Little Rock",
    "California" , "Sacramento",
    "Colorado" , "Denver",
    "Connecticut" , "Hartford",
    "Delaware" , "Dover",
    "Florida" , "Tallahassee",
    "Georgia" , "Atlanta",
    "Hawaii" , "Honolulu",
    "Idaho" , "Boise",
    "Illinois" , "Springfield",
    "Maryland" , "Annapolis",
    "Minnesota" , "Saint Paul",
    "Iowa" , "Des Moines",
    "Maine" , "Augusta",
    "Kentucky" , "Frankfort",
    "Indiana" , "Indianapolis" ,
    "Kansas" , "Topeka",
    "Louisiana" , "Baton Rouge",
    "Oregon" , "Salem",
    "Oklahoma" , "Oklahoma City",
    "Ohio" , "Columbus",
    "North Dakota" , "Bismark",
    "New York", "Albany",
    "New Mexico ",  "Santa Fe",
    "New Jersey" ,"Trenton",
    "New Hampshire" ,"Concord",
    "Nevada" ,"Carson City",
    "Nebraska", "Lincoln",
    "Montana", "Helena",
    "Missouri" ,"Jefferson City",
    "Mississippi" ,"Jackson",
    "Massachusettes" ,"Boston",
    "Michigan", "Lansing",
    "Pennslyvania", "Harrisburg",
    "Rhode Island", "Providence",
    "South Carolina", "Columbia",
    "South Dakota" ,"Pierre",
    "Tennessee" ,"Nashville",
    "Texas" , "Austin",
    "Utah" , "Salt Lake City",
    "Vermont" , "Montpelier",
    "Virginia" , "Richmond",
    "Washington"  ,"Olympia",
    "West Virginia" , "Charleston",
    "Wisconsin" ,"Madison",
    "Wyoming", "Cheyenne"};
    int n;
    scanf("%d", &n);
    while (n --){
         char x[30], y[300];
         scanf("%s\n%s",x,y);
         int i;
         for (i = 0; i < 100; i += 2){
          if (!strcmp(x, a[i])){
           if (!strcmp(y, a[i+1]))
            printf("Your anwswer is correct\n");
           else
            printf("The capital of %s is %s\n", a[i], a[i+1]);  
     break;    
          }
         }
                   
       }
}