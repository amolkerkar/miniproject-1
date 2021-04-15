# Requirements
## Introduction 
* A program that estimates the strength of each hand winning in poker in a situation described by the test input file.
* A computer poker player is a computer program designed to play the game of poker against human opponents or other computer opponents. It will determine its strength of cards just by identifying the cards it is dealt.

## Research
### Getting familiar with game first to design program
Poker is any of a number of card games in which players wager over which hand is best according to that specific game's rules in ways similar to these rankings. Often using a standard deck, poker games vary in deck configuration, the number of cards in play, the number dealt face up or face down, and the number shared by all players, but all have rules that involve one or more rounds of betting. In most modern poker games, the first round of betting begins with one or more of the players making some form of a forced bet (the blind or ante). In standard poker, each player bets according to the rank they believe their hand is worth as compared to the other players. The action then proceeds clockwise as each player in turn must either match (or "call") the maximum previous bet, or fold, losing the amount bet so far and all further involvement in the hand. A player who matches a bet may also "raise" (increase) the bet. The betting round ends when all players have either called the last bet or folded. If all but one player folds on any round, the remaining player collects the pot without being required to reveal their hand. If more than one player remains in contention after the final betting round, a showdown takes place where the hands are revealed, and the player with the winning hand takes the pot.

### Gameplay
In casual play, the right to deal a hand typically rotates among the players and is marked by a token called a dealer button (or buck). In a casino, a house dealer handles the cards for each hand, but the button (typically a white plastic disk) is rotated clockwise among the players to indicate a nominal dealer to determine the order of betting. The cards are dealt clockwise around the poker table, one at a time.

One or more players are usually required to make forced bets, usually either an ante or a blind bet (sometimes both). The dealer shuffles the cards, the player on the chair to his or her right cuts, and the dealer deals the appropriate number of cards to the players one at a time, beginning with the player to his or her left. Cards may be dealt either face-up or face-down, depending on the variant of poker being played. After the initial deal, the first of what may be several betting rounds begins. Between rounds, the players' hands develop in some way, often by being dealt additional cards or replacing cards previously dealt. At the end of each round, all bets are gathered into the central pot.

At any time during a betting round, if one player bets, no opponents choose to call (match) the bet, and all opponents instead fold, the hand ends immediately, the bettor is awarded the pot, no cards are required to be shown, and the next hand begins. This is what makes bluffing possible. Bluffing is a primary feature of poker, one that distinguishes it from other vying games and from other games that make use of poker hand rankings.

At the end of the last betting round, if more than one player remains, there is a showdown, in which the players reveal their previously hidden cards and evaluate their hands. The player with the best hand according to the poker variant being played wins the pot. A poker hand comprises five cards; in variants where a player has more than five cards available to them, only the best five-card combination counts. There are 10 different kinds of poker hands such as straight flush, four of a kind etc.

### Future Scope
The subject of online cpu player and computer assistance, while playing online poker, is very controversial. Player opinion is quite varied when it comes to deciding which types of computer software fall into the category unfair advantage. One of the primary factors in defining a cpu bot is whether or not the computer program can interface with the poker client (in other words, play by itself) without the help of its human operator. Computer programs with this ability are said to have or be an autoplayer and are universally defined to be in the category of bots regardless of how well they play poker.

The issue of unfair advantage has much to do with what types of information and artificial intelligence are available to the computer program. In addition, cpu bots can play for many hours at a time without human weaknesses such as fatigue and can endure the natural variances of the game without being influenced by human emotion (or "tilt"). On the other hand, bots have some significant disadvantages - for example, it is very difficult for a bot to accurately read a bluff or adjust to the strategy of opponents the way humans can.

