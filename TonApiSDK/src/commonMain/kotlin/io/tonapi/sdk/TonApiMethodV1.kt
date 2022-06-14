package io.tonapi.sdk

import io.ktor.client.*
import io.tonapi.sdk.tonkeeper.TonKeeperData

class TonApiMethodV1(
    client: HttpClient
): TonApiMethodBase(1, client) {

    @Throws(Throwable::class)
    suspend fun authLogin(
        tonlogin: String
    ) = execute<TonKeeperData.LoginResolve>("auth", "11/login") {
        query["tonlogin"] = tonlogin
    }

    @Throws(Throwable::class)
    suspend fun annotationGetByAccount(
        account: String,
        limit: Int = 0
    ) = execute<TonApiData.Annotations>("annotation", "getByAccount") {
        query["account"] = account
        if (limit > 0) {
            query["limit"] = limit
        }
    }

    @Throws(Throwable::class)
    suspend fun blockchainGetAccount(
        account: String
    ) = execute<TonApiData.Account>("blockchain", "getAccount") {
        query["account"] = account
    }

    @Throws(Throwable::class)
    suspend fun blockchainGetBlock(
        blockHash: String
    ) = execute<TonApiData.Block>("blockchain", "getBlock") {
        query["blockHash"] = blockHash
    }

    @Throws(Throwable::class)
    suspend fun blockchainGetTransaction(
        hash: String
    ) = execute<TonApiData.Transaction>("blockchain", "getTransaction") {
        query["hash"] = hash
    }

    @Throws(Throwable::class)
    suspend fun blockchainGetTransactions(
        account: String,
        maxLt: Long = 0L,
        minLt: Long = 0L,
        limit: Int = 0
    ) = execute<TonApiData.Transactions>("blockchain", "getTransactions") {
        query["account"] = account
        if (maxLt != 0L) {
            query["maxLt"] = maxLt
        }
        if (minLt != 0L) {
            query["minLt"] = minLt
        }
        if (limit > 0) {
            query["limit"] = limit
        }
    }

    @Throws(Throwable::class)
    suspend fun jettonGetBalances(
        account: String
    ) = execute<TonApiData.JettonsBalances>("jetton", "getBalances") {
        query["account"] = account
    }

    @Throws(Throwable::class)
    suspend fun jettonGetInfo(
        account: String
    ) = execute<TonApiData.JettonInfo>("jetton", "getInfo") {
        query["account"] = account
    }

    @Throws(Throwable::class)
    suspend fun ntfGetCollection(
        account: String
    ) = execute<TonApiData.NftCollection>("nft", "getCollection") {
        query["account"] = account
    }

    @Throws(Throwable::class)
    suspend fun ntfGetCollections() = execute<TonApiData.NftCollections>("nft", "getCollections") {}

    @Throws(Throwable::class)
    suspend fun ntfGetItem(
        account: String
    ) = execute<TonApiData.NftItem>("nft", "getItem") {
        query["account"] = account
    }

    @Throws(Throwable::class)
    suspend fun ntfGetItemsByCollectionAddress(
        account: String
    ) = execute<TonApiData.NftItems>("nft", "getItemsByCollectionAddress") {
        query["account"] = account
    }

    @Throws(Throwable::class)
    suspend fun ntfGetItemsByOwnerAddress(
        account: String
    ) = execute<TonApiData.NftItems>("nft", "getItemsByOwnerAddress") {
        query["account"] = account
    }

    @Throws(Throwable::class)
    suspend fun ntfGetNftForSale(
        account: String
    ) = execute<TonApiData.NftSalesResponse>("nft", "getNftForSale") {
        query["account"] = account
    }

    @Throws(Throwable::class)
    suspend fun traceGetAccountHistory(
        account: String
    ) = execute<TonApiData.Traces>("trace", "getAccountHistory") {
        query["account"] = account
    }

    @Throws(Throwable::class)
    suspend fun traceGetTrace(
        traceId: String
    ) = execute<TonApiData.Trace>("trace", "getTrace") {
        query["traceId"] = traceId
    }

    @Throws(Throwable::class)
    suspend fun walletFindByPubkey(
        publicKey: String
    ) = execute<TonApiData.Trace>("wallet", "findByPubkey") {
        query["publicKey"] = publicKey
    }
}