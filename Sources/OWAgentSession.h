#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString *const OWAgentSessionSourceSha256 = @"2289bcb0d661bdea6dd47c7967f37aace7d3a152e18e7d2f64c08514fb73e795";
static const NSInteger OWAgentSessionOperationsCount = 16;

@interface OWAgentSession : NSObject
@property (nonatomic, readonly) NSInteger maxSteps;
@property (nonatomic, readonly) NSInteger maxToolCalls;
@property (nonatomic, readonly) BOOL allowMutations;
@property (nonatomic, copy, readonly) NSSet<NSString *> *allowedOperations;
- (instancetype)initWithMaxSteps:(NSInteger)maxSteps maxToolCalls:(NSInteger)maxToolCalls allowMutations:(BOOL)allowMutations allowedOperations:(nullable NSSet<NSString *> *)allowed;
- (BOOL)canInvokeOperation:(NSString *)operationId isMutation:(BOOL)isMutation;
- (NSDictionary *)checkpoint;
@end

NS_ASSUME_NONNULL_END
