#include <sun/awt/X11/XEmbedCanvasPeer$2.h>

#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$2, this$0)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer$2::*)($XEmbedCanvasPeer*)>(&XEmbedCanvasPeer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedCanvasPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedCanvasPeer",
	"focusPrev",
	"()V"
};

$InnerClassInfo _XEmbedCanvasPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedCanvasPeer$2_FieldInfo_,
	_XEmbedCanvasPeer$2_MethodInfo_,
	nullptr,
	&_XEmbedCanvasPeer$2_EnclosingMethodInfo_,
	_XEmbedCanvasPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$2($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$2));
}

void XEmbedCanvasPeer$2::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedCanvasPeer$2::run() {
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->focusPreviousComponent(this->this$0->target);
}

XEmbedCanvasPeer$2::XEmbedCanvasPeer$2() {
}

$Class* XEmbedCanvasPeer$2::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$2, name, initialize, &_XEmbedCanvasPeer$2_ClassInfo_, allocate$XEmbedCanvasPeer$2);
	return class$;
}

$Class* XEmbedCanvasPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun