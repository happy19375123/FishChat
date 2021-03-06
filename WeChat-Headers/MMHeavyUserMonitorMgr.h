//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMCustomInfoReporter, MemoryMappedKV, NSString;

@interface MMHeavyUserMonitorMgr : MMService <MMService>
{
    unsigned long long m_uiHeavyUserType;
    MemoryMappedKV *m_memoryMappedKV;
    unsigned long long m_contactTypeLimit;
    unsigned long long m_sessionTypeLimit;
    unsigned long long m_massFileTypeLimit;
    _Bool m_isFirstReport;
    MMCustomInfoReporter *m_customInfoReporter;
}

- (void).cxx_destruct;
- (_Bool)isFirstReport:(unsigned long long)arg1;
- (void)reportHeavyUserInfo;
- (void)reportHeavyUserSubtype:(unsigned long long)arg1;
- (_Bool)reportHeavyUserType:(unsigned long long)arg1;
- (void)reportIDKey;
- (void)saveLatestReportType:(unsigned long long)arg1;
- (void)saveLatestReportDate:(unsigned long long)arg1 andType:(unsigned long long)arg2;
- (id)currentUserMemmoryMappedKey;
- (void)synchronizeToFile;
- (_Bool)isFileSpaceType;
- (_Bool)isSessionType;
- (_Bool)isContactsType;
- (unsigned long long)heavyUserType;
- (_Bool)isHeavyUser;
- (_Bool)checkIsFileSpaceTypeHeavyUser:(unsigned long long)arg1;
- (_Bool)checkIsSessionTypeHeavyUser:(unsigned long long)arg1;
- (_Bool)checkIsContactTypeHeavyUser:(unsigned long long)arg1;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

