#include "ZenithCharacter.h"
#include "MPComponent.h"
#include "CommandQueueComponent.h"
#include "HPComponent.h"
#include "ZenithInputComponent.h"
#include "StateComponent.h"
#include "FactionComponent.h"
#include "LocomotionComponent.h"
#include "DeathComponent.h"
#include "StaminaComponent.h"
#include "StunComponent.h"

class APhysicsVolume;
class UZenithCharacterMovementComponent;
class AEnemySpawnPoint;
class UCommandSet;
class USceneComponent;
class UParameterComponent;

void AZenithCharacter::UnlockInput() {
}

void AZenithCharacter::TriggerHookStart() {
}

void AZenithCharacter::SetPhysicsVolume(APhysicsVolume* NewVolume) {
}

void AZenithCharacter::SetLastAttackerDirection(const FVector& NewAttackerDirection) {
}

void AZenithCharacter::SetClampedInCamera(bool bClamped) {
}

void AZenithCharacter::Sample(float DeltaTime) {
}

void AZenithCharacter::Respawn() {
}















void AZenithCharacter::LockInput() {
}

bool AZenithCharacter::IsInputLocked() const {
    return false;
}

bool AZenithCharacter::IsClampedInCamera() const {
    return false;
}

bool AZenithCharacter::IsActivated() const {
    return false;
}

UZenithCharacterMovementComponent* AZenithCharacter::GetZenithCharacterMovement() const {
    return NULL;
}

AEnemySpawnPoint* AZenithCharacter::GetSourceSpawnPoint() const {
    return NULL;
}

UCommandSet* AZenithCharacter::GetRuntimeCommandSet() const {
    return NULL;
}

UParameterComponent* AZenithCharacter::GetParameterComponent() const {
    return NULL;
}

FVector AZenithCharacter::GetLastAttackerDirection(bool bIgnoreZ) const {
    return FVector{};
}

USceneComponent* AZenithCharacter::GetHomingTarget_Implementation() const {
    return NULL;
}

FCharacterInfosData AZenithCharacter::GetCharacterInfosData() const {
    return FCharacterInfosData{};
}


void AZenithCharacter::Deactivate(bool bForce) {
}

void AZenithCharacter::ClearPhysicsVolume() {
}

void AZenithCharacter::Activate() {
}

AZenithCharacter::AZenithCharacter() {
    this->ZenithCharacterMovement = NULL;
    this->SourceSpawnPoint = NULL;
    this->CommandQueueComponent = CreateDefaultSubobject<UCommandQueueComponent>(TEXT("CommandQueueComponent"));
    this->StateComponent = CreateDefaultSubobject<UStateComponent>(TEXT("StateComponent"));
    this->FactionComponent = CreateDefaultSubobject<UFactionComponent>(TEXT("FactionComponent"));
    this->ZenithInputComponent = CreateDefaultSubobject<UZenithInputComponent>(TEXT("ZenithInputComponent"));
    this->DeathComponent = CreateDefaultSubobject<UDeathComponent>(TEXT("DeathComponent"));
    this->HPComponent = CreateDefaultSubobject<UHPComponent>(TEXT("HPComponent"));
    this->MPComponent = CreateDefaultSubobject<UMPComponent>(TEXT("MPComponent"));
    this->StaminaComponent = CreateDefaultSubobject<UStaminaComponent>(TEXT("StaminaComponent"));
    this->StunComponent = CreateDefaultSubobject<UStunComponent>(TEXT("StunComponent"));
    this->LocomotionComponent = CreateDefaultSubobject<ULocomotionComponent>(TEXT("LocomotionComponent"));
    this->CommandSet = NULL;
    this->RuntimeCommandSet = NULL;
}

