//
// Created by christian on 19/10/2020.
//
#pragma once

#include <string>

#include "core/stinky_memory.h"
#include "stinky_prerequisites.h"

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
namespace stinky {

/////////////////////////////////////////////////////////////////////////////////////////
class program_component {
public:
  explicit program_component(shared_ptr<shader> program);
  program_component(program_component &&path) noexcept = default;

  ~program_component() = default;

  program_component &operator=(program_component &&copy) noexcept {
    program = copy.program;
    return *this;
  };

  shared_ptr<shader> program;
};
} // namespace stinky
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////