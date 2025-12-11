#include <sun/lwawt/macosx/CTaskbarPeer.h>

#include <com/apple/eawt/Application.h>
#include <java/awt/Image.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/Taskbar$Feature.h>
#include <sun/lwawt/macosx/CTaskbarPeer$1.h>
#include <jcpp.h>

using $Application = ::com::apple::eawt::Application;
using $Image = ::java::awt::Image;
using $PopupMenu = ::java::awt::PopupMenu;
using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CTaskbarPeer$1 = ::sun::lwawt::macosx::CTaskbarPeer$1;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CTaskbarPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CTaskbarPeer::*)()>(&CTaskbarPeer::init$))},
	{"getIconImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getMenu", "()Ljava/awt/PopupMenu;", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/awt/Taskbar$Feature;)Z", nullptr, $PUBLIC},
	{"requestUserAttention", "(ZZ)V", nullptr, $PUBLIC},
	{"setIconBadge", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setMenu", "(Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC},
	{"setProgressValue", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CTaskbarPeer_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CTaskbarPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CTaskbarPeer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CTaskbarPeer",
	"java.lang.Object",
	"java.awt.peer.TaskbarPeer",
	nullptr,
	_CTaskbarPeer_MethodInfo_,
	nullptr,
	nullptr,
	_CTaskbarPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CTaskbarPeer$1"
};

$Object* allocate$CTaskbarPeer($Class* clazz) {
	return $of($alloc(CTaskbarPeer));
}

void CTaskbarPeer::init$() {
}

bool CTaskbarPeer::isSupported($Taskbar$Feature* feature) {
	$init($CTaskbarPeer$1);
	switch ($nc($CTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->get($nc((feature))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void CTaskbarPeer::setProgressValue(int32_t value) {
	$nc($($Application::getApplication()))->setDockIconProgress(value);
}

void CTaskbarPeer::setIconBadge($String* badge) {
	$nc($($Application::getApplication()))->setDockIconBadge(badge);
}

$Image* CTaskbarPeer::getIconImage() {
	return $nc($($Application::getApplication()))->getDockIconImage();
}

void CTaskbarPeer::setIconImage($Image* image) {
	$nc($($Application::getApplication()))->setDockIconImage(image);
}

$PopupMenu* CTaskbarPeer::getMenu() {
	return $nc($($Application::getApplication()))->getDockMenu();
}

void CTaskbarPeer::setMenu($PopupMenu* menu) {
	$nc($($Application::getApplication()))->setDockMenu(menu);
}

void CTaskbarPeer::requestUserAttention(bool enabled, bool critical) {
	if (enabled) {
		$nc($($Application::getApplication()))->requestUserAttention(critical);
	}
}

CTaskbarPeer::CTaskbarPeer() {
}

$Class* CTaskbarPeer::load$($String* name, bool initialize) {
	$loadClass(CTaskbarPeer, name, initialize, &_CTaskbarPeer_ClassInfo_, allocate$CTaskbarPeer);
	return class$;
}

$Class* CTaskbarPeer::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun