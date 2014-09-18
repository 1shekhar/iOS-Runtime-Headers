/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray;

@interface TSTTableFilterSet : TSPObject <TSPCopying> {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    struct vector<bool, std::__1::allocator<bool> > { 
        unsigned long long *__begin_; 
        unsigned long long __size_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { 
            unsigned long long __first_; 
        } __cap_alloc_; 
    boolmIsEnabled;
    boolmNeedsFormulaRewriteForImport;
    } mFilterEnabled;
    } mFilterOffsets;
    NSArray *mRules;
    int mType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)absoluteRuleIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2;
- (id)addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned long long)arg3 isNew:(bool)arg4;
- (id)addRules:(id)arg1 inFilter:(unsigned long long)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)disableFilterAtIndex:(unsigned long long)arg1;
- (void)disableRuleAtIndex:(unsigned long long)arg1 inFilterIndex:(unsigned long long)arg2;
- (void)enableFilterAtIndex:(unsigned long long)arg1;
- (void)enableRuleAtIndex:(unsigned long long)arg1 inFilterIndex:(unsigned long long)arg2;
- (void)enumerateFilterIndicesInTable:(id)arg1 usingBlock:(id)arg2;
- (void)enumerateFiltersForColumn:(unsigned char)arg1 withTable:(id)arg2 usingBlock:(id)arg3;
- (void)enumerateFiltersInTable:(id)arg1 usingBlock:(id)arg2;
- (void)enumerateRulesInFilterIndex:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)filterAtIndex:(unsigned long long)arg1 inTable:(id)arg2;
- (unsigned long long)filterCount;
- (id)filterIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2;
- (int)filterSetType;
- (unsigned long long)firstFilterIndexForColumn:(unsigned char)arg1 inTable:(id)arg2;
- (id)initFromArchive:(const struct FilterSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; boolx4; boolx5; struct RepeatedPtrField<TST::FilterRuleArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; struct RepeatedField<bool> { bool*x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; unsigned int x10[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithFilterRules:(id)arg1 type:(int)arg2 context:(id)arg3;
- (bool)isEnabled;
- (bool)isFilterEnabledAtIndex:(unsigned long long)arg1;
- (bool)isFilterEnabledInColumn:(unsigned char)arg1 withTable:(id)arg2;
- (bool)isFilterRuleEnabledInColumn:(unsigned char)arg1 withTable:(id)arg2;
- (bool)isRuleEnabledAtIndex:(unsigned long long)arg1 inFilterIndex:(unsigned long long)arg2;
- (bool)needsFormulaRewriteForImport;
- (unsigned long long)newFilterIndex;
- (unsigned long long)numberOfRulesInFilter:(unsigned long long)arg1;
- (bool)p_thresholdComparisonMatchesFilter:(long long)arg1 withPredicateType:(int)arg2;
- (id)removeRules:(id)arg1;
- (id)removeRulesWithIndices:(id)arg1 inFilter:(unsigned long long)arg2;
- (id)replaceRule:(id)arg1 atRuleIndex:(unsigned long long)arg2 inFilter:(unsigned long long)arg3;
- (bool)rowIsShown:(unsigned short)arg1 withHiddenStateFormulaOwner:(id)arg2 withCalculationEngine:(id)arg3;
- (id)ruleAtAbsoluteIndex:(unsigned long long)arg1;
- (unsigned long long)ruleCount;
- (id)ruleInFilter:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)ruleIndexInFilter:(unsigned long long)arg1 matchingCell:(id)arg2;
- (void)saveToArchive:(struct FilterSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; boolx4; boolx5; struct RepeatedPtrField<TST::FilterRuleArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; struct RepeatedField<bool> { bool*x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; unsigned int x10[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setFilterSetType:(int)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setNeedsFormulaRewriteForImport:(bool)arg1;
- (void)setRulesAtAbsoluteIndices:(id)arg1 enabled:(bool)arg2;

@end