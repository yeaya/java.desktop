#ifndef _sun_awt_windows_WToolkitThreadBlockedHandler_h_
#define _sun_awt_windows_WToolkitThreadBlockedHandler_h_
//$ class sun.awt.windows.WToolkitThreadBlockedHandler
//$ extends sun.awt.Mutex
//$ implements sun.awt.datatransfer.ToolkitThreadBlockedHandler

#include <sun/awt/Mutex.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>

namespace sun {
	namespace awt {
		namespace windows {

class WToolkitThreadBlockedHandler : public ::sun::awt::Mutex, public ::sun::awt::datatransfer::ToolkitThreadBlockedHandler {
	$class(WToolkitThreadBlockedHandler, $NO_CLASS_INIT, ::sun::awt::Mutex, ::sun::awt::datatransfer::ToolkitThreadBlockedHandler)
public:
	WToolkitThreadBlockedHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void enter() override;
	virtual void exit() override;
	virtual void lock() override;
	void startSecondaryEventLoop();
	virtual $String* toString() override;
	virtual void unlock() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WToolkitThreadBlockedHandler_h_