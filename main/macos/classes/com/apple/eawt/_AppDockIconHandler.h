#ifndef _com_apple_eawt__AppDockIconHandler_h_
#define _com_apple_eawt__AppDockIconHandler_h_
//$ class com.apple.eawt._AppDockIconHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Image;
		class PopupMenu;
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppDockIconHandler : public ::java::lang::Object {
	$class(_AppDockIconHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	_AppDockIconHandler();
	void init$();
	virtual ::java::awt::Image* getDockIconImage();
	virtual ::java::awt::PopupMenu* getDockMenu();
	static int64_t nativeGetDockIconImage();
	static void nativeSetDockIconBadge($String* badge);
	static void nativeSetDockIconImage(int64_t image);
	static void nativeSetDockIconProgress(int32_t value);
	static void nativeSetDockMenu(int64_t cmenu);
	virtual void setDockIconBadge($String* badge);
	virtual void setDockIconImage(::java::awt::Image* image);
	virtual void setDockIconProgress(int32_t value);
	virtual void setDockMenu(::java::awt::PopupMenu* menu);
	::java::awt::PopupMenu* fDockMenu = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppDockIconHandler_h_