/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
* @generated by https://github.com/korovkin/thrift
*/

#import <Foundation/Foundation.h>

#import <thrift/TProtocol.h>
#import <thrift/TApplicationException.h>
#import <thrift/TProtocolException.h>
#import <thrift/TProtocolUtil.h>
#import <thrift/TProcessor.h>
#import <thrift/TObjective-C.h>
#import <thrift/TBase.h>
#import <thrift/TBaseStruct.h>
#import "module.h"
#import "includes.h"

@protocol MyService <NSObject>
- (void) query: (MyStruct *) s i: (Included *) i;  // throws TException
@end

@interface MyServiceClient : NSObject <MyService> {
  id <TProtocol> inProtocol;
  id <TProtocol> outProtocol;
}
- (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface MyServiceProcessor : NSObject <TProcessor> {
  id <MyService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithMyService: (id <MyService>) service;
- (id<MyService>) service;
@end

@interface serviceConstants : TBaseStruct {
}
@end
