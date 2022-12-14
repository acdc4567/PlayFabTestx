//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated model file for the UE4 PlayFab plugin.
// This model file contains the request and response USTRUCTS
//
// API: Matchmaker
//////////////////////////////////////////////////////////////////////////////////////////////

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabEnums.h"
#include "PlayFabRequestCommon.h"
#include "PlayFabLoginResultCommon.h"
#include "PlayFabMatchmakerModels.generated.h"

class UPlayFabJsonObject;

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Matchmaker API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// Matchmaking
//////////////////////////////////////////////////////

/**
 * This API allows the external match-making service to confirm that the user has a valid Session Ticket for the title, in
 * order to securely enable match-making. The client passes the user's Session Ticket to the external match-making service,
 * which then passes the Session Ticket in as the AuthorizationTicket in this call.
 */
USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerAuthUserRequest : public FPlayFabRequestCommon
{
    GENERATED_USTRUCT_BODY()
public:
    /** Session Ticket provided by the client. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString AuthorizationTicket;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerAuthUserResponse : public FPlayFabResultCommon
{
    GENERATED_USTRUCT_BODY()
public:
    /** Boolean indicating if the user has been authorized to use the external match-making service. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        bool Authorized = false;
    /** PlayFab unique identifier of the account that has been authorized. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerJoinedRequest : public FPlayFabRequestCommon
{
    GENERATED_USTRUCT_BODY()
public:
    /** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        UPlayFabJsonObject* CustomTags = nullptr;
    /**
     * Unique identifier of the Game Server Instance the user is joining. This must be a Game Server Instance started with the
     * Matchmaker/StartGame API.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString LobbyId;
    /** PlayFab unique identifier for the player joining. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerJoinedResponse : public FPlayFabResultCommon
{
    GENERATED_USTRUCT_BODY()
public:
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerLeftRequest : public FPlayFabRequestCommon
{
    GENERATED_USTRUCT_BODY()
public:
    /** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        UPlayFabJsonObject* CustomTags = nullptr;
    /**
     * Unique identifier of the Game Server Instance the user is leaving. This must be a Game Server Instance started with the
     * Matchmaker/StartGame API.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString LobbyId;
    /** PlayFab unique identifier for the player leaving. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerLeftResponse : public FPlayFabResultCommon
{
    GENERATED_USTRUCT_BODY()
public:
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerUserInfoRequest : public FPlayFabRequestCommon
{
    GENERATED_USTRUCT_BODY()
public:
    /** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        UPlayFabJsonObject* CustomTags = nullptr;
    /**
     * Minimum catalog version for which data is requested (filters the results to only contain inventory items which have a
     * catalog version of this or higher).
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        int32 MinCatalogVersion = 0;
    /** PlayFab unique identifier of the user whose information is being requested. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
};

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerUserInfoResponse : public FPlayFabResultCommon
{
    GENERATED_USTRUCT_BODY()
public:
    /** Array of inventory items in the user's current inventory. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        TArray<UPlayFabJsonObject*> Inventory;
    /** Boolean indicating whether the user is a developer. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        bool IsDeveloper = false;
    /** PlayFab unique identifier of the user whose information was requested. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString PlayFabId;
    /** Steam unique identifier, if the user has an associated Steam account. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString SteamId;
    /** Title specific display name, if set. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString TitleDisplayName;
    /** PlayFab unique user name. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        FString Username;
    /** Array of virtual currency balance(s) belonging to the user. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        UPlayFabJsonObject* VirtualCurrency = nullptr;
    /** Array of remaining times and timestamps for virtual currencies. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking Models")
        UPlayFabJsonObject* VirtualCurrencyRechargeTimes = nullptr;
};

