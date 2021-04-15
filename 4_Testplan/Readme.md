# TEST PLAN:

## Table : High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| H_01 | Check if Values given are valid or not | Cards Letter Values | TRUE | PASS | Requirement based |
| H_01 | Check if Suits given are valid or not | Cards Suit Letters | TRUE | PASS | Requirement based |
| H_02 | Check the values given to cards | Corresponding value of Card Letter | "VALUE" | "VALUE" | Technical |
| H_03 | Check the suits given to cards | Corresponding suit of Card | "VALUE" | "VALUE" | Technical |
| H_04 | To bet a particular amount for particular circumstances | Cards Strength in terms of Value and Suit | "VALUE" | "VALUE" | Technical |



## Table : Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| L_01 | H_01 | During Value letter intake, Check if the Value is Valid or not | Card Letter Values | TRUE | PASS | Requirement based |
| L_01_02 | H_01,H_02 | Checking the value of cards given | Card Letter Values | "VALUE" | "VALUE" | Technical |
| L_02 | H_01 | During Suit letter intake, Check if the Suit is Valid or not | Cards Suit Letters | TRUE | PASS | Requirement based |
| L_02_02 | H_01,H_03 | Checking the Suit of Letter given | Cards Suit Letters | "VALUE" | "VALUE" | Technical |
| L_03 | H_02,H_03 | The card ranking should be shown for particular values given | "VALUE","VALUE" | CARD_RANK | CARD_RANK | Technical |
| L_04 | H_02,H_03,H_04 | Looking at the card strength and opponent moves we will get chances in terms of percentage | Card Strength Value | "CHANCE_PERCENTAGE" | "CHANCE_PERCENTAGE" | Technical |
| L_05 | H_02,H_03,H_04 | Looking at past records of opponent, Analysing the counter moves | Card Strength Value,Opponent Card Strength Value,Moves Statistics | "MOVE","AMOUNT" | "MOVE","AMOUNT" | Technical |

