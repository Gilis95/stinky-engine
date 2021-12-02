#pragma once

#include "gla/renderer_api.h"

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
namespace stinky {
class OpenGLRenderer : public renderer_api {
public:
  OpenGLRenderer() = default;

  ~OpenGLRenderer() override = default;

  void init() const override;

  void clear() const override;

  void draw_indexed(uint32_t indexCount, bool depthTest) const override;
};
} // namespace stinky
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
