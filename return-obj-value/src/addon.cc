#include <nan.h>
#include "hello.h"

using namespace v8;
using Nan::New;
using Nan::Set;
using Nan::GetFunction;

NAN_MODULE_INIT(InitAll) {
  Set(target, New("sayHello").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(SayHello)).ToLocalChecked());
}

NODE_MODULE(hello, InitAll)
