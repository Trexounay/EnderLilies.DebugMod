#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "State.generated.h"

UCLASS(Abstract)
class ZENITH_API UState : public UObject {
    GENERATED_BODY()
public:
    UState();
};

