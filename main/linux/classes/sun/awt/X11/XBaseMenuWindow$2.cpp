#include <sun/awt/X11/XBaseMenuWindow$2.h>

#include <sun/awt/X11/XBaseMenuWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XBaseMenuWindow$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XBaseMenuWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$2, this$0)},
	{}
};

$MethodInfo _XBaseMenuWindow$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XBaseMenuWindow;)V", nullptr, 0, $method(static_cast<void(XBaseMenuWindow$2::*)($XBaseMenuWindow*)>(&XBaseMenuWindow$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XBaseMenuWindow$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XBaseMenuWindow",
	"dispose",
	"()V"
};

$InnerClassInfo _XBaseMenuWindow$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XBaseMenuWindow$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XBaseMenuWindow$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XBaseMenuWindow$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_XBaseMenuWindow$2_FieldInfo_,
	_XBaseMenuWindow$2_MethodInfo_,
	nullptr,
	&_XBaseMenuWindow$2_EnclosingMethodInfo_,
	_XBaseMenuWindow$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XBaseMenuWindow"
};

$Object* allocate$XBaseMenuWindow$2($Class* clazz) {
	return $of($alloc(XBaseMenuWindow$2));
}

void XBaseMenuWindow$2::init$($XBaseMenuWindow* this$0) {
	$set(this, this$0, this$0);
}

void XBaseMenuWindow$2::run() {
	this->this$0->doDispose();
}

XBaseMenuWindow$2::XBaseMenuWindow$2() {
}

$Class* XBaseMenuWindow$2::load$($String* name, bool initialize) {
	$loadClass(XBaseMenuWindow$2, name, initialize, &_XBaseMenuWindow$2_ClassInfo_, allocate$XBaseMenuWindow$2);
	return class$;
}

$Class* XBaseMenuWindow$2::class$ = nullptr;

		} // X11
	} // awt
} // sun