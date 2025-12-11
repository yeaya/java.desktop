#include <sun/awt/X11/XWarningWindow$3.h>

#include <sun/awt/X11/XWarningWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWarningWindow$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$3, this$0)},
	{}
};

$MethodInfo _XWarningWindow$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XWarningWindow;)V", nullptr, 0, $method(static_cast<void(XWarningWindow$3::*)($XWarningWindow*)>(&XWarningWindow$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XWarningWindow$3_EnclosingMethodInfo_ = {
	"sun.awt.X11.XWarningWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _XWarningWindow$3_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWarningWindow$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWarningWindow$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWarningWindow$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_XWarningWindow$3_FieldInfo_,
	_XWarningWindow$3_MethodInfo_,
	nullptr,
	&_XWarningWindow$3_EnclosingMethodInfo_,
	_XWarningWindow$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XWarningWindow"
};

$Object* allocate$XWarningWindow$3($Class* clazz) {
	return $of($alloc(XWarningWindow$3));
}

void XWarningWindow$3::init$($XWarningWindow* this$0) {
	$set(this, this$0, this$0);
}

void XWarningWindow$3::run() {
	this->this$0->xSetVisible(false);
}

XWarningWindow$3::XWarningWindow$3() {
}

$Class* XWarningWindow$3::load$($String* name, bool initialize) {
	$loadClass(XWarningWindow$3, name, initialize, &_XWarningWindow$3_ClassInfo_, allocate$XWarningWindow$3);
	return class$;
}

$Class* XWarningWindow$3::class$ = nullptr;

		} // X11
	} // awt
} // sun