#include <iostream>
#include <pqrs/osx/cg_display.hpp>

int main(void) {
  std::cout << "online_display_count:" << pqrs::osx::cg_display::online_display_count() << std::endl;
  for (auto d : pqrs::osx::cg_display::online_displays()) {
    std::cout << "online_display direct_display_id:" << d << std::endl;

    auto bounds = CGDisplayBounds(d);
    std::cout << "  x:" << bounds.origin.x << std::endl
              << "  y:" << bounds.origin.y << std::endl
              << "  w:" << bounds.size.width << std::endl
              << "  h:" << bounds.size.height << std::endl;
  }

  std::cout << "active_display_count:" << pqrs::osx::cg_display::active_display_count() << std::endl;
  for (auto d : pqrs::osx::cg_display::active_displays()) {
    std::cout << "active_display direct_display_id:" << d << std::endl;

    auto bounds = CGDisplayBounds(d);
    std::cout << "  x:" << bounds.origin.x << std::endl
              << "  y:" << bounds.origin.y << std::endl
              << "  w:" << bounds.size.width << std::endl
              << "  h:" << bounds.size.height << std::endl;
  }

  if (auto display_id = pqrs::osx::cg_display::get_online_display_id_by_mouse_cursor()) {
    std::cout << "online_display_id_by_mouse_cursor: " << *display_id << std::endl;
  }

  return 0;
}
