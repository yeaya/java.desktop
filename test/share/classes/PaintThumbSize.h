#ifndef _PaintThumbSize_h_
#define _PaintThumbSize_h_
//$ class PaintThumbSize
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SCALE")
#undef SCALE
#pragma push_macro("SHIFT")
#undef SHIFT

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export PaintThumbSize : public ::java::lang::Object {
	$class(PaintThumbSize, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PaintThumbSize();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void test();
	static const int32_t SCALE = 2;
	static const int32_t SHIFT = 100;
};

#pragma pop_macro("SCALE")
#pragma pop_macro("SHIFT")

#endif // _PaintThumbSize_h_