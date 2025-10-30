#include <sun/awt/windows/WScrollbarPeer$2.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Adjustable.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <sun/awt/windows/WScrollbarPeer.h>
#include <jcpp.h>

#undef ADJUSTMENT_VALUE_CHANGED
#undef TRACK

using $AWTEvent = ::java::awt::AWTEvent;
using $Adjustable = ::java::awt::Adjustable;
using $Scrollbar = ::java::awt::Scrollbar;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WScrollbarPeer = ::sun::awt::windows::WScrollbarPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WScrollbarPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WScrollbarPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$2, this$0)},
	{"val$value", "I", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$2, val$value)},
	{"val$sb", "Ljava/awt/Scrollbar;", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$2, val$sb)},
	{}
};

$MethodInfo _WScrollbarPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WScrollbarPeer;Ljava/awt/Scrollbar;I)V", "()V", 0, $method(static_cast<void(WScrollbarPeer$2::*)($WScrollbarPeer*,$Scrollbar*,int32_t)>(&WScrollbarPeer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WScrollbarPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.windows.WScrollbarPeer",
	"dragEnd",
	"(I)V"
};

$InnerClassInfo _WScrollbarPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.windows.WScrollbarPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WScrollbarPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WScrollbarPeer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_WScrollbarPeer$2_FieldInfo_,
	_WScrollbarPeer$2_MethodInfo_,
	nullptr,
	&_WScrollbarPeer$2_EnclosingMethodInfo_,
	_WScrollbarPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WScrollbarPeer"
};

$Object* allocate$WScrollbarPeer$2($Class* clazz) {
	return $of($alloc(WScrollbarPeer$2));
}

void WScrollbarPeer$2::init$($WScrollbarPeer* this$0, $Scrollbar* val$sb, int32_t val$value) {
	$set(this, this$0, this$0);
	$set(this, val$sb, val$sb);
	this->val$value = val$value;
}

void WScrollbarPeer$2::run() {
	$nc(this->val$sb)->setValueIsAdjusting(false);
	this->this$0->postEvent($$new($AdjustmentEvent, this->val$sb, $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED, $AdjustmentEvent::TRACK, this->val$value, false));
}

WScrollbarPeer$2::WScrollbarPeer$2() {
}

$Class* WScrollbarPeer$2::load$($String* name, bool initialize) {
	$loadClass(WScrollbarPeer$2, name, initialize, &_WScrollbarPeer$2_ClassInfo_, allocate$WScrollbarPeer$2);
	return class$;
}

$Class* WScrollbarPeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun