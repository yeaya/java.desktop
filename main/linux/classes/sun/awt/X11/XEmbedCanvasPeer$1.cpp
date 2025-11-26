#include <sun/awt/X11/XEmbedCanvasPeer$1.h>

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

$FieldInfo _XEmbedCanvasPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$1, this$0)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer$1::*)($XEmbedCanvasPeer*)>(&XEmbedCanvasPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedCanvasPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedCanvasPeer",
	"focusNext",
	"()V"
};

$InnerClassInfo _XEmbedCanvasPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedCanvasPeer$1_FieldInfo_,
	_XEmbedCanvasPeer$1_MethodInfo_,
	nullptr,
	&_XEmbedCanvasPeer$1_EnclosingMethodInfo_,
	_XEmbedCanvasPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$1($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$1));
}

void XEmbedCanvasPeer$1::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedCanvasPeer$1::run() {
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->focusNextComponent(this->this$0->target);
}

XEmbedCanvasPeer$1::XEmbedCanvasPeer$1() {
}

$Class* XEmbedCanvasPeer$1::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$1, name, initialize, &_XEmbedCanvasPeer$1_ClassInfo_, allocate$XEmbedCanvasPeer$1);
	return class$;
}

$Class* XEmbedCanvasPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun