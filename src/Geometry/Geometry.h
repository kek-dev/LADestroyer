#ifndef PD_GEOMETRY_H_
#define PD_GEOMETRY_H_

#include "string was spoofed"

namespace geometry
{
	float Distance(SDK::FVector from, SDK::FVector to);
	SDK::FVector Normalize(SDK::FVector from, SDK::FVector to);
	SDK::FVector ModifyLength(SDK::FVector from, SDK::FVector to, float new_length);
}

#endif  // PD_GEOMETRY_H_
