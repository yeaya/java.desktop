#include <sun/awt/X11/XMenuWindow$1.h>

#include <java/awt/Dimension.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XMenuWindow.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XMenuWindow = ::sun::awt::X11::XMenuWindow;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMenuWindow$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XMenuWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XMenuWindow$1, this$0)},
	{}
};

$MethodInfo _XMenuWindow$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XMenuWindow;)V", nullptr, 0, $method(static_cast<void(XMenuWindow$1::*)($XMenuWindow*)>(&XMenuWindow$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XMenuWindow$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XMenuWindow",
	"updateSize",
	"()V"
};

$InnerClassInfo _XMenuWindow$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMenuWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMenuWindow$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XMenuWindow$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XMenuWindow$1_FieldInfo_,
	_XMenuWindow$1_MethodInfo_,
	nullptr,
	&_XMenuWindow$1_EnclosingMethodInfo_,
	_XMenuWindow$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XMenuWindow"
};

$Object* allocate$XMenuWindow$1($Class* clazz) {
	return $of($alloc(XMenuWindow$1));
}

void XMenuWindow$1::init$($XMenuWindow* this$0) {
	$set(this, this$0, this$0);
}

void XMenuWindow$1::run() {
	$var($Dimension, dim, this->this$0->getDesiredSize());
	this->this$0->reshape(this->this$0->x, this->this$0->y, $nc(dim)->width, dim->height);
}

XMenuWindow$1::XMenuWindow$1() {
}

$Class* XMenuWindow$1::load$($String* name, bool initialize) {
	$loadClass(XMenuWindow$1, name, initialize, &_XMenuWindow$1_ClassInfo_, allocate$XMenuWindow$1);
	return class$;
}

$Class* XMenuWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun