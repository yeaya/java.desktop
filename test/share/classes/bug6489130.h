#ifndef _bug6489130_h_
#define _bug6489130_h_
//$ class bug6489130
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MUX")
#undef MUX

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
		class Timer;
	}
}

class $export bug6489130 : public ::java::lang::Object {
	$class(bug6489130, 0, ::java::lang::Object)
public:
	bug6489130();
	void init$();
	static void main($StringArray* args);
	void run();
	::javax::swing::JFileChooser* chooser = nullptr;
	static ::java::util::concurrent::CountDownLatch* MUX;
	::javax::swing::Timer* timer = nullptr;
	int32_t state = 0;
};

#pragma pop_macro("MUX")

#endif // _bug6489130_h_