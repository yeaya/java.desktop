#ifndef _sun_awt_AWTPermissions_h_
#define _sun_awt_AWTPermissions_h_
//$ class sun.awt.AWTPermissions
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACCESS_CLIPBOARD_PERMISSION")
#undef ACCESS_CLIPBOARD_PERMISSION
#pragma push_macro("ACCESS_SYSTEM_TRAY_PERMISSION")
#undef ACCESS_SYSTEM_TRAY_PERMISSION
#pragma push_macro("ALL_AWT_EVENTS_PERMISSION")
#undef ALL_AWT_EVENTS_PERMISSION
#pragma push_macro("CHECK_AWT_EVENTQUEUE_PERMISSION")
#undef CHECK_AWT_EVENTQUEUE_PERMISSION
#pragma push_macro("CREATE_ROBOT_PERMISSION")
#undef CREATE_ROBOT_PERMISSION
#pragma push_macro("READ_DISPLAY_PIXELS_PERMISSION")
#undef READ_DISPLAY_PIXELS_PERMISSION
#pragma push_macro("SET_WINDOW_ALWAYS_ON_TOP_PERMISSION")
#undef SET_WINDOW_ALWAYS_ON_TOP_PERMISSION
#pragma push_macro("TOOLKIT_MODALITY_PERMISSION")
#undef TOOLKIT_MODALITY_PERMISSION
#pragma push_macro("TOPLEVEL_WINDOW_PERMISSION")
#undef TOPLEVEL_WINDOW_PERMISSION
#pragma push_macro("WATCH_MOUSE_PERMISSION")
#undef WATCH_MOUSE_PERMISSION

namespace java {
	namespace awt {
		class AWTPermission;
	}
}

namespace sun {
	namespace awt {

class $import AWTPermissions : public ::java::lang::Object {
	$class(AWTPermissions, 0, ::java::lang::Object)
public:
	AWTPermissions();
	void init$();
	static ::java::awt::AWTPermission* TOPLEVEL_WINDOW_PERMISSION;
	static ::java::awt::AWTPermission* ACCESS_CLIPBOARD_PERMISSION;
	static ::java::awt::AWTPermission* CHECK_AWT_EVENTQUEUE_PERMISSION;
	static ::java::awt::AWTPermission* TOOLKIT_MODALITY_PERMISSION;
	static ::java::awt::AWTPermission* READ_DISPLAY_PIXELS_PERMISSION;
	static ::java::awt::AWTPermission* CREATE_ROBOT_PERMISSION;
	static ::java::awt::AWTPermission* WATCH_MOUSE_PERMISSION;
	static ::java::awt::AWTPermission* SET_WINDOW_ALWAYS_ON_TOP_PERMISSION;
	static ::java::awt::AWTPermission* ALL_AWT_EVENTS_PERMISSION;
	static ::java::awt::AWTPermission* ACCESS_SYSTEM_TRAY_PERMISSION;
};

	} // awt
} // sun

#pragma pop_macro("ACCESS_CLIPBOARD_PERMISSION")
#pragma pop_macro("ACCESS_SYSTEM_TRAY_PERMISSION")
#pragma pop_macro("ALL_AWT_EVENTS_PERMISSION")
#pragma pop_macro("CHECK_AWT_EVENTQUEUE_PERMISSION")
#pragma pop_macro("CREATE_ROBOT_PERMISSION")
#pragma pop_macro("READ_DISPLAY_PIXELS_PERMISSION")
#pragma pop_macro("SET_WINDOW_ALWAYS_ON_TOP_PERMISSION")
#pragma pop_macro("TOOLKIT_MODALITY_PERMISSION")
#pragma pop_macro("TOPLEVEL_WINDOW_PERMISSION")
#pragma pop_macro("WATCH_MOUSE_PERMISSION")

#endif // _sun_awt_AWTPermissions_h_