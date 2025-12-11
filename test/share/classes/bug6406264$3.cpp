#include <bug6406264$3.h>

#include <bug6406264.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $bug6406264 = ::bug6406264;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComboBox = ::javax::swing::JComboBox;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

$MethodInfo _bug6406264$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6406264$3::*)()>(&bug6406264$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6406264$3_EnclosingMethodInfo_ = {
	"bug6406264",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6406264$3_InnerClassesInfo_[] = {
	{"bug6406264$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6406264$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6406264$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6406264$3_MethodInfo_,
	nullptr,
	&_bug6406264$3_EnclosingMethodInfo_,
	_bug6406264$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6406264"
};

$Object* allocate$bug6406264$3($Class* clazz) {
	return $of($alloc(bug6406264$3));
}

void bug6406264$3::init$() {
}

void bug6406264$3::run() {
	$init($bug6406264);
	if ($nc($($cast($ComboBoxUI, $nc($bug6406264::comboBox)->getUI())))->isPopupVisible($bug6406264::comboBox) == false) {
		$throwNew($RuntimeException, "A focusable popup is not visible in JComboBox!"_s);
	}
}

bug6406264$3::bug6406264$3() {
}

$Class* bug6406264$3::load$($String* name, bool initialize) {
	$loadClass(bug6406264$3, name, initialize, &_bug6406264$3_ClassInfo_, allocate$bug6406264$3);
	return class$;
}

$Class* bug6406264$3::class$ = nullptr;