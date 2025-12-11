#include <sun/lwawt/macosx/CAccessibility$36.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <javax/accessibility/Accessible.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <sun/lwawt/macosx/CPlatformView.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CPlatformView = ::sun::lwawt::macosx::CPlatformView;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$36_FieldInfo_[] = {
	{"val$ax", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$36, val$ax)},
	{}
};

$MethodInfo _CAccessibility$36_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$36::*)($Accessible*)>(&CAccessibility$36::init$))},
	{"call", "()Ljava/lang/Long;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$36_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAWTView",
	"(Ljavax/accessibility/Accessible;)J"
};

$InnerClassInfo _CAccessibility$36_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$36", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$36_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$36",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$36_FieldInfo_,
	_CAccessibility$36_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Long;>;",
	&_CAccessibility$36_EnclosingMethodInfo_,
	_CAccessibility$36_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$36($Class* clazz) {
	return $of($alloc(CAccessibility$36));
}

void CAccessibility$36::init$($Accessible* val$ax) {
	$set(this, val$ax, val$ax);
}

$Object* CAccessibility$36::call() {
	$useLocalCurrentObjectStackCache();
	$var($Component, cont, $cast($Component, this->val$ax));
	while (cont != nullptr && !($instanceOf($Window, cont))) {
		$assign(cont, cont->getParent());
	}
	if (cont != nullptr) {
		$var($LWWindowPeer, peer, $cast($LWWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(cont)));
		if (peer != nullptr) {
			return $of($Long::valueOf($nc($($nc(($cast($CPlatformWindow, $(peer->getPlatformWindow()))))->getContentView()))->getAWTView()));
		}
	}
	return $of($Long::valueOf((int64_t)0));
}

CAccessibility$36::CAccessibility$36() {
}

$Class* CAccessibility$36::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$36, name, initialize, &_CAccessibility$36_ClassInfo_, allocate$CAccessibility$36);
	return class$;
}

$Class* CAccessibility$36::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun