#ifndef _sun_awt_X11InputMethodBase$IntBuffer_h_
#define _sun_awt_X11InputMethodBase$IntBuffer_h_
//$ class sun.awt.X11InputMethodBase$IntBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace awt {
		class X11InputMethodBase;
	}
}

namespace sun {
	namespace awt {

class $import X11InputMethodBase$IntBuffer : public ::java::lang::Object {
	$class(X11InputMethodBase$IntBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	X11InputMethodBase$IntBuffer();
	void init$(::sun::awt::X11InputMethodBase* this$0, int32_t initialCapacity);
	int32_t getNext();
	int32_t getOffset();
	void insert(int32_t offset, $ints* values);
	void remove(int32_t offset, int32_t length);
	void removeAll();
	void replace(int32_t offset, $ints* values);
	void rewind();
	virtual $String* toString() override;
	void unget();
	::sun::awt::X11InputMethodBase* this$0 = nullptr;
	$ints* intArray = nullptr;
	int32_t size = 0;
	int32_t index = 0;
};

	} // awt
} // sun

#endif // _sun_awt_X11InputMethodBase$IntBuffer_h_