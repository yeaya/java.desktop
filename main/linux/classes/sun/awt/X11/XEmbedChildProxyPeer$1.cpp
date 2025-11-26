#include <sun/awt/X11/XEmbedChildProxyPeer$1.h>

#include <java/awt/Component.h>
#include <sun/awt/X11/XEmbedChildProxy.h>
#include <sun/awt/X11/XEmbedChildProxyPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XEmbedChildProxy = ::sun::awt::X11::XEmbedChildProxy;
using $XEmbedChildProxyPeer = ::sun::awt::X11::XEmbedChildProxyPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedChildProxyPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedChildProxyPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedChildProxyPeer$1, this$0)},
	{}
};

$MethodInfo _XEmbedChildProxyPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedChildProxyPeer;)V", nullptr, 0, $method(static_cast<void(XEmbedChildProxyPeer$1::*)($XEmbedChildProxyPeer*)>(&XEmbedChildProxyPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedChildProxyPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedChildProxyPeer",
	"requestXEmbedFocus",
	"()V"
};

$InnerClassInfo _XEmbedChildProxyPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedChildProxyPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedChildProxyPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedChildProxyPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedChildProxyPeer$1_FieldInfo_,
	_XEmbedChildProxyPeer$1_MethodInfo_,
	nullptr,
	&_XEmbedChildProxyPeer$1_EnclosingMethodInfo_,
	_XEmbedChildProxyPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedChildProxyPeer"
};

$Object* allocate$XEmbedChildProxyPeer$1($Class* clazz) {
	return $of($alloc(XEmbedChildProxyPeer$1));
}

void XEmbedChildProxyPeer$1::init$($XEmbedChildProxyPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedChildProxyPeer$1::run() {
	$nc(this->this$0->proxy)->requestFocusInWindow();
}

XEmbedChildProxyPeer$1::XEmbedChildProxyPeer$1() {
}

$Class* XEmbedChildProxyPeer$1::load$($String* name, bool initialize) {
	$loadClass(XEmbedChildProxyPeer$1, name, initialize, &_XEmbedChildProxyPeer$1_ClassInfo_, allocate$XEmbedChildProxyPeer$1);
	return class$;
}

$Class* XEmbedChildProxyPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun