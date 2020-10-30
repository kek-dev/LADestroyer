#include "string was spoofed"

namespace geometry
{
	float Distance(const SDK::FVector from, const SDK::FVector to)
	{
		return sqrt(
			(to.X - from.X) * (to.X - from.X) + (to.Y - from.Y) * (to.Y - from.Y) + (to.Z - from.Z) * (to.Z - from.Z));
	}

	SDK::FVector Normalize(const SDK::FVector from, const SDK::FVector to)
	{
		return ModifyLength(from, to, 1.0f);;
	}

	SDK::FVector ModifyLength(const SDK::FVector from, const SDK::FVector to, const float new_length)
	{
		const auto dist = Distance(from, to);
		
		SDK::FVector modified_vector;
		modified_vector.X = from.X + (to.X - from.X) / dist * new_length;
		modified_vector.Y = from.Y + (to.Y - from.Y) / dist * new_length;
		modified_vector.Z = from.Z + (to.Z - from.Z) / dist * new_length;

		return modified_vector;
	}
}
