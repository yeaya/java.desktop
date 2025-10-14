#ifndef _sun_awt_AWTAccessor$CursorAccessor_h_
#define _sun_awt_AWTAccessor$CursorAccessor_h_
//$ interface sun.awt.AWTAccessor$CursorAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Cursor;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$CursorAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$CursorAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getPData(::java::awt::Cursor* cursor) {return 0;}
	virtual int32_t getType(::java::awt::Cursor* cursor) {return 0;}
	virtual void setPData(::java::awt::Cursor* cursor, int64_t pData) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$CursorAccessor_h_