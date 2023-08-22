﻿#pragma once
// I am automatically generated by ParseCTPHeaders.py

#define UNSUPPORTED_CTP_API_FUNC \
    /*///注册用户终端信息，用于中继服务器多连接模式*/ \
    /*///需要在终端认证成功后，用户登录前调用该接口*/ \
    virtual int RegisterUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo) override { return -1; } \
 \
    /*///上报用户终端信息，用于中继服务器操作员登录模式*/ \
    /*///操作员登录后，可以多次调用该接口上报客户信息*/ \
    virtual int SubmitUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo) override { return -1; } \
 \
    /*///查询用户当前支持的认证模式*/ \
    virtual int ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField *pReqUserAuthMethod, int nRequestID) override { return -1; } \
 \
    /*///用户发出获取图形验证码请求*/ \
    virtual int ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField *pReqGenUserCaptcha, int nRequestID) override { return -1; } \
 \
    /*///用户发出获取短信验证码请求*/ \
    virtual int ReqGenUserText(CThostFtdcReqGenUserTextField *pReqGenUserText, int nRequestID) override { return -1; } \
 \
    /*///用户发出带有图片验证码的登陆请求*/ \
    virtual int ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField *pReqUserLoginWithCaptcha, int nRequestID) override { return -1; } \
 \
    /*///用户发出带有短信验证码的登陆请求*/ \
    virtual int ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField *pReqUserLoginWithText, int nRequestID) override { return -1; } \
 \
    /*///用户发出带有动态口令的登陆请求*/ \
    virtual int ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField *pReqUserLoginWithOTP, int nRequestID) override { return -1; } \
 \
    /*///查询最大报单数量请求*/ \
    virtual int ReqQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField *pQryMaxOrderVolume, int nRequestID) override { return -1; } \
 \
    /*///执行宣告录入请求*/ \
    virtual int ReqExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, int nRequestID) override { return -1; } \
 \
    /*///执行宣告操作请求*/ \
    virtual int ReqExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID) override { return -1; } \
 \
    /*///询价录入请求*/ \
    virtual int ReqForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, int nRequestID) override { return -1; } \
 \
    /*///报价录入请求*/ \
    virtual int ReqQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, int nRequestID) override { return -1; } \
 \
    /*///报价操作请求*/ \
    virtual int ReqQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID) override { return -1; } \
 \
    /*///批量报单操作请求*/ \
    virtual int ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, int nRequestID) override { return -1; } \
 \
    /*///期权自对冲录入请求*/ \
    virtual int ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, int nRequestID) override { return -1; } \
 \
    /*///期权自对冲操作请求*/ \
    virtual int ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, int nRequestID) override { return -1; } \
 \
    /*///申请组合录入请求*/ \
    virtual int ReqCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, int nRequestID) override { return -1; } \
 \
    /*///请求查询交易编码*/ \
    virtual int ReqQryTradingCode(CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID) override { return -1; } \
 \
    /*///请求查询转帐银行*/ \
    virtual int ReqQryTransferBank(CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID) override { return -1; } \
 \
    /*///请求查询客户通知*/ \
    virtual int ReqQryNotice(CThostFtdcQryNoticeField *pQryNotice, int nRequestID) override { return -1; } \
 \
    /*///请求查询投资者持仓明细*/ \
    virtual int ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID) override { return -1; } \
 \
    /*///请求查询保证金监管系统经纪公司资金账户密钥*/ \
    virtual int ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID) override { return -1; } \
 \
    /*///请求查询仓单折抵信息*/ \
    virtual int ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID) override { return -1; } \
 \
    /*///请求查询投资者品种/跨品种保证金*/ \
    virtual int ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField *pQryInvestorProductGroupMargin, int nRequestID) override { return -1; } \
 \
    /*///请求查询交易所保证金率*/ \
    virtual int ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField *pQryExchangeMarginRate, int nRequestID) override { return -1; } \
 \
    /*///请求查询交易所调整保证金率*/ \
    virtual int ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField *pQryExchangeMarginRateAdjust, int nRequestID) override { return -1; } \
 \
    /*///请求查询汇率*/ \
    virtual int ReqQryExchangeRate(CThostFtdcQryExchangeRateField *pQryExchangeRate, int nRequestID) override { return -1; } \
 \
    /*///请求查询二级代理操作员银期权限*/ \
    virtual int ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField *pQrySecAgentACIDMap, int nRequestID) override { return -1; } \
 \
    /*///请求查询产品报价汇率*/ \
    virtual int ReqQryProductExchRate(CThostFtdcQryProductExchRateField *pQryProductExchRate, int nRequestID) override { return -1; } \
 \
    /*///请求查询产品组*/ \
    virtual int ReqQryProductGroup(CThostFtdcQryProductGroupField *pQryProductGroup, int nRequestID) override { return -1; } \
 \
    /*///请求查询做市商合约手续费率*/ \
    virtual int ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField *pQryMMInstrumentCommissionRate, int nRequestID) override { return -1; } \
 \
    /*///请求查询做市商期权合约手续费*/ \
    virtual int ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField *pQryMMOptionInstrCommRate, int nRequestID) override { return -1; } \
 \
    /*///请求查询报单手续费*/ \
    virtual int ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField *pQryInstrumentOrderCommRate, int nRequestID) override { return -1; } \
 \
    /*///请求查询资金账户*/ \
    virtual int ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID) override { return -1; } \
 \
    /*///请求查询二级代理商资金校验模式*/ \
    virtual int ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField *pQrySecAgentCheckMode, int nRequestID) override { return -1; } \
 \
    /*///请求查询二级代理商信息*/ \
    virtual int ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField *pQrySecAgentTradeInfo, int nRequestID) override { return -1; } \
 \
    /*///请求查询期权交易成本*/ \
    virtual int ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField *pQryOptionInstrTradeCost, int nRequestID) override { return -1; } \
 \
    /*///请求查询期权合约手续费*/ \
    virtual int ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField *pQryOptionInstrCommRate, int nRequestID) override { return -1; } \
 \
    /*///请求查询执行宣告*/ \
    virtual int ReqQryExecOrder(CThostFtdcQryExecOrderField *pQryExecOrder, int nRequestID) override { return -1; } \
 \
    /*///请求查询询价*/ \
    virtual int ReqQryForQuote(CThostFtdcQryForQuoteField *pQryForQuote, int nRequestID) override { return -1; } \
 \
    /*///请求查询报价*/ \
    virtual int ReqQryQuote(CThostFtdcQryQuoteField *pQryQuote, int nRequestID) override { return -1; } \
 \
    /*///请求查询期权自对冲*/ \
    virtual int ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField *pQryOptionSelfClose, int nRequestID) override { return -1; } \
 \
    /*///请求查询投资单元*/ \
    virtual int ReqQryInvestUnit(CThostFtdcQryInvestUnitField *pQryInvestUnit, int nRequestID) override { return -1; } \
 \
    /*///请求查询组合合约安全系数*/ \
    virtual int ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField *pQryCombInstrumentGuard, int nRequestID) override { return -1; } \
 \
    /*///请求查询申请组合*/ \
    virtual int ReqQryCombAction(CThostFtdcQryCombActionField *pQryCombAction, int nRequestID) override { return -1; } \
 \
    /*///请求查询转帐流水*/ \
    virtual int ReqQryTransferSerial(CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID) override { return -1; } \
 \
    /*///请求查询银期签约关系*/ \
    virtual int ReqQryAccountregister(CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID) override { return -1; } \
 \
    /*///请求查询签约银行*/ \
    virtual int ReqQryContractBank(CThostFtdcQryContractBankField *pQryContractBank, int nRequestID) override { return -1; } \
 \
    /*///请求查询预埋单*/ \
    virtual int ReqQryParkedOrder(CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID) override { return -1; } \
 \
    /*///请求查询预埋撤单*/ \
    virtual int ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID) override { return -1; } \
 \
    /*///请求查询交易通知*/ \
    virtual int ReqQryTradingNotice(CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID) override { return -1; } \
 \
    /*///请求查询经纪公司交易参数*/ \
    virtual int ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID) override { return -1; } \
 \
    /*///请求查询经纪公司交易算法*/ \
    virtual int ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID) override { return -1; } \
 \
    /*///请求查询监控中心用户令牌*/ \
    virtual int ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, int nRequestID) override { return -1; } \
 \
    /*///期货发起银行资金转期货请求*/ \
    virtual int ReqFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID) override { return -1; } \
 \
    /*///期货发起期货资金转银行请求*/ \
    virtual int ReqFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID) override { return -1; } \
 \
    /*///期货发起查询银行余额请求*/ \
    virtual int ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID) override { return -1; } \
 \
    /*///请求组合优惠比例*/ \
    virtual int ReqQryCombPromotionParam(CThostFtdcQryCombPromotionParamField *pQryCombPromotionParam, int nRequestID) override { return -1; }
