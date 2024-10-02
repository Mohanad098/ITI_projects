 /* Header file for the LCD driver*/
 

#ifndef LCD_H_
#define LCD_H_

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/MGPIO/MGPIO_interface.h"
#include "../../MCAL/MRCC/MRCC_Int.h"
#include "../../LIB/delay.h"
#include <math.h>
#include <stdlib.h>

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

/* LCD Data bits mode configuration, its value should be 4 or 8*/
#define LCD_DATA_BITS_MODE 4

#if((LCD_DATA_BITS_MODE != 4) && (LCD_DATA_BITS_MODE != 8))

#error "Number of Data bits should be equal to 4 or 8"

#endif

/* LCD HW Ports and Pins Ids */
#define LCD_RS_PORT_ID                  _GPIOA_PORT
#define LCD_RS_PIN_ID                  _PIN_11

#define LCD_E_PORT_ID                  _GPIOA_PORT
#define LCD_E_PIN_ID                   _PIN_8

#define LCD_DATA_PORT_ID               _GPIOA_PORT

#if (LCD_DATA_BITS_MODE == 4)

#define LCD_DB4_PIN_ID                 _PIN_4
#define LCD_DB5_PIN_ID                 _PIN_5
#define LCD_DB6_PIN_ID                 _PIN_6
#define LCD_DB7_PIN_ID                 _PIN_7

#endif

#if (LCD_DATA_BITS_MODE == 8)

#define LCD_DB0_PIN_ID                 _PIN_0
#define LCD_DB1_PIN_ID                 _PIN_1
#define LCD_DB2_PIN_ID                 _PIN_2
#define LCD_DB3_PIN_ID                 _PIN_3
#define LCD_DB4_PIN_ID                 _PIN_4
#define LCD_DB5_PIN_ID                 _PIN_5
#define LCD_DB6_PIN_ID                 _PIN_6
#define LCD_DB7_PIN_ID                 _PIN_7


#endif

/* LCD Commands */
#define LCD_CLEAR_COMMAND                    0x01
#define LCD_GO_TO_HOME                       0x02
#define LCD_TWO_LINES_EIGHT_BITS_MODE        0x38
#define LCD_TWO_LINES_FOUR_BITS_MODE         0x28
#define LCD_TWO_LINES_FOUR_BITS_MODE_INIT1   0x33
#define LCD_TWO_LINES_FOUR_BITS_MODE_INIT2   0x32
#define LCD_CURSOR_OFF                       0x0C
#define LCD_CURSOR_ON                        0x0E
#define LCD_SET_CURSOR_LOCATION              0x80

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Initialize the LCD:
 * 1. Setup the LCD pins directions by use the GPIO driver.
 * 2. Setup the LCD Data Mode 4-bits or 8-bits.
 */
void LCD_init(void);

/*
 * Description :
 * Send the required command to the screen
 */
void LCD_sendCommand(u8 command);

/*
 * Description :
 * Display the required character on the screen
 */
void LCD_displayCharacter(u8 data);

/*
 * Description :
 * Display the required string on the screen
 */
void LCD_displayString(const s8 *Str);

/*
 * Description :
 * Move the cursor to a specified row and column index on the screen
 */
void LCD_moveCursor(u8 row,u8 col);

/*
 * Description :
 * Display the required string in a specified row and column index on the screen
 */
void LCD_displayStringRowColumn(u8 row,u8 col,const s8 *Str);

/*
 * Description :
 * Display the required decimal value on the screen
 */
void LCD_intgerToString(s32 data);

/*
 * Description :
 * Send the clear screen command
 */
void LCD_clearScreen(void);



#endif /* LCD_H_ */
