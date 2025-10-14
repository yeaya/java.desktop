#ifndef _Test6657026MetalBorders_h_
#define _Test6657026MetalBorders_h_
//$ class Test6657026MetalBorders
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NEGATIVE")
#undef NEGATIVE

namespace java {
	namespace awt {
		class Insets;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

class $export Test6657026MetalBorders : public ::java::lang::Object {
	$class(Test6657026MetalBorders, 0, ::java::lang::Object)
public:
	Test6657026MetalBorders();
	void init$();
	static ::javax::swing::border::Border* create($String* name);
	static void main($StringArray* args);
	static void test(::javax::swing::border::Border* border);
	static ::java::awt::Insets* NEGATIVE;
};

#pragma pop_macro("NEGATIVE")

#endif // _Test6657026MetalBorders_h_