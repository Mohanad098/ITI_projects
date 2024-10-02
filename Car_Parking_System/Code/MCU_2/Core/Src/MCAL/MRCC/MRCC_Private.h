/*
 * MRCC_Private.h
 *
 *  Created on: Aug 10, 2023
 *      Author: Mostafa Ashraf
 */

#ifndef MCAL_MRCC_PRIVATE_H_
#define MCAL_MRCC_PRIVATE_H_

#define HSEON   	16
#define HSEBYP  	18
#define CSSON   	19
#define HSION   	0
#define PLLON   	24

#define SW0     	0
#define SW1     	1

#define PER_ENABLE	1
#define PER_DISABLE	1

/************************** RCC BASE ADDRESS  **************************************/
#define RCC_BASE_ADDR  0x40023800

/************************** RCC REGISTERS  **************************************/
typedef struct{

	u32 CR;
	u32 PLLCFGR;
	u32 CFGR;
	u32 CIR;
	u32 AHB1RSTR;
	u32 AHB2RSTR;
	u32 Reserved1;
	u32 Reserved2;
	u32 APB1RSTR;
	u32 APB2RSTR;
	u32 Reserved3;
	u32 Reserved4;
	u32 AHB1ENR;
	u32 AHB2ENR;
	u32 Reserved5;
	u32 Reserved6;
	u32 APB1ENR;
	u32 APB2ENR;
	u32 Reserved7;
	u32 Reserved8;
	u32 AHB1LPENR;
	u32 AHB2LPENR;
	u32 Reserved9;
	u32 Reserved10;
	u32 APB1LPENR;
	u32 APB2LPENR;
	u32 Reserved11;
	u32 Reserved12;
	u32 BDCR;
	u32 CSR;
	u32 Reserved13;
	u32 Reserved14;
	u32 SSCGR;
	u32 PLLI2SCFGR;
	u32 Reserved15;
	u32 DCKCFGR;

}RCC_MemMap_t;

#define RCC ((volatile RCC_MemMap_t*)(RCC_BASE_ADDR))

#endif /* MCAL_MRCC_PRIVATE_H_ */
