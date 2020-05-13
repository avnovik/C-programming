#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert(c.value >= 2 && c.value <= VALUE_ACE);
  assert(c.suit >= SPADES && c.suit <= CLUBS);
}

const char * ranking_to_string(hand_ranking_t r) {
  switch (r) {
    case 0:
      printf("STRAIGHT_FLUSH\n"); break;
    case 1:  
      printf("FOUR_OF_A_KIND\n"); break;
    case 2:  
      printf("FULL_HOUSE\n"); break;
    case 3:  
      printf("FLUSH\n"); break;
    case 4:  
      printf("STRAIGHT\n"); break;
    case 5:  
      printf("THREE_OF_A_KIND\n"); break;
    case 6:  
      printf("TWO_PAIR\n"); break;
    case 7:  
      printf("PAIR\n"); break;
    default:  
      printf("NOTHING\n"); break;
  }
  //return "";
}

char value_letter(card_t c) {
  if (c.value >= 2 && c.value <= 9)
    return(48 + c.value);
  else if (c.value == 10)
    return(48);
  else if (c.value == "Jack") 
    return(74);
  else if (c.value == "Queen") 
    return(81);
  else if (c.value == "King") 
    return(75);
  else if (c.value == "Ace") 
    return(65);
  return (c.value);  //???? maybe 0 ????
}


char suit_letter(card_t c) {
  if (c.suit == "c")
    return(99);
  else if (c.suit == "d")
    return(100);
  else if (c.suit == "h")
    return(104);
  else if(c.suit == "s")
    return("s");
  else
    return 0;  
}


void print_card(card_t c) {

}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  return temp;
}
