#include <sun/awt/X11/XSystemTrayPeer$2.h>

#include <java/awt/AWTException.h>
#include <java/awt/SystemTray.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/AWTAccessor$TrayIconAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XSystemTrayPeer.h>
#include <jcpp.h>

using $TrayIconArray = $Array<::java::awt::TrayIcon>;
using $AWTException = ::java::awt::AWTException;
using $SystemTray = ::java::awt::SystemTray;
using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$TrayIconAccessor = ::sun::awt::AWTAccessor$TrayIconAccessor;
using $XSystemTrayPeer = ::sun::awt::X11::XSystemTrayPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XSystemTrayPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XSystemTrayPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XSystemTrayPeer$2, this$0)},
	{}
};

$MethodInfo _XSystemTrayPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XSystemTrayPeer;)V", nullptr, 0, $method(static_cast<void(XSystemTrayPeer$2::*)($XSystemTrayPeer*)>(&XSystemTrayPeer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XSystemTrayPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XSystemTrayPeer",
	"createTrayPeers",
	"()V"
};

$InnerClassInfo _XSystemTrayPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XSystemTrayPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XSystemTrayPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XSystemTrayPeer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_XSystemTrayPeer$2_FieldInfo_,
	_XSystemTrayPeer$2_MethodInfo_,
	nullptr,
	&_XSystemTrayPeer$2_EnclosingMethodInfo_,
	_XSystemTrayPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XSystemTrayPeer"
};

$Object* allocate$XSystemTrayPeer$2($Class* clazz) {
	return $of($alloc(XSystemTrayPeer$2));
}

void XSystemTrayPeer$2::init$($XSystemTrayPeer* this$0) {
	$set(this, this$0, this$0);
}

void XSystemTrayPeer$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($TrayIconArray, icons, $nc(this->this$0->target)->getTrayIcons());
	try {
		{
			$var($TrayIconArray, arr$, icons);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($TrayIcon, ti, arr$->get(i$));
				{
					$nc($($AWTAccessor::getTrayIconAccessor()))->addNotify(ti);
				}
			}
		}
	} catch ($AWTException& e) {
	}
}

XSystemTrayPeer$2::XSystemTrayPeer$2() {
}

$Class* XSystemTrayPeer$2::load$($String* name, bool initialize) {
	$loadClass(XSystemTrayPeer$2, name, initialize, &_XSystemTrayPeer$2_ClassInfo_, allocate$XSystemTrayPeer$2);
	return class$;
}

$Class* XSystemTrayPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun