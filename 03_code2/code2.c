
int printTriangle(int size) {   //start with starCount being 0
    int starCount = 0;
    int i, j;   
    for (i = 0; i < size; i++) //count from 0 (inclusive) to size (exclusive), for each number i that you count
    {  
        for (j = 0; j <= i; j++) //count from 0 (inclusive) to i (inclusive), for each number j that you count
        {
            printf("*");  //print a "*"
            starCount++;  //increment starCount
            //j++; //when you finish counting on j, 
        }
        printf("\n"); //print a newline ("\n")
        //i++;     //when you finish counting on i,
    }
  return (starCount); //your answer is starCount
}


int main(void) {
  int numStars;
  printf("Here is a triangle with height 4\n");
  numStars = printTriangle(4);
  printf("That triangle had %d total stars\n", numStars);
  printf("Here is a triangle with height 7\n");
  numStars = printTriangle(7);
  printf("That triangle had %d total stars\n", numStars);
  //then call printTriangle, passing in 7, and assign the result to numStars

  //finally, print "That triangle had %d total stars\n", such that the %d 
  //prints the value of numStars


  return 0;
}






