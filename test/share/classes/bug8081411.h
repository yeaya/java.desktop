#ifndef _bug8081411_h_
#define _bug8081411_h_
//$ class bug8081411
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_COLOR")
#undef TEST_COLOR

namespace java {
	namespace awt {
		class Color;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
			}
		}
	}
}

class $export bug8081411 : public ::java::lang::Object {
	$class(bug8081411, 0, ::java::lang::Object)
public:
	bug8081411();
	void init$();
	static bool checkAndSetNimbusLookAndFeel();
	static void main($StringArray* args);
	static void paintAndCheckIcon(::javax::swing::Icon* icon, ::javax::swing::plaf::synth::SynthContext* synthContext, int32_t width, int32_t height);
	static void testSynthIcon();
	static ::java::awt::Color* TEST_COLOR;
};

#pragma pop_macro("TEST_COLOR")

#endif // _bug8081411_h_