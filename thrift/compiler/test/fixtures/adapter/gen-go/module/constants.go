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
	python1 "thrift/annotation/python"
	thrift2 "thrift/annotation/thrift"
	scope3 "thrift/annotation/scope"
	hack4 "thrift/annotation/hack"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = cpp0.GoUnusedProtection__
var _ = python1.GoUnusedProtection__
var _ = thrift2.GoUnusedProtection__
var _ = scope3.GoUnusedProtection__
var _ = hack4.GoUnusedProtection__
const Var1 = 10
const Var2 = "20"
var Var3 *MyStruct
const Var4 = 40
const Var5 = "50"
var Var6 *MyStruct

func init() {
Var3 = &MyStruct{
  Field: 30,
  SetString: []string{
    "10",     "20",   },
}

Var6 = &MyStruct{
  Field: 60,
  SetString: []string{
    "30",     "40",   },
}

}

