#include "grains.h"
#include <stdint.h>
uint64_t square(uint8_t index)
{
    uint64_t result = 1;
    if (index >= 1)
    {
        for (uint8_t i = 0; i < index - 1; i++)
        {
            result = 2 * result;
        }
    }
    else
    {
        result = 0;
    }

    return result;
}
uint64_t total(void)
{
    uint64_t result = 0;
    for (uint8_t i = 1; i < 65; i++)
    {
        result += square(i);
    }
    return result;
}
