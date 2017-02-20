/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutRectRelationship : NSObject <NSLayoutRelationship> {
    NSLayoutRect * _firstLayoutRect;
    int  _relation;
    NSLayoutRect * _secondLayoutRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutRect *firstLayoutRect;
@property (readonly) unsigned int hash;
@property (readonly, copy) NSString *identifier;
@property int relation;
@property (readonly, copy) NSString *relationshipDescription;
@property (readonly, copy) NSLayoutRect *secondLayoutRect;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)firstLayoutRect;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2;
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2 relation:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildrenRelationships;
- (int)relation;
- (id)relationshipDescription;
- (id)secondLayoutRect;
- (void)setRelation:(int)arg1;

@end