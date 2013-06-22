/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPLRUDictionary, ML3DatabaseConnectionPool, NSFileHandle, NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface ML3DatabaseConnection : NSObject
{
    struct sqlite3 *_sqlitedb;
    BOOL _isOpen;
    CPLRUDictionary *_statementCache;
    NSHashTable *_statements;
    unsigned int _statementsSinceLastCheckpoint;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _transactionLevel;
    BOOL _nestedTransactionWantsToRollback;
    NSMutableArray *_enqueuedTransactionCommitBlocks;
    ML3DatabaseConnectionPool *_owningPool;
    NSMutableArray *_registeredFunctions;
    NSMutableArray *_registeredModules;
    int _profilingLevel;
    NSFileHandle *_profilingLogHandle;
    int _willDeleteDatabaseNotifyToken;
    BOOL _shouldCacheStatements;
    BOOL _isReadOnly;
    BOOL _automaticCheckpointingEnabled;
    NSString *_databasePath;
    NSUUID *_uniqueIdentifier;
    id <ML3DatabaseConnectionDelegate> _connectionDelegate;
    const void *_iTunesExtensions;
    unsigned int _checkpointStatementThreshold;
}

@property(nonatomic) unsigned int checkpointStatementThreshold; // @synthesize checkpointStatementThreshold=_checkpointStatementThreshold;
@property(nonatomic) BOOL automaticCheckpointingEnabled; // @synthesize automaticCheckpointingEnabled=_automaticCheckpointingEnabled;
@property(nonatomic) const void *iTunesExtensions; // @synthesize iTunesExtensions=_iTunesExtensions;
@property(nonatomic) __weak id <ML3DatabaseConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic, setter=setReadOnly:) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(nonatomic) BOOL shouldCacheStatements; // @synthesize shouldCacheStatements=_shouldCacheStatements;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (void)_executeTransactionCommitBlocks:(BOOL)arg1;
- (BOOL)_handleDatabaseCorruption;
- (void)_handleDatabaseDeletion;
- (BOOL)_handleBusyLockWithNumberOfRetries:(int)arg1;
- (void)_resetUnfinalizedStatements;
- (void)_finalizeAllStatements;
- (int)_onQueueFinalizeStatement:(id)arg1;
- (BOOL)_isSharedMediaLibraryDatabase;
- (void)_writeToProfilingLog:(id)arg1;
- (void)_updateProfilingLevel;
- (void)_logCurrentError;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2;
- (void)_createDatabaseFileIfNonexistent;
- (void)_createDatabaseDirectoryIfNonexistent;
- (BOOL)_databaseFileExists;
- (void)_ensureConnectionIsOpen;
- (id)_registeredModuleNamed:(id)arg1;
- (BOOL)_executeStatement:(id)arg1;
- (BOOL)_validatePreparedStatement:(id)arg1 error:(id *)arg2;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (void)_cacheStatement:(id)arg1 forSQL:(id)arg2;
- (id)_cachedStatementForSQL:(id)arg1;
- (id)_shortDescription;
- (BOOL)_internalEndTransactionAndCommit:(BOOL)arg1;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned int)arg1;
- (BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (void)_setOwningPool:(id)arg1;
- (id)_owningPool;
- (int)_finalizeStatement:(id)arg1;
- (struct sqlite3 *)_sqliteHandle;
- (int)checkpointDatabase;
- (BOOL)deleteDatabase;
- (id)sqliteError;
- (long long)lastInsertionRowID;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(BOOL)arg4;
- (void *)moduleContextForModuleName:(id)arg1;
- (void)setModuleContext:(void *)arg1 forModuleName:(id)arg2 contextReleaseBlock:(id)arg3;
- (BOOL)registerModuleName:(id)arg1 moduleMethods:(const struct sqlite3_module *)arg2;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(void *)arg3 userData:(void *)arg4;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(void *)arg3;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(id)arg3;
- (void)enqueueBlockForTransactionCommit:(id)arg1;
- (BOOL)performTransactionWithBlock:(id)arg1 usingBehaviorType:(void)arg2;
- (BOOL)performTransactionWithBlock:(id)arg1;
- (BOOL)popToRootTransactionAndCommit:(BOOL)arg1;
- (BOOL)popTransactionAndCommit:(BOOL)arg1;
- (BOOL)pushTransactionUsingBehaviorType:(unsigned int)arg1;
- (BOOL)pushTransaction;
@property(readonly, nonatomic) BOOL isInTransaction;
- (BOOL)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (BOOL)executeUpdate:(id)arg1;
- (BOOL)tableExists:(id)arg1;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2;
- (id)executeQuery:(id)arg1;
- (BOOL)databasePathExists;
- (void)flush;
- (BOOL)close;
- (BOOL)_openWithFlags:(int)arg1 isRetry:(BOOL)arg2;
- (BOOL)open;
@property(nonatomic) int profilingLevel;
@property(readonly, nonatomic) BOOL isOpen;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDatabasePath:(id)arg1;
- (id)init;

@end
