// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
	cpp0 "thrift/annotation/cpp"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = cpp0.GoUnusedProtection__
type BadService interface {
  Bar() (_r int32, err error)
}

type BadServiceClientInterface interface {
  thrift.ClientInterface
  Bar() (_r int32, err error)
}

type BadServiceClient struct {
  BadServiceClientInterface
  CC thrift.ClientConn
}

func(client *BadServiceClient) Open() error {
  return client.CC.Open()
}

func(client *BadServiceClient) Close() error {
  return client.CC.Close()
}

func(client *BadServiceClient) IsOpen() bool {
  return client.CC.IsOpen()
}

func NewBadServiceClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *BadServiceClient {
  return &BadServiceClient{ CC: thrift.NewClientConn(t, f) }
}

func NewBadServiceClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *BadServiceClient {
  return &BadServiceClient{ CC: thrift.NewClientConnWithProtocols(t, iprot, oprot) }
}

func NewBadServiceClientProtocol(prot thrift.Protocol) *BadServiceClient {
  return NewBadServiceClient(prot.Transport(), prot, prot)
}

func (p *BadServiceClient) Bar() (_r int32, err error) {
  var args BadServiceBarArgs
  err = p.CC.SendMsg("bar", &args, thrift.CALL)
  if err != nil { return }
  return p.recvBar()
}


func (p *BadServiceClient) recvBar() (value int32, err error) {
  var __result BadServiceBarResult
  err = p.CC.RecvMsg("bar", &__result)
  if err != nil { return }

  return __result.GetSuccess(), nil
}


type BadServiceThreadsafeClient struct {
  BadServiceClientInterface
  CC thrift.ClientConn
  Mu sync.Mutex
}

func(client *BadServiceThreadsafeClient) Open() error {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.Open()
}

func(client *BadServiceThreadsafeClient) Close() error {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.Close()
}

func(client *BadServiceThreadsafeClient) IsOpen() bool {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.IsOpen()
}

func NewBadServiceThreadsafeClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *BadServiceThreadsafeClient {
  return &BadServiceThreadsafeClient{ CC: thrift.NewClientConn(t, f) }
}

func NewBadServiceThreadsafeClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *BadServiceThreadsafeClient {
  return &BadServiceThreadsafeClient{ CC: thrift.NewClientConnWithProtocols(t, iprot, oprot) }
}

func NewBadServiceThreadsafeClientProtocol(prot thrift.Protocol) *BadServiceThreadsafeClient {
  return NewBadServiceThreadsafeClient(prot.Transport(), prot, prot)
}

func (p *BadServiceThreadsafeClient) Bar() (_r int32, err error) {
  p.Mu.Lock()
  defer p.Mu.Unlock()
  var args BadServiceBarArgs
  err = p.CC.SendMsg("bar", &args, thrift.CALL)
  if err != nil { return }
  return p.recvBar()
}


func (p *BadServiceThreadsafeClient) recvBar() (value int32, err error) {
  var __result BadServiceBarResult
  err = p.CC.RecvMsg("bar", &__result)
  if err != nil { return }

  return __result.GetSuccess(), nil
}


type BadServiceChannelClient struct {
  RequestChannel thrift.RequestChannel
}

func (c *BadServiceChannelClient) Close() error {
  return c.RequestChannel.Close()
}

func (c *BadServiceChannelClient) IsOpen() bool {
  return c.RequestChannel.IsOpen()
}

func (c *BadServiceChannelClient) Open() error {
  return c.RequestChannel.Open()
}

func NewBadServiceChannelClient(channel thrift.RequestChannel) *BadServiceChannelClient {
  return &BadServiceChannelClient{RequestChannel: channel}
}

func (p *BadServiceChannelClient) Bar(ctx context.Context) (_r int32, err error) {
  args := BadServiceBarArgs{
  }
  var __result BadServiceBarResult
  err = p.RequestChannel.Call(ctx, "bar", &args, &__result)
  if err != nil { return }

  return __result.GetSuccess(), nil
}


type BadServiceProcessor struct {
  processorMap map[string]thrift.ProcessorFunction
  functionServiceMap map[string]string
  handler BadService
}

func (p *BadServiceProcessor) AddToProcessorMap(key string, processor thrift.ProcessorFunction) {
  p.processorMap[key] = processor
}

func (p *BadServiceProcessor) AddToFunctionServiceMap(key, service string) {
  p.functionServiceMap[key] = service
}

func (p *BadServiceProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction, err error) {
  if processor, ok := p.processorMap[key]; ok {
    return processor, nil
  }
  return nil, nil // generic error message will be sent
}

func (p *BadServiceProcessor) ProcessorMap() map[string]thrift.ProcessorFunction {
  return p.processorMap
}

func (p *BadServiceProcessor) FunctionServiceMap() map[string]string {
  return p.functionServiceMap
}

func NewBadServiceProcessor(handler BadService) *BadServiceProcessor {
  self7 := &BadServiceProcessor{handler:handler, processorMap:make(map[string]thrift.ProcessorFunction), functionServiceMap:make(map[string]string)}
  self7.processorMap["bar"] = &badServiceProcessorBar{handler:handler}
  self7.functionServiceMap["bar"] = "BadService"
  return self7
}

type badServiceProcessorBar struct {
  handler BadService
}

func (p *BadServiceBarResult) Exception() thrift.WritableException {
  if p == nil { return nil }
  return nil
}

func (p *badServiceProcessorBar) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
  args := BadServiceBarArgs{}
  if err := args.Read(iprot); err != nil {
    return nil, err
  }
  iprot.ReadMessageEnd()
  return &args, nil
}

func (p *badServiceProcessorBar) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
  var err2 error
  messageType := thrift.REPLY
  switch result.(type) {
  case thrift.ApplicationException:
    messageType = thrift.EXCEPTION
  }
  if err2 = oprot.WriteMessageBegin("bar", messageType, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  return err
}

func (p *badServiceProcessorBar) Run(argStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
  var __result BadServiceBarResult
  if retval, err := p.handler.Bar(); err != nil {
    switch err.(type) {
    default:
      x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing bar: " + err.Error(), err)
      return x, x
    }
  } else {
    __result.Success = &retval
  }
  return &__result, nil
}


// HELPER FUNCTIONS AND STRUCTURES

type BadServiceBarArgs struct {
  thrift.IRequest
}

func NewBadServiceBarArgs() *BadServiceBarArgs {
  return &BadServiceBarArgs{}
}

type BadServiceBarArgsBuilder struct {
  obj *BadServiceBarArgs
}

func NewBadServiceBarArgsBuilder() *BadServiceBarArgsBuilder{
  return &BadServiceBarArgsBuilder{
    obj: NewBadServiceBarArgs(),
  }
}

func (p BadServiceBarArgsBuilder) Emit() *BadServiceBarArgs{
  return &BadServiceBarArgs{
  }
}

func (p *BadServiceBarArgs) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *BadServiceBarArgs) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("bar_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *BadServiceBarArgs) String() string {
  if p == nil {
    return "<nil>"
  }

  return fmt.Sprintf("BadServiceBarArgs({})")
}

// Attributes:
//  - Success
type BadServiceBarResult struct {
  thrift.IResponse
  Success *int32 `thrift:"success,0,optional" db:"success" json:"success,omitempty"`
}

func NewBadServiceBarResult() *BadServiceBarResult {
  return &BadServiceBarResult{}
}

var BadServiceBarResult_Success_DEFAULT int32
func (p *BadServiceBarResult) GetSuccess() int32 {
  if !p.IsSetSuccess() {
    return BadServiceBarResult_Success_DEFAULT
  }
return *p.Success
}
func (p *BadServiceBarResult) IsSetSuccess() bool {
  return p != nil && p.Success != nil
}

type BadServiceBarResultBuilder struct {
  obj *BadServiceBarResult
}

func NewBadServiceBarResultBuilder() *BadServiceBarResultBuilder{
  return &BadServiceBarResultBuilder{
    obj: NewBadServiceBarResult(),
  }
}

func (p BadServiceBarResultBuilder) Emit() *BadServiceBarResult{
  return &BadServiceBarResult{
    Success: p.obj.Success,
  }
}

func (b *BadServiceBarResultBuilder) Success(success *int32) *BadServiceBarResultBuilder {
  b.obj.Success = success
  return b
}

func (b *BadServiceBarResult) SetSuccess(success *int32) *BadServiceBarResult {
  b.Success = success
  return b
}

func (p *BadServiceBarResult) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 0:
      if err := p.ReadField0(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *BadServiceBarResult)  ReadField0(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 0: ", err)
  } else {
    p.Success = &v
  }
  return nil
}

func (p *BadServiceBarResult) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("bar_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField0(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *BadServiceBarResult) writeField0(oprot thrift.Protocol) (err error) {
  if p.IsSetSuccess() {
    if err := oprot.WriteFieldBegin("success", thrift.I32, 0); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 0:success: ", p), err) }
    if err := oprot.WriteI32(int32(*p.Success)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T.success (0) field write error: ", p), err) }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 0:success: ", p), err) }
  }
  return err
}

func (p *BadServiceBarResult) String() string {
  if p == nil {
    return "<nil>"
  }

  var successVal string
  if p.Success == nil {
    successVal = "<nil>"
  } else {
    successVal = fmt.Sprintf("%v", *p.Success)
  }
  return fmt.Sprintf("BadServiceBarResult({Success:%s})", successVal)
}


