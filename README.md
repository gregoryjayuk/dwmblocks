# dwmblocks — my build

A modular status bar for [dwm](https://github.com/gregoryjayuk/dwm), written in C: each block is a shell command with its own update interval, and a block can also be refreshed on demand with a signal (`pkill -RTMIN+10 dwmblocks` redraws the volume block the moment the volume keys are pressed).

## My blocks

| block | command | every |
|---|---|---|
| process count | `processcount` | 10 min |
| disk | `df -h` (size of the home partition) | 1 min |
| memory | `free -h` (used / total) | 30 s |
| clock (UK) | `TZ='Europe/London' date '+%H:%M'` | 1 min |
| local date and time | `date '+%d/%m %I:%M'` | 1 min |
| air quality | `pollution` | 10 min, or signal 9 |
| battery, two packs | `battery`, `battery2` | 5 min |
| volume | `volume` | on signal 10 only |

The commands without a path are small scripts on my `$PATH`. Change the table in `blocks.h` and rebuild.

## Upstream notes

# usage
To use dwmblocks first run 'make' and then install it with 'sudo make install'.
After that you can put dwmblocks in your xinitrc or other startup script to have it start with dwm.
# modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.
By default the blocks.h header file is created the first time you run make which copies the default config from blocks.def.h.
This is so you can edit your status bar commands and they will not get overwritten in a future update.
# patches
Here are some patches to dwmblocks that add features that I either don't want to merge in, or that require a dwm patch to work.
I do not maintain these but I will take pull requests to update them.
<br>
<a href=https://gist.github.com/toniz4/41d168719e22bf7bc4ecff09d424b7d2>dwmblocks-statuscmd-20200717-941f415.diff</a>
