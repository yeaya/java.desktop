#ifndef _java_awt_Cursor$1_h_
#define _java_awt_Cursor$1_h_
//$ class java.awt.Cursor$1
//$ extends sun.awt.AWTAccessor$CursorAccessor

#include <sun/awt/AWTAccessor$CursorAccessor.h>

namespace java {
	namespace awt {
		class Cursor;
	}
}

namespace java {
	namespace awt {

class Cursor$1 : public ::sun::awt::AWTAccessor$CursorAccessor {
	$class(Cursor$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$CursorAccessor)
public:
	Cursor$1();
	void init$();
	virtual int64_t getPData(::java::awt::Cursor* cursor) override;
	virtual int32_t getType(::java::awt::Cursor* cursor) override;
	virtual void setPData(::java::awt::Cursor* cursor, int64_t pData) override;
};

	} // awt
} // java

#endif // _java_awt_Cursor$1_h_