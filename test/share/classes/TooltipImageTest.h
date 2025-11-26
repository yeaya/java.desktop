#ifndef _TooltipImageTest_h_
#define _TooltipImageTest_h_
//$ class TooltipImageTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PATH")
#undef PATH

namespace javax {
	namespace swing {
		class JToolTip;
	}
}

class $export TooltipImageTest : public ::java::lang::Object {
	$class(TooltipImageTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TooltipImageTest();
	void init$();
	static void checkSize(::javax::swing::JToolTip* tip, int32_t width, int32_t height);
	static void lambda$main$0($String* PATH);
	static void main($StringArray* args);
};

#pragma pop_macro("PATH")

#endif // _TooltipImageTest_h_