#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate$1.h>

#include <java/awt/Checkbox.h>
#include <java/awt/Component.h>
#include <javax/swing/JCheckBox.h>
#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate.h>
#include <sun/lwawt/LWCheckboxPeer.h>
#include <jcpp.h>

using $Checkbox = ::java::awt::Checkbox;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JCheckBox = ::javax::swing::JCheckBox;
using $LWCheckboxPeer = ::sun::lwawt::LWCheckboxPeer;
using $LWCheckboxPeer$CheckboxDelegate = ::sun::lwawt::LWCheckboxPeer$CheckboxDelegate;

namespace sun {
	namespace lwawt {

$FieldInfo _LWCheckboxPeer$CheckboxDelegate$1_FieldInfo_[] = {
	{"this$1", "Lsun/lwawt/LWCheckboxPeer$CheckboxDelegate;", nullptr, $FINAL | $SYNTHETIC, $field(LWCheckboxPeer$CheckboxDelegate$1, this$1)},
	{"val$this$0", "Lsun/lwawt/LWCheckboxPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWCheckboxPeer$CheckboxDelegate$1, val$this$0)},
	{}
};

$MethodInfo _LWCheckboxPeer$CheckboxDelegate$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWCheckboxPeer$CheckboxDelegate;Lsun/lwawt/LWCheckboxPeer;)V", nullptr, 0, $method(static_cast<void(LWCheckboxPeer$CheckboxDelegate$1::*)($LWCheckboxPeer$CheckboxDelegate*,$LWCheckboxPeer*)>(&LWCheckboxPeer$CheckboxDelegate$1::init$))},
	{"hasFocus", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LWCheckboxPeer$CheckboxDelegate$1_EnclosingMethodInfo_ = {
	"sun.lwawt.LWCheckboxPeer$CheckboxDelegate",
	"<init>",
	"(Lsun/lwawt/LWCheckboxPeer;)V"
};

$InnerClassInfo _LWCheckboxPeer$CheckboxDelegate$1_InnerClassesInfo_[] = {
	{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate", "sun.lwawt.LWCheckboxPeer", "CheckboxDelegate", $FINAL},
	{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWCheckboxPeer$CheckboxDelegate$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.LWCheckboxPeer$CheckboxDelegate$1",
	"javax.swing.JCheckBox",
	nullptr,
	_LWCheckboxPeer$CheckboxDelegate$1_FieldInfo_,
	_LWCheckboxPeer$CheckboxDelegate$1_MethodInfo_,
	nullptr,
	&_LWCheckboxPeer$CheckboxDelegate$1_EnclosingMethodInfo_,
	_LWCheckboxPeer$CheckboxDelegate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWCheckboxPeer"
};

$Object* allocate$LWCheckboxPeer$CheckboxDelegate$1($Class* clazz) {
	return $of($alloc(LWCheckboxPeer$CheckboxDelegate$1));
}

void LWCheckboxPeer$CheckboxDelegate$1::init$($LWCheckboxPeer$CheckboxDelegate* this$1, $LWCheckboxPeer* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$JCheckBox::init$();
}

bool LWCheckboxPeer$CheckboxDelegate$1::hasFocus() {
	return $nc(($cast($Checkbox, $($nc(this->this$1->this$0)->getTarget()))))->hasFocus();
}

LWCheckboxPeer$CheckboxDelegate$1::LWCheckboxPeer$CheckboxDelegate$1() {
}

$Class* LWCheckboxPeer$CheckboxDelegate$1::load$($String* name, bool initialize) {
	$loadClass(LWCheckboxPeer$CheckboxDelegate$1, name, initialize, &_LWCheckboxPeer$CheckboxDelegate$1_ClassInfo_, allocate$LWCheckboxPeer$CheckboxDelegate$1);
	return class$;
}

$Class* LWCheckboxPeer$CheckboxDelegate$1::class$ = nullptr;

	} // lwawt
} // sun