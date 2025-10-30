#include <sun/awt/windows/WChoicePeer$2.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Choice.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/event/ItemEvent.h>
#include <sun/awt/windows/WChoicePeer.h>
#include <jcpp.h>

#undef ITEM_STATE_CHANGED
#undef SELECTED

using $AWTEvent = ::java::awt::AWTEvent;
using $Choice = ::java::awt::Choice;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WChoicePeer = ::sun::awt::windows::WChoicePeer;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WChoicePeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WChoicePeer;", nullptr, $FINAL | $SYNTHETIC, $field(WChoicePeer$2, this$0)},
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(WChoicePeer$2, val$index)},
	{"val$c", "Ljava/awt/Choice;", nullptr, $FINAL | $SYNTHETIC, $field(WChoicePeer$2, val$c)},
	{}
};

$MethodInfo _WChoicePeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WChoicePeer;Ljava/awt/Choice;I)V", "()V", 0, $method(static_cast<void(WChoicePeer$2::*)($WChoicePeer*,$Choice*,int32_t)>(&WChoicePeer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WChoicePeer$2_EnclosingMethodInfo_ = {
	"sun.awt.windows.WChoicePeer",
	"handleAction",
	"(I)V"
};

$InnerClassInfo _WChoicePeer$2_InnerClassesInfo_[] = {
	{"sun.awt.windows.WChoicePeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WChoicePeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WChoicePeer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_WChoicePeer$2_FieldInfo_,
	_WChoicePeer$2_MethodInfo_,
	nullptr,
	&_WChoicePeer$2_EnclosingMethodInfo_,
	_WChoicePeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WChoicePeer"
};

$Object* allocate$WChoicePeer$2($Class* clazz) {
	return $of($alloc(WChoicePeer$2));
}

void WChoicePeer$2::init$($WChoicePeer* this$0, $Choice* val$c, int32_t val$index) {
	$set(this, this$0, this$0);
	$set(this, val$c, val$c);
	this->val$index = val$index;
}

void WChoicePeer$2::run() {
	$useLocalCurrentObjectStackCache();
	$nc(this->val$c)->select(this->val$index);
	this->this$0->postEvent($$new($ItemEvent, this->val$c, $ItemEvent::ITEM_STATE_CHANGED, $($nc(this->val$c)->getItem(this->val$index)), $ItemEvent::SELECTED));
}

WChoicePeer$2::WChoicePeer$2() {
}

$Class* WChoicePeer$2::load$($String* name, bool initialize) {
	$loadClass(WChoicePeer$2, name, initialize, &_WChoicePeer$2_ClassInfo_, allocate$WChoicePeer$2);
	return class$;
}

$Class* WChoicePeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun