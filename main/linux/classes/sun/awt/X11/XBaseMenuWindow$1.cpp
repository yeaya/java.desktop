#include <sun/awt/X11/XBaseMenuWindow$1.h>

#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XMenuPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;
using $XMenuPeer = ::sun::awt::X11::XMenuPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XBaseMenuWindow$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XBaseMenuWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$1, this$0)},
	{"val$submenuToShow", "Lsun/awt/X11/XMenuPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$1, val$submenuToShow)},
	{}
};

$MethodInfo _XBaseMenuWindow$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XBaseMenuWindow;Lsun/awt/X11/XMenuPeer;)V", "()V", 0, $method(static_cast<void(XBaseMenuWindow$1::*)($XBaseMenuWindow*,$XMenuPeer*)>(&XBaseMenuWindow$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XBaseMenuWindow$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XBaseMenuWindow",
	"selectItem",
	"(Lsun/awt/X11/XMenuItemPeer;Z)V"
};

$InnerClassInfo _XBaseMenuWindow$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XBaseMenuWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XBaseMenuWindow$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XBaseMenuWindow$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XBaseMenuWindow$1_FieldInfo_,
	_XBaseMenuWindow$1_MethodInfo_,
	nullptr,
	&_XBaseMenuWindow$1_EnclosingMethodInfo_,
	_XBaseMenuWindow$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XBaseMenuWindow"
};

$Object* allocate$XBaseMenuWindow$1($Class* clazz) {
	return $of($alloc(XBaseMenuWindow$1));
}

void XBaseMenuWindow$1::init$($XBaseMenuWindow* this$0, $XMenuPeer* val$submenuToShow) {
	$set(this, this$0, this$0);
	$set(this, val$submenuToShow, val$submenuToShow);
}

void XBaseMenuWindow$1::run() {
	this->this$0->doShowSubmenu(this->val$submenuToShow);
}

XBaseMenuWindow$1::XBaseMenuWindow$1() {
}

$Class* XBaseMenuWindow$1::load$($String* name, bool initialize) {
	$loadClass(XBaseMenuWindow$1, name, initialize, &_XBaseMenuWindow$1_ClassInfo_, allocate$XBaseMenuWindow$1);
	return class$;
}

$Class* XBaseMenuWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun