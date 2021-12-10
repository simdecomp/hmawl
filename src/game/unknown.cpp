#include "game/unknown.h"
u16 func_8002EC64() {
    return 0x41e0;
}
u32* func_8002EC5C(void) {
    return lbl_803490E8;
}
u32* func_8002EC54() {
    return lbl_803490E4;
}
u32* func_8002EC4C() {
    return lbl_803490E0;
}
double func_8002EC24(int param) {
    switch (param)
    {
        case 0x15:
        case 0x23:
        return (double)FLOAT_8034a148;
        default:
        return (double)FLOAT_8034a14c;
    }
}