#include <bug8057893$1.h>

#include <bug8057893.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $bug8057893 = ::bug8057893;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug8057893$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8057893$1::*)()>(&bug8057893$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8057893$1_EnclosingMethodInfo_ = {
	"bug8057893",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8057893$1_InnerClassesInfo_[] = {
	{"bug8057893$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8057893$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8057893$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_bug8057893$1_MethodInfo_,
	nullptr,
	&_bug8057893$1_EnclosingMethodInfo_,
	_bug8057893$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8057893"
};

$Object* allocate$bug8057893$1($Class* clazz) {
	return $of($alloc(bug8057893$1));
}

void bug8057893$1::init$() {
}

void bug8057893$1::actionPerformed($ActionEvent* e) {
	if ("comboBoxEdited"_s->equals($($nc(e)->getActionCommand()))) {
		$init($bug8057893);
		$bug8057893::isComboBoxEdited = true;
	}
}

bug8057893$1::bug8057893$1() {
}

$Class* bug8057893$1::load$($String* name, bool initialize) {
	$loadClass(bug8057893$1, name, initialize, &_bug8057893$1_ClassInfo_, allocate$bug8057893$1);
	return class$;
}

$Class* bug8057893$1::class$ = nullptr;