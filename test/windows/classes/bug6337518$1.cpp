#include <bug6337518$1.h>

#include <bug6337518.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $bug6337518 = ::bug6337518;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComboBox = ::javax::swing::JComboBox;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;

$MethodInfo _bug6337518$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6337518$1::*)()>(&bug6337518$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6337518$1_EnclosingMethodInfo_ = {
	"bug6337518",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6337518$1_InnerClassesInfo_[] = {
	{"bug6337518$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6337518$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6337518$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6337518$1_MethodInfo_,
	nullptr,
	&_bug6337518$1_EnclosingMethodInfo_,
	_bug6337518$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6337518"
};

$Object* allocate$bug6337518$1($Class* clazz) {
	return $of($alloc(bug6337518$1));
}

void bug6337518$1::init$() {
}

void bug6337518$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JComboBox, comboBox, $new($JComboBox));
	comboBox->setUI(static_cast<$ComboBoxUI*>($$new($bug6337518)));
}

bug6337518$1::bug6337518$1() {
}

$Class* bug6337518$1::load$($String* name, bool initialize) {
	$loadClass(bug6337518$1, name, initialize, &_bug6337518$1_ClassInfo_, allocate$bug6337518$1);
	return class$;
}

$Class* bug6337518$1::class$ = nullptr;