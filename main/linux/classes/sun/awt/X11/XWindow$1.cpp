#include <sun/awt/X11/XWindow$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindow$1_FieldInfo_[] = {
	{"val$e", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(XWindow$1, val$e)},
	{}
};

$MethodInfo _XWindow$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/AWTEvent;)V", "()V", 0, $method(static_cast<void(XWindow$1::*)($AWTEvent*)>(&XWindow$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XWindow$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XWindow",
	"sendEvent",
	"(Ljava/awt/AWTEvent;)V"
};

$InnerClassInfo _XWindow$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWindow$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWindow$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XWindow$1_FieldInfo_,
	_XWindow$1_MethodInfo_,
	nullptr,
	&_XWindow$1_EnclosingMethodInfo_,
	_XWindow$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XWindow"
};

$Object* allocate$XWindow$1($Class* clazz) {
	return $of($alloc(XWindow$1));
}

void XWindow$1::init$($AWTEvent* val$e) {
	$set(this, val$e, val$e);
}

void XWindow$1::run() {
	$useLocalCurrentObjectStackCache();
	$nc($($AWTAccessor::getAWTEventAccessor()))->setPosted(this->val$e);
	$nc(($cast($Component, $($nc(this->val$e)->getSource()))))->dispatchEvent(this->val$e);
}

XWindow$1::XWindow$1() {
}

$Class* XWindow$1::load$($String* name, bool initialize) {
	$loadClass(XWindow$1, name, initialize, &_XWindow$1_ClassInfo_, allocate$XWindow$1);
	return class$;
}

$Class* XWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun