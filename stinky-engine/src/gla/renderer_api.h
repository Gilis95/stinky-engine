#pragma once

#include "stinky_prerequisites.h"

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
namespace stinky {
class renderer_api {
public:
  virtual ~renderer_api() = default;

  virtual void init() const = 0;

  virtual void clear() const = 0;

  virtual void draw_indexed(uint32_t index_count, bool depth_test) const = 0;
};
} // namespace stinky
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////