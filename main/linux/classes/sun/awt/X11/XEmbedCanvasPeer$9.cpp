#include <sun/awt/X11/XEmbedCanvasPeer$9.h>

#include <java/awt/Component.h>
#include <java/awt/dnd/DropTarget.h>
#include <sun/awt/X11/XEmbedCanvasPeer$XEmbedDropTarget.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XEmbedCanvasPeer$XEmbedDropTarget = ::sun::awt::X11::XEmbedCanvasPeer$XEmbedDropTarget;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer$9_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$9, this$0)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$9_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer$9::*)($XEmbedCanvasPeer*)>(&XEmbedCanvasPeer$9::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedCanvasPeer$9_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedCanvasPeer",
	"removeXEmbedDropTarget",
	"()V"
};

$InnerClassInfo _XEmbedCanvasPeer$9_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$9",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedCanvasPeer$9_FieldInfo_,
	_XEmbedCanvasPeer$9_MethodInfo_,
	nullptr,
	&_XEmbedCanvasPeer$9_EnclosingMethodInfo_,
	_XEmbedCanvasPeer$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$9($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$9));
}

void XEmbedCanvasPeer$9::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedCanvasPeer$9::run() {
	if ($instanceOf($XEmbedCanvasPeer$XEmbedDropTarget, $($nc(this->this$0->target)->getDropTarget()))) {
		$nc(this->this$0->target)->setDropTarget(nullptr);
	}
}

XEmbedCanvasPeer$9::XEmbedCanvasPeer$9() {
}

$Class* XEmbedCanvasPeer$9::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$9, name, initialize, &_XEmbedCanvasPeer$9_ClassInfo_, allocate$XEmbedCanvasPeer$9);
	return class$;
}

$Class* XEmbedCanvasPeer$9::class$ = nullptr;

		} // X11
	} // awt
} // sun