#include "deck-of-cards.hpp"
using namespace std;

DeckOfCards::DeckOfCards(){
  for (int j = 0; j < 4; j ++)
    for (int i = 0; i < 13; i ++)
      deck.push_back(Card(i,j));
}

Card DeckOfCards::dealCard(){
  Card ans = deck[0];
  deck.erase(deck.begin());
  return ans;
}

bool DeckOfCards::moreCards() const{
  return !deck.empty();
}