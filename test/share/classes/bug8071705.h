#ifndef _bug8071705_h_
#define _bug8071705_h_
//$ class bug8071705
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
		class Rectangle;
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
		class JFrame;
	}
}

class $export bug8071705 : public ::java::lang::Object {
	$class(bug8071705, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8071705();
	void init$();
	static ::java::awt::GraphicsDevice* checkConfigs($Array<::java::awt::GraphicsDevice>* devices);
	static $Array<::java::awt::GraphicsDevice>* checkScreens();
	static ::javax::swing::JFrame* createGUI();
	static void main($StringArray* args);
	static void runActualTest(::java::awt::GraphicsDevice* device, ::java::util::concurrent::CountDownLatch* latch, ::javax::swing::JFrame* frame, $booleans* result);
	static ::java::awt::Rectangle* setLocation(::javax::swing::JFrame* frame, ::java::awt::GraphicsDevice* device);
};

#endif // _bug8071705_h_