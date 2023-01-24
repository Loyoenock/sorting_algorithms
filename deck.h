<<<<<<< HEAD
#ifndef DECK_H
#define DECK_H
=======
#ifndef __DECK__
#define __DECK__
>>>>>>> 8ec63ae690d1024835650ef3d3ee4b7a1f40e4c2

#include <stdlib.h>

/**
<<<<<<< HEAD
 * enum kind_e - Enumeration of card suits.
 * @SPADE: Spades suit.
 * @HEART: Hearts suit.
 * @CLUB: Clubs suit.
 * @DIAMOND: Diamonds suit.
 */
=======
  * enum kind_e - deck's kind.
  * @SPADE: Spade kind.
  * @HEART: heart kind.
  * @CLUB: Club kind.
  * @DIAMOND: Diamond kind.
  */
>>>>>>> 8ec63ae690d1024835650ef3d3ee4b7a1f40e4c2
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
<<<<<<< HEAD

#endif /* DECK_H */
=======
int main(void);

#endif /* __DECK__ */
>>>>>>> 8ec63ae690d1024835650ef3d3ee4b7a1f40e4c2
