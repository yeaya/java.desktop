#include <sun/awt/X11/XEmbedCanvasPeer$3.h>

#include <java/awt/Component.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$3, this$0)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer$3::*)($XEmbedCanvasPeer*)>(&XEmbedCanvasPeer$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedCanvasPeer$3_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedCanvasPeer",
	"requestXEmbedFocus",
	"()V"
};

$InnerClassInfo _XEmbedCanvasPeer$3_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedCanvasPeer$3_FieldInfo_,
	_XEmbedCanvasPeer$3_MethodInfo_,
	nullptr,
	&_XEmbedCanvasPeer$3_EnclosingMethodInfo_,
	_XEmbedCanvasPeer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$3($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$3));
}

void XEmbedCanvasPeer$3::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedCanvasPeer$3::run() {
	$nc(this->this$0->target)->requestFocus();
}

XEmbedCanvasPeer$3::XEmbedCanvasPeer$3() {
}

$Class* XEmbedCanvasPeer$3::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$3, name, initialize, &_XEmbedCanvasPeer$3_ClassInfo_, allocate$XEmbedCanvasPeer$3);
	return class$;
}

$Class* XEmbedCanvasPeer$3::class$ = nullptr;

		} // X11
	} // awt
} // sun