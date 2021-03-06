/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICNamedEntityRecord : NSObject {
    unsigned char  _changeType;
    NSString * _name;
    NSString * _source;
    NSString * _type;
}

@property (nonatomic, readonly) unsigned char changeType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 source:(id)arg2 type:(id)arg3 changeType:(unsigned char)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEntityRecord:(id)arg1;
- (id)name;
- (id)source;
- (id)type;

@end
