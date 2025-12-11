#include <sun/lwawt/macosx/CSystemTray.h>

#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CSystemTray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSystemTray::*)()>(&CSystemTray::init$))},
	{"getTrayIconSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CSystemTray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CSystemTray",
	"java.lang.Object",
	"java.awt.peer.SystemTrayPeer",
	nullptr,
	_CSystemTray_MethodInfo_
};

$Object* allocate$CSystemTray($Class* clazz) {
	return $of($alloc(CSystemTray));
}

void CSystemTray::init$() {
}

$Dimension* CSystemTray::getTrayIconSize() {
	return $new($Dimension, 20, 20);
}

CSystemTray::CSystemTray() {
}

$Class* CSystemTray::load$($String* name, bool initialize) {
	$loadClass(CSystemTray, name, initialize, &_CSystemTray_ClassInfo_, allocate$CSystemTray);
	return class$;
}

$Class* CSystemTray::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun