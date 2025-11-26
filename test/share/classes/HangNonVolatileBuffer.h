#ifndef _HangNonVolatileBuffer_h_
#define _HangNonVolatileBuffer_h_
//$ class HangNonVolatileBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export HangNonVolatileBuffer : public ::java::lang::Object {
	$class(HangNonVolatileBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HangNonVolatileBuffer();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* f;
};

#endif // _HangNonVolatileBuffer_h_