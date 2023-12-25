#ifndef BITMATH_H_
#define BITMATH_H_

#define SET_BIT(Reg,N) ((Reg) |= (1<<(N)))
#define CLEAR_BIT(Reg,N) ((Reg) &= ~(1<<(N)))
#define TOGGLE(Reg,N) ((Reg) ^= (1<<(N)))
#define GET_BIT(Reg,N) (((Reg)>>N)&1)
#define IS_HIGH(Reg,N) (((Reg)>>N)&1)
#define IS_LOW(Reg,N) (~(((Reg)>>N)&1))
// rotate right
// rotate left


// #define GETBIT(Reg,N) (((Reg)&(1<<(N)))>>(N)))
// add () to increase precedence for preprocessing

// ctrl shift u, ctrl u, 
// alt shift select.

#endif /* BITMATH_H_ */