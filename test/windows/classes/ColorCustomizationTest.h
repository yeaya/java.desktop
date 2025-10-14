#ifndef _ColorCustomizationTest_h_
#define _ColorCustomizationTest_h_
//$ class ColorCustomizationTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace awt {
		class Color;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JLabel;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusLookAndFeel;
			}
		}
	}
}

class $export ColorCustomizationTest : public ::java::lang::Object {
	$class(ColorCustomizationTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ColorCustomizationTest();
	void init$();
	virtual void check(::java::awt::Color* c);
	static void main($StringArray* args);
	virtual void test();
	virtual void testBaseColor();
	virtual void testInheritance();
	virtual void testNames();
	virtual void testOverrides();
	static const int32_t WIDTH = 200;
	static const int32_t HEIGHT = 100;
	static ::javax::swing::plaf::nimbus::NimbusLookAndFeel* nimbus;
	::javax::swing::JLabel* label = nullptr;
	::java::awt::Graphics* g = nullptr;
};

#pragma pop_macro("HEIGHT")
#pragma pop_macro("WIDTH")

#endif // _ColorCustomizationTest_h_