#pragma once

'' The following symbols have been renamed:
''     struct A1 => A2
''     typedef B1 => B2
''     constant C1 => C2

extern "C"

type A2
	i as long
end type

type B2 as long

const C2 = 123

#define Ref1 A2
#define Ref2 B2
#define Ref3 C2

extern Ref4 as A2
extern Ref5 as B2

end extern