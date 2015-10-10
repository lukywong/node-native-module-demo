#include <nan.h>
#include "add.h"

using namespace v8;
using Nan::New;
using Nan::Set;
using Nan::GetFunction;

NAN_MODULE_INIT(InitAll) {
  Set(target, New("add").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(Add)).ToLocalChecked());
}

NODE_MODULE(hello, InitAll)
