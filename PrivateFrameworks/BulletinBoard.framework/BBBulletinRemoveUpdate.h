/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinRemoveUpdate : BBBulletinUpdate {
    BOOL  _shouldSync;
}

@property (nonatomic, readonly) BOOL shouldSync;

+ (BOOL)supportsSecureCoding;
+ (id)updateWithBulletin:(id)arg1 feeds:(unsigned int)arg2 shouldSync:(BOOL)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned int)arg2 shouldSync:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)shouldSync;
- (id)typeDescription;

@end