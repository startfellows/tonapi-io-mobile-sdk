package io.tonapi.sdk

import kotlinx.serialization.Serializable

class TonApiData {

    @Serializable
    data class Account(
        val balance: Long,
        val code: String?,
        val data: String?,
        val interfaces: ArrayList<String>?,
        val status: String
    ) {

        val readableBalance = balance / 1000000000f
    }

    @Serializable
    data class AccountAddress(
        val address: String,
        val icon: String?,
        val isScam: Boolean?,
        val name: String?
    )

    @Serializable
    data class Annotation(
        val address: AccountAddress,
        // val data: Any,
        val hash: String,
        val name: String,
        val traceId: String?,
        val utime: Long
    )

    @Serializable
    data class Annotations(
        val annotations: ArrayList<Annotation>
    )

    @Serializable
    data class Block(
        val endLt: Long,
        val fileHash: String,
        val rootHash: String,
        val seqno: Int,
        val shard: Long,
        val startLt: Long,
        val workchainId: Int
    )

    @Serializable
    data class Error(
        val error: String? = null,
        val message: String? = null
    ) {

        val description: String
            get() = error?:message?:"Unknown error"
    }

    @Serializable
    data class JettonBalance(
        val balance: String,
        val jettonAddress: String,
        val walletAddress: AccountAddress
    )

    @Serializable
    data class JettonInfo(
        // val metadata: Any,
        val mintable: Boolean,
        val totalSupply: String
    )

    @Serializable
    data class JettonsBalances(
        val balances: ArrayList<JettonBalance>
    )

    @Serializable
    data class Message(
        val createdLt: Long,
        val destination: AccountAddress?,
        val fwdFee: Long,
        val ihrFee: Long,
        // val msgData: Any,
        val source: AccountAddress?,
        val value: Long
    )

    @Serializable
    data class NftCollection(
        val address: String,
        // val metadata: Any?,
        val nextItemIndex: Long,
        val owner: AccountAddress?,
        val rawCollectionContent: String
    )

    @Serializable
    data class NftCollections(
        val nftCollections: ArrayList<NftCollection>
    )

    @Serializable
    data class NftForSale(
        val nft: NftItem,
        val saleContract: String
    )

    @Serializable
    data class NftItem(
        val address: String,
        val collectionAddress: String?,
        val index: Long,
        val init: Boolean,
        // val metadata: Any?,
        val owner: AccountAddress?,
        val rawIndividualContent: String,
        val verified: Boolean
    )

    @Serializable
    data class NftItems(
        val nftItems: ArrayList<NftItem>
    )

    @Serializable
    data class NftSalesResponse(
        val disintar: ArrayList<NftForSale>?,
        val getgems: ArrayList<NftForSale>?
    )

    @Serializable
    data class Trace(
        val id: String
    )

    @Serializable
    data class TraceMsg(
        val comment: String?,
        val createdLt: Long,
        val destination: AccountAddress,
        val fwdFee: Long,
        val ihrFee: Long,
        val source: AccountAddress,
        val tx: TraceTX?,
        val value: Long
    )

    @Serializable
    data class TraceTX(
        val annotations: ArrayList<TxAnnotation>,
        val blockHash: String,
        val fee: Long,
        val hash: String,
        val lt: Long,
        val otherFee: Long,
        val outMsgs: ArrayList<TraceMsg>,
        val storageFee: Long,
        val utime: Long
    )

    @Serializable
    data class Traces(
        val traces: ArrayList<Trace>
    )

    @Serializable
    data class Transaction(
        val account: AccountAddress,
        val data: String,
        val fee: Long,
        val hash: String,
        val inMsg: Message?,
        val lt: Long,
        val otherFee: Long,
        val outMsgs: ArrayList<Message>,
        val storageFee: Long,
        val utime: Long
    )

    @Serializable
    data class Transactions(
        val transactions: ArrayList<Transaction>
    )

    @Serializable
    data class TxAnnotation(
        val address: AccountAddress,
        // val data: Any,
        val name: String
    )

    @Serializable
    data class Wallet(
        val address: String,
        val tag: String
    )

    @Serializable
    data class Wallets(
        val wallets: ArrayList<Wallet>
    )
}

