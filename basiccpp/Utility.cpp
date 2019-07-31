#include "Utility.h"

bool IsOdd(int i) {
	return i % 2 != 0;
}

bool ShouldBeCounted(int i) {
	return ((i == 2) || (i == 3)); 
}