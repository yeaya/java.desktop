#include <bug6406264$CustomComboBoxUI.h>

#include <bug6406264$FocusablePopup.h>
#include <bug6406264.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <jcpp.h>

using $bug6406264 = ::bug6406264;
using $bug6406264$FocusablePopup = ::bug6406264$FocusablePopup;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;

$FieldInfo _bug6406264$CustomComboBoxUI_FieldInfo_[] = {
	{"this$0", "Lbug6406264;", nullptr, $FINAL | $SYNTHETIC, $field(bug6406264$CustomComboBoxUI, this$0)},
	{}
};

$MethodInfo _bug6406264$CustomComboBoxUI_MethodInfo_[] = {
	{"<init>", "(Lbug6406264;)V", nullptr, $PRIVATE, $method(static_cast<void(bug6406264$CustomComboBoxUI::*)($bug6406264*)>(&bug6406264$CustomComboBoxUI::init$))},
	{"createPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _bug6406264$CustomComboBoxUI_InnerClassesInfo_[] = {
	{"bug6406264$CustomComboBoxUI", "bug6406264", "CustomComboBoxUI", $PRIVATE},
	{}
};

$ClassInfo _bug6406264$CustomComboBoxUI_ClassInfo_ = {
	$ACC_SUPER,
	"bug6406264$CustomComboBoxUI",
	"javax.swing.plaf.basic.BasicComboBoxUI",
	nullptr,
	_bug6406264$CustomComboBoxUI_FieldInfo_,
	_bug6406264$CustomComboBoxUI_MethodInfo_,
	nullptr,
	nullptr,
	_bug6406264$CustomComboBoxUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6406264"
};

$Object* allocate$bug6406264$CustomComboBoxUI($Class* clazz) {
	return $of($alloc(bug6406264$CustomComboBoxUI));
}

void bug6406264$CustomComboBoxUI::init$($bug6406264* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI::init$();
}

$ComboPopup* bug6406264$CustomComboBoxUI::createPopup() {
	return $new($bug6406264$FocusablePopup, this->this$0, this->this$0);
}

bug6406264$CustomComboBoxUI::bug6406264$CustomComboBoxUI() {
}

$Class* bug6406264$CustomComboBoxUI::load$($String* name, bool initialize) {
	$loadClass(bug6406264$CustomComboBoxUI, name, initialize, &_bug6406264$CustomComboBoxUI_ClassInfo_, allocate$bug6406264$CustomComboBoxUI);
	return class$;
}

$Class* bug6406264$CustomComboBoxUI::class$ = nullptr;