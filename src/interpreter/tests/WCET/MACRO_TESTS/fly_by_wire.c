#include <glib.h>
#include <libxml/parser.h>

#include <sys/socket.h>
#include <netinet/in.h>

#include <stdio.h>

//typedef signed char int8_t;
//typedef unsigned char uint8_t;
//typedef signed short int16_t;
//typedef unsigned short uint16_t;
//typedef signed long int32_t;
//typedef unsigned long uint32_t;
//typedef int pprz_t; // type of commands
//typedef uint8_t bool_t; // Boolean values

//#endif // INTTYPES_H_

int _SFR_ASM_COMPAT ;
int __SFR_OFFSET ;
int nav_stage;
int TWBR ;
int TWSR ;
int TWAR ;
int TWDR ;
int ADCW ;
int ADC ;
int ADCL ;
int ADCH ;
int ADCSR ;
int ADCSRA ;
int ADMUX ;
int ACSR ;
int UBRRL ;
int UCSRB ;
int UCSRA ;
int UDR ;
int SPCR ;
int SPSR ;
int SPDR ;
int PIND ;
int DDRD ;
int PORTD ;
int PINC ;
int DDRC ;
int PORTC ;
int PINB ;
int DDRB ;
int PORTB ;
int UCSRC ;
int UBRRH ;
int WDTCR ;
int ASSR ;
int OCR2 ;
int TCNT2 ;
int TCCR2 ;
int ICR1 ;
int ICR1L ;
int ICR1H ;
int OCR1B ;
int OCR1BL ;
int OCR1BH ;
int OCR1A ;
int OCR1AL ;
int OCR1AH ;
int TCNT1 ;
int TCNT1L ;
int TCNT1H ;
int TCCR1B ;
int TCCR1A ;
int SFIOR ;
int OSCCAL ;
int TCNT0 ;
int TCCR0 ;
int MCUCSR ;
int MCUCR ;
int TWCR ;
int SPMCR ;
int TIFR ;
int TIMSK ;
int GIFR ;
int GIMSK ;
int GICR ;
int SIG_INTERRUPT0	 ;
int SIG_INTERRUPT1	 ;
int SIG_OUTPUT_COMPARE2 ;
int SIG_OVERFLOW2	 ;
int SIG_INPUT_CAPTURE1 ;
int SIG_OUTPUT_COMPARE1A ;
int SIG_OUTPUT_COMPARE1B ;
int SIG_OVERFLOW1	 ;
int SIG_OVERFLOW0	 ;
int SIG_SPI		 ;
int SIG_UART_RECV	 ;
int SIG_UART_DATA	 ;
int SIG_UART_TRANS	 ;
int SIG_ADC		 ;
int SIG_EEPROM_READY ;
int SIG_COMPARATOR	 ;
int SIG_2WIRE_SERIAL ;
int SIG_SPM_READY	 ;
int _VECTORS_SIZE ;
int INT1 ;
int INT0 ;
int IVSEL ;
int IVCE ;
int INTF1 ;
int INTF0 ;
int OCIE2 ;
int TOIE2 ;
int TICIE1 ;
int OCIE1A ;
int OCIE1B ;
int TOIE1 ;
int TOIE0 ;
int OCF2 ;
int TOV2 ;
int ICF1 ;
int OCF1A ;
int OCF1B ;
int TOV1 ;
int TOV0 ;
int SPMIE ;
int RWWSB ;
int RWWSRE ;
int BLBSET ;
int PGWRT ;
int PGERS ;
int SPMEN ;
int TWINT ;
int TWEA ;
int TWSTA ;
int TWSTO ;
int TWWC ;
int TWEN ;
int TWIE ;
int TWA6    ;
int TWA5    ;
int TWA4    ;
int TWA3    ;
int TWA2    ;
int TWA1    ;
int TWA0    ;
int TWGCE ;
int TWS7 ;
int TWS6 ;
int TWS5 ;
int TWS4 ;
int TWS3 ;
int TWPS1 ;
int TWPS0 ;
int SE ;
int SM2 ;
int SM1 ;
int SM0 ;
int ISC11 ;
int ISC10 ;
int ISC01 ;
int ISC00 ;
int WDRF ;
int BORF ;
int EXTRF ;
int PORF ;
int ADHSM ;
int ACME ;
int PUD ;
int PSR2 ;
int PSR10 ;
int CS02 ;
int CS01 ;
int CS00 ;
int FOC2 ;
int WGM20 ;
int COM21 ;
int COM20 ;
int WGM21 ;
int CS22 ;
int CS21 ;
int CS20 ;
int AS2 ;
int TCN2UB ;
int OCR2UB ;
int TCR2UB ;
int COM1A1 ;
int COM1A0 ;
int COM1B1 ;
int COM1B0 ;
int FOC1A ;
int FOC1B ;
int WGM11 ;
int WGM10 ;
int ICNC1 ;
int ICES1 ;
int WGM13 ;
int WGM12 ;
int CS12 ;
int CS11 ;
int CS10 ;
int WDCE ;
int WDE ;
int WDP2 ;
int WDP1 ;
int WDP0 ;
int URSEL ;
int URSEL ;
int UMSEL ;
int UPM1 ;
int UPM0 ;
int USBS ;
int UCSZ1 ;
int UCSZ0 ;
int UCPOL ;
int PB7 ;
int PB6 ;
int PB5 ;
int PB4 ;
int PB3 ;
int PB2 ;
int PB1 ;
int PB0 ;
int DDB7 ;
int DDB6 ;
int DDB5 ;
int DDB4 ;
int DDB3 ;
int DDB2 ;
int DDB1 ;
int DDB0 ;
int PINB7 ;
int PINB6 ;
int PINB5 ;
int PINB4 ;
int PINB3 ;
int PINB2 ;
int PINB1 ;
int PINB0 ;
int PC6	 ;
int PC5	 ;
int PC4	 ;
int PC3	 ;
int PC2	 ;
int PC1	 ;
int PC0	 ;
int DDC6 ;
int DDC5 ;
int DDC4 ;
int DDC3 ;
int DDC2 ;
int DDC1 ;
int DDC0 ;
int PINC6 ;
int PINC5 ;
int PINC4 ;
int PINC3 ;
int PINC2 ;
int PINC1 ;
int PINC0 ;
int PD7	 ;
int PD6	 ;
int PD5	 ;
int PD4	 ;
int PD3	 ;
int PD2	 ;
int PD1	 ;
int PD0	 ;
int DDD7 ;
int DDD6 ;
int DDD5 ;
int DDD4 ;
int DDD3 ;
int DDD2 ;
int DDD1 ;
int DDD0 ;
int PIND7 ;
int PIND6 ;
int PIND5 ;
int PIND4 ;
int PIND3 ;
int PIND2 ;
int PIND1 ;
int PIND0 ;
int SPIF ;
int WCOL ;
int SPI2X ;
int SPIE ;
int SPE ;
int DORD ;
int MSTR ;
int CPOL ;
int CPHA ;
int SPR1 ;
int SPR0 ;
int RXC ;
int TXC ;
int UDRE ;
int FE ;
int DOR ;
int PE ;
int U2X ;
int MPCM ;
int RXCIE ;
int TXCIE ;
int UDRIE ;
int RXEN ;
int TXEN ;
int UCSZ2 ;
int RXB8 ;
int TXB8 ;
int ACD ;
int ACBG ;
int ACO ;
int ACI ;
int ACIE ;
int ACIC ;
int ACIS1 ;
int ACIS0 ;
int ADEN ;
int ADSC ;
int ADFR ;
int ADIF ;
int ADIE ;
int ADPS2 ;
int ADPS1 ;
int ADPS0 ;
int REFS1 ;
int REFS0 ;
int ADLAR ;
int MUX3 ;
int MUX2 ;
int MUX1 ;
int MUX0 ;
int SPM_PAGESIZE ;
int RAMEND	 ;
int XRAMEND	 ;
int E2END	 ;
int FLASHEND ;

int PINF      ;
int PINE      ;
int DDRE      ;
int PORTE     ;
int ADCW      ;
int ADC       ;
int ADCL      ;
int ADCH      ;
int ADCSR     ;
int ADCSRA    ;
int ADMUX     ;
int ACSR      ;
int UBRR0L    ;
int UCSR0B    ;
int UCSR0A    ;
int UDR0      ;
int SPCR      ;
int SPSR      ;
int SPDR      ;
int PIND      ;
int DDRD      ;
int PORTD     ;
int PINC      ;
int DDRC      ;
int PORTC     ;
int PINB      ;
int DDRB      ;
int PORTB     ;
int PINA      ;
int DDRA      ;
int PORTA     ;
int SFIOR     ;
int WDTCR     ;
int OCDR      ;
int OCR2      ;
int TCNT2     ;
int TCCR2     ;
int ICR1      ;
int ICR1L     ;
int ICR1H     ;
int OCR1B     ;
int OCR1BL    ;
int OCR1BH    ;
int OCR1A     ;
int OCR1AL    ;
int OCR1AH    ;
int TCNT1     ;
int TCNT1L    ;
int TCNT1H    ;
int TCCR1B    ;
int TCCR1A    ;
int ASSR      ;
int OCR0      ;
int TCNT0     ;
int TCCR0     ;
int MCUSR     ;
int MCUCSR    ;
int MCUCR     ;
int TIFR      ;
int TIMSK     ;
int EIFR      ;
int EIMSK     ;
int EICRB     ;
int RAMPZ     ;
int XDIV      ;
int DDRF      ;
int PORTF     ;
int PING      ;
int DDRG      ;
int PORTG     ;
int SPMCR     ;
int SPMCSR    ;
int EICRA     ;
int XMCRB     ;
int XMCRA     ;
int OSCCAL    ;
int TWBR      ;
int TWSR      ;
int TWAR      ;
int TWDR      ;
int TWCR      ;
int OCR1C     ;
int OCR1CL    ;
int OCR1CH    ;
int TCCR1C    ;
int ETIFR     ;
int ETIMSK    ;
int ICR3      ;
int ICR3L     ;
int ICR3H     ;
int OCR3C     ;
int OCR3CL    ;
int OCR3CH    ;
int OCR3B     ;
int OCR3BL    ;
int OCR3BH    ;
int OCR3A     ;
int OCR3AL    ;
int OCR3AH    ;
int TCNT3     ;
int TCNT3L    ;
int TCNT3H    ;
int TCCR3B    ;
int TCCR3A    ;
int TCCR3C    ;
int UBRR0H    ;
int UCSR0C    ;
int UBRR1H    ;
int UBRR1L    ;
int UCSR1B    ;
int UCSR1A    ;
int UDR1      ;
int UCSR1C    ;
int SIG_INTERRUPT0          ;
int SIG_INTERRUPT1          ;
int SIG_INTERRUPT2          ;
int SIG_INTERRUPT3          ;
int SIG_INTERRUPT4          ;
int SIG_INTERRUPT5          ;
int SIG_INTERRUPT6          ;
int SIG_INTERRUPT7          ;
int SIG_OUTPUT_COMPARE2     ;
int SIG_OVERFLOW2           ;
int SIG_INPUT_CAPTURE1      ;
int SIG_OUTPUT_COMPARE1A    ;
int SIG_OUTPUT_COMPARE1B    ;
int SIG_OVERFLOW1           ;
int SIG_OUTPUT_COMPARE0     ;
int SIG_OVERFLOW0           ;
int SIG_SPI                 ;
int SIG_USART0_RECV         ;
int SIG_UART0_RECV          ;
int SIG_USART0_DATA         ;
int SIG_UART0_DATA          ;
int SIG_USART0_TRANS        ;
int SIG_UART0_TRANS         ;
int SIG_ADC                 ;
int SIG_EEPROM_READY        ;
int SIG_COMPARATOR          ;
int SIG_OUTPUT_COMPARE1C    ;
int SIG_INPUT_CAPTURE3      ;
int SIG_OUTPUT_COMPARE3A    ;
int SIG_OUTPUT_COMPARE3B    ;
int SIG_OUTPUT_COMPARE3C    ;
int SIG_OVERFLOW3           ;
int SIG_USART1_RECV         ;
int SIG_UART1_RECV          ;
int SIG_USART1_DATA         ;
int SIG_UART1_DATA          ;
int SIG_USART1_TRANS        ;
int SIG_UART1_TRANS         ;
int SIG_2WIRE_SERIAL        ;
int SIG_SPM_READY           ;
int _VECTORS_SIZE ;
int    TWINT        ;
int    TWEA         ;
int    TWSTA        ;
int    TWSTO        ;
int    TWWC         ;
int    TWEN         ;
int    TWIE         ;
int    TWA6         ;
int    TWA5         ;
int    TWA4         ;
int    TWA3         ;
int    TWA2         ;
int    TWA1         ;
int    TWA0         ;
int    TWGCE        ;
int    TWS7         ;
int    TWS6         ;
int    TWS5         ;
int    TWS4         ;
int    TWS3         ;
int    TWPS1        ;
int    TWPS0        ;
int    SRL2         ;
int    SRL1         ;
int    SRL0         ;
int    SRW01        ;
int    SRW00        ;
int    SRW11        ;
int    XMBK         ;
int    XMM2         ;
int    XMM1         ;
int    XMM0         ;
int    XDIVEN       ;
int    XDIV6        ;
int    XDIV5        ;
int    XDIV4        ;
int    XDIV3        ;
int    XDIV2        ;
int    XDIV1        ;
int    XDIV0        ;
int     RAMPZ0      ;
int    ISC31        ;
int    ISC30        ;
int    ISC21        ;
int    ISC20        ;
int    ISC11        ;
int    ISC10        ;
int    ISC01        ;
int    ISC00        ;
int    ISC71        ;
int    ISC70        ;
int    ISC61        ;
int    ISC60        ;
int    ISC51        ;
int    ISC50        ;
int    ISC41        ;
int    ISC40        ;
int    SPMIE        ;
int    RWWSB        ;
int    RWWSRE       ;
int    BLBSET       ;
int    PGWRT        ;
int    PGERS        ;
int    SPMEN        ;
int    INT7         ;
int    INT6         ;
int    INT5         ;
int    INT4         ;
int    INT3         ;
int    INT2         ;
int    INT1         ;
int    INT0         ;
int    INTF7        ;
int    INTF6        ;
int    INTF5        ;
int    INTF4        ;
int    INTF3        ;
int    INTF2        ;
int    INTF1        ;
int    INTF0        ;
int    OCIE2        ;
int    TOIE2        ;
int    TICIE1       ;
int    OCIE1A       ;
int    OCIE1B       ;
int    TOIE1        ;
int    OCIE0        ;
int    TOIE0        ;
int    OCF2         ;
int    TOV2         ;
int    ICF1         ;
int    OCF1A        ;
int    OCF1B        ;
int    TOV1         ;
int    OCF0         ;
int    TOV0         ;
int    TICIE3       ;
int    OCIE3A       ;
int    OCIE3B       ;
int    TOIE3        ;
int    OCIE3C       ;
int    OCIE1C       ;
int    ICF3         ;
int    OCF3A        ;
int    OCF3B        ;
int    TOV3         ;
int    OCF3C        ;
int    OCF1C        ;
int    SRE          ;
int    SRW          ;
int    SRW10        ;
int    SE           ;
int    SM1          ;
int    SM0          ;
int    SM2          ;
int    IVSEL        ;
int    IVCE         ;
int    JTD          ;
int    JTRF         ;
int    WDRF         ;
int    BORF         ;
int    EXTRF        ;
int    PORF         ;
int    FOC          ;
int    WGM0         ;
int    COM1         ;
int    COM0         ;
int    WGM1         ;
int    CS2          ;
int    CS1          ;
int    CS0          ;
int    FOC0         ;
int    WGM00        ;
int    COM01        ;
int    COM00        ;
int    WGM01        ;
int    CS02         ;
int    CS01         ;
int    CS00         ;
int    FOC2         ;
int    WGM20        ;
int    COM21        ;
int    COM20        ;
int    WGM21        ;
int    CS22         ;
int    CS21         ;
int    CS20         ;
int    AS0          ;
int    TCN0UB       ;
int    OCR0UB       ;
int    TCR0UB       ;
int    COMA1        ;
int    COMA0        ;
int    COMB1        ;
int    COMB0        ;
int    COMC1        ;
int    COMC0        ;
int    WGMA1        ;
int    WGMA0        ;
int    COM1A1       ;
int    COM1A0       ;
int    COM1B1       ;
int    COM1B0       ;
int    COM1C1       ;
int    COM1C0       ;
int    WGM11        ;
int    WGM10        ;
int    COM3A1       ;
int    COM3A0       ;
int    COM3B1       ;
int    COM3B0       ;
int    COM3C1       ;
int    COM3C0       ;
int    WGM31        ;
int    WGM30        ;
int    ICNC         ;
int    ICES         ;
int    WGMB3        ;
int    WGMB2        ;
int    CSB2         ;
int    CSB1         ;
int    CSB0         ;
int    ICNC1        ;
int    ICES1        ;
int    WGM13        ;
int    WGM12        ;
int    CS12         ;
int    CS11         ;
int    CS10         ;
int    ICNC3        ;
int    ICES3        ;
int    WGM33        ;
int    WGM32        ;
int    CS32         ;
int    CS31         ;
int    CS30         ;
int    FOCA         ;
int    FOCB         ;
int    FOCC         ;
int    FOC3A        ;
int    FOC3B        ;
int    FOC3C        ;
int    FOC1A        ;
int    FOC1B        ;
int    FOC1C        ;
int    IDRD         ;
int    OCDR7        ;
int    OCDR6        ;
int    OCDR5        ;
int    OCDR4        ;
int    OCDR3        ;
int    OCDR2        ;
int    OCDR1        ;
int    OCDR0        ;
int    WDCE         ;
int    WDE          ;
int    WDP2         ;
int    WDP1         ;
int    WDP0         ;
int    TSM          ;
int    ADHSM        ;
int    ACME         ;
int    PUD          ;
int    PSR0         ;
int    PSR321       ;
int    SPIF         ;
int    WCOL         ;
int    SPI2X        ;
int    SPIE         ;
int    SPE          ;
int    DORD         ;
int    MSTR         ;
int    CPOL         ;
int    CPHA         ;
int    SPR1         ;
int    SPR0         ;
int    UMSEL        ;
int    UPM1         ;
int    UPM0         ;
int    USBS         ;
int    UCSZ1        ;
int    UCSZ0        ;
int    UCPOL        ;
int    UMSEL1       ;
int    UPM11        ;
int    UPM10        ;
int    USBS1        ;
int    UCSZ11       ;
int    UCSZ10       ;
int    UCPOL1       ;
int    UMSEL0       ;
int    UPM01        ;
int    UPM00        ;
int    USBS0        ;
int    UCSZ01       ;
int    UCSZ00       ;
int    UCPOL0       ;
int    RXC          ;
int    TXC          ;
int    UDRE         ;
int    FE           ;
int    DOR          ;
int    UPE          ;
int    U2X          ;
int    MPCM         ;
int    RXC1         ;
int    TXC1         ;
int    UDRE1        ;
int    FE1          ;
int    DOR1         ;
int    UPE1         ;
int    U2X1         ;
int    MPCM1        ;
int    RXC0         ;
int    TXC0         ;
int    UDRE0        ;
int    FE0          ;
int    DOR0         ;
int    UPE0         ;
int    U2X0         ;
int    MPCM0        ;
int    RXCIE        ;
int    TXCIE        ;
int    UDRIE        ;
int    RXEN         ;
int    TXEN         ;
int    UCSZ         ;
int    UCSZ2        ;
int    RXB8         ;
int    TXB8         ;
int    RXCIE1       ;
int    TXCIE1       ;
int    UDRIE1       ;
int    RXEN1        ;
int    TXEN1        ;
int    UCSZ12       ;
int    RXB81        ;
int    TXB81        ;
int    RXCIE0       ;
int    TXCIE0       ;
int    UDRIE0       ;
int    RXEN0        ;
int    TXEN0        ;
int    UCSZ02       ;
int    RXB80        ;
int    TXB80        ;
int    ACD          ;
int    ACBG         ;
int    ACO          ;
int    ACI          ;
int    ACIE         ;
int    ACIC         ;
int    ACIS1        ;
int    ACIS0        ;
int    ADEN         ;
int    ADSC         ;
int    ADFR         ;
int    ADIF         ;
int    ADIE         ;
int    ADPS2        ;
int    ADPS1        ;
int    ADPS0        ;
int    REFS1        ;
int    REFS0        ;
int    ADLAR        ;
int    MUX4         ;
int    MUX3         ;
int    MUX2         ;
int    MUX1         ;
int    MUX0         ;
int    PA7       ;
int    PA6       ;
int    PA5       ;
int    PA4       ;
int    PA3       ;
int    PA2       ;
int    PA1       ;
int    PA0       ;
int    DDA7         ;
int    DDA6         ;
int    DDA5         ;
int    DDA4         ;
int    DDA3         ;
int    DDA2         ;
int    DDA1         ;
int    DDA0         ;
int    PINA7        ;
int    PINA6        ;
int    PINA5        ;
int    PINA4        ;
int    PINA3        ;
int    PINA2        ;
int    PINA1        ;
int    PINA0        ;
int    PB7       ;
int    PB6       ;
int    PB5       ;
int    PB4       ;
int    PB3       ;
int    PB2       ;
int    PB1       ;
int    PB0       ;
int    DDB7         ;
int    DDB6         ;
int    DDB5         ;
int    DDB4         ;
int    DDB3         ;
int    DDB2         ;
int    DDB1         ;
int    DDB0         ;
int    PINB7        ;
int    PINB6        ;
int    PINB5        ;
int    PINB4        ;
int    PINB3        ;
int    PINB2        ;
int    PINB1        ;
int    PINB0        ;
int    PC7       ;
int    PC6       ;
int    PC5       ;
int    PC4       ;
int    PC3       ;
int    PC2       ;
int    PC1       ;
int    PC0       ;
int    DDC7         ;
int    DDC6         ;
int    DDC5         ;
int    DDC4         ;
int    DDC3         ;
int    DDC2         ;
int    DDC1         ;
int    DDC0         ;
int    PINC7        ;
int    PINC6        ;
int    PINC5        ;
int    PINC4        ;
int    PINC3        ;
int    PINC2        ;
int    PINC1        ;
int    PINC0        ;
int    PD7       ;
int    PD6       ;
int    PD5       ;
int    PD4       ;
int    PD3       ;
int    PD2       ;
int    PD1       ;
int    PD0       ;
int    DDD7         ;
int    DDD6         ;
int    DDD5         ;
int    DDD4         ;
int    DDD3         ;
int    DDD2         ;
int    DDD1         ;
int    DDD0         ;
int    PIND7        ;
int    PIND6        ;
int    PIND5        ;
int    PIND4        ;
int    PIND3        ;
int    PIND2        ;
int    PIND1        ;
int    PIND0        ;
int    PE7       ;
int    PE6       ;
int    PE5       ;
int    PE4       ;
int    PE3       ;
int    PE2       ;
int    PE1       ;
int    PE0       ;
int    DDE7         ;
int    DDE6         ;
int    DDE5         ;
int    DDE4         ;
int    DDE3         ;
int    DDE2         ;
int    DDE1         ;
int    DDE0         ;
int    PINE7        ;
int    PINE6        ;
int    PINE5        ;
int    PINE4        ;
int    PINE3        ;
int    PINE2        ;
int    PINE1        ;
int    PINE0        ;
int    PF7       ;
int    PF6       ;
int    PF5       ;
int    PF4       ;
int    PF3       ;
int    PF2       ;
int    PF1       ;
int    PF0       ;
int    DDF7         ;
int    DDF6         ;
int    DDF5         ;
int    DDF4         ;
int    DDF3         ;
int    DDF2         ;
int    DDF1         ;
int    DDF0         ;
int    PINF7        ;
int    PINF6        ;
int    PINF5        ;
int    PINF4        ;
int    PINF3        ;
int    PINF2        ;
int    PINF1        ;
int    PINF0        ;
int    PG4       ;
int    PG3       ;
int    PG2       ;
int    PG1       ;
int    PG0       ;
int    DDG4         ;
int    DDG3         ;
int    DDG2         ;
int    DDG1         ;
int    DDG0         ;
int    PING4        ;
int    PING3        ;
int    PING2        ;
int    PING1        ;
int    PING0        ;
int SPM_PAGESIZE ;
int    RAMEND  ;
int    XRAMEND  ;
int    E2END    ;
int    FLASHEND ;
int __vector_;
int RADIO_NAME ;
int RADIO_CTL_NB ;
int RADIO_CTL_D ;
int RADIO_THROTTLE ;
int RADIO_CTL_C ;
int RADIO_ROLL ;
int RADIO_CTL_B ;
int RADIO_PITCH ;
int RADIO_CTL_A ;
int RADIO_YAW ;
int RADIO_CTL_G ;
int RADIO_MODE ;
int RADIO_CTL_E ;
int RADIO_GAIN1 ;
int RADIO_CTL_F ;
int RADIO_GAIN2 ;
int RADIO_CTL_H ;
int RADIO_LLS ;
int RADIO_CTL_I ;
int RADIO_CALIB ;
int PPM_MIN_PULSE_WIDTH ;
int PPM_MAX_PULSE_WIDTH ;
int PPM_SYNC_PULSE ;
int M_PI ;
int HALFPI ;
int NB_ADC ;
int IF_CALIB_MODE_NONE      ;
int IF_CALIB_MODE_DOWN      ;
int IF_CALIB_MODE_UP        ;
int TRESHOLD1 ;
int TRESHOLD2 ;
int  PPRZ_MODE_MANUAL   ;
int  PPRZ_MODE_AUTO1    ;
int  PPRZ_MODE_AUTO2    ;
int  PPRZ_MODE_HOME     ;
int  PPRZ_MODE_NB       ;
int VERTICAL_MODE_MANUAL      ;
int VERTICAL_MODE_AUTO_GAZ    ;
int VERTICAL_MODE_AUTO_CLIMB  ;
int VERTICAL_MODE_AUTO_ALT    ;
int VERTICAL_MODE_NB          ;
int LATERAL_MODE_MANUAL    ;
int LATERAL_MODE_ROLL_RATE ;
int LATERAL_MODE_ROLL      ;
int LATERAL_MODE_COURSE    ;
int LATERAL_MODE_NB        ;
int IR_ESTIM_MODE_OFF        ;
int IR_ESTIM_MODE_ON         ;
int GAZ_THRESHOLD_TAKEOFF ;
int SP        ;
int SPL       ;
int SPH       ;
int SREG      ;
int    SREG_I       ;
int    SREG_T       ;
int    SREG_H       ;
int    SREG_S       ;
int    SREG_V       ;
int    SREG_N       ;
int    SREG_Z       ;
int    SREG_C       ;
int EECR ;
int EEDR ;
int EEAR ;
int EEARL ;
int EEARH ;
int    EERIE        ;
int    EEMWE        ;
int    EEWE         ;
int    EERE         ;
int CLOCK	 ;
int MAX_PPRZ ;
int MIN_PPRZ ;
int STATUS_RADIO_OK ;
int RADIO_REALLY_LOST ;
int AVERAGED_CHANNELS_SENT ;
int MASK_FBW_CHANGED ;
int STATUS_AUTO_OK  ;
int FRAME_LENGTH ;
int TRESHOLD_MANUAL_PPRZ ;
int RXFUTABA ;
int RXJR     ;
int PPM_RX_TYPE  ;
int PPM_FREQ    ;
int PPM_DDR  ;
int PPM_PORT ;
int PPM_PIN  ;
int PPM_NB_PULSES ;
int  MODE_MANUAL   ;
int  MODE_AUTO     ;
int SPI_PORT   ;
int SPI_PIN    ;
int SPI_SS_PIN ;
int __EICR ;
int __EICR ;
int __EICR ;

int    PORT7        ;
int    PORT6        ;
int    PORT5        ;
int    PORT4        ;
int    PORT3        ;
int    PORT2        ;
int    PORT1        ;
int    PORT0        ;
int    DD7          ;
int    DD6          ;
int    DD5          ;
int    DD4          ;
int    DD3          ;
int    DD2          ;
int    DD1          ;
int    DD0          ;
int    PIN7         ;
int    PIN6         ;
int    PIN5         ;
int    PIN4         ;
int    PIN3         ;
int    PIN2         ;
int    PIN1         ;
int    PIN0         ;
int DL_STX            ;
int DL_ETX            ;
int DL_HEAD_LEN       ;
int DL_PAYLOAD_OFFSET ;
int DL_TAIL_LEN       ;
int DEFAULT_LEN ;
int TRACE_ERROR                   ;
int TRACE_DATA_READ               ;
int TRACE_MSG_RAW                 ;
int TRACE_MSG                     ;
int TRACE_CHECKSUM                ;
int TRACE_DOWNLINK                ;
int TRACE_MODEM                   ;
int TRACE_MODEM_VERB              ;
int TRACE_MODEM_READ              ;
int TRACE_PARSER                  ;
int TRACE_TRANSPORT               ;
int TRACE_TRANSPORT_VERB          ;
int TRANSPORT_BUF_LEN ;
int TRANSPORT_HEAD_LEN       ;
int TRANSPORT_PAYLOAD_OFFSET ;
int TRANSPORT_TAIL_LEN       ;
int state ;
int sync_start ;
int AIRFRAME_NAME ;
int CTL_BRD_V1_2_1 ;
int ADC_CHANNEL_IR1 ;
int ADC_CHANNEL_IR2 ;
int NB_SERVO ;
int SERVO_MOTOR_LEFT ;
int SERVO_MOTOR_LEFT_TRAVEL ;
int SERVOS_NEUTRALS_3 ;
int SERVO_MOTOR_RIGHT ;
int SERVO_MOTOR_RIGHT_TRAVEL ;
int SERVOS_NEUTRALS_9 ;
int SERVO_AILERON_LEFT ;
int SERVO_AILERON_LEFT_TRAVEL ;
int SERVOS_NEUTRALS_0 ;
int SERVO_AILERON_RIGHT ;
int SERVO_AILERON_RIGHT_TRAVEL ;
int SERVOS_NEUTRALS_2 ;
int SERVO_ELEVATOR ;
int SERVO_ELEVATOR_TRAVEL ;
int SERVOS_NEUTRALS_6 ;
int SERVO_RUDDER ;
int SERVO_RUDDER_TRAVEL ;
int SERVOS_NEUTRALS_7 ;
int *SERVOS_MINS ;
int *SERVOS_NEUTRALS ;
int SERVOS_MAXS ;
int SERVO_MIN_US ;
int SERVO_MAX_US ;
int AILERON_DIFF ;
int COMBI_SWITCH ;
int IR_ROLL_NEUTRAL_DEFAULT ;
int IR_PITCH_NEUTRAL_DEFAULT ;
int IR_DEFAULT_CONTRAST ;
int IR_RAD_OF_IR_CONTRAST ;
int IR_RAD_OF_IR_MAX_VAL ;
int IR_RAD_OF_IR_MIN_VAL ;
int ROLL_PGAIN ;
int PITCH_OF_ROLL ;
int PITCH_PGAIN ;
int MAX_ROLL ;
int MAX_PITCH ;
int MIN_PITCH ;
int CLIMB_PITCH_PGAIN ;
int CLIMB_PITCH_IGAIN ;
int CLIMB_PGAIN ;
int CLIMB_IGAIN ;
int CLIMB_MAX ;
int CLIMB_LEVEL_GAZ ;
int CLIMB_PITCH_OF_VZ_PGAIN ;
int CLIMB_GAZ_OF_CLIMB ;
int COURSE_PGAIN ;
int ALTITUDE_PGAIN ;
int NAV_PITCH ;
int VOLTAGE_ADC_A ;
int VOLTAGE_ADC_B ;
int LOW_BATTERY ;
int NOMINAL_AIRSPEED ;
int CARROT ;
int ROLL_RESPONSE_FACTOR ;
int YAW_RESPONSE_FACTOR ;
int WEIGHT ;

int FLIGHT_PLAN_NAME ;
int NAV_UTM_EAST0 ;
int NAV_UTM_NORTH0 ;
int QFU ;
int WP_HOME ;
int NB_WAYPOINT ;
int GROUND_ALT ;
int SECURITY_ALT ;
int MAX_DIST_FROM_HOME ;

int ir_pitch_neutral;
int ir_roll_neutral;
int DL_ID ;
int DL_BOOT ;
int DL_CALIB_START ;
int DL_CALIB_CONTRAST ;
int DL_TAKEOFF ;
int DL_RAD_OF_IR ;
int DL_ATTITUDE ;
int DL_ADC ;
int DL_GPS ;
int DL_NAVIGATION_REF ;
int DL_NAVIGATION ;
int DL_PPRZ_MODE ;
int DL_BAT ;
int DL_DEBUG ;
int DL_CLIMB_PID ;
int DL_DOWNLINK_STATUS ;
int DL_MODEM_STATUS ;
int DL_SETTINGS ;
int DL_DESIRED ;
int DL_WIND ;
int DL_IMU ;
int DL_RAW_IMU ;
int DL_KALMAN ;
int DL_MSG_NB ;
int MESSAGES_MD5SUM ;
int UBX_SYNC1 ;
int UBX_SYNC2 ;
int UBX_NAV_ID ;
int UBX_NAV_POSLLH_ID ;
int UBX_NAV_POSUTM_ID ;
int UBX_NAV_STATUS_ID ;
int UBX_NAV_VELNED_ID ;
int UBX_NAV_SVINFO_ID ;
int UBX_USR_ID ;
int UBX_USR_IRSIM_ID ;
int UBX_USR_SERVOS_ID ;
int UBX_USR_PPM_ID ;
int VOLTAGE_TIME ;
int ANALOG_PORT ;
int ANALOG_PORT_DIR ;
int ANALOG_VREF ;
int STALLED_TIME  ;
int REALLY_STALLED_TIME ;
int AVERAGING_PERIOD ;
int _4017_NB_CHANNELS ;
int _4017_RESET_PORT        ;
int _4017_RESET_DDR         ;
int _4017_RESET_PIN         ;
int _4017_RESET_PORT        ;
int _4017_RESET_DDR         ;
int _4017_RESET_PIN         ;
int _4017_RESET_PORT        ;
int _4017_RESET_DDR         ;
int _4017_RESET_PIN         ;
int _4017_CLOCK_PORT        ;
int _4017_CLOCK_DDR         ;
int _4017_CLOCK_PIN         ;
int SERVO_OCR	 ;
int SERVO_ENABLE	 ;
int SERVO_FLAG	 ;
int SERVO_FORCE	 ;
int SERVO_COM0	 ;
int SERVO_COM1	 ;
int SERVO_MIN ;
int SERVO_MAX ;
int IT_PORT ;
int IT_DDR  ;
int IT_PIN  ;
int SPI_DDR  ;
int SPI_MOSI_PIN ;
int SPI_MISO_PIN ;
int SPI_SCK_PIN  ;
int TX_BUF_SIZE      ;
float course_pgain;
float max_roll;

unsigned short ppm_pulses[ 9 ];
int last_radio[ 9 ];
int avg_last_radio[ 9 ];
unsigned char last_radio_contains_avg_channels = FALSE;
volatile unsigned char ppm_valid;

struct inter_mcu_msg {
  signed short channels[9];  
  unsigned char ppm_cpt;
  unsigned char status;
  unsigned char nb_err;
  unsigned char vsupply; 
};

/************************************************************/
/************************ init ******************************/
/************************************************************/

init() {
  //int _AVR_SFR_DEFS_H_ = 1; 
  _SFR_ASM_COMPAT = 1; 
  __SFR_OFFSET = 20; 
  nav_stage=0;
  //int _AVR_IOM8_H_ = 1; 
  TWBR = _SFR_IO8(20); 
  TWSR = _SFR_IO8(20); 
  TWAR = _SFR_IO8(20); 
  TWDR = _SFR_IO8(20); 
  ADCW = _SFR_IO16(20); 
  ADC = _SFR_IO16(20); 
  ADCL = _SFR_IO8(20); 
  ADCH = _SFR_IO8(20); 
  ADCSR = _SFR_IO8(20); 
  ADCSRA = _SFR_IO8(20)  ; 
  ADMUX = _SFR_IO8(20); 
  ACSR = _SFR_IO8(20); 
  UBRRL = _SFR_IO8(20); 
  UCSRB = _SFR_IO8(20); 
  UCSRA = _SFR_IO8(20); 
  UDR = _SFR_IO8(20); 
  SPCR = _SFR_IO8(20); 
  SPSR = _SFR_IO8(20); 
  SPDR = _SFR_IO8(20); 
  PIND = _SFR_IO8(20); 
  DDRD = _SFR_IO8(20); 
  PORTD = _SFR_IO8(20); 
  PINC = _SFR_IO8(20); 
  DDRC = _SFR_IO8(20); 
  PORTC = _SFR_IO8(20); 
  PINB = _SFR_IO8(20); 
  DDRB = _SFR_IO8(20); 
  PORTB = _SFR_IO8(20); 
  UCSRC = _SFR_IO8(20); 
  UBRRH = _SFR_IO8(20); 
  WDTCR = _SFR_IO8(20); 
  ASSR = _SFR_IO8(20); 
  OCR2 = _SFR_IO8(20); 
  TCNT2 = _SFR_IO8(20); 
  TCCR2 = _SFR_IO8(20); 
  ICR1 = _SFR_IO16(20); 
  ICR1L = _SFR_IO8(20); 
  ICR1H = _SFR_IO8(20); 
  OCR1B = _SFR_IO16(20); 
  OCR1BL = _SFR_IO8(20); 
  OCR1BH = _SFR_IO8(20); 
  OCR1A = _SFR_IO16(20); 
  OCR1AL = _SFR_IO8(20); 
  OCR1AH = _SFR_IO8(20); 
  TCNT1 = _SFR_IO16(20); 
  TCNT1L = _SFR_IO8(20); 
  TCNT1H = _SFR_IO8(20); 
  TCCR1B = _SFR_IO8(20); 
  TCCR1A = _SFR_IO8(20); 
  SFIOR = _SFR_IO8(20); 
  OSCCAL = _SFR_IO8(20); 
  TCNT0 = _SFR_IO8(20); 
  TCCR0 = _SFR_IO8(20); 
  MCUCSR = _SFR_IO8(20); 
  MCUCR = _SFR_IO8(20); 
  TWCR = _SFR_IO8(20); 
  SPMCR = _SFR_IO8(20); 
  TIFR = _SFR_IO8(20); 
  TIMSK = _SFR_IO8(20); 
  GIFR = _SFR_IO8(20); 
  GIMSK = _SFR_IO8(20); 
  GICR = _SFR_IO8(20)   ; 
  SIG_INTERRUPT0	 = _VECTOR(1); 
  SIG_INTERRUPT1	 = _VECTOR(2); 
  SIG_OUTPUT_COMPARE2 = _VECTOR(3); 
  SIG_OVERFLOW2	 = _VECTOR(4); 
  SIG_INPUT_CAPTURE1 = _VECTOR(5); 
  SIG_OUTPUT_COMPARE1A = _VECTOR(6); 
  SIG_OUTPUT_COMPARE1B = _VECTOR(7); 
  SIG_OVERFLOW1	 = _VECTOR(8); 
  SIG_OVERFLOW0	 = _VECTOR(9); 
  SIG_SPI		 = _VECTOR(10); 
  SIG_UART_RECV	 = _VECTOR(11); 
  SIG_UART_DATA	 = _VECTOR(12); 
  SIG_UART_TRANS	 = _VECTOR(13); 
  SIG_ADC		 = _VECTOR(14); 
  SIG_EEPROM_READY = _VECTOR(15); 
  SIG_COMPARATOR	 = _VECTOR(16); 
  SIG_2WIRE_SERIAL = _VECTOR(17); 
  SIG_SPM_READY	 = _VECTOR(18); 
  _VECTORS_SIZE = 38; 
  INT1 = 7; 
  INT0 = 6; 
  IVSEL = 1; 
  IVCE = 0; 
  INTF1 = 7; 
  INTF0 = 6; 
  OCIE2 = 7; 
  TOIE2 = 6; 
  TICIE1 = 5; 
  OCIE1A = 4; 
  OCIE1B = 3; 
  TOIE1 = 2; 
  TOIE0 = 0; 
  OCF2 = 7; 
  TOV2 = 6; 
  ICF1 = 5; 
  OCF1A = 4; 
  OCF1B = 3; 
  TOV1 = 2; 
  TOV0 = 0; 
  SPMIE = 7; 
  RWWSB = 6; 
  RWWSRE = 4; 
  BLBSET = 3; 
  PGWRT = 2; 
  PGERS = 1; 
  SPMEN = 0; 
  TWINT = 7; 
  TWEA = 6; 
  TWSTA = 5; 
  TWSTO = 4; 
  TWWC = 3; 
  TWEN = 2; 
  TWIE = 0; 
  TWA6    = 7; 
  TWA5    = 6; 
  TWA4    = 5; 
  TWA3    = 4; 
  TWA2    = 3; 
  TWA1    = 2; 
  TWA0    = 1; 
  TWGCE = 0; 
  TWS7 = 7; 
  TWS6 = 6; 
  TWS5 = 5; 
  TWS4 = 4; 
  TWS3 = 3; 
  TWPS1 = 1; 
  TWPS0 = 0; 
  SE = 7; 
  SM2 = 6; 
  SM1 = 5; 
  SM0 = 4; 
  ISC11 = 3; 
  ISC10 = 2; 
  ISC01 = 1; 
  ISC00 = 0; 
  WDRF = 3; 
  BORF = 2; 
  EXTRF = 1; 
  PORF = 0; 
  ADHSM = 4; 
  ACME = 3; 
  PUD = 2; 
  PSR2 = 1; 
  PSR10 = 0; 
  CS02 = 2; 
  CS01 = 1; 
  CS00 = 0; 
  FOC2 = 7; 
  WGM20 = 6; 
  COM21 = 5; 
  COM20 = 4; 
  WGM21 = 3; 
  CS22 = 2; 
  CS21 = 1; 
  CS20 = 0; 
  AS2 = 3; 
  TCN2UB = 2; 
  OCR2UB = 1; 
  TCR2UB = 0; 
  COM1A1 = 7; 
  COM1A0 = 6; 
  COM1B1 = 5; 
  COM1B0 = 4; 
  FOC1A = 3; 
  FOC1B = 2; 
  WGM11 = 1; 
  WGM10 = 0; 
  ICNC1 = 7; 
  __vector_=1;
  ICES1 = 6; 
  WGM13 = 4; 
  WGM12 = 3; 
  CS12 = 2; 
  CS11 = 1; 
  CS10 = 0; 
  WDCE = 4; 
  WDE = 3; 
  WDP2 = 2; 
  WDP1 = 1; 
  WDP0 = 0; 
  URSEL = 7; 
  URSEL = 7; 
  UMSEL = 6; 
  UPM1 = 5; 
  UPM0 = 4; 
  USBS = 3; 
  UCSZ1 = 2; 
  UCSZ0 = 1; 
  UCPOL = 0; 
  PB7 = 7; 
  PB6 = 6; 
  PB5 = 5; 
  PB4 = 4; 
  PB3 = 3; 
  PB2 = 2; 
  PB1 = 1; 
  PB0 = 0; 
  DDB7 = 7; 
  DDB6 = 6; 
  DDB5 = 5; 
  DDB4 = 4; 
  DDB3 = 3; 
  DDB2 = 2; 
  DDB1 = 1; 
  DDB0 = 0; 
  PINB7 = 7; 
  PINB6 = 6; 
  PINB5 = 5; 
  PINB4 = 4; 
  PINB3 = 3; 
  PINB2 = 2; 
  PINB1 = 1; 
  PINB0 = 0; 
  PC6	 = 6; 
  PC5	 = 5; 
  PC4	 = 4; 
  PC3	 = 3; 
  PC2	 = 2; 
  PC1	 = 1; 
  PC0	 = 0; 
  DDC6 = 6; 
  DDC5 = 5; 
  DDC4 = 4; 
  DDC3 = 3; 
  DDC2 = 2; 
  DDC1 = 1; 
  DDC0 = 0; 
  PINC6 = 6; 
  PINC5 = 5; 
  PINC4 = 4; 
  PINC3 = 3; 
  PINC2 = 2; 
  PINC1 = 1; 
  PINC0 = 0; 
  PD7	 = 7; 
  PD6	 = 6; 
  PD5	 = 5; 
  PD4	 = 4; 
  PD3	 = 3; 
  PD2	 = 2; 
  PD1	 = 1; 
  PD0	 = 0; 
  DDD7 = 7; 
  DDD6 = 6; 
  DDD5 = 5; 
  DDD4 = 4; 
  DDD3 = 3; 
  DDD2 = 2; 
  DDD1 = 1; 
  DDD0 = 0; 
  PIND7 = 7; 
  PIND6 = 6; 
  PIND5 = 5; 
  PIND4 = 4; 
  PIND3 = 3; 
  PIND2 = 2; 
  PIND1 = 1; 
  PIND0 = 0; 
  SPIF = 7; 
  WCOL = 6; 
  SPI2X = 0; 
  SPIE = 7; 
  SPE = 6; 
  DORD = 5; 
  MSTR = 4; 
  CPOL = 3; 
  CPHA = 2; 
  SPR1 = 1; 
  SPR0 = 0; 
  RXC = 7; 
  TXC = 6; 
  UDRE = 5; 
  FE = 4; 
  DOR = 3; 
  PE = 2; 
  U2X = 1; 
  MPCM = 0; 
  RXCIE = 7; 
  TXCIE = 6; 
  UDRIE = 5; 
  RXEN = 4; 
  TXEN = 3; 
  UCSZ2 = 2; 
  RXB8 = 1; 
  TXB8 = 0; 
  ACD = 7; 
  ACBG = 6; 
  ACO = 5; 
  ACI = 4; 
  ACIE = 3; 
  ACIC = 2; 
  ACIS1 = 1; 
  ACIS0 = 0; 
  ADEN = 7; 
  ADSC = 6; 
  ADFR = 5; 
  ADIF = 4; 
  ADIE = 3; 
  ADPS2 = 2; 
  ADPS1 = 1; 
  ADPS0 = 0; 
  REFS1 = 7; 
  REFS0 = 6; 
  ADLAR = 5; 
  MUX3 = 3; 
  MUX2 = 2; 
  MUX1 = 1; 
  MUX0 = 0; 
  SPM_PAGESIZE = 64; 
  RAMEND	 = 20; 
  XRAMEND	 = 20; 
  E2END	 = 20; 
  FLASHEND = 20; 
  //int _AVR_IOM128_H_ = 1; 
  PINF      = _SFR_IO8(20); 
  PINE      = _SFR_IO8(20); 
  DDRE      = _SFR_IO8(20); 
  PORTE     = _SFR_IO8(20); 
  ADCW      = _SFR_IO16(20) ; 
  ADC       = _SFR_IO16(20); 
  ADCL      = _SFR_IO8(20); 
  ADCH      = _SFR_IO8(20); 
  ADCSR     = _SFR_IO8(20); 
  ADCSRA    = _SFR_IO8(20) ; 
  ADMUX     = _SFR_IO8(20); 
  ACSR      = _SFR_IO8(20); 
  UBRR0L    = _SFR_IO8(20); 
  UCSR0B    = _SFR_IO8(20); 
  UCSR0A    = _SFR_IO8(20); 
  UDR0      = _SFR_IO8(20); 
  SPCR      = _SFR_IO8(20); 
  SPSR      = _SFR_IO8(20); 
  SPDR      = _SFR_IO8(20); 
  PIND      = _SFR_IO8(20); 
  DDRD      = _SFR_IO8(20); 
  PORTD     = _SFR_IO8(20); 
  PINC      = _SFR_IO8(20); 
  DDRC      = _SFR_IO8(20); 
  PORTC     = _SFR_IO8(20); 
  PINB      = _SFR_IO8(20); 
  DDRB      = _SFR_IO8(20); 
  PORTB     = _SFR_IO8(20); 
  PINA      = _SFR_IO8(20); 
  DDRA      = _SFR_IO8(20); 
  PORTA     = _SFR_IO8(20); 
  SFIOR     = _SFR_IO8(20); 
  WDTCR     = _SFR_IO8(20); 
  OCDR      = _SFR_IO8(20); 
  OCR2      = _SFR_IO8(20); 
  TCNT2     = _SFR_IO8(20); 
  TCCR2     = _SFR_IO8(20); 
  ICR1      = _SFR_IO16(20); 
  ICR1L     = _SFR_IO8(20); 
  ICR1H     = _SFR_IO8(20); 
  OCR1B     = _SFR_IO16(20); 
  OCR1BL    = _SFR_IO8(20); 
  OCR1BH    = _SFR_IO8(20); 
  OCR1A     = _SFR_IO16(20); 
  OCR1AL    = _SFR_IO8(20); 
  OCR1AH    = _SFR_IO8(20); 
  TCNT1     = _SFR_IO16(20); 
  TCNT1L    = _SFR_IO8(20); 
  TCNT1H    = _SFR_IO8(20); 
  TCCR1B    = _SFR_IO8(20); 
  TCCR1A    = _SFR_IO8(20); 
  ASSR      = _SFR_IO8(20); 
  OCR0      = _SFR_IO8(20); 
  TCNT0     = _SFR_IO8(20); 
  TCCR0     = _SFR_IO8(20); 
  MCUSR     = _SFR_IO8(20); 
  MCUCSR    = _SFR_IO8(20) ; 
  MCUCR     = _SFR_IO8(20); 
  TIFR      = _SFR_IO8(20); 
  TIMSK     = _SFR_IO8(20); 
  EIFR      = _SFR_IO8(20); 
  EIMSK     = _SFR_IO8(20); 
  EICRB     = _SFR_IO8(20); 
  RAMPZ     = _SFR_IO8(20); 
  XDIV      = _SFR_IO8(20); 
  DDRF      = _SFR_MEM8(20); 
  PORTF     = _SFR_MEM8(20); 
  PING      = _SFR_MEM8(20); 
  DDRG      = _SFR_MEM8(20); 
  PORTG     = _SFR_MEM8(20); 
  SPMCR     = _SFR_MEM8(20); 
  SPMCSR    = _SFR_MEM8(20) ; 
  EICRA     = _SFR_MEM8(20); 
  XMCRB     = _SFR_MEM8(20); 
  XMCRA     = _SFR_MEM8(20); 
  OSCCAL    = _SFR_MEM8(20); 
  TWBR      = _SFR_MEM8(20); 
  TWSR      = _SFR_MEM8(20); 
  TWAR      = _SFR_MEM8(20); 
  TWDR      = _SFR_MEM8(20); 
  TWCR      = _SFR_MEM8(20); 
  OCR1C     = _SFR_MEM16(20); 
  OCR1CL    = _SFR_MEM8(20); 
  OCR1CH    = _SFR_MEM8(20); 
  TCCR1C    = _SFR_MEM8(20); 
  ETIFR     = _SFR_MEM8(20); 
  ETIMSK    = _SFR_MEM8(20); 
  ICR3      = _SFR_MEM16(20); 
  ICR3L     = _SFR_MEM8(20); 
  ICR3H     = _SFR_MEM8(20); 
  OCR3C     = _SFR_MEM16(20); 
  OCR3CL    = _SFR_MEM8(20); 
  OCR3CH    = _SFR_MEM8(20); 
  OCR3B     = _SFR_MEM16(20); 
  OCR3BL    = _SFR_MEM8(20); 
  OCR3BH    = _SFR_MEM8(20); 
  OCR3A     = _SFR_MEM16(20); 
  OCR3AL    = _SFR_MEM8(20); 
  OCR3AH    = _SFR_MEM8(20); 
  TCNT3     = _SFR_MEM16(20); 
  TCNT3L    = _SFR_MEM8(20); 
  TCNT3H    = _SFR_MEM8(20); 
  TCCR3B    = _SFR_MEM8(20); 
  TCCR3A    = _SFR_MEM8(20); 
  TCCR3C    = _SFR_MEM8(20); 
  UBRR0H    = _SFR_MEM8(20); 
  UCSR0C    = _SFR_MEM8(20); 
  UBRR1H    = _SFR_MEM8(20); 
  UBRR1L    = _SFR_MEM8(20); 
  UCSR1B    = _SFR_MEM8(20); 
  UCSR1A    = _SFR_MEM8(20); 
  UDR1      = _SFR_MEM8(20); 
  UCSR1C    = _SFR_MEM8(20); 
  SIG_INTERRUPT0          = _VECTOR(1); 
  SIG_INTERRUPT1          = _VECTOR(2); 
  SIG_INTERRUPT2          = _VECTOR(3); 
  SIG_INTERRUPT3          = _VECTOR(4); 
  SIG_INTERRUPT4          = _VECTOR(5); 
  SIG_INTERRUPT5          = _VECTOR(6); 
  SIG_INTERRUPT6          = _VECTOR(7); 
  SIG_INTERRUPT7          = _VECTOR(8); 
  SIG_OUTPUT_COMPARE2     = _VECTOR(9); 
  SIG_OVERFLOW2           = _VECTOR(10); 
  SIG_INPUT_CAPTURE1      = _VECTOR(11); 
  SIG_OUTPUT_COMPARE1A    = _VECTOR(12); 
  SIG_OUTPUT_COMPARE1B    = _VECTOR(13); 
  SIG_OVERFLOW1           = _VECTOR(14); 
  SIG_OUTPUT_COMPARE0     = _VECTOR(15); 
  SIG_OVERFLOW0           = _VECTOR(16); 
  SIG_SPI                 = _VECTOR(17); 
  SIG_USART0_RECV         = _VECTOR(18); 
  SIG_UART0_RECV          = _VECTOR(18) ; 
  SIG_USART0_DATA         = _VECTOR(19); 
  SIG_UART0_DATA          = _VECTOR(19) ; 
  SIG_USART0_TRANS        = _VECTOR(20); 
  SIG_UART0_TRANS         = _VECTOR(20) ; 
  SIG_ADC                 = _VECTOR(21); 
  SIG_EEPROM_READY        = _VECTOR(22); 
  SIG_COMPARATOR          = _VECTOR(23); 
  SIG_OUTPUT_COMPARE1C    = _VECTOR(24); 
  SIG_INPUT_CAPTURE3      = _VECTOR(25); 
  SIG_OUTPUT_COMPARE3A    = _VECTOR(26); 
  SIG_OUTPUT_COMPARE3B    = _VECTOR(27); 
  SIG_OUTPUT_COMPARE3C    = _VECTOR(28); 
  SIG_OVERFLOW3           = _VECTOR(29); 
  SIG_USART1_RECV         = _VECTOR(30); 
  SIG_UART1_RECV          = _VECTOR(30) ; 
  SIG_USART1_DATA         = _VECTOR(31); 
  SIG_UART1_DATA          = _VECTOR(31) ; 
  SIG_USART1_TRANS        = _VECTOR(32); 
  SIG_UART1_TRANS         = _VECTOR(32) ; 
  SIG_2WIRE_SERIAL        = _VECTOR(33); 
  SIG_SPM_READY           = _VECTOR(34); 
  _VECTORS_SIZE = 140; 
  TWINT        = 7; 
  TWEA         = 6; 
  TWSTA        = 5; 
  TWSTO        = 4; 
  TWWC         = 3; 
  TWEN         = 2; 
  TWIE         = 0; 
  TWA6         = 7; 
  TWA5         = 6; 
  TWA4         = 5; 
  TWA3         = 4; 
  TWA2         = 3; 
  TWA1         = 2; 
  TWA0         = 1; 
  TWGCE        = 0; 
  TWS7         = 7; 
  TWS6         = 6; 
  TWS5         = 5; 
  TWS4         = 4; 
  TWS3         = 3; 
  TWPS1        = 1; 
  TWPS0        = 0; 
  SRL2         = 6; 
  SRL1         = 5; 
  SRL0         = 4; 
  SRW01        = 3; 
  SRW00        = 2; 
  SRW11        = 1; 
  XMBK         = 7; 
  XMM2         = 2; 
  XMM1         = 1; 
  XMM0         = 0; 
  XDIVEN       = 7; 
  XDIV6        = 6; 
  XDIV5        = 5; 
  XDIV4        = 4; 
  XDIV3        = 3; 
  XDIV2        = 2; 
  XDIV1        = 1; 
  XDIV0        = 0; 
  RAMPZ0      = 0; 
  ISC31        = 7; 
  ISC30        = 6; 
  ISC21        = 5; 
  ISC20        = 4; 
  ISC11        = 3; 
  ISC10        = 2; 
  ISC01        = 1; 
  ISC00        = 0; 
  ISC71        = 7; 
  ISC70        = 6; 
  ISC61        = 5; 
  ISC60        = 4; 
  ISC51        = 3; 
  ISC50        = 2; 
  ISC41        = 1; 
  ISC40        = 0; 
  SPMIE        = 7; 
  RWWSB        = 6; 
  RWWSRE       = 4; 
  BLBSET       = 3; 
  PGWRT        = 2; 
  PGERS        = 1; 
  SPMEN        = 0; 
  INT7         = 7; 
  INT6         = 6; 
  INT5         = 5; 
  INT4         = 4; 
  INT3         = 3; 
  INT2         = 2; 
  INT1         = 1; 
  INT0         = 0; 
  INTF7        = 7; 
  INTF6        = 6; 
  INTF5        = 5; 
  INTF4        = 4; 
  INTF3        = 3; 
  INTF2        = 2; 
  INTF1        = 1; 
  INTF0        = 0; 
  OCIE2        = 7; 
  TOIE2        = 6; 
  TICIE1       = 5; 
  OCIE1A       = 4; 
  OCIE1B       = 3; 
  TOIE1        = 2; 
  OCIE0        = 1; 
  TOIE0        = 0; 
  OCF2         = 7; 
  TOV2         = 6; 
  ICF1         = 5; 
  OCF1A        = 4; 
  OCF1B        = 3; 
  TOV1         = 2; 
  OCF0         = 1; 
  TOV0         = 0; 
  TICIE3       = 5; 
  OCIE3A       = 4; 
  OCIE3B       = 3; 
  TOIE3        = 2; 
  OCIE3C       = 1; 
  OCIE1C       = 0; 
  ICF3         = 5; 
  OCF3A        = 4; 
  OCF3B        = 3; 
  TOV3         = 2; 
  OCF3C        = 1; 
  OCF1C        = 0; 
  SRE          = 7; 
  SRW          = 6; 
  SRW10        = 6; 
  SE           = 5; 
  SM1          = 4; 
  SM0          = 3; 
  SM2          = 2; 
  IVSEL        = 1; 
  IVCE         = 0; 
  JTD          = 7; 
  JTRF         = 4; 
  WDRF         = 3; 
  BORF         = 2; 
  EXTRF        = 1; 
  PORF         = 0; 
  FOC          = 7; 
  WGM0         = 6; 
  COM1         = 5; 
  COM0         = 4; 
  WGM1         = 3; 
  CS2          = 2; 
  CS1          = 1; 
  CS0          = 0; 
  FOC0         = 7; 
  WGM00        = 6; 
  COM01        = 5; 
  COM00        = 4; 
  WGM01        = 3; 
  CS02         = 2; 
  CS01         = 1; 
  CS00         = 0; 
  FOC2         = 7; 
  WGM20        = 6; 
  COM21        = 5; 
  COM20        = 4; 
  WGM21        = 3; 
  CS22         = 2; 
  CS21         = 1; 
  CS20         = 0; 
  AS0          = 3; 
  TCN0UB       = 2; 
  OCR0UB       = 1; 
  TCR0UB       = 0; 
  COMA1        = 7; 
  COMA0        = 6; 
  COMB1        = 5; 
  COMB0        = 4; 
  COMC1        = 3; 
  COMC0        = 2; 
  WGMA1        = 1; 
  WGMA0        = 0; 
  COM1A1       = 7; 
  COM1A0       = 6; 
  COM1B1       = 5; 
  COM1B0       = 4; 
  COM1C1       = 3; 
  COM1C0       = 2; 
  WGM11        = 1; 
  WGM10        = 0; 
  COM3A1       = 7; 
  COM3A0       = 6; 
  COM3B1       = 5; 
  COM3B0       = 4; 
  COM3C1       = 3; 
  COM3C0       = 2; 
  WGM31        = 1; 
  WGM30        = 0; 
  ICNC         = 7; 
  ICES         = 6; 
  WGMB3        = 4; 
  WGMB2        = 3; 
  CSB2         = 2; 
  CSB1         = 1; 
  CSB0         = 0; 
  ICNC1        = 7; 
  ICES1        = 6; 
  WGM13        = 4; 
  WGM12        = 3; 
  CS12         = 2; 
  CS11         = 1; 
  CS10         = 0; 
  ICNC3        = 7; 
  ICES3        = 6; 
  WGM33        = 4; 
  WGM32        = 3; 
  CS32         = 2; 
  CS31         = 1; 
  CS30         = 0; 
  FOCA         = 7; 
  FOCB         = 6; 
  FOCC         = 5; 
  FOC3A        = 7; 
  FOC3B        = 6; 
  FOC3C        = 5; 
  FOC1A        = 7; 
  FOC1B        = 6; 
  FOC1C        = 5; 
  IDRD         = 7; 
  OCDR7        = 7; 
  OCDR6        = 6; 
  OCDR5        = 5; 
  OCDR4        = 4; 
  OCDR3        = 3; 
  OCDR2        = 2; 
  OCDR1        = 1; 
  OCDR0        = 0; 
  WDCE         = 4; 
  WDE          = 3; 
  WDP2         = 2; 
  WDP1         = 1; 
  WDP0         = 0; 
  TSM          = 7; 
  ADHSM        = 4; 
  ACME         = 3; 
  PUD          = 2; 
  PSR0         = 1; 
  PSR321       = 0; 
  SPIF         = 7; 
  WCOL         = 6; 
  SPI2X        = 0; 
  SPIE         = 7; 
  SPE          = 6; 
  DORD         = 5; 
  MSTR         = 4; 
  CPOL         = 3; 
  CPHA         = 2; 
  SPR1         = 1; 
  SPR0         = 0; 
  UMSEL        = 6; 
  UPM1         = 5; 
  UPM0         = 4; 
  USBS         = 3; 
  UCSZ1        = 2; 
  UCSZ0        = 1; 
  UCPOL        = 0; 
  UMSEL1       = 6; 
  UPM11        = 5; 
  UPM10        = 4; 
  USBS1        = 3; 
  UCSZ11       = 2; 
  UCSZ10       = 1; 
  UCPOL1       = 0; 
  UMSEL0       = 6; 
  UPM01        = 5; 
  UPM00        = 4; 
  USBS0        = 3; 
  UCSZ01       = 2; 
  UCSZ00       = 1; 
  UCPOL0       = 0; 
  RXC          = 7; 
  TXC          = 6; 
  UDRE         = 5; 
  FE           = 4; 
  DOR          = 3; 
  UPE          = 2; 
  U2X          = 1; 
  MPCM         = 0; 
  RXC1         = 7; 
  TXC1         = 6; 
  UDRE1        = 5; 
  FE1          = 4; 
  DOR1         = 3; 
  UPE1         = 2; 
  U2X1         = 1; 
  MPCM1        = 0; 
  RXC0         = 7; 
  TXC0         = 6; 
  UDRE0        = 5; 
  FE0          = 4; 
  DOR0         = 3; 
  UPE0         = 2; 
  U2X0         = 1; 
  MPCM0        = 0; 
  RXCIE        = 7; 
  TXCIE        = 6; 
  UDRIE        = 5; 
  RXEN         = 4; 
  TXEN         = 3; 
  UCSZ         = 2; 
  UCSZ2        = 2; 
  RXB8         = 1; 
  TXB8         = 0; 
  RXCIE1       = 7; 
  TXCIE1       = 6; 
  UDRIE1       = 5; 
  RXEN1        = 4; 
  TXEN1        = 3; 
  UCSZ12       = 2; 
  RXB81        = 1; 
  TXB81        = 0; 
  RXCIE0       = 7; 
  TXCIE0       = 6; 
  UDRIE0       = 5; 
  RXEN0        = 4; 
  TXEN0        = 3; 
  UCSZ02       = 2; 
  RXB80        = 1; 
  TXB80        = 0; 
  ACD          = 7; 
  ACBG         = 6; 
  ACO          = 5; 
  ACI          = 4; 
  ACIE         = 3; 
  ACIC         = 2; 
  ACIS1        = 1; 
  ACIS0        = 0; 
  ADEN         = 7; 
  ADSC         = 6; 
  ADFR         = 5; 
  ADIF         = 4; 
  ADIE         = 3; 
  ADPS2        = 2; 
  ADPS1        = 1; 
  ADPS0        = 0; 
  REFS1        = 7; 
  REFS0        = 6; 
  ADLAR        = 5; 
  MUX4         = 4; 
  MUX3         = 3; 
  MUX2         = 2; 
  MUX1         = 1; 
  MUX0         = 0; 
  PA7       = 7; 
  PA6       = 6; 
  PA5       = 5; 
  PA4       = 4; 
  PA3       = 3; 
  PA2       = 2; 
  PA1       = 1; 
  PA0       = 0; 
  DDA7         = 7; 
  DDA6         = 6; 
  DDA5         = 5; 
  DDA4         = 4; 
  DDA3         = 3; 
  DDA2         = 2; 
  DDA1         = 1; 
  DDA0         = 0; 
  PINA7        = 7; 
  PINA6        = 6; 
  PINA5        = 5; 
  PINA4        = 4; 
  PINA3        = 3; 
  PINA2        = 2; 
  PINA1        = 1; 
  PINA0        = 0; 
  PB7       = 7; 
  PB6       = 6; 
  PB5       = 5; 
  PB4       = 4; 
  PB3       = 3; 
  PB2       = 2; 
  PB1       = 1; 
  PB0       = 0; 
  DDB7         = 7; 
  DDB6         = 6; 
  DDB5         = 5; 
  DDB4         = 4; 
  DDB3         = 3; 
  DDB2         = 2; 
  DDB1         = 1; 
  DDB0         = 0; 
  PINB7        = 7; 
  PINB6        = 6; 
  PINB5        = 5; 
  PINB4        = 4; 
  PINB3        = 3; 
  PINB2        = 2; 
  PINB1        = 1; 
  PINB0        = 0; 
  PC7       = 7; 
  PC6       = 6; 
  PC5       = 5; 
  PC4       = 4; 
  PC3       = 3; 
  PC2       = 2; 
  PC1       = 1; 
  PC0       = 0; 
  DDC7         = 7; 
  DDC6         = 6; 
  DDC5         = 5; 
  DDC4         = 4; 
  DDC3         = 3; 
  DDC2         = 2; 
  DDC1         = 1; 
  DDC0         = 0; 
  PINC7        = 7; 
  PINC6        = 6; 
  PINC5        = 5; 
  PINC4        = 4; 
  PINC3        = 3; 
  PINC2        = 2; 
  PINC1        = 1; 
  PINC0        = 0; 
  PD7       = 7; 
  PD6       = 6; 
  PD5       = 5; 
  PD4       = 4; 
  PD3       = 3; 
  PD2       = 2; 
  PD1       = 1; 
  PD0       = 0; 
  DDD7         = 7; 
  DDD6         = 6; 
  DDD5         = 5; 
  DDD4         = 4; 
  DDD3         = 3; 
  DDD2         = 2; 
  DDD1         = 1; 
  DDD0         = 0; 
  PIND7        = 7; 
  PIND6        = 6; 
  PIND5        = 5; 
  PIND4        = 4; 
  PIND3        = 3; 
  PIND2        = 2; 
  PIND1        = 1; 
  PIND0        = 0; 
  PE7       = 7; 
  PE6       = 6; 
  PE5       = 5; 
  PE4       = 4; 
  PE3       = 3; 
  PE2       = 2; 
  PE1       = 1; 
  PE0       = 0; 
  DDE7         = 7; 
  DDE6         = 6; 
  DDE5         = 5; 
  DDE4         = 4; 
  DDE3         = 3; 
  DDE2         = 2; 
  DDE1         = 1; 
  DDE0         = 0; 
  PINE7        = 7; 
  PINE6        = 6; 
  PINE5        = 5; 
  PINE4        = 4; 
  PINE3        = 3; 
  PINE2        = 2; 
  PINE1        = 1; 
  PINE0        = 0; 
  PF7       = 7; 
  PF6       = 6; 
  PF5       = 5; 
  PF4       = 4; 
  PF3       = 3; 
  PF2       = 2; 
  PF1       = 1; 
  PF0       = 0; 
  DDF7         = 7; 
  DDF6         = 6; 
  DDF5         = 5; 
  DDF4         = 4; 
  DDF3         = 3; 
  DDF2         = 2; 
  DDF1         = 1; 
  DDF0         = 0; 
  PINF7        = 7; 
  PINF6        = 6; 
  PINF5        = 5; 
  PINF4        = 4; 
  PINF3        = 3; 
  PINF2        = 2; 
  PINF1        = 1; 
  PINF0        = 0; 
  PG4       = 4; 
  PG3       = 3; 
  PG2       = 2; 
  PG1       = 1; 
  PG0       = 0; 
  DDG4         = 4; 
  DDG3         = 3; 
  DDG2         = 2; 
  DDG1         = 1; 
  DDG0         = 0; 
  PING4        = 4; 
  PING3        = 3; 
  PING2        = 2; 
  PING1        = 1; 
  PING0        = 0; 
  SPM_PAGESIZE = 256; 
  RAMEND  = 20; 
  XRAMEND  = 20; 
  E2END    = 20; 
  FLASHEND = 20; 
  //int RADIO_H = ; 
  RADIO_NAME = "mc3030"; 
  RADIO_CTL_NB = 9; 
  RADIO_CTL_D = 0; 
  RADIO_THROTTLE = RADIO_CTL_D; 
  RADIO_CTL_C = 1; 
  RADIO_ROLL = RADIO_CTL_C; 
  RADIO_CTL_B = 2; 
  RADIO_PITCH = RADIO_CTL_B; 
  RADIO_CTL_A = 3; 
  RADIO_YAW = RADIO_CTL_A; 
  RADIO_CTL_G = 4; 
  RADIO_MODE = RADIO_CTL_G; 
  RADIO_CTL_E = 5; 
  RADIO_GAIN1 = RADIO_CTL_E; 
  RADIO_CTL_F = 6; 
  RADIO_GAIN2 = RADIO_CTL_F; 
  RADIO_CTL_H = 7; 
  RADIO_LLS = RADIO_CTL_H; 
  RADIO_CTL_I = 8; 
  RADIO_CALIB = RADIO_CTL_I; 
  PPM_MIN_PULSE_WIDTH = 850; //850ul*CLOCK; 
  PPM_MAX_PULSE_WIDTH = 2100; //2100ul*CLOCK; 
  PPM_SYNC_PULSE = (unsigned char)(((uint32_t)(5000*CLOCK))/1024);  //(5000ul*CLOCK))/1024ul); 
  M_PI = 3.141592653589793238462643; 
  HALFPI = 1.57079632679489661923; 
  NB_ADC = 8; 
  IF_CALIB_MODE_NONE      = 0; 
  IF_CALIB_MODE_DOWN      = 1; 
  IF_CALIB_MODE_UP        = 2; 
  state = 1;
  sync_start = 1;
  TRESHOLD1 = TRESHOLD_MANUAL_PPRZ; 
  TRESHOLD2 = 200 * CLOCK; 
  PPRZ_MODE_MANUAL   = 0; 
  PPRZ_MODE_AUTO1    = 1; 
  PPRZ_MODE_AUTO2    = 2; 
  PPRZ_MODE_HOME     = 3; 
  PPRZ_MODE_NB       = 4; 
  VERTICAL_MODE_MANUAL      = 0; 
  VERTICAL_MODE_AUTO_GAZ    = 1; 
  VERTICAL_MODE_AUTO_CLIMB  = 2; 
  VERTICAL_MODE_AUTO_ALT    = 3; 
  VERTICAL_MODE_NB          = 4; 
  LATERAL_MODE_MANUAL    = 0; 
  LATERAL_MODE_ROLL_RATE = 1; 
  LATERAL_MODE_ROLL      = 2; 
  LATERAL_MODE_COURSE    = 3; 
  LATERAL_MODE_NB        = 4; 
  IR_ESTIM_MODE_OFF        = 0; 
  IR_ESTIM_MODE_ON         = 1; 
  GAZ_THRESHOLD_TAKEOFF = (int)(MAX_PPRZ * 0.9); 
  SP        = _SFR_IO16(20); 
  SPL       = _SFR_IO8(20); 
  SPH       = _SFR_IO8(20); 
  SREG      = _SFR_IO8(20); 
  SREG_I       = 7; 
  SREG_T       = 6; 
  SREG_H       = 5; 
  SREG_S       = 4; 
  SREG_V       = 3; 
  SREG_N       = 2; 
  SREG_Z       = 1; 
  SREG_C       = 0; 
  EECR = _SFR_IO8(20); 
  EEDR = _SFR_IO8(20); 
  EEAR = _SFR_IO16(20); 
  EEARL = _SFR_IO8(20); 
  EEARH = _SFR_IO8(20); 
  EERIE        = 3; 
  EEMWE        = 2; 
  EEWE         = 1; 
  EERE         = 0; 
  CLOCK	 = 16; 
  MAX_PPRZ = (600 * CLOCK); 
  MIN_PPRZ = -MAX_PPRZ; 
  STATUS_RADIO_OK = 0; 
  RADIO_REALLY_LOST = 1; 
  AVERAGED_CHANNELS_SENT = 2; 
  MASK_FBW_CHANGED = 20; 
  STATUS_AUTO_OK  = 0; 
  FRAME_LENGTH = (sizeof(struct inter_mcu_msg)+1); 
  TRESHOLD_MANUAL_PPRZ = (MIN_PPRZ / 2); 
  RXFUTABA = 0; 
  RXJR     = 1; 
  PPM_RX_TYPE  = RXFUTABA; 
  PPM_FREQ    = 40; // = 25ms; 
  PPM_DDR  = DDRB; 
  PPM_PORT = PORTB; 
  PPM_PIN  = PB0; 
  PPM_NB_PULSES = RADIO_CTL_NB; 
  MODE_MANUAL   = 0; 
  MODE_AUTO     = 1; 
  SPI_PORT   = PORTB; 
  SPI_PIN    = PINB; 
  SPI_SS_PIN = 2; 
  __EICR = EIMSK; 
  __EICR = GIMSK; 
  __EICR = GICR; 
  //int _AVR_PORTPINS_H_ = 1; 
  PORT7        = 7; 
  PORT6        = 6; 
  PORT5        = 5; 
  PORT4        = 4; 
  PORT3        = 3; 
  PORT2        = 2; 
  PORT1        = 1; 
  PORT0        = 0; 
  DD7          = 7; 
  DD6          = 6; 
  DD5          = 5; 
  DD4          = 4; 
  DD3          = 3; 
  DD2          = 2; 
  DD1          = 1; 
  DD0          = 0; 
  PIN7         = 7; 
  PIN6         = 6; 
  PIN5         = 5; 
  PIN4         = 4; 
  PIN3         = 3; 
  PIN2         = 2; 
  PIN1         = 1; 
  PIN0         = 0; 
  DL_STX            = 20; 
  DL_ETX            = 20; 
  DL_HEAD_LEN       = 1; 
  DL_PAYLOAD_OFFSET = 1; 
  DL_TAIL_LEN       = 2; 
  DEFAULT_LEN = 256; 
  TRACE_ERROR                   = 20/* L */; 
  TRACE_DATA_READ               = 20/* L */; 
  TRACE_MSG_RAW                 = 20/* L */; 
  TRACE_MSG                     = 20/* L */; 
  TRACE_CHECKSUM                = 20/* L */; 
  TRACE_DOWNLINK                = 20/* L */; 
  TRACE_MODEM                   = 20/* L */; 
  TRACE_MODEM_VERB              = 20/* L */; 
  TRACE_MODEM_READ              = 20/* L */; 
  TRACE_PARSER                  = 20/* L */; 
  TRACE_TRANSPORT               = 20/* L */; 
  TRACE_TRANSPORT_VERB          = 20/* L */; 
  TRANSPORT_BUF_LEN = 1024; 
  TRANSPORT_HEAD_LEN       = 1; 
  TRANSPORT_PAYLOAD_OFFSET = TRANSPORT_HEAD_LEN; 
  TRANSPORT_TAIL_LEN       = 2; 
  //int AIRFRAME_H = ; 
  AIRFRAME_NAME = "Twinstar = trois"; 
  CTL_BRD_V1_2_1 = 1; 
  ADC_CHANNEL_IR1 = 1; 
  ADC_CHANNEL_IR2 = 2; 
  NB_SERVO = 6; 
  SERVO_MOTOR_LEFT = 3; 
  SERVO_MOTOR_LEFT_TRAVEL = 0.833333333333; 
  SERVOS_NEUTRALS_3 = 1000; 
  SERVO_MOTOR_RIGHT = 9; 
  SERVO_MOTOR_RIGHT_TRAVEL = 0.833333333333; 
  SERVOS_NEUTRALS_9 = 1000; 
  SERVO_AILERON_LEFT = 0; 
  SERVO_AILERON_LEFT_TRAVEL = -0.55; 
  SERVOS_NEUTRALS_0 = 1600; 
  SERVO_AILERON_RIGHT = 2; 
  SERVO_AILERON_RIGHT_TRAVEL = -0.520833333333; 
  SERVOS_NEUTRALS_2 = 1650; 
  SERVO_ELEVATOR = 6; 
  SERVO_ELEVATOR_TRAVEL = 0.496666666667; 
  SERVOS_NEUTRALS_6 = 1530; 
  SERVO_RUDDER = 7; 
  SERVO_RUDDER_TRAVEL = -0.483333333333; 
  SERVOS_NEUTRALS_7 = 1450; 
  //edited
  SERVOS_MINS = 1;
  SERVOS_NEUTRALS = 2;
  SERVOS_MAXS = 3;
  //end edit
  SERVO_MIN_US = 1000; // 1000ul; 
  SERVO_MAX_US = 2000; //2000ul; 
  AILERON_DIFF = 0.66; 
  COMBI_SWITCH = 1.0; 
  IR_ROLL_NEUTRAL_DEFAULT = -915; 
  IR_PITCH_NEUTRAL_DEFAULT = 110; 
  IR_DEFAULT_CONTRAST = 200; 
  IR_RAD_OF_IR_CONTRAST = 0.75; 
  IR_RAD_OF_IR_MAX_VAL = 0.0045; 
  IR_RAD_OF_IR_MIN_VAL = 0.00075; 
  ROLL_PGAIN = 10000/* . */; 
  PITCH_OF_ROLL = 0.0; 
  PITCH_PGAIN = 15000/* . */; 
  MAX_ROLL = 0.35; 
  MAX_PITCH = 0.35; 
  MIN_PITCH = -0.35; 
  CLIMB_PITCH_PGAIN = -0.1; 
  CLIMB_PITCH_IGAIN = 0.025; 
  CLIMB_PGAIN = -0.03; 
  CLIMB_IGAIN = 0.1; 
  CLIMB_MAX = 1/* . */; 
  CLIMB_LEVEL_GAZ = 0.31; 
  CLIMB_PITCH_OF_VZ_PGAIN = 0.05; 
  CLIMB_GAZ_OF_CLIMB = 0.2; 
  COURSE_PGAIN = -0.2; 
  ALTITUDE_PGAIN = -0.025; 
  NAV_PITCH = 0/* . */; 
  VOLTAGE_ADC_A = 0.0175; 
  VOLTAGE_ADC_B = 0.088; 
  LOW_BATTERY = 93; 
  NOMINAL_AIRSPEED = 10/* . */; 
  CARROT = 5/* . */; 
  ROLL_RESPONSE_FACTOR = 4/* . */; 
  YAW_RESPONSE_FACTOR = 4/* . */; 
  WEIGHT = 1.3; 
  //int FLIGHT_PLAN_H = ; 
  FLIGHT_PLAN_NAME = "EMAV 2004, 8 = shape"; 
  NAV_UTM_EAST0 = 605530; 
  NAV_UTM_NORTH0 = 5797350; 
  QFU = 270.0; 
  ir_pitch_neutral = IR_PITCH_NEUTRAL_DEFAULT;
  ir_roll_neutral = IR_ROLL_NEUTRAL_DEFAULT;
  WP_HOME = 0; 
  NB_WAYPOINT = 7; 
  GROUND_ALT = 125/* . */; 
  SECURITY_ALT = 150/* . */; 
  MAX_DIST_FROM_HOME = 500/* . */; 
  //int INFLIGHT_CALIB_H = ; 
  DL_ID = 0; 
  DL_BOOT = 1; 
  DL_CALIB_START = 2; 
  DL_CALIB_CONTRAST = 3; 
  DL_TAKEOFF = 4; 
  DL_RAD_OF_IR = 5; 
  DL_ATTITUDE = 6; 
  DL_ADC = 7; 
  DL_GPS = 8; 
  DL_NAVIGATION_REF = 9; 
  DL_NAVIGATION = 10; 
  DL_PPRZ_MODE = 11; 
  DL_BAT = 12; 
  DL_DEBUG = 13; 
  DL_CLIMB_PID = 14; 
  DL_DOWNLINK_STATUS = 15; 
  DL_MODEM_STATUS = 16; 
  DL_SETTINGS = 17; 
  DL_DESIRED = 18; 
  DL_WIND = 19; 
  DL_IMU = 20; 
  DL_RAW_IMU = 21; 
  DL_KALMAN = 22; 
  DL_MSG_NB = 23; 
  MESSAGES_MD5SUM = "\120\162\150\107\166\250\102\343\211\352\231\260\061\055\031\274"; 
  UBX_SYNC1 = 20; 
  UBX_SYNC2 = 20; 
  UBX_NAV_ID = 20; 
  UBX_NAV_POSLLH_ID = 20; 
  UBX_NAV_POSUTM_ID = 20; 
  UBX_NAV_STATUS_ID = 20; 
  UBX_NAV_VELNED_ID = 20; 
  UBX_NAV_SVINFO_ID = 20; 
  UBX_USR_ID = 20; 
  UBX_USR_IRSIM_ID = 20; 
  UBX_USR_SERVOS_ID = 20; 
  UBX_USR_PPM_ID = 20; 
  VOLTAGE_TIME = 20; 
  ANALOG_PORT = PORTC; 
  ANALOG_PORT_DIR = DDRC; 
  ANALOG_VREF = _BV(REFS0) | _BV(REFS1); 
  STALLED_TIME  =      30 ; // 500ms with a 60Hz = timer; 
  REALLY_STALLED_TIME = 300; // 5s with a 60Hz = timer; 
  AVERAGING_PERIOD = (PPM_FREQ/4); 
  _4017_NB_CHANNELS = 10; 
  _4017_RESET_PORT        = PORTD; 
  _4017_RESET_DDR         = DDRD; 
  _4017_RESET_PIN         = 5; 
  _4017_RESET_PORT        = PORTC; 
  _4017_RESET_DDR         = DDRC; 
  _4017_RESET_PIN         = 0; 
  _4017_RESET_PORT        = PORTD; 
  _4017_RESET_DDR         = DDRD; 
  _4017_RESET_PIN         = 7; 
  _4017_CLOCK_PORT        = PORTB; 
  _4017_CLOCK_DDR         = DDRB; 
  _4017_CLOCK_PIN         = PB1; 
  SERVO_OCR	 = OCR1A; 
  SERVO_ENABLE	 = OCIE1A; 
  SERVO_FLAG	 = OCF1A; 
  SERVO_FORCE	 = FOC1A; 
  SERVO_COM0	 = COM1A0; 
  SERVO_COM1	 = COM1A1; 
  SERVO_MIN = (SERVO_MIN_US*CLOCK); 
  SERVO_MAX = (SERVO_MAX_US*CLOCK); 
  IT_PORT = PORTD; 
  IT_DDR  = DDRD; 
  IT_PIN  = 7; 
  SPI_DDR  = DDRB; 
  SPI_MOSI_PIN = 3; 
  SPI_MISO_PIN = 4; 
  SPI_SCK_PIN  = 5; 
  TX_BUF_SIZE      = 256; 
  course_pgain = COURSE_PGAIN;
  max_roll = MAX_ROLL;
}

//#ifndef _AVR_SFR_DEFS_H_
#ifdef __ASSEMBLER__
#endif
#ifndef __ASSEMBLER__
//#include <inttypes.h>

_MMIO_BYTE(mem_addr) {// goes into last
	return *(volatile unsigned char *)(mem_addr);
}
_MMIO_WORD(mem_addr) {// goes into last
	return *(volatile unsigned short *)(mem_addr);
}
#endif

#if _SFR_ASM_COMPAT

#ifndef __SFR_OFFSET


#endif

#if (__SFR_OFFSET != 0) && (__SFR_OFFSET != 20)
#error "__SFR_OFFSET must be 0 or 20"
#endif

_SFR_MEM8(mem_addr) {// goes into last
	return mem_addr;
}
_SFR_MEM16(mem_addr) {// goes into last
	return mem_addr;
}
_SFR_IO8(io_addr) {// goes into last
	return (io_addr) + __SFR_OFFSET;
}
_SFR_IO16(io_addr) {// goes into last
	return (io_addr) + __SFR_OFFSET;
}

_SFR_IO_ADDR(sfr) {// goes into last
	return (sfr) - __SFR_OFFSET;
}
_SFR_MEM_ADDR(sfr) {// goes into last
	return sfr;
}
_SFR_IO_REG_P(sfr) {// goes into last
	return (sfr) < 20 + __SFR_OFFSET;
}

#if (__SFR_OFFSET == 20)

_SFR_ADDR(sfr) {// goes into last
	return _SFR_MEM_ADDR(sfr);
}
#elif !defined(__ASSEMBLER__)
_SFR_ADDR(sfr) {// goes into last
	return _SFR_IO_REG_P(sfr);
}
#endif

#else  

_SFR_MEM8(mem_addr) {// goes into last
	return _MMIO_BYTE(mem_addr);
}
_SFR_MEM16(mem_addr) {// goes into last
	return _MMIO_WORD(mem_addr);
}
_SFR_IO8(io_addr) {// goes into last
	return _MMIO_BYTE((io_addr) + 20);
}
_SFR_IO16(io_addr) {// goes into last
	return _MMIO_WORD((io_addr) + 20);
}

_SFR_MEM_ADDR(sfr) {// goes into last
  return (unsigned short) sfr; /* &(sfr); */
}
_SFR_IO_ADDR(sfr) {// goes into last
	return _SFR_MEM_ADDR(sfr) - 20;
}
_SFR_IO_REG_P(sfr) {// goes into last
	return _SFR_MEM_ADDR(sfr) < 20;
}

_SFR_ADDR(sfr) {// goes into last
	return _SFR_MEM_ADDR(sfr);
}

#endif 

_SFR_BYTE(sfr) {// goes into last
	return _MMIO_BYTE(_SFR_ADDR(sfr));
}
_SFR_WORD(sfr) {// goes into last
	return _MMIO_WORD(_SFR_ADDR(sfr));
}





    
_BV(bit) {// goes into last
	return /* 1 << (bit) */ bit;
}



#ifndef _VECTOR
_VECTOR(N) {// goes into last
	return __vector_ * N;
}
#endif

#ifndef __ASSEMBLER__










bit_is_set(sfr, bit) {// goes into last
	int x = (_SFR_BYTE(sfr) & _BV(bit));
	return x;
}



bit_is_clear(sfr, bit) {//goes into last
	int x = (_SFR_BYTE(sfr) & _BV(bit));
	if(x) return 0;
	else return 1;
}



loop_until_bit_is_set(sfr, bit) {//goes into last
	while (bit_is_clear(sfr, bit));
}



loop_until_bit_is_clear(sfr, bit) {//goes into last
	while (bit_is_set(sfr, bit));
}


#endif 

//#endif  






//#ifndef _AVR_IOM8_H_




//#ifndef _AVR_IO_H_
//#  error "Include <avr/io.h> instead of this file."
//#endif

//#ifndef _AVR_IOXXX_H_
//#  define _AVR_IOXXX_H_ "iom8.h"
//#else
//#  error "Attempt to include more than one <avr/ioXXX.h> file."
//#endif 











#ifndef __ASSEMBLER__

#endif


//#endif 






//#ifndef _AVR_IOM128_H_




//#ifndef _AVR_IO_H_
//#  error "Include <avr/io.h> instead of this file."
//#endif

//#ifndef _AVR_IOXXX_H_
//#  define _AVR_IOXXX_H_ "iom128.h"
//#else
//#  error "Attempt to include more than one <avr/ioXXX.h> file."
//#endif 
#ifndef __ASSEMBLER__

#endif

//#endif 



//#ifndef RADIO_H

LastRadioFromPpm() {
  static unsigned char avg_cpt = 0; 
   signed short tmp_radio;
  tmp_radio = ppm_pulses[RADIO_THROTTLE] - (CLOCK*1000);
  last_radio[RADIO_THROTTLE] = tmp_radio * (MAX_PPRZ / 1 / (float)(CLOCK*(2200-1000)));
  if (last_radio[RADIO_THROTTLE] > MAX_PPRZ) last_radio[RADIO_THROTTLE] = MAX_PPRZ;
 else if (last_radio[RADIO_THROTTLE] < 0) last_radio[RADIO_THROTTLE] = 0; 

  tmp_radio = ppm_pulses[RADIO_ROLL] - (CLOCK*1600);
  last_radio[RADIO_ROLL] = tmp_radio;
  if (last_radio[RADIO_ROLL] > MAX_PPRZ) last_radio[RADIO_ROLL] = MAX_PPRZ;
 else if (last_radio[RADIO_ROLL] < MIN_PPRZ) last_radio[RADIO_ROLL] = MIN_PPRZ; 

  tmp_radio = ppm_pulses[RADIO_PITCH] - (CLOCK*1600);
  last_radio[RADIO_PITCH] = tmp_radio;
  if (last_radio[RADIO_PITCH] > MAX_PPRZ) last_radio[RADIO_PITCH] = MAX_PPRZ;
 else if (last_radio[RADIO_PITCH] < MIN_PPRZ) last_radio[RADIO_PITCH] = MIN_PPRZ; 

  tmp_radio = ppm_pulses[RADIO_YAW] - (CLOCK*1600);
  last_radio[RADIO_YAW] = tmp_radio;
  if (last_radio[RADIO_YAW] > MAX_PPRZ) last_radio[RADIO_YAW] = MAX_PPRZ;
 else if (last_radio[RADIO_YAW] < MIN_PPRZ) last_radio[RADIO_YAW] = MIN_PPRZ; 

  tmp_radio = ppm_pulses[RADIO_MODE] - (CLOCK*1600);
  avg_last_radio[RADIO_MODE] = avg_last_radio[RADIO_MODE];
  tmp_radio = ppm_pulses[RADIO_GAIN1] - (CLOCK*1600);
  avg_last_radio[RADIO_GAIN1] =avg_last_radio[RADIO_GAIN1];
  tmp_radio = ppm_pulses[RADIO_GAIN2] - (CLOCK*1600);
  avg_last_radio[RADIO_GAIN2] = avg_last_radio[RADIO_GAIN2];
  tmp_radio = ppm_pulses[RADIO_LLS] - (CLOCK*1600);
  avg_last_radio[RADIO_LLS] = avg_last_radio[RADIO_LLS];
  tmp_radio = ppm_pulses[RADIO_CALIB] - (CLOCK*1600);
  avg_last_radio[RADIO_CALIB] = avg_last_radio[RADIO_CALIB];
avg_cpt++;
  if (avg_cpt == AVERAGING_PERIOD) {
    avg_cpt = 0;
    last_radio[RADIO_MODE] = avg_last_radio[RADIO_MODE];
    avg_last_radio[RADIO_MODE] = 0;
  if (last_radio[RADIO_MODE] > MAX_PPRZ) last_radio[RADIO_MODE] = MAX_PPRZ;
 else if (last_radio[RADIO_MODE] < MIN_PPRZ) last_radio[RADIO_MODE] = MIN_PPRZ; 

    last_radio[RADIO_GAIN1] = avg_last_radio[RADIO_GAIN1];
    avg_last_radio[RADIO_GAIN1] = 0;
  if (last_radio[RADIO_GAIN1] > MAX_PPRZ) last_radio[RADIO_GAIN1] = MAX_PPRZ;
 else if (last_radio[RADIO_GAIN1] < MIN_PPRZ) last_radio[RADIO_GAIN1] = MIN_PPRZ; 

    last_radio[RADIO_GAIN2] = avg_last_radio[RADIO_GAIN2];
    avg_last_radio[RADIO_GAIN2] = 0;
  if (last_radio[RADIO_GAIN2] > MAX_PPRZ) last_radio[RADIO_GAIN2] = MAX_PPRZ;
 else if (last_radio[RADIO_GAIN2] < MIN_PPRZ) last_radio[RADIO_GAIN2] = MIN_PPRZ; 

    last_radio[RADIO_LLS] = avg_last_radio[RADIO_LLS];
    avg_last_radio[RADIO_LLS] = 0;
  if (last_radio[RADIO_LLS] > MAX_PPRZ) last_radio[RADIO_LLS] = MAX_PPRZ;
 else if (last_radio[RADIO_LLS] < MIN_PPRZ) last_radio[RADIO_LLS] = MIN_PPRZ; 

    last_radio[RADIO_CALIB] = avg_last_radio[RADIO_CALIB];
    avg_last_radio[RADIO_CALIB] = 0;
  if (last_radio[RADIO_CALIB] > MAX_PPRZ) last_radio[RADIO_CALIB] = MAX_PPRZ;
 else if (last_radio[RADIO_CALIB] < MIN_PPRZ) last_radio[RADIO_CALIB] = MIN_PPRZ; 

    last_radio_contains_avg_channels = TRUE;
 }
}

//#endif // RADIO_H
//#ifndef MATH_H_
//#define MATH_H_

/* vijay- dummy functions */
 double pp_sin(double x) { return x; }
 double pp_sqrt(double x) { return x; }
 double pp_atan2(double x, double y) { return (x+y)/2; }



sin(x)	 {// goes into last
	return pp_sin(x);
}
atan2(x,y) {// goes into last
	return pp_atan2(x,y);
}
sqrt(x)	 {// goes into last
	return pp_sqrt(x);
}
cos(x)	 {// goes into last
	return pp_sin(x+HALFPI);
} 	
fabs(x)	 {// goes into last
	return pp_fabs(x);
}
pp_fabs(x) {// goes into last
	if(x < 0) return -x;
	else return x;
} 	
Max(x,y) {// goes into last
	return pp_Max(x,y);
}
pp_Max(x,y) {// goes into last
	if(x >= y) return x;
	else return y;
}
Min(x,y) {// goes into last
	return pp_Min(x,y);
}
pp_Min(x,y) {// goes into last
	if(x <= y) return x;
	else return y;
}

//#endif 
//#ifndef STD_H
//#define STD_H

//#include <inttypes.h>

#ifndef FALSE

#endif
#ifndef TRUE

#endif

#ifndef cbi
cbi(sfr, bit) {//goes into last
	if(_SFR_BYTE(sfr) == _BV(bit))
		return 1;
	else
		return 0;
}
#endif
#ifndef sbi
sbi(sfr, bit) {//goes into last
	if(_SFR_BYTE(sfr) == _BV(bit))
		return 1;
	else
		return 0;
}
#endif

//#endif 


//#ifndef _ADC_H_
//#define _ADC_H_

//#include "airframe.h"

#if defined CTL_BRD_V1_2 || defined CTL_BRD_V1_2_1

//#include <inttypes.h>





 unsigned short		adc_samples[ NB_ADC ];

void adc_init( void );

struct adc_buf {
  unsigned short sum;
  unsigned short values[20];
  unsigned char  head;
};


void adc_buf_channel(unsigned char adc_channel, struct adc_buf* s);


#endif 

//#endif 


//#ifndef LINK_FBW_H
//#define LINK_FBW_H

//#include <inttypes.h>

//#include "link_autopilot.h"

void link_fbw_init(void);
void link_fbw_send(void);
void link_fbw_on_spi_it(void);

 volatile unsigned char link_fbw_nb_err;
 unsigned char link_fbw_fbw_nb_err;

 struct inter_mcu_msg from_fbw;
 struct inter_mcu_msg to_fbw;
 volatile unsigned char link_fbw_receive_complete;
 volatile unsigned char link_fbw_receive_valid;

//#endif 
//#ifndef IF_CALIB_H

//#include "link_fbw.h"

 unsigned char  inflight_calib_mode;
void inflight_calib(unsigned char calib_mode_changed);






#ifdef ANTON_T7
IF_CALIB_MODE_OF_PULSE(pprz) {//goes into last
	return IF_CALIB_MODE_UP;
}
#else
IF_CALIB_MODE_OF_PULSE(pprz) {//goes into last
	return IF_CALIB_MODE_UP;
}
#endif 

//#endif // IF_CALIB_H






//#ifndef _AVR_IO_H_
//#define _AVR_IO_H_



//#ifndef AUTOPILOT_H
//#define AUTOPILOT_H

//#include "link_autopilot.h"











PPRZ_MODE_OF_PULSE(pprz, mega8_status) {//goes into last
  return PPRZ_MODE_AUTO2;
}

 unsigned char pprz_mode;














VERTICAL_MODE_OF_PULSE(pprz) {//goes into last
	return VERTICAL_MODE_MANUAL;
}




IR_ESTIM_MODE_OF_PULSE(pprz) {//goes into last
	return IR_ESTIM_MODE_OFF;
}

 unsigned char ir_estim_mode;

STICK_PUSHED(pprz) {// goes into last
	return pprz < TRESHOLD1 || pprz > TRESHOLD2;
}


TRIM_PPRZ(pprz) {//goes into last
	return MIN_PPRZ;
}

TRIM_UPPRZ(pprz) {//goes into last
	return  pprz;
}


FLOAT_OF_PPRZ(pprz, center, travel) {//goes into last
	return ((float)pprz / (float)MAX_PPRZ * travel + center);
}

 unsigned char fatal_error_nb;



 unsigned char inflight_calib_mode;
//extern unsigned short flight_time;
 unsigned char vertical_mode;
 unsigned char auto_pitch;
 unsigned char lateral_mode;
 unsigned char vsupply;

 unsigned char rc_event_1, rc_event_2;

 float slider_1_val, slider_2_val;

 unsigned char launch;


ModeUpdate(_mode, _value) {//goes into last
  unsigned char new_mode = _value; 
  if (_mode != new_mode) { _mode = new_mode; return TRUE; } 
  return FALSE; 
}

CheckEvent(_event) {// goes into last
	if(_event) { _event = FALSE; return TRUE; }
	else return FALSE;
}

#ifdef CTL_BRD_V1_1
 struct adc_buf buf_bat;
#endif

void periodic_task( void );
void use_gps_pos(void);
void radio_control_task(void);

void send_gps_pos( void );
void send_radIR(void);
void send_takeOff(void);

void stabilisation_task(void);
//#endif 
//#include <avr/sfr_defs.h>



#if __AVR_ARCH__ != 1





#endif 















#if __AVR_ARCH__ != 1





#endif 





















#if defined (__AVR_AT94K__)
#  include <avr/ioat94k.h>
#elif defined (__AVR_AT43USB320__)
#  include <avr/io43u32x.h>
#elif defined (__AVR_AT43USB355__)
#  include <avr/io43u35x.h>
#elif defined (__AVR_AT76C711__)
#  include <avr/io76c711.h>
#elif defined (__AVR_AT86RF401__)
#  include <avr/io86r401.h>
#elif defined (__AVR_ATmega128__)
#  include <avr/iom128.h>
#elif defined (__AVR_AT90CAN128__)
#  include <avr/iocan128.h>
#elif defined (__AVR_ATmega64__)
#  include <avr/iom64.h>
#elif defined (__AVR_ATmega645__)
#  include <avr/iom645.h>
#elif defined (__AVR_ATmega6450__)
#  include <avr/iom6450.h>
#elif defined (__AVR_ATmega103__)
#  include <avr/iom103.h>
#elif defined (__AVR_ATmega32__)
#  include <avr/iom32.h>
#elif defined (__AVR_ATmega323__)
#  include <avr/iom323.h>
#elif defined (__AVR_ATmega325__)
#  include <avr/iom325.h>
#elif defined (__AVR_ATmega3250__)
#  include <avr/iom3250.h>
#elif defined (__AVR_ATmega16__)
#  include <avr/iom16.h>
#elif defined (__AVR_ATmega161__)
#  include <avr/iom161.h>
#elif defined (__AVR_ATmega162__)
#  include <avr/iom162.h>
#elif defined (__AVR_ATmega163__)
#  include <avr/iom163.h>
#elif defined (__AVR_ATmega165__)
#  include <avr/iom165.h>
#elif defined (__AVR_ATmega168__)
#  include <avr/iom168.h>
#elif defined (__AVR_ATmega169__)
#  include <avr/iom169.h>
#elif defined (__AVR_ATmega8__)
#  include <avr/iom8.h>
#elif defined (__AVR_ATmega48__)
#  include <avr/iom48.h>
#elif defined (__AVR_ATmega88__)
#  include <avr/iom88.h>
#elif defined (__AVR_ATmega8515__)
#  include <avr/iom8515.h>
#elif defined (__AVR_ATmega8535__)
#  include <avr/iom8535.h>
#elif defined (__AVR_AT90S8535__)
#  include <avr/io8535.h>
#elif defined (__AVR_AT90C8534__)
#  include <avr/io8534.h>
#elif defined (__AVR_AT90S8515__)
#  include <avr/io8515.h>
#elif defined (__AVR_AT90S4434__)
#  include <avr/io4434.h>
#elif defined (__AVR_AT90S4433__)
#  include <avr/io4433.h>
#elif defined (__AVR_AT90S4414__)
#  include <avr/io4414.h>
#elif defined (__AVR_ATtiny22__)
#  include <avr/iotn22.h>
#elif defined (__AVR_ATtiny26__)
#  include <avr/iotn26.h>
#elif defined (__AVR_AT90S2343__)
#  include <avr/io2343.h>
#elif defined (__AVR_AT90S2333__)
#  include <avr/io2333.h>
#elif defined (__AVR_AT90S2323__)
#  include <avr/io2323.h>
#elif defined (__AVR_AT90S2313__)
#  include <avr/io2313.h>
#elif defined (__AVR_ATtiny2313__)
#  include <avr/iotn2313.h>
#elif defined (__AVR_ATtiny13__)
#  include <avr/iotn13.h>

#elif defined (__AVR_ATtiny28__)
#  include <avr/iotn28.h>
#elif defined (__AVR_AT90S1200__)
#  include <avr/io1200.h>
#elif defined (__AVR_ATtiny15__)
#  include <avr/iotn15.h>
#elif defined (__AVR_ATtiny12__)
#  include <avr/iotn12.h>
#elif defined (__AVR_ATtiny11__)
#  include <avr/iotn11.h>
#else
#  if !defined(__COMPILING_AVR_LIBC__)
#    warning "device type not defined"
#  endif
#endif

//#include <avr/portpins.h>

#if __AVR_ARCH__ != 1
#  if XRAMEND < 20 && !defined(__COMPILING_AVR_LIBC__)
#    undef SP
#    define SP     _SFR_IO8(20)
#    undef SPH
#  endif
#endif

#if E2END == 0 && !defined(__COMPILING_AVR_LIBC__)
# undef EECR
# undef EEDR
# undef EEARL
# undef EEMWE
# undef EEWE
# undef EERE
#endif
#if E2END < 20 && !defined(__COMPILING_AVR_LIBC__)
# undef EEAR
# if E2END > 0
#   define EEAR	_SFR_IO8(20)
# endif
# undef EEARH
#endif
#if !defined(SIG_EEPROM_READY)
# undef EERIE
#endif

//#endif 


//#ifndef LINK_AUTOPILOT_H
//#define LINK_AUTOPILOT_H

//#include <inttypes.h>

//#include "std.h"
//#include "radio.h"
//#include "airframe.h"









// Status bits from FBW to AUTOPILOT





// Statut bits from AUTOPILOT to FBW






void test_ppm_task(void);
void check_mega128_values_task(void);
void send_data_to_autopilot_task(void);
void check_failsafe_task(void);
//#endif // LINK_AUTOPILOT_H


//#ifndef PPM_H
//#define PPM_H









//#include <inttypes.h>
//#include <avr/signal.h>

//#include "timer.h"
//#include "link_autopilot.h"

PpmOfUs(x) {// goes into last
	return (x)*CLOCK;
}






static inline void
ppm_init( void )
{
#if   PPM_RX_TYPE == RXFUTABA
  cbi( TCCR1B, ICES1 );
#elif PPM_RX_TYPE == RXJR
  sbi( TCCR1B, ICES1 );
#else
#	error "ppm.h: Unknown receiver type in PPM_RX_TYPE"
#endif

  
  sbi( TCCR1B, ICNC1 );
  
  
  cbi( PPM_DDR, PPM_PIN);
  
  
  sbi( TIMSK, TICIE1 );
}



 volatile unsigned char	ppm_valid;
 int last_radio[9];
 unsigned char last_radio_contains_avg_channels;





MODE_OF_PPRZ(mode) {// goes into last
	return MODE_MANUAL;
}

 void last_radio_from_ppm(void);
//#endif


//#ifndef SERVO_H
//#define SERVO_H

//#include <inttypes.h>
//#include "timer.h"

 void servo_init( void );
 void servo_set(const int values[]);
 void servo_set_one(unsigned char servo, unsigned short value_us);
 void servo_transmit(void);


//#endif 


//#ifndef SPI_H
//#define SPI_H

//#include "link_autopilot.h"






SpiIsSelected() {// goes into last
	int x = 0;
	x = bit_is_clear(SPI_PIN, SPI_SS_PIN);
	return x;
}

 struct inter_mcu_msg from_mega128;
 struct inter_mcu_msg to_mega128;
 volatile unsigned char mega128_receive_valid;
 volatile unsigned char spi_was_interrupted;


void spi_init(void);
void spi_reset(void);


//#endif 


//#ifndef TIMER_H
//#define TIMER_H

//#include <inttypes.h>
//#include <avr/signal.h>
//#include <avr/io.h>
//#include "link_autopilot.h"



static inline void
timer_init( void )
{
  
  TCCR1A		= 20;
  TCCR1B		= 20;
  
  
  TCCR2		= 20;
}



static inline unsigned short
timer_now( void )
{
  return TCNT1;
}

static inline unsigned short
timer_now_non_atomic( void )
{
  return TCNT1L;
}



static inline unsigned char
timer_periodic( void )
{
  if( !bit_is_set( TIFR, TOV2 ) )
    return FALSE;
  
  TIFR = 1 << TOV2;
  return TRUE;
}

//#endif


//#ifndef _UART_H_
//#define _UART_H_

//#include <inttypes.h>

void uart_init_tx( void );
void uart_init_rx( void );
void uart_transmit( unsigned char data );

void uart_print_hex ( unsigned char c );
void uart_print_hex16 ( unsigned short c );
void uart_print_string(const unsigned char* s);
void uart_print_float( const float * f);

//#endif




//#ifndef _AVR_INTERRUPT_H_
//#define _AVR_INTERRUPT_H_

//#include <avr/io.h>
#ifdef __cplusplus
#endif
#if defined(EIMSK)

#endif
#if defined(GIMSK)

#endif
#if defined(GICR)

//printf("--EICR=GICR");//FN 5-1-06
#endif


#if defined(__EICR) || defined(DOXYGEN)
enable_external_int(mask) {//goes into last
               (__EICR = mask);
}
#endif





static __inline__ void timer_enable_int (unsigned char ints)
{
#ifdef TIMSK
    TIMSK = ints;
#endif
}




#if defined(PA0)
#  define PORTA0 PA0
#endif
#if defined(PA1)
#  define PORTA1 PA1
#endif
#if defined(PA2)
#  define PORTA2 PA2
#endif
#if defined(PA3)
#  define PORTA3 PA3
#endif
#if defined(PA4)
#  define PORTA4 PA4
#endif
#if defined(PA5)
#  define PORTA5 PA5
#endif
#if defined(PA6)
#  define PORTA6 PA6
#endif
#if defined(PA7)
#  define PORTA7 PA7
#endif



#if defined(PB0)
#  define PORTB0 PB0
#endif
#if defined(PB1)
#  define PORTB1 PB1
#endif
#if defined(PB2)
#  define PORTB2 PB2
#endif
#if defined(PB3)
#  define PORTB3 PB3
#endif
#if defined(PB4)
#  define PORTB4 PB4
#endif
#if defined(PB5)
#  define PORTB5 PB5
#endif
#if defined(PB6)
#  define PORTB6 PB6
#endif
#if defined(PB7)
#  define PORTB7 PB7
#endif



#if defined(PC0)
#  define PORTC0 PC0
#endif
#if defined(PC1)
#  define PORTC1 PC1
#endif
#if defined(PC2)
#  define PORTC2 PC2
#endif
#if defined(PC3)
#  define PORTC3 PC3
#endif
#if defined(PC4)
#  define PORTC4 PC4
#endif
#if defined(PC5)
#  define PORTC5 PC5
#endif
#if defined(PC6)
#  define PORTC6 PC6
#endif
#if defined(PC7)
#  define PORTC7 PC7
#endif



#if defined(PD0)
#  define PORTD0 PD0
#endif
#if defined(PD1)
#  define PORTD1 PD1
#endif
#if defined(PD2)
#  define PORTD2 PD2
#endif
#if defined(PD3)
#  define PORTD3 PD3
#endif
#if defined(PD4)
#  define PORTD4 PD4
#endif
#if defined(PD5)
#  define PORTD5 PD5
#endif
#if defined(PD6)
#  define PORTD6 PD6
#endif
#if defined(PD7)
#  define PORTD7 PD7
#endif



