#include <sun/awt/windows/WInputMethod$1.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WInputMethod.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WInputMethod = ::sun::awt::windows::WInputMethod;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WInputMethod$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(WInputMethod$1, this$0)},
	{}
};

$MethodInfo _WInputMethod$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WInputMethod;)V", nullptr, 0, $method(static_cast<void(WInputMethod$1::*)($WInputMethod*)>(&WInputMethod$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WInputMethod$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WInputMethod",
	"inquireCandidatePosition",
	"()V"
};

$InnerClassInfo _WInputMethod$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WInputMethod$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WInputMethod$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WInputMethod$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WInputMethod$1_FieldInfo_,
	_WInputMethod$1_MethodInfo_,
	nullptr,
	&_WInputMethod$1_EnclosingMethodInfo_,
	_WInputMethod$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WInputMethod"
};

$Object* allocate$WInputMethod$1($Class* clazz) {
	return $of($alloc(WInputMethod$1));
}

void WInputMethod$1::init$($WInputMethod* this$0) {
	$set(this, this$0, this$0);
}

void WInputMethod$1::run() {
	int32_t x = 0;
	int32_t y = 0;
	$var($Component, client, $WInputMethod::access$000(this->this$0));
	if (client != nullptr) {
		if (!client->isShowing()) {
			return;
		}
		if ($WInputMethod::access$100(this->this$0)) {
			$var($Rectangle, rc, $nc(this->this$0->inputContext)->getTextLocation($($TextHitInfo::leading(0))));
			x = $nc(rc)->x;
			y = rc->y + rc->height;
		} else {
			$var($Point, pt, client->getLocationOnScreen());
			$var($Dimension, size, client->getSize());
			x = $nc(pt)->x;
			y = pt->y + $nc(size)->height;
		}
	}
	this->this$0->openCandidateWindow(this->this$0->awtFocussedComponentPeer, x, y);
}

WInputMethod$1::WInputMethod$1() {
}

$Class* WInputMethod$1::load$($String* name, bool initialize) {
	$loadClass(WInputMethod$1, name, initialize, &_WInputMethod$1_ClassInfo_, allocate$WInputMethod$1);
	return class$;
}

$Class* WInputMethod$1::class$ = nullptr;

		} // windows
	} // awt
} // sun