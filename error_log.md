Online compilers often run in controlled sandbox environments where memory allocation behaves differently than on your local machine.

Here is why your code produced different results:

* **Zero-Initialized Memory:** Many online compilers run single-use, fresh processes inside containerized environments (like Docker). In these environments, operating systems often zero out newly allocated memory pages for security reasons. As a result, `RevNum` accidentally started at `0` instead of a garbage value.
* **Undefined Behavior:** In C++, using an uninitialized local variable triggers **Undefined Behavior (UB)**. The C++ standard does not dictate what must happen in this state—the compiler is free to do whatever it wants. Your local IDEs (VS Code using GCC/Clang, Code::Blocks using MinGW) allocated memory for `RevNum` that contained leftover junk data from previous system operations (e.g., `RevNum = 32767` or `-858993460`).
* **Compiler Optimizations & Flags:** Online compilers often use default optimization flags (like `-O2`) or specific runtime libraries that can alter how unassigned variables reside in CPU registers versus memory stacks. Local compilers building in debug mode explicitly retain raw stack memory, exposing the uninitialized variable immediately.

Relying on uninitialized variables is a common source of bugs that pass tests in one environment but fail when deployed elsewhere. Setting explicit default values (like `int RevNum = 0;`) ensures identical behavior across all compilers.
