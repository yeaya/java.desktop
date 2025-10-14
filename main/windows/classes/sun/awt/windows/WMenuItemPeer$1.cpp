#include <sun/awt/windows/WMenuItemPeer$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $AWTEvent = ::java::awt::AWTEvent;
using $MenuItem = ::java::awt::MenuItem;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WMenuItemPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WMenuItemPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WMenuItemPeer$1, this$0)},
	{"val$modifiers", "I", nullptr, $FINAL | $SYNTHETIC, $field(WMenuItemPeer$1, val$modifiers)},
	{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(WMenuItemPeer$1, val$when)},
	{}
};

$MethodInfo _WMenuItemPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WMenuItemPeer;JI)V", "()V", 0, $method(static_cast<void(WMenuItemPeer$1::*)($WMenuItemPeer*,int64_t,int32_t)>(&WMenuItemPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WMenuItemPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WMenuItemPeer",
	"handleAction",
	"(JI)V"
};

$InnerClassInfo _WMenuItemPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WMenuItemPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WMenuItemPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WMenuItemPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WMenuItemPeer$1_FieldInfo_,
	_WMenuItemPeer$1_MethodInfo_,
	nullptr,
	&_WMenuItemPeer$1_EnclosingMethodInfo_,
	_WMenuItemPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WMenuItemPeer"
};

$Object* allocate$WMenuItemPeer$1($Class* clazz) {
	return $of($alloc(WMenuItemPeer$1));
}

void WMenuItemPeer$1::init$($WMenuItemPeer* this$0, int64_t val$when, int32_t val$modifiers) {
	$set(this, this$0, this$0);
	this->val$when = val$when;
	this->val$modifiers = val$modifiers;
}

void WMenuItemPeer$1::run() {
	this->this$0->postEvent($$new($ActionEvent, this->this$0->target, $ActionEvent::ACTION_PERFORMED, $($nc(($cast($MenuItem, this->this$0->target)))->getActionCommand()), this->val$when, this->val$modifiers));
}

WMenuItemPeer$1::WMenuItemPeer$1() {
}

$Class* WMenuItemPeer$1::load$($String* name, bool initialize) {
	$loadClass(WMenuItemPeer$1, name, initialize, &_WMenuItemPeer$1_ClassInfo_, allocate$WMenuItemPeer$1);
	return class$;
}

$Class* WMenuItemPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun