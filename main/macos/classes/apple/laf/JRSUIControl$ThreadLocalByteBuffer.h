#ifndef _apple_laf_JRSUIControl$ThreadLocalByteBuffer_h_
#define _apple_laf_JRSUIControl$ThreadLocalByteBuffer_h_
//$ class apple.laf.JRSUIControl$ThreadLocalByteBuffer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace apple {
	namespace laf {

class JRSUIControl$ThreadLocalByteBuffer : public ::java::lang::Object {
	$class(JRSUIControl$ThreadLocalByteBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIControl$ThreadLocalByteBuffer();
	void init$();
	::java::nio::ByteBuffer* buffer = nullptr;
	int64_t ptr = 0;
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIControl$ThreadLocalByteBuffer_h_