#include <iostream>
#include <pqrs/osx/cg_display.hpp>

int main(void) {
  std::cout << "online_display_count:" << pqrs::osx::cg_display::online_display_count() << std::endl;
  for (auto d : pqrs::osx::cg_display::online_displays()) {
    std::cout << "online_display direct_display_id:" << d << std::endl;
  }

  std::cout << "active_display_count:" << pqrs::osx::cg_display::active_display_count() << std::endl;
  for (auto d : pqrs::osx::cg_display::active_displays()) {
    std::cout << "active_display direct_display_id:" << d << std::endl;
  }

  return 0;
}
