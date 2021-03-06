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
      return "STRAIGHT_FLUSH"; break; 
    case 1:  
      return "FOUR_OF_A_KIND"; break;
    case 2:  
      return "FULL_HOUSE"; break;
    case 3:  
      return "FLUSH"; break;
    case 4:  
      return "STRAIGHT"; break;
    case 5:  
      return "THREE_OF_A_KIND"; break;
    case 6:  
      return "TWO_PAIR"; break;
    case 7:  
      return "PAIR"; break;
    default:  
      return "NOTHING"; break;
  }
}

char value_letter(card_t c) {
  switch (c.value) {
    case 2: 
      return (c.value + 48); break;
    case 3: 
      return (c.value + 48); break;
    case 4: 
      return (c.value + 48); break;
    case 5: 
      return (c.value + 48); break;
    case 6: 
      return (c.value + 48); break;
    case 7: 
      return (c.value + 48); break;
    case 8: 
      return (c.value + 48); break;
    case 9: 
      return (c.value + 48); break;
    case 10: 
      return (48); break;
    case VALUE_JACK: 
      return 'J'; break;
    case VALUE_QUEEN: 
      return 'Q'; break;
    case VALUE_KING: 
      return 'K'; break;
    case VALUE_ACE: 
      return 'A'; break;
    default: 
      return '?';
  }
}


char suit_letter(card_t c) {
  switch (c.suit) {
    case SPADES:
      return 's'; break;
    case HEARTS:
      return 'h'; break;
    case DIAMONDS:
      return 'd'; break;
    case CLUBS:
      return 'c'; break;
    default: 
      return '?';
  } 
}

void print_card(card_t c) {
  printf("%c%c",value_letter(c),suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  
  if (value_let >= '1' && value_let <= '9')
    temp.value = value_let - '0';
  else if (value_let == '0')
    temp.value = 10;
  else {
    switch (value_let) {
      case 'A': temp.value = VALUE_ACE; break;
      case 'K': temp.value = VALUE_KING; break;
      case 'Q': temp.value = VALUE_QUEEN; break;
      case 'J': temp.value = VALUE_JACK; break;
    }
  }
  
  switch (suit_let) {
    case 's':
      temp.suit = SPADES; break;
    case 'h':
      temp.suit = HEARTS; break;
    case 'd':
      temp.suit = DIAMONDS; break;
    case 'c':
      temp.suit = CLUBS; break;
    default:
      temp.suit = NUM_SUITS; break;
  } 
  assert_card_valid(temp);
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  if (c >= 0 && c < 52){
	temp.value = (c / 4) + 2;
	temp.suit = c % 4;
  }
  return temp;
}

