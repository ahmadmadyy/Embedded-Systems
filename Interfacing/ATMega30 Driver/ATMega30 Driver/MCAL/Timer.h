/*
 * Timers.h
 *
 * Created: 7/10/2021 7:45:16 PM
 *  Author: EN.ESLAM EID
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "Timer_CFG.h"


/*Timer0 Modes*/
#define T0_NORMAL_MODE             0
#define T0_PWM_MODE                1
#define T0_CTC_MODE                2
#define T0_FAST_PWM_MODE           3

/*Timer1 Modes*/
#define T1_NORMAL_MODE             0
#define T1_PWM_MODE                1
#define T1_CTC_MODE                2
#define T1_FAST_PWM_MODE           3

/*Timer1 TCNT Top Value Setting*/
#define T1_TCNT1_TOP_OCR1A         0
#define T1_TCNT1_TOP_ICR1          1

/*Timer2 Modes*/
#define T2_NORMAL_MODE             0
#define T2_PWM_MODE                1
#define T2_CTC_MODE                2
#define T2_FAST_PWM_MODE           3

/**********Timer0 PWM Modes************/

/*Timer0 Fast PWM Modes*/
#define OCR0_DISCONNECTED       0
#define RESERVED                1
#define F_OC0_CCOMP_STOP        2
#define F_OC0_SCOMP_CTOP        3

/*Timer0 Phase Correct PWM Modes*/
#define OCR0_DISCONNECTED       0
#define RESERVED                1
#define P_OC0_CCOMPU_SCOMPD     2
#define P_OC0_SCOMPU_CCOMPD     3

/**********Timer1 PWM Modes************/

/*Timer1 Fast PWM Modes*/
#define OCR1A_DISCONNECTED       0
#define RESERVED                 1
#define F_OC1A_CCOMP_STOP        2
#define F_OC1A_SCOMP_CTOP        3

/*Timer1 Phase Correct PWM Modes*/
#define OCR1A_DISCONNECTED       0
#define RESERVED                 1
#define P_OC1A_CCOMPU_SCOMPD     2
#define P_OC1A_SCOMPU_CCOMPD     3

/**********Timer2 PWM Modes************/

/*Timer2 Fast PWM Modes*/
#define OCR2_DISCONNECTED       0
#define RESERVED                1
#define F_OC2_CCOMP_STOP        2
#define F_OC2_SCOMP_CTOP        3

/*Timer2 Phase Correct PWM Modes*/
#define OCR2_DISCONNECTED       0
#define RESERVED                1
#define P_OC2_CCOMPU_SCOMPD     2
#define P_OC2_SCOMPU_CCOMPD     3

/*Timer0 Clocks*/
#define T0_NO_CLOCK                0
#define T0_PURE_CLOCK              1
#define T0_CLOCK_8                 2
#define T0_CLOCK_64                3
#define T0_CLOCK_256               4
#define T0_CLOCK_1024              5

/*Timer1 Clocks*/
#define T1_NO_CLOCK                0
#define T1_PURE_CLOCK              1
#define T1_CLOCK_8                 2
#define T1_CLOCK_64                3
#define T1_CLOCK_256               4
#define T1_CLOCK_1024              5

/*Timer2 Clocks*/
#define T2_NO_CLOCK                0
#define T2_PURE_CLOCK              1
#define T2_CLOCK_8                 2
#define T2_CLOCK_32                3
#define T2_CLOCK_64                4
#define T2_CLOCK_128               5
#define T2_CLOCK_256               6
#define T2_CLOCK_1024              7

void callback0(void(*p)(Uint32));
void callback1(void(*p)(Uint8, Uint8));
void callback2(void(*p)(void));

/*Timer0 Functions*/
void TIMER0_INIT(void);
void TIMER0_Start(void);
void TIMER0_Stop(void);
void TIMER0_SetDelay(Uint32 delay);
void PWM0_Gen(f32 duty_cycle, Uint8 switcher);

/*Timer1 Functions*/
void TIMER1_INIT(void);
void TIMER1_Start(void);
void TIMER1_Stop(void);
void TIMER1_SetDelay(Uint32 delay);
void PWM1_Gen(f32 duty_cycle, Uint8 switcher);

/*Timer2 Functions*/
void TIMER2_INIT(void);
void TIMER2_Start(void);
void TIMER2_Stop(void);
void TIMER2_SetDelay(Uint32 delay);



/* TCCR0 */
#define FOC0    7
#define WGM00   6
#define COM01   5
#define COM00   4
#define WGM01   3
#define CS02    2
#define CS01    1
#define CS00    0

/* TCCR2 */
#define FOC2    7
#define WGM20   6
#define COM21   5
#define COM20   4
#define WGM21   3
#define CS22    2
#define CS21    1
#define CS20    0

/* ASSR */
/* bits 7-4 reserved */
#define AS2     3
#define TCN2UB  2
#define OCR2UB  1
#define TCR2UB  0

/* TCCR1A */
#define COM1A1  7
#define COM1A0  6
#define COM1B1  5
#define COM1B0  4
#define FOC1A   3
#define FOC1B   2
#define WGM11   1
#define WGM10   0

/* TCCR1B */
#define ICNC1   7
#define ICES1   6
/* bit 5 reserved */
#define WGM13   4
#define WGM12   3
#define CS12    2
#define CS11    1
#define CS10    0

/* WDTCR */
/* bits 7-5 reserved */
#define WDTOE   4
#define WDE     3
#define WDP2    2
#define WDP1    1
#define WDP0    0

#endif /* TIMERS_H_ */