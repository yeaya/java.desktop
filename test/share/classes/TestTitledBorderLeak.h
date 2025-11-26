#ifndef _TestTitledBorderLeak_h_
#define _TestTitledBorderLeak_h_
//$ class TestTitledBorderLeak
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GC_ATTEMPTS")
#undef GC_ATTEMPTS
#pragma push_macro("TOTAL_TITLEDBORDER")
#undef TOTAL_TITLEDBORDER

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export TestTitledBorderLeak : public ::java::lang::Object {
	$class(TestTitledBorderLeak, 0, ::java::lang::Object)
public:
	TestTitledBorderLeak();
	void init$();
	static void attemptGCTitledBorder();
	static int32_t getCleanedUpTitledBorderCount();
	static void lambda$main$0($Array<::javax::swing::JFrame>* frame);
	static void lambda$main$1($Array<::javax::swing::JFrame>* frame);
	static void main($StringArray* args);
	static const int32_t TOTAL_TITLEDBORDER = 10;
	static const int32_t GC_ATTEMPTS = 10;
	static ::java::util::ArrayList* weakRefArrTB;
};

#pragma pop_macro("GC_ATTEMPTS")
#pragma pop_macro("TOTAL_TITLEDBORDER")

#endif // _TestTitledBorderLeak_h_