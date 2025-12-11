#include <sun/awt/windows/WDropTargetContextPeer$1.h>

#include <sun/awt/dnd/SunDropTargetContextPeer$EventDispatcher.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <sun/awt/windows/WDropTargetContextPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunDropTargetContextPeer$EventDispatcher = ::sun::awt::dnd::SunDropTargetContextPeer$EventDispatcher;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;
using $WDropTargetContextPeer = ::sun::awt::windows::WDropTargetContextPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WDropTargetContextPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WDropTargetContextPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WDropTargetContextPeer$1, this$0)},
	{"val$e", "Lsun/awt/dnd/SunDropTargetEvent;", nullptr, $FINAL | $SYNTHETIC, $field(WDropTargetContextPeer$1, val$e)},
	{}
};

$MethodInfo _WDropTargetContextPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WDropTargetContextPeer;Lsun/awt/dnd/SunDropTargetEvent;)V", "()V", 0, $method(static_cast<void(WDropTargetContextPeer$1::*)($WDropTargetContextPeer*,$SunDropTargetEvent*)>(&WDropTargetContextPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WDropTargetContextPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WDropTargetContextPeer",
	"eventPosted",
	"(Lsun/awt/dnd/SunDropTargetEvent;)V"
};

$InnerClassInfo _WDropTargetContextPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WDropTargetContextPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WDropTargetContextPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WDropTargetContextPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WDropTargetContextPeer$1_FieldInfo_,
	_WDropTargetContextPeer$1_MethodInfo_,
	nullptr,
	&_WDropTargetContextPeer$1_EnclosingMethodInfo_,
	_WDropTargetContextPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WDropTargetContextPeer"
};

$Object* allocate$WDropTargetContextPeer$1($Class* clazz) {
	return $of($alloc(WDropTargetContextPeer$1));
}

void WDropTargetContextPeer$1::init$($WDropTargetContextPeer* this$0, $SunDropTargetEvent* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

void WDropTargetContextPeer$1::run() {
	$nc($($nc(this->val$e)->getDispatcher()))->unregisterAllEvents();
}

WDropTargetContextPeer$1::WDropTargetContextPeer$1() {
}

$Class* WDropTargetContextPeer$1::load$($String* name, bool initialize) {
	$loadClass(WDropTargetContextPeer$1, name, initialize, &_WDropTargetContextPeer$1_ClassInfo_, allocate$WDropTargetContextPeer$1);
	return class$;
}

$Class* WDropTargetContextPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun