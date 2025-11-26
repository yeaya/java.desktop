#include <sun/awt/X11/XEmbedCanvasPeer$8.h>

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

$FieldInfo _XEmbedCanvasPeer$8_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$8, this$0)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$8_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer$8::*)($XEmbedCanvasPeer*)>(&XEmbedCanvasPeer$8::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedCanvasPeer$8_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedCanvasPeer",
	"setXEmbedDropTarget",
	"()V"
};

$InnerClassInfo _XEmbedCanvasPeer$8_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$8",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedCanvasPeer$8_FieldInfo_,
	_XEmbedCanvasPeer$8_MethodInfo_,
	nullptr,
	&_XEmbedCanvasPeer$8_EnclosingMethodInfo_,
	_XEmbedCanvasPeer$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$8($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$8));
}

void XEmbedCanvasPeer$8::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedCanvasPeer$8::run() {
	$nc(this->this$0->target)->setDropTarget($$new($XEmbedCanvasPeer$XEmbedDropTarget));
}

XEmbedCanvasPeer$8::XEmbedCanvasPeer$8() {
}

$Class* XEmbedCanvasPeer$8::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$8, name, initialize, &_XEmbedCanvasPeer$8_ClassInfo_, allocate$XEmbedCanvasPeer$8);
	return class$;
}

$Class* XEmbedCanvasPeer$8::class$ = nullptr;

		} // X11
	} // awt
} // sun