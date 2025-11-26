#include <sun/awt/X11/XTrayIconPeer$5.h>

#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$5_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$5, this$0)},
	{}
};

$MethodInfo _XTrayIconPeer$5_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$5::*)($XTrayIconPeer*)>(&XTrayIconPeer$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XTrayIconPeer$5_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTrayIconPeer",
	"dispose",
	"()V"
};

$InnerClassInfo _XTrayIconPeer$5_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_XTrayIconPeer$5_FieldInfo_,
	_XTrayIconPeer$5_MethodInfo_,
	nullptr,
	&_XTrayIconPeer$5_EnclosingMethodInfo_,
	_XTrayIconPeer$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$5($Class* clazz) {
	return $of($alloc(XTrayIconPeer$5));
}

void XTrayIconPeer$5::init$($XTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
}

void XTrayIconPeer$5::run() {
	this->this$0->disposeOnEDT();
}

XTrayIconPeer$5::XTrayIconPeer$5() {
}

$Class* XTrayIconPeer$5::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$5, name, initialize, &_XTrayIconPeer$5_ClassInfo_, allocate$XTrayIconPeer$5);
	return class$;
}

$Class* XTrayIconPeer$5::class$ = nullptr;

		} // X11
	} // awt
} // sun