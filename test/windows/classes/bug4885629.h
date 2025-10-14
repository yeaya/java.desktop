#ifndef _bug4885629_h_
#define _bug4885629_h_
//$ class bug4885629
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BGCOLOR")
#undef BGCOLOR

namespace java {
	namespace awt {
		class Color;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JSplitPane;
	}
}

class $export bug4885629 : public ::java::lang::Object {
	$class(bug4885629, 0, ::java::lang::Object)
public:
	bug4885629();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::java::awt::Color* darkShadow;
	static ::java::awt::Color* darkHighlight;
	static ::java::awt::Color* lightHighlight;
	static ::java::awt::Color* BGCOLOR;
	static ::javax::swing::JSplitPane* sp;
	static ::javax::swing::JFrame* frame;
};

#pragma pop_macro("BGCOLOR")

#endif // _bug4885629_h_