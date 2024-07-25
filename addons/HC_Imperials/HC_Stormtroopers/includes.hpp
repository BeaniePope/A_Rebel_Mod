// ================== Macro Functions
#define MACRO_QUOTE(toQuote) #toQuote

#define MACRO_QUOTE_SINGLE(toQuote) '##toQuote##'

#define MACRO_UNDERSCORE_CONCAT(var1,var2) ##var1##_##var2
// ==================

// ================== Macro Functions
#define MACRO_MAG_x1(mag)  MACRO_QUOTE(mag)
#define MACRO_MAG_x2(mag)  MACRO_QUOTE(mag),MACRO_MAG_x1(mag)
#define MACRO_MAG_x3(mag)  MACRO_QUOTE(mag),MACRO_MAG_x2(mag)
#define MACRO_MAG_x4(mag)  MACRO_QUOTE(mag),MACRO_MAG_x3(mag)
#define MACRO_MAG_x5(mag)  MACRO_QUOTE(mag),MACRO_MAG_x4(mag)
#define MACRO_MAG_x6(mag)  MACRO_QUOTE(mag),MACRO_MAG_x5(mag)
#define MACRO_MAG_x7(mag)  MACRO_QUOTE(mag),MACRO_MAG_x6(mag)
#define MACRO_MAG_x8(mag)  MACRO_QUOTE(mag),MACRO_MAG_x7(mag)
#define MACRO_MAG_x9(mag)  MACRO_QUOTE(mag),MACRO_MAG_x8(mag)
#define MACRO_MAG_x10(mag) MACRO_QUOTE(mag),MACRO_MAG_x9(mag)
#define MACRO_MAG_x11(mag) MACRO_QUOTE(mag),MACRO_MAG_x10(mag)
#define MACRO_MAG_x12(mag) MACRO_QUOTE(mag),MACRO_MAG_x11(mag)
#define MACRO_MAG_x13(mag) MACRO_QUOTE(mag),MACRO_MAG_x12(mag)
#define MACRO_MAG_x14(mag) MACRO_QUOTE(mag),MACRO_MAG_x13(mag)
#define MACRO_MAG_x15(mag) MACRO_QUOTE(mag),MACRO_MAG_x14(mag)
// ==================