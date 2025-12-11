#ifndef _sun_lwawt_macosx_CToolkitThreadBlockedHandler_h_
#define _sun_lwawt_macosx_CToolkitThreadBlockedHandler_h_
//$ class sun.lwawt.macosx.CToolkitThreadBlockedHandler
//$ extends sun.awt.Mutex
//$ implements sun.awt.datatransfer.ToolkitThreadBlockedHandler

#include <sun/awt/Mutex.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class CToolkitThreadBlockedHandler : public ::sun::awt::Mutex, public ::sun::awt::datatransfer::ToolkitThreadBlockedHandler {
	$class(CToolkitThreadBlockedHandler, $NO_CLASS_INIT, ::sun::awt::Mutex, ::sun::awt::datatransfer::ToolkitThreadBlockedHandler)
public:
	CToolkitThreadBlockedHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void enter() override;
	virtual void exit() override;
	virtual void lock() override;
	virtual $String* toString() override;
	virtual void unlock() override;
	int64_t awtRunLoopMediator = 0;
	bool processEvents = false;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CToolkitThreadBlockedHandler_h_