#include <sun/awt/X11/XDecoratedPeer$1.h>

#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDecoratedPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XDecoratedPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XDecoratedPeer$1, this$0)},
	{}
};

$MethodInfo _XDecoratedPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XDecoratedPeer;)V", nullptr, 0, $method(static_cast<void(XDecoratedPeer$1::*)($XDecoratedPeer*)>(&XDecoratedPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XDecoratedPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XDecoratedPeer",
	"handleWindowFocusIn",
	"(J)V"
};

$InnerClassInfo _XDecoratedPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDecoratedPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XDecoratedPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XDecoratedPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XDecoratedPeer$1_FieldInfo_,
	_XDecoratedPeer$1_MethodInfo_,
	nullptr,
	&_XDecoratedPeer$1_EnclosingMethodInfo_,
	_XDecoratedPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XDecoratedPeer"
};

$Object* allocate$XDecoratedPeer$1($Class* clazz) {
	return $of($alloc(XDecoratedPeer$1));
}

void XDecoratedPeer$1::init$($XDecoratedPeer* this$0) {
	$set(this, this$0, this$0);
}

void XDecoratedPeer$1::run() {
	$var($XWindowPeer, fw, nullptr);
	$synchronized(this->this$0->getStateLock()) {
		$assign(fw, this->this$0->actualFocusedWindow);
		$set(this->this$0, actualFocusedWindow, nullptr);
		bool var$0 = nullptr == fw || !$nc(fw)->isVisible();
		if (var$0 || !$nc(fw)->isFocusableWindow()) {
			$assign(fw, this->this$0);
		}
	}
	$nc(fw)->handleWindowFocusIn_Dispatch();
}

XDecoratedPeer$1::XDecoratedPeer$1() {
}

$Class* XDecoratedPeer$1::load$($String* name, bool initialize) {
	$loadClass(XDecoratedPeer$1, name, initialize, &_XDecoratedPeer$1_ClassInfo_, allocate$XDecoratedPeer$1);
	return class$;
}

$Class* XDecoratedPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun