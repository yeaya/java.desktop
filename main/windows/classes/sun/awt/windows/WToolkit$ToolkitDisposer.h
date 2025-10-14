#ifndef _sun_awt_windows_WToolkit$ToolkitDisposer_h_
#define _sun_awt_windows_WToolkit$ToolkitDisposer_h_
//$ class sun.awt.windows.WToolkit$ToolkitDisposer
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace sun {
	namespace awt {
		namespace windows {

class WToolkit$ToolkitDisposer : public ::sun::java2d::DisposerRecord {
	$class(WToolkit$ToolkitDisposer, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	WToolkit$ToolkitDisposer();
	void init$();
	virtual void dispose() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WToolkit$ToolkitDisposer_h_