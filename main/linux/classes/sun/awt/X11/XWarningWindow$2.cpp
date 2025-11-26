#include <sun/awt/X11/XWarningWindow$2.h>

#include <java/awt/Graphics.h>
#include <sun/awt/X11/XWarningWindow.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWarningWindow$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, this$0)},
	{"val$height", "I", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, val$height)},
	{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, val$width)},
	{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, val$y)},
	{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, val$x)},
	{}
};

$MethodInfo _XWarningWindow$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XWarningWindow;IIII)V", "()V", 0, $method(static_cast<void(XWarningWindow$2::*)($XWarningWindow*,int32_t,int32_t,int32_t,int32_t)>(&XWarningWindow$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XWarningWindow$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XWarningWindow",
	"handleExposeEvent",
	"(Lsun/awt/X11/XEvent;)V"
};

$InnerClassInfo _XWarningWindow$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWarningWindow$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWarningWindow$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWarningWindow$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_XWarningWindow$2_FieldInfo_,
	_XWarningWindow$2_MethodInfo_,
	nullptr,
	&_XWarningWindow$2_EnclosingMethodInfo_,
	_XWarningWindow$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XWarningWindow"
};

$Object* allocate$XWarningWindow$2($Class* clazz) {
	return $of($alloc(XWarningWindow$2));
}

void XWarningWindow$2::init$($XWarningWindow* this$0, int32_t val$x, int32_t val$y, int32_t val$width, int32_t val$height) {
	$set(this, this$0, this$0);
	this->val$x = val$x;
	this->val$y = val$y;
	this->val$width = val$width;
	this->val$height = val$height;
}

void XWarningWindow$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, this->this$0->getGraphics());
	if (g != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				this->this$0->paint(g, this->val$x, this->val$y, this->val$width, this->val$height);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				g->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

XWarningWindow$2::XWarningWindow$2() {
}

$Class* XWarningWindow$2::load$($String* name, bool initialize) {
	$loadClass(XWarningWindow$2, name, initialize, &_XWarningWindow$2_ClassInfo_, allocate$XWarningWindow$2);
	return class$;
}

$Class* XWarningWindow$2::class$ = nullptr;

		} // X11
	} // awt
} // sun