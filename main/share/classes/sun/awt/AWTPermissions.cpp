#include <sun/awt/AWTPermissions.h>

#include <java/awt/AWTPermission.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD_PERMISSION
#undef ACCESS_SYSTEM_TRAY_PERMISSION
#undef ALL_AWT_EVENTS_PERMISSION
#undef CHECK_AWT_EVENTQUEUE_PERMISSION
#undef CREATE_ROBOT_PERMISSION
#undef READ_DISPLAY_PIXELS_PERMISSION
#undef SET_WINDOW_ALWAYS_ON_TOP_PERMISSION
#undef TOOLKIT_MODALITY_PERMISSION
#undef TOPLEVEL_WINDOW_PERMISSION
#undef WATCH_MOUSE_PERMISSION

using $AWTPermission = ::java::awt::AWTPermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$FieldInfo _AWTPermissions_FieldInfo_[] = {
	{"TOPLEVEL_WINDOW_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, TOPLEVEL_WINDOW_PERMISSION)},
	{"ACCESS_CLIPBOARD_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, ACCESS_CLIPBOARD_PERMISSION)},
	{"CHECK_AWT_EVENTQUEUE_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, CHECK_AWT_EVENTQUEUE_PERMISSION)},
	{"TOOLKIT_MODALITY_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, TOOLKIT_MODALITY_PERMISSION)},
	{"READ_DISPLAY_PIXELS_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, READ_DISPLAY_PIXELS_PERMISSION)},
	{"CREATE_ROBOT_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, CREATE_ROBOT_PERMISSION)},
	{"WATCH_MOUSE_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, WATCH_MOUSE_PERMISSION)},
	{"SET_WINDOW_ALWAYS_ON_TOP_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, SET_WINDOW_ALWAYS_ON_TOP_PERMISSION)},
	{"ALL_AWT_EVENTS_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, ALL_AWT_EVENTS_PERMISSION)},
	{"ACCESS_SYSTEM_TRAY_PERMISSION", "Ljava/awt/AWTPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AWTPermissions, ACCESS_SYSTEM_TRAY_PERMISSION)},
	{}
};

$MethodInfo _AWTPermissions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AWTPermissions::*)()>(&AWTPermissions::init$))},
	{}
};

$ClassInfo _AWTPermissions_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.AWTPermissions",
	"java.lang.Object",
	nullptr,
	_AWTPermissions_FieldInfo_,
	_AWTPermissions_MethodInfo_
};

$Object* allocate$AWTPermissions($Class* clazz) {
	return $of($alloc(AWTPermissions));
}

$AWTPermission* AWTPermissions::TOPLEVEL_WINDOW_PERMISSION = nullptr;
$AWTPermission* AWTPermissions::ACCESS_CLIPBOARD_PERMISSION = nullptr;
$AWTPermission* AWTPermissions::CHECK_AWT_EVENTQUEUE_PERMISSION = nullptr;
$AWTPermission* AWTPermissions::TOOLKIT_MODALITY_PERMISSION = nullptr;
$AWTPermission* AWTPermissions::READ_DISPLAY_PIXELS_PERMISSION = nullptr;
$AWTPermission* AWTPermissions::CREATE_ROBOT_PERMISSION = nullptr;
$AWTPermission* AWTPermissions::WATCH_MOUSE_PERMISSION = nullptr;
$AWTPermission* AWTPermissions::SET_WINDOW_ALWAYS_ON_TOP_PERMISSION = nullptr;
$AWTPermission* AWTPermissions::ALL_AWT_EVENTS_PERMISSION = nullptr;
$AWTPermission* AWTPermissions::ACCESS_SYSTEM_TRAY_PERMISSION = nullptr;

void AWTPermissions::init$() {
}

void clinit$AWTPermissions($Class* class$) {
	$assignStatic(AWTPermissions::TOPLEVEL_WINDOW_PERMISSION, $new($AWTPermission, "showWindowWithoutWarningBanner"_s));
	$assignStatic(AWTPermissions::ACCESS_CLIPBOARD_PERMISSION, $new($AWTPermission, "accessClipboard"_s));
	$assignStatic(AWTPermissions::CHECK_AWT_EVENTQUEUE_PERMISSION, $new($AWTPermission, "accessEventQueue"_s));
	$assignStatic(AWTPermissions::TOOLKIT_MODALITY_PERMISSION, $new($AWTPermission, "toolkitModality"_s));
	$assignStatic(AWTPermissions::READ_DISPLAY_PIXELS_PERMISSION, $new($AWTPermission, "readDisplayPixels"_s));
	$assignStatic(AWTPermissions::CREATE_ROBOT_PERMISSION, $new($AWTPermission, "createRobot"_s));
	$assignStatic(AWTPermissions::WATCH_MOUSE_PERMISSION, $new($AWTPermission, "watchMousePointer"_s));
	$assignStatic(AWTPermissions::SET_WINDOW_ALWAYS_ON_TOP_PERMISSION, $new($AWTPermission, "setWindowAlwaysOnTop"_s));
	$assignStatic(AWTPermissions::ALL_AWT_EVENTS_PERMISSION, $new($AWTPermission, "listenToAllAWTEvents"_s));
	$assignStatic(AWTPermissions::ACCESS_SYSTEM_TRAY_PERMISSION, $new($AWTPermission, "accessSystemTray"_s));
}

AWTPermissions::AWTPermissions() {
}

$Class* AWTPermissions::load$($String* name, bool initialize) {
	$loadClass(AWTPermissions, name, initialize, &_AWTPermissions_ClassInfo_, clinit$AWTPermissions, allocate$AWTPermissions);
	return class$;
}

$Class* AWTPermissions::class$ = nullptr;

	} // awt
} // sun