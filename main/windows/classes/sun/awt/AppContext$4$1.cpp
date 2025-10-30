#include <sun/awt/AppContext$4$1.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/SystemTray.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/AppContext$4.h>
#include <jcpp.h>

using $TrayIconArray = $Array<::java::awt::TrayIcon>;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $SystemTray = ::java::awt::SystemTray;
using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AppContext$4 = ::sun::awt::AppContext$4;

namespace sun {
	namespace awt {

$FieldInfo _AppContext$4$1_FieldInfo_[] = {
	{"this$1", "Lsun/awt/AppContext$4;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$4$1, this$1)},
	{}
};

$MethodInfo _AppContext$4$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/AppContext$4;)V", nullptr, 0, $method(static_cast<void(AppContext$4$1::*)($AppContext$4*)>(&AppContext$4$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AppContext$4$1_EnclosingMethodInfo_ = {
	"sun.awt.AppContext$4",
	"run",
	"()V"
};

$InnerClassInfo _AppContext$4$1_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$4", nullptr, nullptr, 0},
	{"sun.awt.AppContext$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppContext$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AppContext$4$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AppContext$4$1_FieldInfo_,
	_AppContext$4$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_AppContext$4$1_EnclosingMethodInfo_,
	_AppContext$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$4$1($Class* clazz) {
	return $of($alloc(AppContext$4$1));
}

void AppContext$4$1::init$($AppContext$4* this$1) {
	$set(this, this$1, this$1);
}

$Object* AppContext$4$1::run() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$GraphicsEnvironment::isHeadless();
	if (var$0 && $SystemTray::isSupported()) {
		$var($SystemTray, systemTray, $SystemTray::getSystemTray());
		$var($TrayIconArray, trayIconsToDispose, $nc(systemTray)->getTrayIcons());
		{
			$var($TrayIconArray, arr$, trayIconsToDispose);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($TrayIcon, ti, arr$->get(i$));
				{
					systemTray->remove(ti);
				}
			}
		}
	}
	return $of(nullptr);
}

AppContext$4$1::AppContext$4$1() {
}

$Class* AppContext$4$1::load$($String* name, bool initialize) {
	$loadClass(AppContext$4$1, name, initialize, &_AppContext$4$1_ClassInfo_, allocate$AppContext$4$1);
	return class$;
}

$Class* AppContext$4$1::class$ = nullptr;

	} // awt
} // sun