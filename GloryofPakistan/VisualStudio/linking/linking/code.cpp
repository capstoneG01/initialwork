/* Call Library source file */

#include "extcode.h"

extern "C" {_declspec(dllexport) void pakistan(int32_t x, int32_t y, int32_t *z);
}
extern "C" {_declspec(dllexport) void pakistan(int32_t x, int32_t y, int32_t *z)
{

	*z=(x*x)+(y*y);

}}

