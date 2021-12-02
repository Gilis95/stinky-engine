//
// Created by christian on 19/10/2020.
//

#pragma once

#include "gla/cube_texture.h"
#include <string>

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
namespace stinky {
class OpenGLCubeTexture : public cube_texture {
public:
  explicit OpenGLCubeTexture(std::string path);
  ~OpenGLCubeTexture() override = default;

  void bind(uint32_t slot) const override;

  void unbind(uint32_t slot) const override;
};
} // namespace stinky
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////