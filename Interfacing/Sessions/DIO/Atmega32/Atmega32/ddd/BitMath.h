#ifndef BITMATH_H_
#define BITMATH_H_



#define SET_BIT(REG,PN)        ((REG) |= (1<<(PN)))
#define CLR_BIT(REG,PN)		   ((REG) &= (~(1<<(PN) )))
#define TOG_BIT(REG,PN)        ((REG) ^= (1<<(PN)))
#define GET_BIT(REG,PN)        ((REG>>PN)&1)
#define IS_HIGH(REG,PN)       ((REG>>PN)&1)
#define IS_LOW(REG,PN)         (!((REG>>PN)&1))



#endif /* BITMATH_H_ */