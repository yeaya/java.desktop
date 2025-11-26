#include <sun/awt/X11/XBaseMenuWindow$3.h>

#include <java/awt/AWTEvent.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XBaseMenuWindow$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XBaseMenuWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$3, this$0)},
	{"val$event", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$3, val$event)},
	{}
};

$MethodInfo _XBaseMenuWindow$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XBaseMenuWindow;Ljava/awt/AWTEvent;)V", "()V", 0, $method(static_cast<void(XBaseMenuWindow$3::*)($XBaseMenuWindow*,$AWTEvent*)>(&XBaseMenuWindow$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XBaseMenuWindow$3_EnclosingMethodInfo_ = {
	"sun.awt.X11.XBaseMenuWindow",
	"postEvent",
	"(Ljava/awt/AWTEvent;)V"
};

$InnerClassInfo _XBaseMenuWindow$3_InnerClassesInfo_[] = {
	{"sun.awt.X11.XBaseMenuWindow$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XBaseMenuWindow$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XBaseMenuWindow$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_XBaseMenuWindow$3_FieldInfo_,
	_XBaseMenuWindow$3_MethodInfo_,
	nullptr,
	&_XBaseMenuWindow$3_EnclosingMethodInfo_,
	_XBaseMenuWindow$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XBaseMenuWindow"
};

$Object* allocate$XBaseMenuWindow$3($Class* clazz) {
	return $of($alloc(XBaseMenuWindow$3));
}

void XBaseMenuWindow$3::init$($XBaseMenuWindow* this$0, $AWTEvent* val$event) {
	$set(this, this$0, this$0);
	$set(this, val$event, val$event);
}

void XBaseMenuWindow$3::run() {
	this->this$0->handleEvent(this->val$event);
}

XBaseMenuWindow$3::XBaseMenuWindow$3() {
}

$Class* XBaseMenuWindow$3::load$($String* name, bool initialize) {
	$loadClass(XBaseMenuWindow$3, name, initialize, &_XBaseMenuWindow$3_ClassInfo_, allocate$XBaseMenuWindow$3);
	return class$;
}

$Class* XBaseMenuWindow$3::class$ = nullptr;

		} // X11
	} // awt
} // sun