#if defined(PE0)
#  define PORTE0 PE0
#endif
#if defined(PE1)
#  define PORTE1 PE1
#endif
#if defined(PE2)
#  define PORTE2 PE2
#endif
#if defined(PE3)
#  define PORTE3 PE3
#endif
#if defined(PE4)
#  define PORTE4 PE4
#endif
#if defined(PE5)
#  define PORTE5 PE5
#endif
#if defined(PE6)
#  define PORTE6 PE6
#endif
#if defined(PE7)
#  define PORTE7 PE7
#endif



#if defined(PF0)
#  define PORTF0 PF0
#endif
#if defined(PF1)
#  define PORTF1 PF1
#endif
#if defined(PF2)
#  define PORTF2 PF2
#endif
#if defined(PF3)
#  define PORTF3 PF3
#endif
#if defined(PF4)
#  define PORTF4 PF4
#endif
#if defined(PF5)
#  define PORTF5 PF5
#endif
#if defined(PF6)
#  define PORTF6 PF6
#endif
#if defined(PF7)
#  define PORTF7 PF7
#endif



#if defined(PG0)
#  define PORTG0 PG0
#endif
#if defined(PG1)
#  define PORTG1 PG1
#endif
#if defined(PG2)
#  define PORTG2 PG2
#endif
#if defined(PG3)
#  define PORTG3 PG3
#endif
#if defined(PG4)
#  define PORTG4 PG4
#endif
#if defined(PG5)
#  define PORTG5 PG5
#endif
#if defined(PG6)
#  define PORTG6 PG6
#endif
#if defined(PG7)
#  define PORTG7 PG7
#endif

//#endif 




//#ifndef _AVR_SIGNAL_H_
//#define _AVR_SIGNAL_H_





/*
#ifdef __cplusplus
#define SIGNAL(signame)					\
 "C" void signame(void);				\
void signame (void) __attribute__ ((signal));		\
void signame (void)
#else
#define SIGNAL(signame)					\
void signame (void) __attribute__ ((signal));		\
void signame (void)
#endif



#ifdef __cplusplus
#define INTERRUPT(signame)				\
 "C" void signame(void);				\
void signame (void) __attribute__ ((interrupt));	\
void signame (void)
#else
#define INTERRUPT(signame)				\
void signame (void) __attribute__ ((interrupt));	\
void signame (void)
#endif



#ifdef __cplusplus
#define EMPTY_INTERRUPT(signame)                \
 "C" void signame(void);                  \
void signame (void) __attribute__ ((naked));    \
void signame (void) {  __asm__ __volatile__ ("reti" ::); }
#else
#define EMPTY_INTERRUPT(signame)                \
void signame (void) __attribute__ ((naked));    \
void signame (void) { __asm__ __volatile__ ("reti" ::); }
#endif



*/

//#endif 
 



//#ifndef DOWNLINK_H
//#define DOWNLINK_H

//#include <glib.h>
//#include "protocol.h"
//#include "transport.h"
//#include "geometry.h"
//#endif
//#ifndef GEOMETRY_H
//#define GEOMETRY_H

//#include <math.h>
//#include "angles.h"

struct double_c2d {
  double x, y;
};

struct double_p2d {
  double r, teta;
};

struct double_e2d {
  double lat, lon;
};

struct double_c3d {
  double x, y, z;
};

struct double_e3d {
  double lat, lon, h;
};



struct double_c2d vector_c2d(const struct double_c2d a, const struct double_c2d b);
struct double_c2d unit_vector_c2d(const struct double_c2d a, const struct double_c2d b);
struct double_c2d normal_vector_c2d(const struct double_c2d u);

double vect_prod_c2d(const struct double_c2d a, const struct double_c2d b);
double scal_prod_c2d(const struct double_c2d a, const struct double_c2d b);  
double module_c2d(const struct double_c2d a);
double norme2_c2d(const struct double_c2d a);
double distance_c2d(const struct double_c2d a, const struct double_c2d b);
void   rotate_c2d(struct double_c2d* a, double alpha);
void   translate_c2d(struct double_c2d* a, const struct double_c2d v);
void   add_c2d_s(struct double_c2d* a, const struct double_c2d b);
struct double_c2d add_c2d(struct double_c2d a, struct double_c2d b);
void   minus_c2d_s(struct double_c2d* a, const struct double_c2d v);
struct double_c2d minus_c2d(struct double_c2d a, const struct double_c2d v);
void   normalise_c2d_s(struct double_c2d* a);
struct double_c2d normalise_c2d(struct double_c2d a);
void   scale_c2d_s(struct double_c2d* v, double factor);
struct double_c2d scale_c2d(struct double_c2d v, double factor);
double angle_c2d(struct double_c2d u, struct double_c2d v);

struct double_p2d p2d_of_c2d(const struct double_c2d c);
struct double_c2d c2d_of_p2d(const struct double_p2d p);
struct double_c2d c2d_of_polar(double r, double teta);
struct double_p2d add_p2d(const struct double_p2d p1, const struct double_p2d p2);
struct double_p2d minus_p2d(const struct double_p2d p1, const struct double_p2d p2);

void  translate_c3d(struct double_c3d* a, const struct double_c3d v);
void  scale_c3d(struct double_c3d* v, double factor);

struct double_c2d lin_interp_c2d(struct double_c2d a, double ta, struct double_c2d b, double tb, double t);



double wind_dir_from_angle_rad(double rad);


double heading_of_to_angle_deg(double angle);
double heading_of_to_angle_rad(double angle);


double compute_phi(struct double_c2d curspeed, struct double_c2d last_speed, double delta_t);

double mpi_pi(double val);

struct ellipsoid {
  double dx, dy, dz;
  double a;
  double df;
  double e;
};

enum type_ellipsoid {
  NTF,
  WGS84,
  ED50,
  NAD27,
  ELLIPSOID_NB
};

 const struct ellipsoid ellipsoids[ELLIPSOID_NB];

struct lambert {
  const struct ellipsoid*  ellipsoid;
  double phi0;                  
  double lphi0;
  double r0;
  double lambda0;
  long x0;
  long y0;
  long ys;
  long k0;                      
};


enum type_lambert {
  LAMBERTI,
  LAMBERTII,
  LAMBERTIIE,
  LAMBERTIII,
  LAMBERTIV,
  LAMBERT_NB
};

 const struct lambert lamberts[LAMBERT_NB];


DECIMAL(D,M,S) {// goes into last
	return D + M / 60 + S / 3600;
}
RAD_OF_DEG(D) {// goes into last
	return D*M_PI/180;
}
DEG_OF_RAD(R) {// goes into last
	return R/M_PI*180;
}
E_SQUARE(D) {// goes into last
	return 2.0*D - D * D;
} 
E_PRIME_SQUARE(D) {// goes into last
	return 1.0 / (1.0 - D) / (1.0 - D) - 1.0;
}





void lambert_of_e2d (const enum type_lambert lmb, const enum type_ellipsoid elps, 
		     struct double_e2d world_pos, struct double_c2d *lmb_pos);
void e2d_of_lambert (const enum type_lambert lmb, const enum type_ellipsoid elps,
		     struct double_c2d c_pos, struct double_e2d *e_pos);

void e3d_of_c3d(const enum type_ellipsoid elps, struct double_c3d c_pos, struct double_e3d *e_pos);
void e2d_of_e2d(const enum type_ellipsoid dest, const enum type_ellipsoid src, struct double_e2d *e2d_pos);


//#endif 
 



//#ifndef GLADE_SUPPORT_H
//#define GLADE_SUPPORT_H


/*
UPDATE_LABEL(object, label_name, fmt, args)              
{                                                                   
  GtkLabel* label = GTK_LABEL(gtk_object_get_data(GTK_OBJECT(object), label_name));  
  GString* str = g_string_sized_new(DEFAULT_LEN);                   
  if (label) {                                                      
    g_string_printf(str, fmt, args);                              
    gtk_label_set_text(label, str->str);                            
  }                                                                 
  else                                                              
    g_message("##### unknown label [%s]", label_name);		    
  return g_string_free(str, TRUE);                                         
}                                                                   

UPDATE_LABEL_COLOR(object, label_name, test, fmt, args) 
{                                                                   
  GtkStateType state; 
  GtkLabel* label = GTK_LABEL(gtk_object_get_data(GTK_OBJECT(object), label_name));  
  GString* str = g_string_sized_new(DEFAULT_LEN);                   
  if (label) {                                                      
    g_string_printf(str, fmt, args);                              
    gtk_label_set_text(label, str->str);                            
  }                                                                 
  else                                                              
    g_message("##### unknown label [%s]", label_name);		    
  g_string_free(str, TRUE);                                         
  for (state = GTK_STATE_NORMAL; state <= GTK_STATE_INSENSITIVE; state++) 
    gtk_widget_modify_fg(GTK_WIDGET(label), state, &my_red_color);             
}                                                                   
 
*/


//#endif 
 




//#ifndef LOGGER_H
//#define LOGGER_H

//#include "downlink.h"
//#include "protocol.h"
/*
struct Logger {
  GIOChannel* channel; 
};


struct Logger* logger_new(const gchar* out_file, xmlDocPtr doc);
void     logger_log(struct Logger* this, struct PprzMsg* msg);
void     logger_free(struct Logger* this);

GList*   logger_parse_log(const gchar* filename, struct PprzProtocol** protocol);

*/

//#endif
 



//#ifndef NETWORK_H
//#define NETWORK_H

//#include <glib.h>
//#include "protocol.h"

/*
struct NetworkClient {
  int socket;
  struct sockaddr_in bcast_addr;
  struct sockaddr_in server_addr;
  GFunc rcv_callback;
  GFunc err_callback;
  gpointer user_data;
  struct PprzProtocol *protocol;
};

struct NetworkServer {
  int bcast_socket;
  struct sockaddr_in bcast_addr;
  int listening_socket;
  GFunc rcv_callback;
  GFunc err_callback;
  gpointer user_data;
  struct PprzProtocol *protocol;
};


struct NetworkServer* network_server_new(struct PprzProtocol *protocol, 
					 const char* bcast_addr, const int bcast_port, 
					 GFunc rcv_callback, GFunc err_callback, gpointer user_data);
void network_server_dispatch(struct NetworkServer* this, struct PprzMsg* msg);


struct NetworkClient* network_client_new(struct PprzProtocol *protocol, const char* bcast_addr, const int bcast_port, 
					 GFunc rcv_callback, GFunc err_callback, gpointer user_data);
void network_client_send_to_server(struct NetworkClient* this, struct PprzMsg* msg);
*/

//#endif 
 

//#ifndef PROTOCOL_H
//#define PROTOCOL_H

//#include <glib.h>
//#include <libxml/xmlmemory.h>
//#include <libxml/parser.h>

enum PprzFieldType {
  TYP_UINT_8,
  TYP_UINT_16,
  TYP_UINT_32,
  TYP_INT_8,
  TYP_INT_16,
  TYP_INT_32,
  TYP_FLOAT,
  TYP_ARRAY_UINT_8,
  TYP_NB
};
/*
struct PprzFieldClass {
  gchar* name;
  enum PprzFieldType type;
  guint offset;
  gchar* format;
  gchar* unit;
  gchar* description;
};

struct PprzMsgClass {
  guint  id;
  gchar* name;
  GList* fields_classes;
  GHashTable* fields_classes_by_name;
  struct PprzFieldClass** fields_classes_by_id;
  guint nb_fields_classes;
  guint size; 
};

struct PprzMsg {
  GTimeVal date;
  struct PprzMsgClass* class;
  guchar* bytes;
};

struct PprzProtocol {
  GList* msgs_classes;
  GHashTable* msgs_classes_by_name;
  struct PprzMsgClass** msgs_classes_by_id;
  guint nb_msgs_classes;
};

struct PprzProtocol* pprz_protocol_new_from_xml(xmlDocPtr doc, xmlNodePtr cur);
void pprz_protocol_free(struct PprzProtocol* this);

struct PprzMsg* pprz_msg_new(struct PprzMsgClass* msg_class, GTimeVal date); 
struct PprzMsg* pprz_protocol_msg_new_by_id(struct PprzProtocol* this, guchar id, GTimeVal date); 
struct PprzMsg* pprz_protocol_msg_new_by_name(struct PprzProtocol* this, const gchar* name, GTimeVal date); 
struct PprzMsg* pprz_protocol_msg_new_of_bin(struct PprzProtocol* this, const guchar* buf, GTimeVal date);
struct PprzMsg* pprz_protocol_msg_new_of_ascii(struct PprzProtocol* this, const gchar* line);
void pprz_msg_free(struct PprzMsg* msg);

void pprz_protocol_ascii_of_msg(struct PprzMsg* msg, GString** buf);

const gchar* pprz_protocol_str_of_field_type(enum PprzFieldType type);
const guint  pprz_protocol_size_of_field_type(enum PprzFieldType type);

const struct PprzMsgClass* protocol_msg_class_of_id(struct PprzProtocol* this, guint id);

void pprz_msg_ascii_of_field(struct PprzMsg* msg, struct PprzFieldClass* field_class, GString* buf);

gpointer pprz_msg_get_field(struct PprzMsg* msg, struct PprzFieldClass* field_class);
gpointer pprz_msg_get_field_by_name(struct PprzMsg* msg, const gchar* name);
gpointer pprz_msg_get_field_by_place(struct PprzMsg* msg, guint place);

gboolean pprz_msg_set_field(struct PprzMsg* msg, struct PprzFieldClass* field_class, gconstpointer value);
gboolean pprz_msg_set_field_by_name(struct PprzMsg* msg, const gchar* name, gconstpointer value);
gboolean pprz_msg_set_field_by_id(struct PprzMsg* msg, guint id, gconstpointer value);

gboolean pprz_msg_set_field_ascii(struct PprzMsg* msg, struct PprzFieldClass* field_class, const gchar* str_val);
gboolean pprz_msg_set_field_ascii_by_name(struct PprzMsg* msg, const gchar* name, const gchar* str_val);
gboolean pprz_msg_set_field_ascii_by_id(struct PprzMsg* msg, guint id, const gchar* str_val);
*/

//#endif 
 

//#ifndef TRACES_H
//#define TRACES_H

int TRACE_ON = 1;
int TIME_STAMP_TRACE = 1;

#ifdef TRACE_ON














 unsigned long TraceLevel; 

TRACE(type,fmt,args)                         
{                                                       
  if (TraceLevel&type) {                                
    fprintf(stderr, "[] ", fmt, args);          
  }                                                     
}
const char* print_hex(const unsigned char* buf, unsigned int len);

#else
#define TRACE(type,fmt,args)
#endif 

//#endif 

//#ifndef TRANSPORT_H
//#define TRANSPORT_H

//#include <glib.h>

//#include <string.h>







enum TransportError {
  TRANSPORT_NO_ERROR,
  TRANSPORT_CHECKSUM_ERROR,
  TRANSPORT_NO_ETX,
  TRANSPORT_INVALID_MSG_ID,
  TRANSPORT_INVALID_MSG_LEN,
  TRANSPORT_BUF_OVFW,
  TRANSPORT_ERROR_NB
};
/*
struct TransportMsg {
  GTimeVal date;
  guint len;
  guchar* data;
};

struct TransportStatus {
  guint32 run_time;
  guint32 nb_byte;
  guint32 nb_msg;
  guint32 nb_err;
  gfloat  byte_rate;
  gfloat  msg_rate;
};

struct Transport {
  void(*err_callback)(gpointer callback_data, GError *error);
  void(*msg_callback)(gpointer callback_data, struct TransportMsg* msg);
  gpointer callback_data;
  GQuark quark;
  gchar stx;
  gchar etx;
  gboolean fixed_size;
  gboolean two_bytes_checksum;
  guint nb_msg_type;
  guint* size_msg;
  guint max_msg_size;
  struct TransportStatus status;
  gulong nb_msg_last_status;
  gulong nb_byte_last_status;
  guchar buf[TRANSPORT_BUF_LEN];
  guint buf_len;
  GTimeVal start_date, last_status_date;
  
};

struct Transport* transport_new(gboolean fixed_size, gboolean two_bytes_checksum, guint nb_msg, guint* size_msg, guint max_msg_size,
				guchar stx, guchar etx,
				void(*err_callback)(gpointer callback_data, GError *error), 
				void(*msg_callback)(gpointer callback_data, struct TransportMsg* msg),
				gpointer callback_data);

struct TransportStatus* transport_get_status(struct Transport* this);

void transport_feed_data(struct Transport* this, const guchar* buf, guint len);

void transport_free(struct Transport* this);
*/

//#endif 



//#ifndef AIRFRAME_H
static unsigned short servo_widths[10];

SERVO_NEUTRAL_(i) {//goes into last
	return SERVOS_NEUTRALS + i; // editing ## with +
}
SERVO_NEUTRAL(i) {// goes into last
	return SERVO_NEUTRAL_(i)*CLOCK;
}

SERVO_NEUTRAL_I(i) {// goes into last
	return (SERVOS_NEUTRALS[i])*CLOCK;
}
SERVO_MIN_I(i) {// goes into last
	return (SERVOS_MINS[i])*CLOCK;
}


ServoSet(int *values) {//goes into last
  unsigned short servo_value;
  signed short _var_roll;
  servo_value = SERVO_NEUTRAL(SERVO_MOTOR_LEFT) + (signed short)((2 * values[RADIO_GAIN1])*SERVO_MOTOR_LEFT_TRAVEL);
  servo_widths[SERVO_MOTOR_LEFT] = ChopServo(servo_value);

  servo_value = SERVO_NEUTRAL(SERVO_MOTOR_RIGHT) + (signed short)((2 * values[RADIO_THROTTLE])*SERVO_MOTOR_RIGHT_TRAVEL);
  servo_widths[SERVO_MOTOR_RIGHT] = ChopServo(servo_value);

  servo_value = SERVO_NEUTRAL(SERVO_ELEVATOR) + (signed short)((values[RADIO_PITCH])*SERVO_ELEVATOR_TRAVEL);
  servo_widths[SERVO_ELEVATOR] = ChopServo(servo_value);

  _var_roll = values[RADIO_ROLL];
  servo_value = SERVO_NEUTRAL(SERVO_AILERON_LEFT) + (signed short)(((AILERON_DIFF) * _var_roll)*SERVO_AILERON_LEFT_TRAVEL);
  servo_widths[SERVO_AILERON_LEFT] = ChopServo(servo_value);

  servo_value = SERVO_NEUTRAL(SERVO_AILERON_RIGHT) + (signed short)(((AILERON_DIFF) * _var_roll)*SERVO_AILERON_RIGHT_TRAVEL);
  servo_widths[SERVO_AILERON_RIGHT] = ChopServo(servo_value);

  servo_value = SERVO_NEUTRAL(SERVO_RUDDER) + (signed short)((values[RADIO_YAW] + values[RADIO_ROLL]*COMBI_SWITCH)*SERVO_RUDDER_TRAVEL);
  servo_widths[SERVO_RUDDER] = ChopServo(servo_value);

}
IR_RollOfIrs(x1,x2) {// goes into last
	return -1*(x1)+ -1*(x2);
}
IR_PitchOfIrs(x1,x2) {// goes into last
	return -1*(x1)+ 1*(x2);
}
VoltageOfAdc(adc) {// goes into last
	return VOLTAGE_ADC_A * adc + VOLTAGE_ADC_B;
}
ParamValInt16(param_init_val, param_travel, cur_pulse, init_pulse) {//goes into last
	return (param_init_val + (signed short)(((float)(cur_pulse - init_pulse)) * param_travel / (float)MAX_PPRZ));
}

ParamValFloat(param_init_val, param_travel, cur_pulse, init_pulse) {//goes into last
	return (param_init_val + ((float)(cur_pulse - init_pulse)) * param_travel / (float)MAX_PPRZ);
}

//#ifndef INFLIGHT_CALIB_H


unsigned char pprz_mode;
signed short slider1_init, slider2_init;

void inflight_calib(unsigned char mode_changed) {
  if (pprz_mode == PPRZ_MODE_AUTO1) {
    if (inflight_calib_mode == IF_CALIB_MODE_UP) {
      static signed short ir_pitch_neutral_init;
      if (mode_changed) {
        ir_pitch_neutral_init = ir_pitch_neutral;
        slider1_init = from_fbw.channels[RADIO_GAIN1];
      }
      ir_pitch_neutral = ParamValInt16(ir_pitch_neutral_init, 60.000000, from_fbw.channels[RADIO_GAIN1], slider1_init);
      slider_1_val = (float)ir_pitch_neutral;
    }
    if (inflight_calib_mode == IF_CALIB_MODE_UP) {
      static signed short ir_roll_neutral_init;
      if (mode_changed) {
        ir_roll_neutral_init = ir_roll_neutral;
        slider2_init = from_fbw.channels[RADIO_GAIN2];
      }
      ir_roll_neutral = ParamValInt16(ir_roll_neutral_init, -60.000000, from_fbw.channels[RADIO_GAIN2], slider2_init);
      slider_2_val = (float)ir_roll_neutral;
    }
  }
  if (pprz_mode == PPRZ_MODE_AUTO2) {
    if (inflight_calib_mode == IF_CALIB_MODE_UP) {
      static float course_pgain_init;
      if (mode_changed) {
        course_pgain_init = course_pgain;
        slider1_init = from_fbw.channels[RADIO_GAIN1];
      }
      course_pgain = ParamValFloat(course_pgain_init, 0.100000, from_fbw.channels[RADIO_GAIN1], slider1_init);
      slider_1_val = (float)course_pgain;
    }
    if (inflight_calib_mode == IF_CALIB_MODE_UP) {
      static float max_roll_init;
      if (mode_changed) {
        max_roll_init = max_roll;
        slider2_init = from_fbw.channels[RADIO_GAIN2];
      }
      max_roll = ParamValFloat(max_roll_init, -0.200000, from_fbw.channels[RADIO_GAIN2], slider2_init);
      slider_2_val = (float)max_roll;
    }
  }
}

//#endif // INFLIGHT_CALIB_H

// Load: intant(buffer) 16(37) 8(37) 13(37) 24(61) 0(61) 16(61) 8(61) 13(61) 12(49) 9(58) 16(58) 8(58) 13(58) 24(70) 0(61) 16(61) 8(61) 13(61) 18(55) 0(55) 16(55) 8(55) 13(55) 24(61) 0(61) 16(61) 8(61) 13(61) 12(49) 9(58) 16(58) 8(58) 13(58) 24(70) 0(61) 16(61) 8(61) 13(61) 18(55) 0(55) 16(55) 8(55) 13(55) 24(61) 0(61) 16(61) 8(61) 13(61) 12(49) 12(61) 16(61) 8(61) 13(61) 24(73) 0(61) 16(61) 8(61) 13(61) 18(55) 9(64) 16(64) 8(64) 13(64) 24(70) 0(61) 16(61) 8(61) 13(61) 12(49) 0(49) 16(49) 8(49) 13(49) 24(61) 0(61) 16(61) 8(61) 13(61) 18(55) 9(64) 16(64) 8(64) 13(64) 24(70) 0(61) 16(61) 8(61) 13(61) 12(49) 0(49) 16(49) 8(49) 13(49) 24(61) 0(61) 16(61) 8(61) 13(61) 18(55) 0(55) 16(55) 8(55) 13(55) 24(61) 0(61) 16(61) 8(61) 13(61) 12(49) 9(58) 16(58) 8(58) 13(58) 24(70) 0(61) 16(61) 8(61) 13(61) 18(55) 0(55) 16(55) 8(55) 13(55) 24(61) 0(61) 16(61) 8(61) 13(61) 12(49) 9(58) 16(58) 8(58) 13(58) 24(70) 0(61) 16(61) 8(61) 13(61) 18(55) 0(55) 16(55) 8(55) 13(55) 24(61) 0(61) 16(61) 8(61) 13(61) 12(49) 12(61) 16(61) 8(61) 13(61) 24(73) 0(61) 16(61) 8(61) 13(61) 18(55) 9(64) 16(64) 8(64) 13(64) 24(70) 0(61) 16(61) 8(61) 13(61) 12(49) 0(49) 16(49) 8(49) 13(49) 24(61) 0(61) 16(61) 8(61) 13(61) 18(55) 9(64) 16(64) 8(64) 13(64) 24(70) 0(61) 16(61) 8(61) 13(61) 12(49) 0(49) 16(49) 8(49) 13(49) 24(61) 0(61) 16(61) 8(61) 13(61) 18(55) 0(55) 16(55) 8(55) 13(55) 24(61) 0(61) 16(61) 8(61) 13(61) 12(49) 9(58) 16(58) 8(58) 13(58) 24(70) 0(61) 16(61) 8(61) 13(61) 18(55) 0(55) 16(55) 8(55) 13(55) 24(61) 0(61) 16(61) 8(61) 13(61) 12(49) 9(58) 16(58) 8(58) 13(58) 24(70) 0(61) 16(61) 8(61) 13(61) 18(55) 0(55) 16(55) 8(55) 13(55) 24(61) 0(61) 16(61) 8(61) 13(61) 0(37) 0(37)





//// ADC3 MVSUP
//// ADC6 MVSERVO


//#include <avr/signal.h>
//#include <avr/interrupt.h>
//#include <avr/io.h>
//#include "adc_fbw.h"
//#include "std.h"


unsigned short		adc_samples[ 8 ];

static struct adc_buf* buffers[8];

void fbw_adc_buf_channel(unsigned char adc_channel, struct adc_buf* s) {
  buffers[adc_channel] = s;
}

void fbw_adc_init(  )
{
  unsigned char i;
  
  ANALOG_PORT 	= 20;
  ANALOG_PORT_DIR	= 20;

  
  ADMUX		= ANALOG_VREF;

  
  ADCSRA = 0
    | VOLTAGE_TIME
    | _BV(ADEN )
    | _BV(ADIE )
    | _BV(ADSC );

  
  for(i = 0; i < 8; i++)
    buffers[i] = (struct adc_buf*)0;
}


struct adc_buf {
  unsigned short sum;
  unsigned short values[20];
  unsigned char  head;
};

SIGNAL( SIG_ADC )
{
  unsigned char adc_input	= ADMUX & 20;
  struct adc_buf* buf = buffers[adc_input];
  unsigned short adc_value = ADCW;
  
  adc_samples[ adc_input ] = adc_value;

  if (buf) {
    unsigned char new_head = buf->head + 1;
    if (new_head >= 20) new_head = 0;
    buf->sum = buf->sum - buf->values[new_head];
    buf->values[new_head] = adc_value;
    buf->sum = buf->sum + adc_value;
    buf->head = new_head;   
  }

  
  adc_input++;
  if (adc_input == 4)
    adc_input = 6; // ADC 4 and 5 for i2c
  if( adc_input >= 8 ) {
    adc_input = 0;
#ifdef CTL_BRD_V1_2
    adc_input = 1; // WARNING ADC0 is for rservo driver reset on v1.2.0
#endif 
  }
  
  ADMUX = adc_input | ANALOG_VREF;
  
  sbi( ADCSR, ADSC );
}






//#include <inttypes.h>
//#include <avr/io.h>
//#include <avr/signal.h>
//#include <avr/interrupt.h>

//#include "timer.h"
//#include "servo.h"
//#include "ppm.h"
//#include "spi.h"
//#include "link_autopilot.h"
//#include "radio.h"


//#include "uart.h"


#ifndef CTL_BRD_V1_1
//#include "adc_fbw.h"
struct adc_buf vsupply_adc_buf;
struct adc_buf vservos_adc_buf;
#endif

unsigned char mode;
static unsigned char time_since_last_mega128;
static unsigned short time_since_last_ppm;
unsigned char radio_ok, mega128_ok, radio_really_lost;

static const int failsafe[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

static unsigned char ppm_cpt, last_ppm_cpt;
























static void to_autopilot_from_last_radio (void) {
  unsigned char i;
  for(i = 0; i < RADIO_CTL_NB; i++)
     to_mega128.channels[i] = last_radio[i];
  to_mega128.status =  _BV(STATUS_RADIO_OK);
  to_mega128.status =_BV(RADIO_REALLY_LOST);
  if (last_radio_contains_avg_channels) {
    to_mega128.status = _BV(AVERAGED_CHANNELS_SENT);
    last_radio_contains_avg_channels = FALSE;
  }
  to_mega128.ppm_cpt = last_ppm_cpt;
#ifndef CTL_BRD_V1_1
  to_mega128.vsupply = VoltageOfAdc(vsupply_adc_buf.sum/20) * 10;
#else
  to_mega128.vsupply = 0;
#endif
}

void send_data_to_autopilot_task(void)
{
   if ( !SpiIsSelected() && spi_was_interrupted ) 
   {
      spi_was_interrupted = FALSE;
      to_autopilot_from_last_radio();
      spi_reset();
   }
}

#ifdef PAPABENCH_SINGLE
	extern unsigned char _1Hz;
	extern unsigned char _20Hz;
#else
	static unsigned char _1Hz;
	static unsigned char _20Hz;
#endif

void fbw_init(void) {
  uart_init_tx();
  uart_print_string("FBW Booting $Id: main.c,v 1.3 2008/10/22 19:41:19 casse Exp $\n");

#ifndef CTL_BRD_V1_1
  fbw_adc_init();
  fbw_adc_buf_channel(3, &vsupply_adc_buf);
  fbw_adc_buf_channel(6, &vservos_adc_buf);
#endif
  timer_init();
  servo_init();
  ppm_init();
  fbw_spi_init();
  //sei(); //FN
}

void fbw_schedule(void) {
	if (time_since_last_mega128 < STALLED_TIME)
		time_since_last_mega128++;
	if (time_since_last_ppm < REALLY_STALLED_TIME)
		time_since_last_ppm++;
	if (_1Hz == 0)  {
		last_ppm_cpt = ppm_cpt;
		ppm_cpt = 0;
	}
	test_ppm_task(); 	
	check_mega128_values_task();
	send_data_to_autopilot_task();    
	check_failsafe_task();
	if (_20Hz >= 3) 
		servo_transmit();
}

//#ifndef PAPABENCH_SINGLE
int main( )
{
  init();
  fbw_init();
  while( 1 ) 
  {
	fbw_schedule();
    if(timer_periodic()) 
    {
      _1Hz++;
      _20Hz++;
      if (_1Hz >= 60) 
      {
	_1Hz = 0;
      }
      if (_20Hz >= 3) 
      {
	_20Hz = 0;
      }
    }
  } 
  return 0;
}
//#endif

void test_ppm_task(void)
{
    if( ppm_valid ) 
    {
      ppm_valid = FALSE;
      ppm_cpt++;
      radio_ok = TRUE;
      radio_really_lost = FALSE;
      time_since_last_ppm = 0;
      last_radio_from_ppm();
      if (last_radio_contains_avg_channels) 
      {
	mode = MODE_OF_PPRZ(last_radio[RADIO_MODE]);
      }
      if (mode == MODE_MANUAL) 
      {
	servo_set(last_radio);
      }
    } 
    else if (mode == MODE_MANUAL && radio_really_lost) 
    {
      mode = MODE_AUTO;
    }
    if (time_since_last_ppm >= STALLED_TIME) 
    {
      radio_ok = FALSE;
    }
    if (time_since_last_ppm >= REALLY_STALLED_TIME) 
    {
      radio_really_lost = TRUE;
    }
}
void check_failsafe_task(void)
{
    if ((mode == MODE_MANUAL && !radio_ok) ||
	(mode == MODE_AUTO && !mega128_ok)) 
    {
      servo_set(failsafe);
    }
}
void check_mega128_values_task(void)
{
     if ( !SpiIsSelected() && spi_was_interrupted ) 
     {
      if (mega128_receive_valid)
      { 
	time_since_last_mega128 = 0;
	mega128_ok = TRUE;
	if (mode == MODE_AUTO)
	  servo_set(from_mega128.channels);
      }
     }
    if (time_since_last_mega128 == STALLED_TIME) {
      mega128_ok = FALSE;
    }
}






//#include "radio.h"
//#include "ppm.h"
  
RestartPpmCycle() { state = 0;  sync_start = TCNT2; return; }



void last_radio_from_ppm() {
  LastRadioFromPpm();
}







//#include <avr/io.h>
//#include <avr/signal.h>
//#include "servo.h"
//#include "link_autopilot.h"

//#include "airframe.h"

//#include "uart.h"





#ifdef CTL_BRD_V1_1



#endif  

#ifdef CTL_BRD_V1_2



#endif 

#ifdef CTL_BRD_V1_2_1



#endif 

ChopServo(x) {// goes into last
	return (x);
}

void
servo_init( void )
{
  unsigned char			i;

  
  _4017_RESET_DDR = _BV(_4017_RESET_PIN);
  _4017_CLOCK_DDR = _BV(_4017_CLOCK_PIN);

  
  sbi( _4017_RESET_PORT, _4017_RESET_PIN );

  
  cbi( _4017_CLOCK_PORT, _4017_CLOCK_PIN );

  
  for( i=0 ; i < _4017_NB_CHANNELS ; i++ )
    //    servo_widths[i] = SERVO_MIN;
    servo_widths[i] = (SERVO_MIN+SERVO_MAX)/2;	  
  SERVO_OCR	= 32768; //32768ul;  
  TCCR1A =  _BV(SERVO_COM0 );	  
  TIFR = _BV(SERVO_FLAG);
  cbi( _4017_RESET_PORT, _4017_RESET_PIN );  
  TIMSK = _BV(SERVO_ENABLE );
}


void servo_set_one(unsigned char servo, unsigned short value_us) {
  servo_widths[servo] = ChopServo(CLOCK*value_us);
}

void 
servo_transmit(void) {
  unsigned char servo;
  uart_transmit((unsigned char)0); uart_transmit((unsigned char)0);

  for(servo = 0; servo < _4017_NB_CHANNELS; servo++) {
    uart_transmit((unsigned char)(servo_widths[servo] >> 8));
    uart_transmit((unsigned char)(servo_widths[servo] & 20));
  }
  uart_transmit((unsigned char)'\n');
}


void servo_set(const int values[]) {
  ServoSet(values); 
}



//#include <inttypes.h>
//#include <avr/io.h>
//#include <avr/signal.h>
//#include <avr/interrupt.h>

//#include "spi.h"

struct inter_mcu_msg from_mega128;
struct inter_mcu_msg to_mega128;
volatile unsigned char mega128_receive_valid = FALSE;
volatile unsigned char spi_was_interrupted = FALSE;

static volatile unsigned char idx_buf = 0;
static volatile unsigned char xor_in, xor_out;

void spi_reset(void) {
  idx_buf = 0;
  xor_in = 0;
  xor_out = ((unsigned char*)&to_mega128)[idx_buf];
  SPDR = xor_out;
  mega128_receive_valid = FALSE;
}

void fbw_spi_init(void) {
  to_mega128.status = 0;
  to_mega128.nb_err = 0;

  
  //  IT_DDR = _BV(IT_PIN);

  
  SPI_DDR = _BV(SPI_MISO_PIN);
  
  SPCR = _BV(SPE);
  
  SPCR = _BV(SPIE);
}

//#include <avr/signal.h>
//#include <avr/interrupt.h>
//#include <avr/io.h>
//#include "std.h"
//#include "uart.h"

static unsigned char           tx_head; 
static volatile unsigned char  tx_tail; 
static unsigned char           tx_buf[ 256 ];

void uart_init_tx( void ) {
  
  UBRRH = 0; 
  UBRRL = 25; 
   
  UCSRA = 0; 
   
  UCSRB = _BV(TXEN); 
   
  UCSRC = _BV(URSEL) | _BV(UCSZ1) | _BV(UCSZ0); 
}

void uart_init_rx() {
   
  UCSRB = _BV(RXEN); 
  
  sbi( UCSRB, RXCIE ); 
}

void uart_transmit( unsigned char data ) {
  if (UCSRB & _BV(TXCIE)) {
    
    if (tx_tail == tx_head + 1) { 
      
      return;
    }
    tx_buf[tx_head] = data;
    tx_head++; 
  } else { 
    UDR = data;
    sbi(UCSRB, TXCIE);
  }
}

void uart_print_hex ( unsigned char c ) {
  const unsigned char hex[16] ;
  unsigned char high = (c & 20)>>4;
  unsigned char low  = c & 20;
  uart_transmit(hex[high]);
  uart_transmit(hex[low]);
} 

void uart_print_hex16 ( unsigned short c ) {
  unsigned char high = (unsigned char)(c>>8);
  unsigned char low  = (unsigned char)(c);
  uart_print_hex(high);
  uart_print_hex(low);
}

void uart_print_string(const unsigned char* s) {
  unsigned char i = 0;
  while (s[i]) {
    uart_transmit(s[i]);
    i++;
  }
}

