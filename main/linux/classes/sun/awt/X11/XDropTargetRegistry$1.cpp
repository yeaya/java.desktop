#include <sun/awt/X11/XDropTargetRegistry$1.h>

#include <sun/awt/X11/XDropTargetRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDropTargetRegistry$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XDropTargetRegistry;", nullptr, $FINAL | $SYNTHETIC, $field(XDropTargetRegistry$1, this$0)},
	{"val$window", "J", nullptr, $FINAL | $SYNTHETIC, $field(XDropTargetRegistry$1, val$window)},
	{}
};

$MethodInfo _XDropTargetRegistry$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XDropTargetRegistry;J)V", "()V", 0, $method(static_cast<void(XDropTargetRegistry$1::*)($XDropTargetRegistry*,int64_t)>(&XDropTargetRegistry$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XDropTargetRegistry$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XDropTargetRegistry",
	"addDelayedRegistrationEntry",
	"(J)V"
};

$InnerClassInfo _XDropTargetRegistry$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDropTargetRegistry$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XDropTargetRegistry$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XDropTargetRegistry$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XDropTargetRegistry$1_FieldInfo_,
	_XDropTargetRegistry$1_MethodInfo_,
	nullptr,
	&_XDropTargetRegistry$1_EnclosingMethodInfo_,
	_XDropTargetRegistry$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XDropTargetRegistry"
};

$Object* allocate$XDropTargetRegistry$1($Class* clazz) {
	return $of($alloc(XDropTargetRegistry$1));
}

void XDropTargetRegistry$1::init$($XDropTargetRegistry* this$0, int64_t val$window) {
	$set(this, this$0, this$0);
	this->val$window = val$window;
}

void XDropTargetRegistry$1::run() {
	this->this$0->removeDelayedRegistrationEntry(this->val$window);
	this->this$0->registerDropSite(this->val$window);
}

XDropTargetRegistry$1::XDropTargetRegistry$1() {
}

$Class* XDropTargetRegistry$1::load$($String* name, bool initialize) {
	$loadClass(XDropTargetRegistry$1, name, initialize, &_XDropTargetRegistry$1_ClassInfo_, allocate$XDropTargetRegistry$1);
	return class$;
}

$Class* XDropTargetRegistry$1::class$ = nullptr;

		} // X11
	} // awt
} // sun