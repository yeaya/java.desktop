#include <sun/awt/windows/WCheckboxPeer$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Checkbox.h>
#include <java/awt/CheckboxGroup.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/event/ItemEvent.h>
#include <sun/awt/windows/WCheckboxPeer.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $AWTEvent = ::java::awt::AWTEvent;
using $Checkbox = ::java::awt::Checkbox;
using $CheckboxGroup = ::java::awt::CheckboxGroup;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WCheckboxPeer = ::sun::awt::windows::WCheckboxPeer;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WCheckboxPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WCheckboxPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxPeer$1, this$0)},
	{"val$state", "Z", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxPeer$1, val$state)},
	{"val$cb", "Ljava/awt/Checkbox;", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxPeer$1, val$cb)},
	{}
};

$MethodInfo _WCheckboxPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WCheckboxPeer;Ljava/awt/Checkbox;Z)V", "()V", 0, $method(static_cast<void(WCheckboxPeer$1::*)($WCheckboxPeer*,$Checkbox*,bool)>(&WCheckboxPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WCheckboxPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WCheckboxPeer",
	"handleAction",
	"(Z)V"
};

$InnerClassInfo _WCheckboxPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WCheckboxPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WCheckboxPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WCheckboxPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WCheckboxPeer$1_FieldInfo_,
	_WCheckboxPeer$1_MethodInfo_,
	nullptr,
	&_WCheckboxPeer$1_EnclosingMethodInfo_,
	_WCheckboxPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WCheckboxPeer"
};

$Object* allocate$WCheckboxPeer$1($Class* clazz) {
	return $of($alloc(WCheckboxPeer$1));
}

void WCheckboxPeer$1::init$($WCheckboxPeer* this$0, $Checkbox* val$cb, bool val$state) {
	$set(this, this$0, this$0);
	$set(this, val$cb, val$cb);
	this->val$state = val$state;
}

void WCheckboxPeer$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($CheckboxGroup, chg, $nc(this->val$cb)->getCheckboxGroup());
	bool var$0 = (chg != nullptr) && (this->val$cb == chg->getSelectedCheckbox());
	if (var$0 && $nc(this->val$cb)->getState()) {
		return;
	}
	$nc(this->val$cb)->setState(this->val$state);
	this->this$0->postEvent($$new($ItemEvent, this->val$cb, $ItemEvent::ITEM_STATE_CHANGED, $($nc(this->val$cb)->getLabel()), this->val$state ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
}

WCheckboxPeer$1::WCheckboxPeer$1() {
}

$Class* WCheckboxPeer$1::load$($String* name, bool initialize) {
	$loadClass(WCheckboxPeer$1, name, initialize, &_WCheckboxPeer$1_ClassInfo_, allocate$WCheckboxPeer$1);
	return class$;
}

$Class* WCheckboxPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun