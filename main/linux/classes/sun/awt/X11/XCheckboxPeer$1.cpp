#include <sun/awt/X11/XCheckboxPeer$1.h>

#include <java/awt/Checkbox.h>
#include <java/awt/CheckboxGroup.h>
#include <sun/awt/X11/XCheckboxPeer.h>
#include <jcpp.h>

using $Checkbox = ::java::awt::Checkbox;
using $CheckboxGroup = ::java::awt::CheckboxGroup;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XCheckboxPeer = ::sun::awt::X11::XCheckboxPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XCheckboxPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XCheckboxPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XCheckboxPeer$1, this$0)},
	{"val$newState", "Z", nullptr, $FINAL | $SYNTHETIC, $field(XCheckboxPeer$1, val$newState)},
	{"val$cb", "Ljava/awt/Checkbox;", nullptr, $FINAL | $SYNTHETIC, $field(XCheckboxPeer$1, val$cb)},
	{}
};

$MethodInfo _XCheckboxPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XCheckboxPeer;Ljava/awt/Checkbox;Z)V", "()V", 0, $method(static_cast<void(XCheckboxPeer$1::*)($XCheckboxPeer*,$Checkbox*,bool)>(&XCheckboxPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XCheckboxPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XCheckboxPeer",
	"action",
	"(Z)V"
};

$InnerClassInfo _XCheckboxPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XCheckboxPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XCheckboxPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XCheckboxPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XCheckboxPeer$1_FieldInfo_,
	_XCheckboxPeer$1_MethodInfo_,
	nullptr,
	&_XCheckboxPeer$1_EnclosingMethodInfo_,
	_XCheckboxPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XCheckboxPeer"
};

$Object* allocate$XCheckboxPeer$1($Class* clazz) {
	return $of($alloc(XCheckboxPeer$1));
}

void XCheckboxPeer$1::init$($XCheckboxPeer* this$0, $Checkbox* val$cb, bool val$newState) {
	$set(this, this$0, this$0);
	$set(this, val$cb, val$cb);
	this->val$newState = val$newState;
}

void XCheckboxPeer$1::run() {
	$var($CheckboxGroup, cbg, this->this$0->checkBoxGroup);
	bool var$0 = (cbg != nullptr) && (cbg->getSelectedCheckbox() == this->val$cb);
	if (var$0 && $nc(this->val$cb)->getState()) {
		$nc(this->val$cb)->setState(true);
		return;
	}
	$nc(this->val$cb)->setState(this->val$newState);
	this->this$0->notifyStateChanged(this->val$newState);
}

XCheckboxPeer$1::XCheckboxPeer$1() {
}

$Class* XCheckboxPeer$1::load$($String* name, bool initialize) {
	$loadClass(XCheckboxPeer$1, name, initialize, &_XCheckboxPeer$1_ClassInfo_, allocate$XCheckboxPeer$1);
	return class$;
}

$Class* XCheckboxPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun