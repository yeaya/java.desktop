#ifndef _java_awt_Cursor$CursorDisposer_h_
#define _java_awt_Cursor$CursorDisposer_h_
//$ class java.awt.Cursor$CursorDisposer
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace awt {

class $import Cursor$CursorDisposer : public ::sun::java2d::DisposerRecord {
	$class(Cursor$CursorDisposer, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	Cursor$CursorDisposer();
	void init$(int64_t pData);
	virtual void dispose() override;
	$volatile(int64_t) pData = 0;
};

	} // awt
} // java

#endif // _java_awt_Cursor$CursorDisposer_h_