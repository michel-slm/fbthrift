/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/separate_processmap/gen-cpp2/MyService.h"

#include "thrift/compiler/test/fixtures/separate_processmap/gen-cpp2/MyService.tcc"

namespace cpp2 {

MyServiceAsyncProcessor::CompactProtocolProcessMap MyServiceAsyncProcessor::compactProcessMap_ {
  {"ping", &MyServiceAsyncProcessor::_processInThread_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getRandomData", &MyServiceAsyncProcessor::_processInThread_getRandomData<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"hasDataById", &MyServiceAsyncProcessor::_processInThread_hasDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getDataById", &MyServiceAsyncProcessor::_processInThread_getDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"putDataById", &MyServiceAsyncProcessor::_processInThread_putDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"lobDataById", &MyServiceAsyncProcessor::_processInThread_lobDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>}
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift