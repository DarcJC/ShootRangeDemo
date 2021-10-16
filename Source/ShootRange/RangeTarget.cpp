// @author Darc


#include "RangeTarget.h"

// Sets default values
ARangeTarget::ARangeTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARangeTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARangeTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

