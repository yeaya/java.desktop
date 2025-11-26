#ifndef _sun_awt_X11GraphicsConfig$X11GCDisposerRecord_h_
#define _sun_awt_X11GraphicsConfig$X11GCDisposerRecord_h_
//$ class sun.awt.X11GraphicsConfig$X11GCDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace sun {
	namespace awt {

class X11GraphicsConfig$X11GCDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(X11GraphicsConfig$X11GCDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	X11GraphicsConfig$X11GCDisposerRecord();
	void init$(int64_t x11CfgData);
	virtual void dispose() override;
	int64_t x11ConfigData = 0;
};

	} // awt
} // sun

#endif // _sun_awt_X11GraphicsConfig$X11GCDisposerRecord_h_