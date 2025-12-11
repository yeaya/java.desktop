#include <sun/awt/X11/XWindowPeer$1.h>

#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindowPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XWindowPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XWindowPeer$1, this$0)},
	{"val$gc", "Ljava/awt/GraphicsConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(XWindowPeer$1, val$gc)},
	{}
};

$MethodInfo _XWindowPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XWindowPeer;Ljava/awt/GraphicsConfiguration;)V", "()V", 0, $method(static_cast<void(XWindowPeer$1::*)($XWindowPeer*,$GraphicsConfiguration*)>(&XWindowPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XWindowPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XWindowPeer",
	"executeDisplayChangedOnEDT",
	"(Ljava/awt/GraphicsConfiguration;)V"
};

$InnerClassInfo _XWindowPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWindowPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWindowPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWindowPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XWindowPeer$1_FieldInfo_,
	_XWindowPeer$1_MethodInfo_,
	nullptr,
	&_XWindowPeer$1_EnclosingMethodInfo_,
	_XWindowPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XWindowPeer"
};

$Object* allocate$XWindowPeer$1($Class* clazz) {
	return $of($alloc(XWindowPeer$1));
}

void XWindowPeer$1::init$($XWindowPeer* this$0, $GraphicsConfiguration* val$gc) {
	$set(this, this$0, this$0);
	$set(this, val$gc, val$gc);
}

void XWindowPeer$1::run() {
	$nc($($AWTAccessor::getComponentAccessor()))->setGraphicsConfiguration(this->this$0->target, this->val$gc);
}

XWindowPeer$1::XWindowPeer$1() {
}

$Class* XWindowPeer$1::load$($String* name, bool initialize) {
	$loadClass(XWindowPeer$1, name, initialize, &_XWindowPeer$1_ClassInfo_, allocate$XWindowPeer$1);
	return class$;
}

$Class* XWindowPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun