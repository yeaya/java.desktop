#ifndef _bug6683775_h_
#define _bug6683775_h_
//$ class bug6683775
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOC")
#undef LOC
#pragma push_macro("SIZE")
#undef SIZE

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Window;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export bug6683775 : public ::java::lang::Object {
	$class(bug6683775, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6683775();
	void init$();
	static ::java::awt::GraphicsConfiguration* getGC();
	static void lambda$main$0(::javax::swing::JFrame* testFrame);
	static void main($StringArray* args);
	static void setOpaque(::java::awt::Window* window, bool opaque);
	static const int32_t LOC = 100;
	static const int32_t SIZE = 200;
};

#pragma pop_macro("LOC")
#pragma pop_macro("SIZE")

#endif // _bug6683775_h_