# MP-REPL
__A MicroPython Web-REPL server designed around the WIZnet EVB Pico 2.__

---
![The Stackup](/assets/stackup.jpg)

---

### DISCLAIMER:
__Everything in the /WIZnet-EVB-Pico-Micropython directory is the work of other people, mainly WIZnet and the Micropython Organization.__

---

## How it works:

MP-REPL Runs on a dual core setup.
Core 0 runs the REPL and main networking,
Core 1 does an arguably boring job but said job is just as important:

__RUNNING THE CONFIGURATION__

For now we will focus on core 1.

---
![Flowchart of what core 1 does](/assets/Socket%20Connection%20Handling-2026-07-23-040246.png)

---
__TLDR:__
*it accepts incoming TCP connections and then communitcates with the config software to read and write to the config json.*

---
Core 0 is pretty basic in terms of the code, most of it is handled under the hood with micropython libraries, so there isnt much to it.

What CAN be said about core 0 is that it is running at a significantly higher clock speed than core 1

---
## How to build:

Most of it should be either included in the repo or be handled by `build_uf2.sh`.

But if that were not to work:

1. From the root dir, run `cd WIZnet-EVB-Pico-micropython` and run
`make -C mpy-cross`
2. run `cd ports/rp2 && make submodules`

3. finally, run `make BOARD=W5100S_EVB_PICO2` (the build output will be in the active directory if built with this method, otherwise it will be in the ROOT/uf2 dir)