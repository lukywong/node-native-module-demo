#include <nan.h>
#include "hello.h"

using namespace v8;
using Nan::New;

NAN_METHOD(SayHello) {
  v8::Local<v8::Object> obj = Nan::New<v8::Object>();
  Nan::Set(obj, Nan::New("name1").ToLocalChecked(), Nan::To<v8::String>(info[0]).ToLocalChecked());
  Nan::Set(obj, Nan::New("name2").ToLocalChecked(), Nan::To<v8::String>(info[1]).ToLocalChecked());
  info.GetReturnValue().Set(obj);
}
