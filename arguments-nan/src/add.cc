#include <nan.h>
#include "add.h"

using namespace v8;
using Nan::New;

NAN_METHOD(Add) {
  Nan::Maybe<int32_t> arg1 = Nan::To<int32_t>(info[0]);
  Nan::Maybe<int32_t> arg2 = Nan::To<int32_t>(info[1]);
  info.GetReturnValue().Set(arg1.FromJust() + arg2.FromJust());
}
