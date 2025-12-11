#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver$1.h>

#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XTrayIconPeer$IconCanvas = ::sun::awt::X11::XTrayIconPeer$IconCanvas;
using $XTrayIconPeer$IconCanvas$IconObserver = ::sun::awt::X11::XTrayIconPeer$IconCanvas$IconObserver;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$IconCanvas$IconObserver$1_FieldInfo_[] = {
	{"this$1", "Lsun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$IconCanvas$IconObserver$1, this$1)},
	{}
};

$MethodInfo _XTrayIconPeer$IconCanvas$IconObserver$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$IconCanvas$IconObserver$1::*)($XTrayIconPeer$IconCanvas$IconObserver*)>(&XTrayIconPeer$IconCanvas$IconObserver$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XTrayIconPeer$IconCanvas$IconObserver$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver",
	"imageUpdate",
	"(Ljava/awt/Image;IIIII)Z"
};

$InnerClassInfo _XTrayIconPeer$IconCanvas$IconObserver$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$IconCanvas", "sun.awt.X11.XTrayIconPeer", "IconCanvas", $PUBLIC | $STATIC},
	{"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver", "sun.awt.X11.XTrayIconPeer$IconCanvas", "IconObserver", 0},
	{"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer$IconCanvas$IconObserver$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XTrayIconPeer$IconCanvas$IconObserver$1_FieldInfo_,
	_XTrayIconPeer$IconCanvas$IconObserver$1_MethodInfo_,
	nullptr,
	&_XTrayIconPeer$IconCanvas$IconObserver$1_EnclosingMethodInfo_,
	_XTrayIconPeer$IconCanvas$IconObserver$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$IconCanvas$IconObserver$1($Class* clazz) {
	return $of($alloc(XTrayIconPeer$IconCanvas$IconObserver$1));
}

void XTrayIconPeer$IconCanvas$IconObserver$1::init$($XTrayIconPeer$IconCanvas$IconObserver* this$1) {
	$set(this, this$1, this$1);
}

void XTrayIconPeer$IconCanvas$IconObserver$1::run() {
	$nc(this->this$1->this$0)->repaintImage(false);
}

XTrayIconPeer$IconCanvas$IconObserver$1::XTrayIconPeer$IconCanvas$IconObserver$1() {
}

$Class* XTrayIconPeer$IconCanvas$IconObserver$1::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$IconCanvas$IconObserver$1, name, initialize, &_XTrayIconPeer$IconCanvas$IconObserver$1_ClassInfo_, allocate$XTrayIconPeer$IconCanvas$IconObserver$1);
	return class$;
}

$Class* XTrayIconPeer$IconCanvas$IconObserver$1::class$ = nullptr;

		} // X11
	} // awt
} // sun