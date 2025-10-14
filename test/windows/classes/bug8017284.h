#ifndef _bug8017284_h_
#define _bug8017284_h_
//$ class bug8017284
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ITERATIONS")
#undef ITERATIONS
#pragma push_macro("TAB_COUNT")
#undef TAB_COUNT

namespace javax {
	namespace swing {
		class JFrame;
		class JTabbedPane;
	}
}

class $export bug8017284 : public ::java::lang::Object {
	$class(bug8017284, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8017284();
	void init$();
	static $String* getHtmlText(int32_t i);
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void main($StringArray* args);
	static const int32_t TAB_COUNT = 100;
	static const int32_t ITERATIONS = 100;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTabbedPane* tabbedPane;
};

#pragma pop_macro("ITERATIONS")
#pragma pop_macro("TAB_COUNT")

#endif // _bug8017284_h_