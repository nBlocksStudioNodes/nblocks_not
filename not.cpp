#include "not.h"

void nBlock_NOT::triggerInput(nBlocks_Message message) {
    output[0] = (message.intValue? 0 : 1);
    available[0] = 1;
}
