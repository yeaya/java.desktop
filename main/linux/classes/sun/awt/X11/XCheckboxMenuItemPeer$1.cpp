#include <sun/awt/X11/XCheckboxMenuItemPeer$1.h>

#include <sun/awt/X11/XCheckboxMenuItemPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XCheckboxMenuItemPeer = ::sun::awt::X11::XCheckboxMenuItemPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XCheckboxMenuItemPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XCheckboxMenuItemPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XCheckboxMenuItemPeer$1, this$0)},
	{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(XCheckboxMenuItemPeer$1, val$when)},
	{}
};

$MethodInfo _XCheckboxMenuItemPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XCheckboxMenuItemPeer;J)V", "()V", 0, $method(static_cast<void(XCheckboxMenuItemPeer$1::*)($XCheckboxMenuItemPeer*,int64_t)>(&XCheckboxMenuItemPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XCheckboxMenuItemPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XCheckboxMenuItemPeer",
	"action",
	"(JI)V"
};

$InnerClassInfo _XCheckboxMenuItemPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XCheckboxMenuItemPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XCheckboxMenuItemPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XCheckboxMenuItemPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XCheckboxMenuItemPeer$1_FieldInfo_,
	_XCheckboxMenuItemPeer$1_MethodInfo_,
	nullptr,
	&_XCheckboxMenuItemPeer$1_EnclosingMethodInfo_,
	_XCheckboxMenuItemPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XCheckboxMenuItemPeer"
};

$Object* allocate$XCheckboxMenuItemPeer$1($Class* clazz) {
	return $of($alloc(XCheckboxMenuItemPeer$1));
}

void XCheckboxMenuItemPeer$1::init$($XCheckboxMenuItemPeer* this$0, int64_t val$when) {
	$set(this, this$0, this$0);
	this->val$when = val$when;
}

void XCheckboxMenuItemPeer$1::run() {
	this->this$0->doToggleState(this->val$when);
}

XCheckboxMenuItemPeer$1::XCheckboxMenuItemPeer$1() {
}

$Class* XCheckboxMenuItemPeer$1::load$($String* name, bool initialize) {
	$loadClass(XCheckboxMenuItemPeer$1, name, initialize, &_XCheckboxMenuItemPeer$1_ClassInfo_, allocate$XCheckboxMenuItemPeer$1);
	return class$;
}

$Class* XCheckboxMenuItemPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun