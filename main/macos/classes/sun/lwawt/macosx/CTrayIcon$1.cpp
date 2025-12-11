#include <sun/lwawt/macosx/CTrayIcon$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CTrayIcon.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CTrayIcon = ::sun::lwawt::macosx::CTrayIcon;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CTrayIcon$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CTrayIcon;", nullptr, $FINAL | $SYNTHETIC, $field(CTrayIcon$1, this$0)},
	{"val$event", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(CTrayIcon$1, val$event)},
	{}
};

$MethodInfo _CTrayIcon$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;Ljava/awt/AWTEvent;)V", "()V", 0, $method(static_cast<void(CTrayIcon$1::*)($CTrayIcon*,$AWTEvent*)>(&CTrayIcon$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CTrayIcon$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CTrayIcon",
	"postEvent",
	"(Ljava/awt/AWTEvent;)V"
};

$InnerClassInfo _CTrayIcon$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CTrayIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CTrayIcon$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CTrayIcon$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_CTrayIcon$1_FieldInfo_,
	_CTrayIcon$1_MethodInfo_,
	nullptr,
	&_CTrayIcon$1_EnclosingMethodInfo_,
	_CTrayIcon$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CTrayIcon"
};

$Object* allocate$CTrayIcon$1($Class* clazz) {
	return $of($alloc(CTrayIcon$1));
}

void CTrayIcon$1::init$($CTrayIcon* this$0, $AWTEvent* val$event) {
	$set(this, this$0, this$0);
	$set(this, val$event, val$event);
}

void CTrayIcon$1::run() {
	$SunToolkit::postEvent($($SunToolkit::targetToAppContext(this->this$0->target)), this->val$event);
}

CTrayIcon$1::CTrayIcon$1() {
}

$Class* CTrayIcon$1::load$($String* name, bool initialize) {
	$loadClass(CTrayIcon$1, name, initialize, &_CTrayIcon$1_ClassInfo_, allocate$CTrayIcon$1);
	return class$;
}

$Class* CTrayIcon$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun