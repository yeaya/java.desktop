#ifndef _TestGlyphBreak_h_
#define _TestGlyphBreak_h_
//$ class TestGlyphBreak
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class FontMetrics;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export TestGlyphBreak : public ::java::lang::Object {
	$class(TestGlyphBreak, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestGlyphBreak();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* f;
	static int32_t btnHeight;
	static ::java::awt::FontMetrics* fm;
};

#endif // _TestGlyphBreak_h_