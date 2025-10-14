#include <sun/awt/windows/WScrollbarPeer$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Adjustable.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WScrollbarPeer.h>
#include <jcpp.h>

#undef ADJUSTMENT_VALUE_CHANGED

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

$FieldInfo _WScrollbarPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WScrollbarPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, this$0)},
	{"val$type", "I", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, val$type)},
	{"val$value", "I", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, val$value)},
	{"val$isAdjusting", "Z", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, val$isAdjusting)},
	{"val$sb", "Ljava/awt/Scrollbar;", nullptr, $FINAL | $SYNTHETIC, $field(WScrollbarPeer$1, val$sb)},
	{}
};

$MethodInfo _WScrollbarPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WScrollbarPeer;Ljava/awt/Scrollbar;ZII)V", "()V", 0, $method(static_cast<void(WScrollbarPeer$1::*)($WScrollbarPeer*,$Scrollbar*,bool,int32_t,int32_t)>(&WScrollbarPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WScrollbarPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WScrollbarPeer",
	"postAdjustmentEvent",
	"(IIZ)V"
};

$InnerClassInfo _WScrollbarPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WScrollbarPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WScrollbarPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WScrollbarPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WScrollbarPeer$1_FieldInfo_,
	_WScrollbarPeer$1_MethodInfo_,
	nullptr,
	&_WScrollbarPeer$1_EnclosingMethodInfo_,
	_WScrollbarPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WScrollbarPeer"
};

$Object* allocate$WScrollbarPeer$1($Class* clazz) {
	return $of($alloc(WScrollbarPeer$1));
}

void WScrollbarPeer$1::init$($WScrollbarPeer* this$0, $Scrollbar* val$sb, bool val$isAdjusting, int32_t val$value, int32_t val$type) {
	$set(this, this$0, this$0);
	$set(this, val$sb, val$sb);
	this->val$isAdjusting = val$isAdjusting;
	this->val$value = val$value;
	this->val$type = val$type;
}

void WScrollbarPeer$1::run() {
	$nc(this->val$sb)->setValueIsAdjusting(this->val$isAdjusting);
	$nc(this->val$sb)->setValue(this->val$value);
	this->this$0->postEvent($$new($AdjustmentEvent, this->val$sb, $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED, this->val$type, this->val$value, this->val$isAdjusting));
}

WScrollbarPeer$1::WScrollbarPeer$1() {
}

$Class* WScrollbarPeer$1::load$($String* name, bool initialize) {
	$loadClass(WScrollbarPeer$1, name, initialize, &_WScrollbarPeer$1_ClassInfo_, allocate$WScrollbarPeer$1);
	return class$;
}

$Class* WScrollbarPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun