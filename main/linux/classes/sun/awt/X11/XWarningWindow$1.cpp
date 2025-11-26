#include <sun/awt/X11/XWarningWindow$1.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XWarningWindow.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$Tooltip$LiveArguments = ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWarningWindow$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$1, this$0)},
	{}
};

$MethodInfo _XWarningWindow$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XWarningWindow;)V", nullptr, 0, $method(static_cast<void(XWarningWindow$1::*)($XWarningWindow*)>(&XWarningWindow$1::init$))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getTooltipString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isDisposed", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XWarningWindow$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XWarningWindow",
	"<init>",
	"(Ljava/awt/Window;JLsun/awt/X11/XWindowPeer;)V"
};

$InnerClassInfo _XWarningWindow$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWarningWindow$1", nullptr, nullptr, 0},
	{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Tooltip$LiveArguments", "sun.awt.X11.InfoWindow$Tooltip", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XWarningWindow$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWarningWindow$1",
	"java.lang.Object",
	"sun.awt.X11.InfoWindow$Tooltip$LiveArguments",
	_XWarningWindow$1_FieldInfo_,
	_XWarningWindow$1_MethodInfo_,
	nullptr,
	&_XWarningWindow$1_EnclosingMethodInfo_,
	_XWarningWindow$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XWarningWindow"
};

$Object* allocate$XWarningWindow$1($Class* clazz) {
	return $of($alloc(XWarningWindow$1));
}

void XWarningWindow$1::init$($XWarningWindow* this$0) {
	$set(this, this$0, this$0);
}

bool XWarningWindow$1::isDisposed() {
	return this->this$0->isDisposed();
}

$Rectangle* XWarningWindow$1::getBounds() {
	return this->this$0->getBounds();
}

$String* XWarningWindow$1::getTooltipString() {
	return $nc(this->this$0->ownerWindow)->getWarningString();
}

XWarningWindow$1::XWarningWindow$1() {
}

$Class* XWarningWindow$1::load$($String* name, bool initialize) {
	$loadClass(XWarningWindow$1, name, initialize, &_XWarningWindow$1_ClassInfo_, allocate$XWarningWindow$1);
	return class$;
}

$Class* XWarningWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun