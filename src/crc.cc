#include <napi.h>

using namespace Napi;

class CRC : public Addon<CRC> {
public:
  CRC(Env env, Object exports) {
    DefineAddon(exports, {
                             InstanceMethod("increment", &CRC::Increment),
                         });
  }

private:
  Value Increment(const CallbackInfo &info) {
    return Number::New(info.Env(), value = value + 2);
  }
  uint32_t value = 40;
};

NODE_API_ADDON(CRC);
