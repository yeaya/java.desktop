#include <bug6236162$MyComboUI.h>

#include <bug6236162.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <jcpp.h>

using $bug6236162 = ::bug6236162;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;

$MethodInfo _bug6236162$MyComboUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6236162$MyComboUI::*)()>(&bug6236162$MyComboUI::init$))},
	{"getComboPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6236162$MyComboUI_InnerClassesInfo_[] = {
	{"bug6236162$MyComboUI", "bug6236162", "MyComboUI", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6236162$MyComboUI_ClassInfo_ = {
	$ACC_SUPER,
	"bug6236162$MyComboUI",
	"javax.swing.plaf.metal.MetalComboBoxUI",
	nullptr,
	nullptr,
	_bug6236162$MyComboUI_MethodInfo_,
	nullptr,
	nullptr,
	_bug6236162$MyComboUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6236162"
};

$Object* allocate$bug6236162$MyComboUI($Class* clazz) {
	return $of($alloc(bug6236162$MyComboUI));
}

void bug6236162$MyComboUI::init$() {
	$MetalComboBoxUI::init$();
}

$ComboPopup* bug6236162$MyComboUI::getComboPopup() {
	return this->popup;
}

bug6236162$MyComboUI::bug6236162$MyComboUI() {
}

$Class* bug6236162$MyComboUI::load$($String* name, bool initialize) {
	$loadClass(bug6236162$MyComboUI, name, initialize, &_bug6236162$MyComboUI_ClassInfo_, allocate$bug6236162$MyComboUI);
	return class$;
}

$Class* bug6236162$MyComboUI::class$ = nullptr;