/**
 * @file cards.h
 * @author Pritesh Gami (https://github.com/Pritesh51199)
 * @brief This Program is about finding the values and ranking of cards considering many factors
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef CARD_H
#define CARD_H
#define VALUE_ACE 14
#define VALUE_KING 13
#define VALUE_QUEEN 12
#define VALUE_JACK 11

/**
 * @brief Types of Suits
 * 
 */
typedef enum {
  SPADES,
  HEARTS,
  DIAMONDS,
  CLUBS,
  NUM_SUITS
} suit_t;

/**
 * @brief Structure used to tag different suits of cards
 * 
 */
struct card_tag {
  unsigned value;
  suit_t suit;
};

/**
 * @brief Structure containing different hand ranking of cards
 * 
 */
typedef struct card_tag card_t;
typedef enum {
  STRAIGHT_FLUSH,
  FOUR_OF_A_KIND,
  FULL_HOUSE,
  FLUSH,
  STRAIGHT,
  THREE_OF_A_KIND,
  TWO_PAIR,
  PAIR,
  NOTHING
} hand_ranking_t;

/**
 * @brief Taking inpu as Character assigned to cards to find their values
 * 
 * @param c 
 * @return card_t 
 */
card_t card_from_num(unsigned c);

/**
 * @brief Checking the validity of character
 * 
 * @param c 
 */
void assert_card_valid(card_t c);

/**
 * @brief Assigning hand ranking to the particular cards giving particular values
 * 
 * @param r 
 * @return const char* 
 */
const char * ranking_to_string(hand_ranking_t r) ;

/**
 * @brief Taking input as value letter to get particular value of particular character of card
 * 
 * @param c 
 * @return char 
 */
char value_letter(card_t c);

/**
 * @brief Taking input as suit letter to get particular suit of particular character of card
 * 
 * @param c 
 * @return char 
 */
char suit_letter(card_t c) ;

/**
 * @brief printing the card with it's particular value and suit
 * 
 * @param c 
 */
void print_card(card_t c);

/**
 * @brief Getting card identificaion
 * 
 * @param value_let 
 * @param suit_let 
 * @return card_t 
 */
card_t card_from_letters(char value_let, char suit_let);

#endif
