# Subsystem 10.0 Load Failure

Plain EXE with subsystem set to 10.0 (or rather 6.3 or higher) fails to load with **0xC000007B** error code.

Apparently, the module MUST be built with [CFG](https://learn.microsoft.com/en-us/windows/win32/secbp/control-flow-guard).

The `/guard:cf` option by itself won't do anything though. It will be silently ignored. The `libcmt.lib` must be linked in too.