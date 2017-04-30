#include "card.hpp"
#include <string>
using namespace std;

const string Face[15] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
const string Suit[5] = {"Hearts", "Diamonds", "Clubs", "Spades"};

Card::Card(int cardFace, int cardSuit){
  face = cardFace;
  suit = cardSuit;
}

int Card::getFace() const{
  return face;
}

int Card::getSuit() const{
  return suit;
}

string Card::toString() const{
  string s = Face[face] + " of " + Suit[suit];
  return s;
}
