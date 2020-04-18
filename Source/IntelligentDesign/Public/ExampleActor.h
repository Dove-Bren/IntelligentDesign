#pragma once

#include "CoreMinimal.h"
#include "CoreUObject.h"
#include "GameFramework/Actor.h"
#include "ExampleActor.generated.h"

UCLASS()
class INTELLIGENTDESIGN_API AExampleActor : public AActor {
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void DoStuff();
};