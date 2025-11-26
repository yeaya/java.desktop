#ifndef _sun_awt_X11_XErrorHandlerUtil_h_
#define _sun_awt_X11_XErrorHandlerUtil_h_
//$ class sun.awt.X11.XErrorHandlerUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("RESTORE_XERROR_HANDLER")
#undef RESTORE_XERROR_HANDLER
#pragma push_macro("SAVED_XERROR_HANDLER")
#undef SAVED_XERROR_HANDLER
#pragma push_macro("WITH_XERROR_HANDLER")
#undef WITH_XERROR_HANDLER

namespace sun {
	namespace awt {
		namespace X11 {
			class XErrorEvent;
			class XErrorHandler;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XErrorHandlerUtil : public ::java::lang::Object {
	$class(XErrorHandlerUtil, 0, ::java::lang::Object)
public:
	XErrorHandlerUtil();
	void init$();
	static void RESTORE_XERROR_HANDLER();
	static int32_t SAVED_XERROR_HANDLER(int64_t display, ::sun::awt::X11::XErrorEvent* error);
	static void WITH_XERROR_HANDLER(::sun::awt::X11::XErrorHandler* handler);
	static void XSync();
	static int32_t globalErrorHandler(int64_t display, int64_t event_ptr);
	static void init(int64_t display);
	static ::sun::util::logging::PlatformLogger* log;
	static int64_t display;
	static int64_t saved_error_handler;
	static $volatile(::sun::awt::X11::XErrorEvent*) saved_error;
	static ::sun::awt::X11::XErrorHandler* current_error_handler;
	static bool noisyAwtHandler;
	static bool initPassed;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("RESTORE_XERROR_HANDLER")
#pragma pop_macro("SAVED_XERROR_HANDLER")
#pragma pop_macro("WITH_XERROR_HANDLER")

#endif // _sun_awt_X11_XErrorHandlerUtil_h_