# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/_deps/picotool-src")
  file(MAKE_DIRECTORY "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/_deps/picotool-src")
endif()
file(MAKE_DIRECTORY
  "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/_deps/picotool-build"
  "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/_deps"
  "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/pico-sdk/src/rp2350/boot_stage2/picotool/tmp"
  "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/pico-sdk/src/rp2350/boot_stage2/picotool/src/picotoolBuild-stamp"
  "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/pico-sdk/src/rp2350/boot_stage2/picotool/src"
  "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/pico-sdk/src/rp2350/boot_stage2/picotool/src/picotoolBuild-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/pico-sdk/src/rp2350/boot_stage2/picotool/src/picotoolBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/submodules/pico-sdk/src/rp2350/boot_stage2/picotool/src/picotoolBuild-stamp${cfgdir}") # cfgdir has leading slash
endif()
