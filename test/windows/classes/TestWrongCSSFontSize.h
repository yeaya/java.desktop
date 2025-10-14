#ifndef _TestWrongCSSFontSize_h_
#define _TestWrongCSSFontSize_h_
//$ class TestWrongCSSFontSize
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEXT")
#undef TEXT

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class GlyphView;
			class View;
		}
	}
}

class $export TestWrongCSSFontSize : public ::java::lang::Object {
	$class(TestWrongCSSFontSize, 0, ::java::lang::Object)
public:
	TestWrongCSSFontSize();
	void init$(bool w3cUnits);
	static bool argCapture($StringArray* args);
	static bool argW3CUnits($StringArray* args);
	void assertFontSize(::javax::swing::text::GlyphView* child);
	static void captureImage(::java::awt::Component* comp, $String* suffix);
	int32_t forEachTextRun(::javax::swing::text::View* view, ::java::util::function::Consumer* action);
	static void lambda$main$0(::TestWrongCSSFontSize* test, ::java::util::concurrent::atomic::AtomicReference* failure, $StringArray* args);
	static void main($StringArray* args);
	void printSource(::javax::swing::text::View* textRun);
	virtual void run();
	virtual void setUp();
	static $String* TEXT;
	static const int32_t expectedFontSize = 21;
	static const int32_t expectedAssertions = 8;
	bool w3cUnits = false;
	::javax::swing::JEditorPane* editor = nullptr;
};

#pragma pop_macro("TEXT")

#endif // _TestWrongCSSFontSize_h_