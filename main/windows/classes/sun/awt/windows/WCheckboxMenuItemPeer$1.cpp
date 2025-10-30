#include <sun/awt/windows/WCheckboxMenuItemPeer$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/event/ItemEvent.h>
#include <sun/awt/windows/WCheckboxMenuItemPeer.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $AWTEvent = ::java::awt::AWTEvent;
using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $MenuItem = ::java::awt::MenuItem;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WCheckboxMenuItemPeer = ::sun::awt::windows::WCheckboxMenuItemPeer;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WCheckboxMenuItemPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WCheckboxMenuItemPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxMenuItemPeer$1, this$0)},
	{"val$state", "Z", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxMenuItemPeer$1, val$state)},
	{"val$target", "Ljava/awt/CheckboxMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(WCheckboxMenuItemPeer$1, val$target)},
	{}
};

$MethodInfo _WCheckboxMenuItemPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WCheckboxMenuItemPeer;Ljava/awt/CheckboxMenuItem;Z)V", "()V", 0, $method(static_cast<void(WCheckboxMenuItemPeer$1::*)($WCheckboxMenuItemPeer*,$CheckboxMenuItem*,bool)>(&WCheckboxMenuItemPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WCheckboxMenuItemPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WCheckboxMenuItemPeer",
	"handleAction",
	"(Z)V"
};

$InnerClassInfo _WCheckboxMenuItemPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WCheckboxMenuItemPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WCheckboxMenuItemPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WCheckboxMenuItemPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WCheckboxMenuItemPeer$1_FieldInfo_,
	_WCheckboxMenuItemPeer$1_MethodInfo_,
	nullptr,
	&_WCheckboxMenuItemPeer$1_EnclosingMethodInfo_,
	_WCheckboxMenuItemPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WCheckboxMenuItemPeer"
};

$Object* allocate$WCheckboxMenuItemPeer$1($Class* clazz) {
	return $of($alloc(WCheckboxMenuItemPeer$1));
}

void WCheckboxMenuItemPeer$1::init$($WCheckboxMenuItemPeer* this$0, $CheckboxMenuItem* val$target, bool val$state) {
	$set(this, this$0, this$0);
	$set(this, val$target, val$target);
	this->val$state = val$state;
}

void WCheckboxMenuItemPeer$1::run() {
	$useLocalCurrentObjectStackCache();
	$nc(this->val$target)->setState(this->val$state);
	this->this$0->postEvent($$new($ItemEvent, this->val$target, $ItemEvent::ITEM_STATE_CHANGED, $($nc(this->val$target)->getLabel()), this->val$state ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
}

WCheckboxMenuItemPeer$1::WCheckboxMenuItemPeer$1() {
}

$Class* WCheckboxMenuItemPeer$1::load$($String* name, bool initialize) {
	$loadClass(WCheckboxMenuItemPeer$1, name, initialize, &_WCheckboxMenuItemPeer$1_ClassInfo_, allocate$WCheckboxMenuItemPeer$1);
	return class$;
}

$Class* WCheckboxMenuItemPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun