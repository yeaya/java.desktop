#include <sun/awt/windows/WButtonPeer$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Button.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/awt/windows/WButtonPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $AWTEvent = ::java::awt::AWTEvent;
using $Button = ::java::awt::Button;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WButtonPeer = ::sun::awt::windows::WButtonPeer;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WButtonPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WButtonPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WButtonPeer$1, this$0)},
	{"val$modifiers", "I", nullptr, $FINAL | $SYNTHETIC, $field(WButtonPeer$1, val$modifiers)},
	{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(WButtonPeer$1, val$when)},
	{}
};

$MethodInfo _WButtonPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WButtonPeer;JI)V", "()V", 0, $method(static_cast<void(WButtonPeer$1::*)($WButtonPeer*,int64_t,int32_t)>(&WButtonPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WButtonPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WButtonPeer",
	"handleAction",
	"(JI)V"
};

$InnerClassInfo _WButtonPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WButtonPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WButtonPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WButtonPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WButtonPeer$1_FieldInfo_,
	_WButtonPeer$1_MethodInfo_,
	nullptr,
	&_WButtonPeer$1_EnclosingMethodInfo_,
	_WButtonPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WButtonPeer"
};

$Object* allocate$WButtonPeer$1($Class* clazz) {
	return $of($alloc(WButtonPeer$1));
}

void WButtonPeer$1::init$($WButtonPeer* this$0, int64_t val$when, int32_t val$modifiers) {
	$set(this, this$0, this$0);
	this->val$when = val$when;
	this->val$modifiers = val$modifiers;
}

void WButtonPeer$1::run() {
	$useLocalCurrentObjectStackCache();
	this->this$0->postEvent($$new($ActionEvent, this->this$0->target, $ActionEvent::ACTION_PERFORMED, $($nc(($cast($Button, this->this$0->target)))->getActionCommand()), this->val$when, this->val$modifiers));
}

WButtonPeer$1::WButtonPeer$1() {
}

$Class* WButtonPeer$1::load$($String* name, bool initialize) {
	$loadClass(WButtonPeer$1, name, initialize, &_WButtonPeer$1_ClassInfo_, allocate$WButtonPeer$1);
	return class$;
}

$Class* WButtonPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun