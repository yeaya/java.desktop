#include <bug6406264$FocusablePopup.h>

#include <bug6406264.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $bug6406264 = ::bug6406264;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

$FieldInfo _bug6406264$FocusablePopup_FieldInfo_[] = {
	{"this$0", "Lbug6406264;", nullptr, $FINAL | $SYNTHETIC, $field(bug6406264$FocusablePopup, this$0)},
	{}
};

$MethodInfo _bug6406264$FocusablePopup_MethodInfo_[] = {
	{"<init>", "(Lbug6406264;Ljavax/swing/JComboBox;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6406264$FocusablePopup::*)($bug6406264*,$JComboBox*)>(&bug6406264$FocusablePopup::init$))},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6406264$FocusablePopup_InnerClassesInfo_[] = {
	{"bug6406264$FocusablePopup", "bug6406264", "FocusablePopup", $PRIVATE},
	{}
};

$ClassInfo _bug6406264$FocusablePopup_ClassInfo_ = {
	$ACC_SUPER,
	"bug6406264$FocusablePopup",
	"javax.swing.plaf.basic.BasicComboPopup",
	nullptr,
	_bug6406264$FocusablePopup_FieldInfo_,
	_bug6406264$FocusablePopup_MethodInfo_,
	nullptr,
	nullptr,
	_bug6406264$FocusablePopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6406264"
};

$Object* allocate$bug6406264$FocusablePopup($Class* clazz) {
	return $of($alloc(bug6406264$FocusablePopup));
}

void bug6406264$FocusablePopup::init$($bug6406264* this$0, $JComboBox* combo) {
	$set(this, this$0, this$0);
	$BasicComboPopup::init$(combo);
}

bool bug6406264$FocusablePopup::isFocusable() {
	return true;
}

bug6406264$FocusablePopup::bug6406264$FocusablePopup() {
}

$Class* bug6406264$FocusablePopup::load$($String* name, bool initialize) {
	$loadClass(bug6406264$FocusablePopup, name, initialize, &_bug6406264$FocusablePopup_ClassInfo_, allocate$bug6406264$FocusablePopup);
	return class$;
}

$Class* bug6406264$FocusablePopup::class$ = nullptr;