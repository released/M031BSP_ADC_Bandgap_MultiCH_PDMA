/*_____ I N C L U D E S ____________________________________________________*/
#include <stdio.h>
#include "NuMicro.h"

/*_____ D E C L A R A T I O N S ____________________________________________*/

/*_____ D E F I N I T I O N S ______________________________________________*/


#define ADC_DMA_CH 					    	            (2)
#define ADC_DMA_OPENED_CH   				            (1 << ADC_DMA_CH)

#define ADC_RESOLUTION							        (4096ul)
//#define ADC_REF_VOLTAGE							(3300ul)	//(float)(3.3f)
#define ADC_CH_NUM	 							        (16)

#define ADC_MAX_TARGET							        (4095ul)	//(float)(2.612f)
#define ADC_MIN_TARGET							        (0ul)	//(float)(0.423f)

#define ADC_SAMPLE_COUNT                                (8)
#define ADC_SAMPLE_POWER	 				            (3)
#define ADC_SAMPLE_DROP 						        (4ul)
#define ADCTotalLength                                  (ADC_SAMPLE_COUNT+ADC_SAMPLE_DROP)   // drop first 4 ADC result 

// #define VREF_SAMPLE_POWER                       (64) /* The last line of GetAVDDCodeByADC() need revise when VREF_SAMPLE_POWER is changed. */

#define ADC_DIGITAL_SCALE(void) 		                (0xFFFU >> ((0) >> (3U - 1U)))		//0: 12 BIT 

#define ECO_VR                                          (15)//(ADC0_CH15)
#define Vsb_MCU_V                                       (9)//(ADC0_CH9 )
#define FG                                              (8)//(ADC0_CH8 )
#define PWR_STABLE                                      (7)//(ADC0_CH7 )
#define TH_Input  	                                    (6)//(ADC0_CH6 )
#define MCU_12V_V                                       (5)//(ADC0_CH5 )
#define MCU_5V_V                                        (4)//(ADC0_CH4 )
#define MCU_5V_I                                        (3)//(ADC0_CH3 )
#define MCU_12V_I                                       (2)//(ADC0_CH2 )
#define MCU_3V3_V                                       (1)//(ADC0_CH1 )
#define MCU_3V3_I                                       (0)//(ADC0_CH0 )



/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/

