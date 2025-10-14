#ifndef _TestMultiScreenGConfigNotify_h_
#define _TestMultiScreenGConfigNotify_h_
//$ class TestMultiScreenGConfigNotify
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export TestMultiScreenGConfigNotify : public ::java::lang::Object {
	$class(TestMultiScreenGConfigNotify, 0, ::java::lang::Object)
public:
	TestMultiScreenGConfigNotify();
	void init$();
	static void lambda$main$0(::java::beans::PropertyChangeEvent* evt);
	static void lambda$main$1(::java::awt::GraphicsConfiguration* gc, ::java::awt::GraphicsConfiguration* gc2);
	static void lambda$main$2();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* f;
	static $StringArray* propName;
	static int32_t propCount;
	static bool result;
};

#endif // _TestMultiScreenGConfigNotify_h_