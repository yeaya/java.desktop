#ifndef _TestSingleScreenGConfigNotify_h_
#define _TestSingleScreenGConfigNotify_h_
//$ class TestSingleScreenGConfigNotify
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
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
	}
}

class $export TestSingleScreenGConfigNotify : public ::java::lang::Object {
	$class(TestSingleScreenGConfigNotify, 0, ::java::lang::Object)
public:
	TestSingleScreenGConfigNotify();
	void init$();
	static void lambda$main$0(::java::beans::PropertyChangeEvent* evt);
	static void lambda$main$1();
	static void lambda$main$2();
	static void main($StringArray* args);
	static $String* name;
	static ::java::util::concurrent::CountDownLatch* go;
	static ::javax::swing::JFrame* frame;
	static ::java::awt::GraphicsConfiguration* after;
	static ::java::awt::GraphicsConfiguration* before;
	static ::javax::swing::JButton* button;
};

#endif // _TestSingleScreenGConfigNotify_h_