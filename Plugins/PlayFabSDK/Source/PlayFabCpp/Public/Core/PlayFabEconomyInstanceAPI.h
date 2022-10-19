//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once

#include "CoreMinimal.h"
#include "Core/PlayFabError.h"
#include "Core/PlayFabEconomyDataModels.h"
#include "Core/PlayFabSettings.h"
#include "PlayFabAPISettings.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

namespace PlayFab
{
    /**
     * Main interface for PlayFab Sdk, specifically all Economy APIs
     */
    class PLAYFABCPP_API UPlayFabEconomyInstanceAPI
    {
    public:
        DECLARE_DELEGATE_OneParam(FAddInventoryItemsDelegate, const EconomyModels::FAddInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FCreateDraftItemDelegate, const EconomyModels::FCreateDraftItemResponse&);
        DECLARE_DELEGATE_OneParam(FCreateUploadUrlsDelegate, const EconomyModels::FCreateUploadUrlsResponse&);
        DECLARE_DELEGATE_OneParam(FDeleteEntityItemReviewsDelegate, const EconomyModels::FDeleteEntityItemReviewsResponse&);
        DECLARE_DELEGATE_OneParam(FDeleteInventoryCollectionDelegate, const EconomyModels::FDeleteInventoryCollectionResponse&);
        DECLARE_DELEGATE_OneParam(FDeleteInventoryItemsDelegate, const EconomyModels::FDeleteInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FDeleteItemDelegate, const EconomyModels::FDeleteItemResponse&);
        DECLARE_DELEGATE_OneParam(FExecuteInventoryOperationsDelegate, const EconomyModels::FExecuteInventoryOperationsResponse&);
        DECLARE_DELEGATE_OneParam(FGetCatalogConfigDelegate, const EconomyModels::FGetCatalogConfigResponse&);
        DECLARE_DELEGATE_OneParam(FGetDraftItemDelegate, const EconomyModels::FGetDraftItemResponse&);
        DECLARE_DELEGATE_OneParam(FGetDraftItemsDelegate, const EconomyModels::FGetDraftItemsResponse&);
        DECLARE_DELEGATE_OneParam(FGetEntityDraftItemsDelegate, const EconomyModels::FGetEntityDraftItemsResponse&);
        DECLARE_DELEGATE_OneParam(FGetEntityItemReviewDelegate, const EconomyModels::FGetEntityItemReviewResponse&);
        DECLARE_DELEGATE_OneParam(FGetInventoryCollectionIdsDelegate, const EconomyModels::FGetInventoryCollectionIdsResponse&);
        DECLARE_DELEGATE_OneParam(FGetInventoryItemsDelegate, const EconomyModels::FGetInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FGetItemDelegate, const EconomyModels::FGetItemResponse&);
        DECLARE_DELEGATE_OneParam(FGetItemContainersDelegate, const EconomyModels::FGetItemContainersResponse&);
        DECLARE_DELEGATE_OneParam(FGetItemModerationStateDelegate, const EconomyModels::FGetItemModerationStateResponse&);
        DECLARE_DELEGATE_OneParam(FGetItemPublishStatusDelegate, const EconomyModels::FGetItemPublishStatusResponse&);
        DECLARE_DELEGATE_OneParam(FGetItemReviewsDelegate, const EconomyModels::FGetItemReviewsResponse&);
        DECLARE_DELEGATE_OneParam(FGetItemReviewSummaryDelegate, const EconomyModels::FGetItemReviewSummaryResponse&);
        DECLARE_DELEGATE_OneParam(FGetItemsDelegate, const EconomyModels::FGetItemsResponse&);
        DECLARE_DELEGATE_OneParam(FGetMicrosoftStoreAccessTokensDelegate, const EconomyModels::FGetMicrosoftStoreAccessTokensResponse&);
        DECLARE_DELEGATE_OneParam(FPublishDraftItemDelegate, const EconomyModels::FPublishDraftItemResponse&);
        DECLARE_DELEGATE_OneParam(FPurchaseInventoryItemsDelegate, const EconomyModels::FPurchaseInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FRedeemAppleAppStoreInventoryItemsDelegate, const EconomyModels::FRedeemAppleAppStoreInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FRedeemGooglePlayInventoryItemsDelegate, const EconomyModels::FRedeemGooglePlayInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FRedeemMicrosoftStoreInventoryItemsDelegate, const EconomyModels::FRedeemMicrosoftStoreInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FRedeemNintendoEShopInventoryItemsDelegate, const EconomyModels::FRedeemNintendoEShopInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FRedeemPlayStationStoreInventoryItemsDelegate, const EconomyModels::FRedeemPlayStationStoreInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FRedeemSteamInventoryItemsDelegate, const EconomyModels::FRedeemSteamInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FReportItemDelegate, const EconomyModels::FReportItemResponse&);
        DECLARE_DELEGATE_OneParam(FReportItemReviewDelegate, const EconomyModels::FReportItemReviewResponse&);
        DECLARE_DELEGATE_OneParam(FReviewItemDelegate, const EconomyModels::FReviewItemResponse&);
        DECLARE_DELEGATE_OneParam(FSearchItemsDelegate, const EconomyModels::FSearchItemsResponse&);
        DECLARE_DELEGATE_OneParam(FSetItemModerationStateDelegate, const EconomyModels::FSetItemModerationStateResponse&);
        DECLARE_DELEGATE_OneParam(FSubmitItemReviewVoteDelegate, const EconomyModels::FSubmitItemReviewVoteResponse&);
        DECLARE_DELEGATE_OneParam(FSubtractInventoryItemsDelegate, const EconomyModels::FSubtractInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FTakedownItemReviewsDelegate, const EconomyModels::FTakedownItemReviewsResponse&);
        DECLARE_DELEGATE_OneParam(FTransferInventoryItemsDelegate, const EconomyModels::FTransferInventoryItemsResponse&);
        DECLARE_DELEGATE_OneParam(FUpdateCatalogConfigDelegate, const EconomyModels::FUpdateCatalogConfigResponse&);
        DECLARE_DELEGATE_OneParam(FUpdateDraftItemDelegate, const EconomyModels::FUpdateDraftItemResponse&);
        DECLARE_DELEGATE_OneParam(FUpdateInventoryItemsDelegate, const EconomyModels::FUpdateInventoryItemsResponse&);


    private:
        TSharedPtr<UPlayFabAPISettings> settings;
        TSharedPtr<UPlayFabAuthenticationContext> authContext;
    
    public:
        UPlayFabEconomyInstanceAPI();
        explicit UPlayFabEconomyInstanceAPI(TSharedPtr<UPlayFabAPISettings> apiSettings);
        explicit UPlayFabEconomyInstanceAPI(TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        UPlayFabEconomyInstanceAPI(TSharedPtr<UPlayFabAPISettings> apiSettings, TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        ~UPlayFabEconomyInstanceAPI();
        UPlayFabEconomyInstanceAPI(const UPlayFabEconomyInstanceAPI& source) = delete; // disable copy
        UPlayFabEconomyInstanceAPI(UPlayFabEconomyInstanceAPI&&) = delete; // disable move
        UPlayFabEconomyInstanceAPI& operator=(const UPlayFabEconomyInstanceAPI& source) = delete; // disable assignment
        UPlayFabEconomyInstanceAPI& operator=(UPlayFabEconomyInstanceAPI&& other) = delete; // disable move assignment

        int GetPendingCalls() const;
        TSharedPtr<UPlayFabAPISettings> GetSettings() const;
        void SetSettings(TSharedPtr<UPlayFabAPISettings> apiSettings);
        TSharedPtr<UPlayFabAuthenticationContext> GetAuthenticationContext() const;
        void SetAuthenticationContext(TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        void ForgetAllCredentials();

    private:
        TSharedPtr<UPlayFabAuthenticationContext> GetOrCreateAuthenticationContext();
    
    public:


        // ------------ Generated API calls
        /**
         * Add inventory items.
         * Given an entity type, entity identifier and container details, will add the specified inventory items.
         */
        bool AddInventoryItems(EconomyModels::FAddInventoryItemsRequest& request, const FAddInventoryItemsDelegate& SuccessDelegate = FAddInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Creates a new item in the working catalog using provided metadata.
         * The item will not be published to the public catalog until the PublishItem API is called for the item.
         */
        bool CreateDraftItem(EconomyModels::FCreateDraftItemRequest& request, const FCreateDraftItemDelegate& SuccessDelegate = FCreateDraftItemDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Creates one or more upload URLs which can be used by the client to upload raw file data.
         * Upload URLs point to Azure Blobs; clients must follow the Microsoft Azure Storage Blob Service REST API pattern for uploading content. The response contains upload URLs and IDs for each file. The IDs and URLs returned must be added to the item metadata and committed using the CreateDraftItem or UpdateDraftItem Item APIs.
         */
        bool CreateUploadUrls(EconomyModels::FCreateUploadUrlsRequest& request, const FCreateUploadUrlsDelegate& SuccessDelegate = FCreateUploadUrlsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Deletes all reviews, helpfulness votes, and ratings submitted by the entity specified.
        bool DeleteEntityItemReviews(EconomyModels::FDeleteEntityItemReviewsRequest& request, const FDeleteEntityItemReviewsDelegate& SuccessDelegate = FDeleteEntityItemReviewsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Delete an Inventory Collection
         * Delete an Inventory Collection by the specified Id for an Entity
         */
        bool DeleteInventoryCollection(EconomyModels::FDeleteInventoryCollectionRequest& request, const FDeleteInventoryCollectionDelegate& SuccessDelegate = FDeleteInventoryCollectionDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Delete inventory items
         * Given an entity type, entity identifier and container details, will delete the entity's inventory items
         */
        bool DeleteInventoryItems(EconomyModels::FDeleteInventoryItemsRequest& request, const FDeleteInventoryItemsDelegate& SuccessDelegate = FDeleteInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Removes an item from working catalog and all published versions from the public catalog.
        bool DeleteItem(EconomyModels::FDeleteItemRequest& request, const FDeleteItemDelegate& SuccessDelegate = FDeleteItemDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Execute a list of Inventory Operations
         * Execute a list of Inventory Operations for an Entity
         */
        bool ExecuteInventoryOperations(EconomyModels::FExecuteInventoryOperationsRequest& request, const FExecuteInventoryOperationsDelegate& SuccessDelegate = FExecuteInventoryOperationsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Gets the configuration for the catalog.
        bool GetCatalogConfig(EconomyModels::FGetCatalogConfigRequest& request, const FGetCatalogConfigDelegate& SuccessDelegate = FGetCatalogConfigDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Retrieves an item from the working catalog. This item represents the current working state of the item.
        bool GetDraftItem(EconomyModels::FGetDraftItemRequest& request, const FGetDraftItemDelegate& SuccessDelegate = FGetDraftItemDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Retrieves a paginated list of the items from the draft catalog.
        bool GetDraftItems(EconomyModels::FGetDraftItemsRequest& request, const FGetDraftItemsDelegate& SuccessDelegate = FGetDraftItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Retrieves a paginated list of the items from the draft catalog created by the Entity.
        bool GetEntityDraftItems(EconomyModels::FGetEntityDraftItemsRequest& request, const FGetEntityDraftItemsDelegate& SuccessDelegate = FGetEntityDraftItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Gets the submitted review for the specified item by the authenticated entity.
        bool GetEntityItemReview(EconomyModels::FGetEntityItemReviewRequest& request, const FGetEntityItemReviewDelegate& SuccessDelegate = FGetEntityItemReviewDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Get Inventory Collection Ids
         * Get a list of Inventory Collection Ids for the specified Entity
         */
        bool GetInventoryCollectionIds(EconomyModels::FGetInventoryCollectionIdsRequest& request, const FGetInventoryCollectionIdsDelegate& SuccessDelegate = FGetInventoryCollectionIdsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Get current inventory items.
         * Given an entity type, entity identifier and container details, will get the entity's inventory items. 
         */
        bool GetInventoryItems(EconomyModels::FGetInventoryItemsRequest& request, const FGetInventoryItemsDelegate& SuccessDelegate = FGetInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Retrieves an item from the public catalog.
        bool GetItem(EconomyModels::FGetItemRequest& request, const FGetItemDelegate& SuccessDelegate = FGetItemDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Search for a given item and return a set of bundles and stores containing the item
         * Given an item, return a set of bundles and stores containing the item.
         */
        bool GetItemContainers(EconomyModels::FGetItemContainersRequest& request, const FGetItemContainersDelegate& SuccessDelegate = FGetItemContainersDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Gets the moderation state for an item, including the concern category and string reason.
        bool GetItemModerationState(EconomyModels::FGetItemModerationStateRequest& request, const FGetItemModerationStateDelegate& SuccessDelegate = FGetItemModerationStateDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Gets the status of a publish of an item.
        bool GetItemPublishStatus(EconomyModels::FGetItemPublishStatusRequest& request, const FGetItemPublishStatusDelegate& SuccessDelegate = FGetItemPublishStatusDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Get a paginated set of reviews associated with the specified item.
        bool GetItemReviews(EconomyModels::FGetItemReviewsRequest& request, const FGetItemReviewsDelegate& SuccessDelegate = FGetItemReviewsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Get a summary of all reviews associated with the specified item.
        bool GetItemReviewSummary(EconomyModels::FGetItemReviewSummaryRequest& request, const FGetItemReviewSummaryDelegate& SuccessDelegate = FGetItemReviewSummaryDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Retrieves items from the public catalog.
        bool GetItems(EconomyModels::FGetItemsRequest& request, const FGetItemsDelegate& SuccessDelegate = FGetItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Gets the access tokens.
         * Gets the access tokens for Microsoft Store authentication.
         */
        bool GetMicrosoftStoreAccessTokens(EconomyModels::FGetMicrosoftStoreAccessTokensRequest& request, const FGetMicrosoftStoreAccessTokensDelegate& SuccessDelegate = FGetMicrosoftStoreAccessTokensDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Initiates a publish of an item from the working catalog to the public catalog.
         * The call kicks off a workflow to publish the item to the public catalog. The Publish Status API should be used to monitor the publish job.
         */
        bool PublishDraftItem(EconomyModels::FPublishDraftItemRequest& request, const FPublishDraftItemDelegate& SuccessDelegate = FPublishDraftItemDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Purchase an item or bundle
         * Purchase a single item or bundle, paying the associated price.
         */
        bool PurchaseInventoryItems(EconomyModels::FPurchaseInventoryItemsRequest& request, const FPurchaseInventoryItemsDelegate& SuccessDelegate = FPurchaseInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Redeem items.
         * Redeem items from the Apple App Store.
         */
        bool RedeemAppleAppStoreInventoryItems(EconomyModels::FRedeemAppleAppStoreInventoryItemsRequest& request, const FRedeemAppleAppStoreInventoryItemsDelegate& SuccessDelegate = FRedeemAppleAppStoreInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Redeem items.
         * Redeem items from the Google Play Store.
         */
        bool RedeemGooglePlayInventoryItems(EconomyModels::FRedeemGooglePlayInventoryItemsRequest& request, const FRedeemGooglePlayInventoryItemsDelegate& SuccessDelegate = FRedeemGooglePlayInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Redeem items.
         * Redeem items from the Microsoft Store.
         */
        bool RedeemMicrosoftStoreInventoryItems(EconomyModels::FRedeemMicrosoftStoreInventoryItemsRequest& request, const FRedeemMicrosoftStoreInventoryItemsDelegate& SuccessDelegate = FRedeemMicrosoftStoreInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Redeem items.
         * Redeem items from the Nintendo EShop.
         */
        bool RedeemNintendoEShopInventoryItems(EconomyModels::FRedeemNintendoEShopInventoryItemsRequest& request, const FRedeemNintendoEShopInventoryItemsDelegate& SuccessDelegate = FRedeemNintendoEShopInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Redeem items.
         * Redeem items from the PlayStation Store.
         */
        bool RedeemPlayStationStoreInventoryItems(EconomyModels::FRedeemPlayStationStoreInventoryItemsRequest& request, const FRedeemPlayStationStoreInventoryItemsDelegate& SuccessDelegate = FRedeemPlayStationStoreInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Redeem items.
         * Redeem inventory items from Steam.
         */
        bool RedeemSteamInventoryItems(EconomyModels::FRedeemSteamInventoryItemsRequest& request, const FRedeemSteamInventoryItemsDelegate& SuccessDelegate = FRedeemSteamInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Submit a report for an item, indicating in what way the item is inappropriate.
        bool ReportItem(EconomyModels::FReportItemRequest& request, const FReportItemDelegate& SuccessDelegate = FReportItemDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Submit a report for a review
         * Submit a report for an inappropriate review, allowing the submitting user to specify their concern.
         */
        bool ReportItemReview(EconomyModels::FReportItemReviewRequest& request, const FReportItemReviewDelegate& SuccessDelegate = FReportItemReviewDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Creates or updates a review for the specified item.
        bool ReviewItem(EconomyModels::FReviewItemRequest& request, const FReviewItemDelegate& SuccessDelegate = FReviewItemDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Executes a search against the public catalog using the provided search parameters and returns a set of paginated
         * results.
         */
        bool SearchItems(EconomyModels::FSearchItemsRequest& request, const FSearchItemsDelegate& SuccessDelegate = FSearchItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Sets the moderation state for an item, including the concern category and string reason.
        bool SetItemModerationState(EconomyModels::FSetItemModerationStateRequest& request, const FSetItemModerationStateDelegate& SuccessDelegate = FSetItemModerationStateDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Submit a vote for a review, indicating whether the review was helpful or unhelpful.
        bool SubmitItemReviewVote(EconomyModels::FSubmitItemReviewVoteRequest& request, const FSubmitItemReviewVoteDelegate& SuccessDelegate = FSubmitItemReviewVoteDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Subtract inventory items.
         * Given an entity type, entity identifier and container details, will subtract the specified inventory items. 
         */
        bool SubtractInventoryItems(EconomyModels::FSubtractInventoryItemsRequest& request, const FSubtractInventoryItemsDelegate& SuccessDelegate = FSubtractInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Submit a request to takedown one or more reviews.
         * Submit a request to takedown one or more reviews, removing them from public view. Authors will still be able to see their reviews after being taken down.
         */
        bool TakedownItemReviews(EconomyModels::FTakedownItemReviewsRequest& request, const FTakedownItemReviewsDelegate& SuccessDelegate = FTakedownItemReviewsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Transfer inventory items.
         * Transfer the specified inventory items of an entity's container Id to another entity's container Id.
         */
        bool TransferInventoryItems(EconomyModels::FTransferInventoryItemsRequest& request, const FTransferInventoryItemsDelegate& SuccessDelegate = FTransferInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Updates the configuration for the catalog.
        bool UpdateCatalogConfig(EconomyModels::FUpdateCatalogConfigRequest& request, const FUpdateCatalogConfigDelegate& SuccessDelegate = FUpdateCatalogConfigDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        // Update the metadata for an item in the working catalog.
        bool UpdateDraftItem(EconomyModels::FUpdateDraftItemRequest& request, const FUpdateDraftItemDelegate& SuccessDelegate = FUpdateDraftItemDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());
        /**
         * Update inventory items
         * Given an entity type, entity identifier and container details, will update the entity's inventory items
         */
        bool UpdateInventoryItems(EconomyModels::FUpdateInventoryItemsRequest& request, const FUpdateInventoryItemsDelegate& SuccessDelegate = FUpdateInventoryItemsDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());

    private:
        // ------------ Generated result handlers
        void OnAddInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAddInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnCreateDraftItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateDraftItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnCreateUploadUrlsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateUploadUrlsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnDeleteEntityItemReviewsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteEntityItemReviewsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnDeleteInventoryCollectionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteInventoryCollectionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnDeleteInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnDeleteItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnExecuteInventoryOperationsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FExecuteInventoryOperationsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetCatalogConfigResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCatalogConfigDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetDraftItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetDraftItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetDraftItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetDraftItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetEntityDraftItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetEntityDraftItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetEntityItemReviewResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetEntityItemReviewDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetInventoryCollectionIdsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetInventoryCollectionIdsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetItemContainersResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemContainersDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetItemModerationStateResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemModerationStateDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetItemPublishStatusResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemPublishStatusDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetItemReviewsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemReviewsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetItemReviewSummaryResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemReviewSummaryDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnGetMicrosoftStoreAccessTokensResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetMicrosoftStoreAccessTokensDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnPublishDraftItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPublishDraftItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnPurchaseInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPurchaseInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnRedeemAppleAppStoreInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRedeemAppleAppStoreInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnRedeemGooglePlayInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRedeemGooglePlayInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnRedeemMicrosoftStoreInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRedeemMicrosoftStoreInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnRedeemNintendoEShopInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRedeemNintendoEShopInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnRedeemPlayStationStoreInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRedeemPlayStationStoreInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnRedeemSteamInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRedeemSteamInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnReportItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FReportItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnReportItemReviewResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FReportItemReviewDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnReviewItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FReviewItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnSearchItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSearchItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnSetItemModerationStateResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetItemModerationStateDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnSubmitItemReviewVoteResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSubmitItemReviewVoteDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnSubtractInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSubtractInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnTakedownItemReviewsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FTakedownItemReviewsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnTransferInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FTransferInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnUpdateCatalogConfigResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateCatalogConfigDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnUpdateDraftItemResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateDraftItemDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);
        void OnUpdateInventoryItemsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateInventoryItemsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);

    };
};