## Defining Our System
![Description](https://github.com/Pritesh51199/miniproject/blob/main/1_Requirements/cards-52.png)
![Description](https://github.com/Pritesh51199/miniproject/blob/main/1_Requirements/Varieties.png)

To get started, We will see in "cards.h" that it starts by definingan enum suits (SPADES, HEARTS, DIAMONDS, and CLUBS). This enum also has NUM_SUITS, which will have a numeric value of 4 (indicating how many suits there are), and can also be used to indicate an invalid suit. 

Next,The struct has two parts, a value (2,3,4,5,6,7,8,9,10,J,Q,K,A) and a suit (s,h,d,c). Following the struct declaration, there are some #defines for constants for the values of Ace, King, Queen, and Jack. Accordingly, a card's value should be between 2 and 14 (inclusive).	There is also an enum for the hand ranking (what kind of poker hand you get). We won't be doing anything with these at this point, except for writing a function to convert from the enumerated values	to a string. 

Last are some function prototypes. We will write each of these in cards.c. Now go into cards.c, and write each of these functions. Here are the specifics: 

- void assert_card_valid(card_t c);

This function should use assert() to check that the card passed in has valid values. In particular, its value should be between 2 and VALUE_ACE (inclusive of both), and its suit should be between SPADES and CLUBS (inclusive of both).

- const char * ranking_to_string(hand_ranking_t r);

This function should convert the hand_ranking_t enumerated value passed in to a string that describes it. Remember that Drew showed us a nice way to do this with emacs keyboard macros!

- char value_letter(card_t c);

This function should return the character that textually represents the value of the passed-in card. For values 2-9, this should be that digit. For 10, it should be '0', and for Jack, Queen, King, and Ace, it should be 'J', 'Q', 'K', and 'A' respectively. Hint: remember everything is a number.

For example, the character '0' has the decimal value 48, and the character '5' has the decimal value 53, so you could represent '5' as '0' + 5.

- char suit_letter(card_t c);

This function should return the letter that textually represents the suit of the card passed in ('s', 'h', 'd', or 'c' for SPADES, HEARTS, DIAMONDS, or CLUBS).

- void print_card(card_t c);

This function should print out the textual representation of the card (hint: use the functions you previously wrote). It should print the value first, then the suit. For example,
As (for Ace of spades)
0d (for 10 of diamonds)
Kc (for King of clubs) etc.
This function should not print any additional spaces or newlines after the card's text.

- card_t card_from_letters(char value_let, char suit_let);

This function should make and return a card_t whose value and suit correspond to the letters passed in. If the values passed in are invalid, you should use assert() or print an error message and exit(EXIuT_FAILURE).

- card_t card_from_num(unsigned c);

This function should take a number from 0 (inclusive) to 52 (exclusive) and map it uniquely to a card value/suit combination. Exactly how we map the numbers to values/suits is up to you, but you must guarantee that each valid value/suit combination corresponds to exactly one input value in the range [0,52]. Hint: We may want to use the mod operator % to find the remainder of a number divided by 13.

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/Pritesh51199/miniproject/blob/main/1_Requirements/Cards.png)

# 4W&#39;s and 1&#39;H



## Who:
* Players who will require to know the chances of their winning for every situation with the cards they are dealt with.

## What:
* Many Players make the mistake of reading the cards strength they are dealt with which makes them lose higher with bad strength of cards or win lower with good strength of cards. So this Program was developed for the players to develop their skills for gameplay.

## When:
* The Problem started when rookies started loosing too much to the pros and still kept playing even though they understood so little of what they are playing. So the first ever computer program named Polaris was developed in 2007 to play against human professionals where program played while calculating it’s chances of winning against the professionals with the strength of cards it was dealt with.

## Where:
* This program was used in most of the high level casinos in countries like US, UK, Japan, etc.

## How:
* There were too many players who were not able to understand the situation for a particular gameplay with the cards they were dealt with and the opponents they had to play against and the amount they should play with every hand.

# Detail requirements
## High Level Requirements
| ID | Description | Status | 
| ----- | ----- | --------- |
| HR01 | User shall be able to check if cards value passing have valid values or not | Implemented |
| HR02 | User shall be able to choose a card value | Implemented | 
| HR03 | User shall be able to choose a suit | Implemented |
| HR04 | User shall be able to determine the amount he wants to bet in a particular round of game | FUTURE |

##  Low level Requirements
 
| ID | Description | Status (Implemented/Future) |
| ------ | --------- | ----- |
| LR01 | Value accepted shall only be values from 2-10, 'A', 'K', 'Q', 'J'. For any different number or letter, it will give no values  | Implemented |
| LR02 | Suits will be accepted only if the following letters as input are given: 's', 'h', 'd', 'c' | Implemented |
| LR03 | To Determine chances of winning a game looking at strengths of card and by probability of opponents if they will play or not | FUTURE |
| LR04 | Looking at the past records of player and analysing the gameplay of the opponent and how to proceed against it| FUTURE |

