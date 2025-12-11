#include <sun/awt/X11/XEmbedClientHelper$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <sun/awt/X11/XEmbedClientHelper.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbedClientHelper = ::sun::awt::X11::XEmbedClientHelper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedClientHelper$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedClientHelper;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedClientHelper$1, this$0)},
	{}
};

$MethodInfo _XEmbedClientHelper$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedClientHelper;)V", nullptr, 0, $method(static_cast<void(XEmbedClientHelper$1::*)($XEmbedClientHelper*)>(&XEmbedClientHelper$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedClientHelper$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedClientHelper",
	"handleFocusIn",
	"(I)V"
};

$InnerClassInfo _XEmbedClientHelper$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedClientHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedClientHelper$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedClientHelper$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedClientHelper$1_FieldInfo_,
	_XEmbedClientHelper$1_MethodInfo_,
	nullptr,
	&_XEmbedClientHelper$1_EnclosingMethodInfo_,
	_XEmbedClientHelper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedClientHelper"
};

$Object* allocate$XEmbedClientHelper$1($Class* clazz) {
	return $of($alloc(XEmbedClientHelper$1));
}

void XEmbedClientHelper$1::init$($XEmbedClientHelper* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedClientHelper$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, $nc($($nc(($cast($Container, $nc(this->this$0->embedded)->target)))->getFocusTraversalPolicy()))->getFirstComponent($cast($Container, $nc(this->this$0->embedded)->target)));
	if (comp != nullptr) {
		comp->requestFocusInWindow();
	}
}

XEmbedClientHelper$1::XEmbedClientHelper$1() {
}

$Class* XEmbedClientHelper$1::load$($String* name, bool initialize) {
	$loadClass(XEmbedClientHelper$1, name, initialize, &_XEmbedClientHelper$1_ClassInfo_, allocate$XEmbedClientHelper$1);
	return class$;
}

$Class* XEmbedClientHelper$1::class$ = nullptr;

		} // X11
	} // awt
} // sun