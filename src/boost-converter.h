// ATiny85

#define PWM_OUT         PB0
#define V_OUT_ADC       PB5
#define V_IN_ADC        PB2
#define V_OUT_BTN_PLUS  PB3
#define V_OUT_BTN_MINUS PB4
#define TX              PB1


/**
 * @brief  Set DDRB and PORTB registers
 * @note
 * @retval None
 */
void setup_pins(void);

/**
 * @brief  Read input voltage using ADC
 * @note
 * @retval unsigned short int
 */
unsigned short int Vin(void);

/**
 * @brief  Read output voltage using ADC
 * @note
 * @retval unsigned short int
 */
unsigned short int Vout(void);

/**
 * @brief  Run PWM at selected duty cycle
 * @note
 * @param  D: ON Duty Cycle
 * @retval None
 */
void PWM(unsigned int D);
