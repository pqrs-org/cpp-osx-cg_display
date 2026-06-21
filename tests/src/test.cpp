#include <concepts>
#include <cstdint>
#include <optional>
#include <pqrs/osx/cg_display.hpp>
#include <vector>

static_assert(std::same_as<decltype(pqrs::osx::cg_display::online_display_count()), uint32_t>);
static_assert(std::same_as<decltype(pqrs::osx::cg_display::online_displays()), std::vector<CGDirectDisplayID>>);
static_assert(std::same_as<decltype(pqrs::osx::cg_display::active_display_count()), uint32_t>);
static_assert(std::same_as<decltype(pqrs::osx::cg_display::active_displays()), std::vector<CGDirectDisplayID>>);
static_assert(std::same_as<decltype(pqrs::osx::cg_display::get_online_display_id_by_mouse_cursor()), std::optional<CGDirectDisplayID>>);

int main() {
  return 0;
}
