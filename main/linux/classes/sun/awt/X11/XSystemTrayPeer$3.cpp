#include <sun/awt/X11/XSystemTrayPeer$3.h>

#include <java/awt/SystemTray.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/AWTAccessor$TrayIconAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XSystemTrayPeer.h>
#include <jcpp.h>

using $TrayIconArray = $Array<::java::awt::TrayIcon>;
using $SystemTray = ::java::awt::SystemTray;
using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$TrayIconAccessor = ::sun::awt::AWTAccessor$TrayIconAccessor;
using $XSystemTrayPeer = ::sun::awt::X11::XSystemTrayPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XSystemTrayPeer$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XSystemTrayPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XSystemTrayPeer$3, this$0)},
	{}
};

$MethodInfo _XSystemTrayPeer$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XSystemTrayPeer;)V", nullptr, 0, $method(static_cast<void(XSystemTrayPeer$3::*)($XSystemTrayPeer*)>(&XSystemTrayPeer$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XSystemTrayPeer$3_EnclosingMethodInfo_ = {
	"sun.awt.X11.XSystemTrayPeer",
	"removeTrayPeers",
	"()V"
};

$InnerClassInfo _XSystemTrayPeer$3_InnerClassesInfo_[] = {
	{"sun.awt.X11.XSystemTrayPeer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XSystemTrayPeer$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XSystemTrayPeer$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_XSystemTrayPeer$3_FieldInfo_,
	_XSystemTrayPeer$3_MethodInfo_,
	nullptr,
	&_XSystemTrayPeer$3_EnclosingMethodInfo_,
	_XSystemTrayPeer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XSystemTrayPeer"
};

$Object* allocate$XSystemTrayPeer$3($Class* clazz) {
	return $of($alloc(XSystemTrayPeer$3));
}

void XSystemTrayPeer$3::init$($XSystemTrayPeer* this$0) {
	$set(this, this$0, this$0);
}

void XSystemTrayPeer$3::run() {
	$useLocalCurrentObjectStackCache();
	$var($TrayIconArray, icons, $nc(this->this$0->target)->getTrayIcons());
	{
		$var($TrayIconArray, arr$, icons);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TrayIcon, ti, arr$->get(i$));
			{
				$nc($($AWTAccessor::getTrayIconAccessor()))->removeNotify(ti);
			}
		}
	}
}

XSystemTrayPeer$3::XSystemTrayPeer$3() {
}

$Class* XSystemTrayPeer$3::load$($String* name, bool initialize) {
	$loadClass(XSystemTrayPeer$3, name, initialize, &_XSystemTrayPeer$3_ClassInfo_, allocate$XSystemTrayPeer$3);
	return class$;
}

$Class* XSystemTrayPeer$3::class$ = nullptr;

		} // X11
	} // awt
} // sun