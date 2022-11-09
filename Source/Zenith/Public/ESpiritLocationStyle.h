#pragma once
#include "CoreMinimal.h"
#include "ESpiritLocationStyle.generated.h"

UENUM()
enum class ESpiritLocationStyle : uint8 {
    Default,
    ResetToSummoner = 0xA,
};

