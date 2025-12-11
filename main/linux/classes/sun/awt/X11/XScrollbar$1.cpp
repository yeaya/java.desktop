#include <sun/awt/X11/XScrollbar$1.h>

#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XScrollbarClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XScrollbarClient = ::sun::awt::X11::XScrollbarClient;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XScrollbar$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XScrollbar;", nullptr, $FINAL | $SYNTHETIC, $field(XScrollbar$1, this$0)},
	{"val$isAdjusting", "Z", nullptr, $FINAL | $SYNTHETIC, $field(XScrollbar$1, val$isAdjusting)},
	{"val$value", "I", nullptr, $FINAL | $SYNTHETIC, $field(XScrollbar$1, val$value)},
	{"val$mode", "I", nullptr, $FINAL | $SYNTHETIC, $field(XScrollbar$1, val$mode)},
	{}
};

$MethodInfo _XScrollbar$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XScrollbar;IIZ)V", "()V", 0, $method(static_cast<void(XScrollbar$1::*)($XScrollbar*,int32_t,int32_t,bool)>(&XScrollbar$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XScrollbar$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XScrollbar",
	"notifyValue",
	"(IZ)V"
};

$InnerClassInfo _XScrollbar$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XScrollbar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XScrollbar$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XScrollbar$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XScrollbar$1_FieldInfo_,
	_XScrollbar$1_MethodInfo_,
	nullptr,
	&_XScrollbar$1_EnclosingMethodInfo_,
	_XScrollbar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XScrollbar"
};

$Object* allocate$XScrollbar$1($Class* clazz) {
	return $of($alloc(XScrollbar$1));
}

void XScrollbar$1::init$($XScrollbar* this$0, int32_t val$mode, int32_t val$value, bool val$isAdjusting) {
	$set(this, this$0, this$0);
	this->val$mode = val$mode;
	this->val$value = val$value;
	this->val$isAdjusting = val$isAdjusting;
}

void XScrollbar$1::run() {
	$nc(this->this$0->sb)->notifyValue(this->this$0, this->val$mode, this->val$value, this->val$isAdjusting);
}

XScrollbar$1::XScrollbar$1() {
}

$Class* XScrollbar$1::load$($String* name, bool initialize) {
	$loadClass(XScrollbar$1, name, initialize, &_XScrollbar$1_ClassInfo_, allocate$XScrollbar$1);
	return class$;
}

$Class* XScrollbar$1::class$ = nullptr;

		} // X11
	} // awt
} // sun