#pragma once

extern "C"

'' TODO: unrecognized construct:
'' #define m void f(void
'' ---------------------------------------------------------------------------
'' tests/c/macro-body-unknown-construct.h(1): expected an atomic expression
''    1: #define m void f(void
''                 ^~~~
''    2: 
''    3: void ok(void);
'' context as seen by fbfrog:
''    e [void], tk behindspace [id "f"], tk [(], tk [void])) [begin] void f ( void
''                                                                   ^~~~

'' TODO: unrecognized construct:
''
'' ---------------------------------------------------------------------------
'' expected a data type starting a declaration
''    [end]
''    ^~~~~

declare sub ok()

'' TODO: unrecognized construct:
'' #define A void f(
'' ---------------------------------------------------------------------------
'' tests/c/macro-body-unknown-construct.h(5): expected an atomic expression
''    3: void ok(void);
''    4: 
''    5: #define A void f(
''                 ^~~~
''    6: #define B() void f(
''    7: #define C(a) void f(
'' context as seen by fbfrog:
''    dy(tk behindspace [void], tk behindspace [id "f"], tk [(])) [begin] void f (
''                                                                        ^~~~

'' TODO: unrecognized construct:
''
'' ---------------------------------------------------------------------------
'' expected a data type starting a declaration
''    [end]
''    ^~~~~

'' TODO: unrecognized construct:
'' #define B() void f(
'' ---------------------------------------------------------------------------
'' tests/c/macro-body-unknown-construct.h(6): expected an atomic expression
''    4: 
''    5: #define A void f(
''    6: #define B() void f(
''                   ^~~~
''    7: #define C(a) void f(
''    8: #define D(a, b, c) void f(
'' context as seen by fbfrog:
''    dy(tk behindspace [void], tk behindspace [id "f"], tk [(])) [begin] void f (
''                                                                        ^~~~

'' TODO: unrecognized construct:
''
'' ---------------------------------------------------------------------------
'' expected a data type starting a declaration
''    [end]
''    ^~~~~

'' TODO: unrecognized construct:
'' #define C(a) void f(
'' ---------------------------------------------------------------------------
'' tests/c/macro-body-unknown-construct.h(7): expected an atomic expression
''    5: #define A void f(
''    6: #define B() void f(
''    7: #define C(a) void f(
''                    ^~~~
''    8: #define D(a, b, c) void f(
''    9: 
'' context as seen by fbfrog:
''    e [void], tk behindspace [id "f"], tk [(]), macroparam "a") [begin] void f (
''                                                                        ^~~~

'' TODO: unrecognized construct:
''
'' ---------------------------------------------------------------------------
'' expected a data type starting a declaration
''    [end]
''    ^~~~~

'' TODO: unrecognized construct:
'' #define D(a, b, c) void f(
'' ---------------------------------------------------------------------------
'' tests/c/macro-body-unknown-construct.h(8): expected an atomic expression
''    6: #define B() void f(
''    7: #define C(a) void f(
''    8: #define D(a, b, c) void f(
''                          ^~~~
''    9: 
'' context as seen by fbfrog:
''    ], tk [(]), macroparam "a", macroparam "b", macroparam "c") [begin] void f (
''                                                                        ^~~~

'' TODO: unrecognized construct:
''
'' ---------------------------------------------------------------------------
'' expected a data type starting a declaration
''    [end]
''    ^~~~~

end extern
