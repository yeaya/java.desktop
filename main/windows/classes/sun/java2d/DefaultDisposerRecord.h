#ifndef _sun_java2d_DefaultDisposerRecord_h_
#define _sun_java2d_DefaultDisposerRecord_h_
//$ class sun.java2d.DefaultDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace sun {
	namespace java2d {

class DefaultDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(DefaultDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	DefaultDisposerRecord();
	void init$(int64_t disposerMethodPointer, int64_t dataPointer);
	virtual void dispose() override;
	virtual int64_t getDataPointer();
	virtual int64_t getDisposerMethodPointer();
	static void invokeNativeDispose(int64_t disposerMethodPointer, int64_t dataPointer);
	int64_t dataPointer = 0;
	int64_t disposerMethodPointer = 0;
};

	} // java2d
} // sun

#endif // _sun_java2d_DefaultDisposerRecord_h_