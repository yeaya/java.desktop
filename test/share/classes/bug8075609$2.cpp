#include <bug8075609$2.h>

#include <bug8075609.h>
#include <java/awt/Component.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $bug8075609 = ::bug8075609;
using $Component = ::java::awt::Component;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextField = ::javax::swing::JTextField;

$MethodInfo _bug8075609$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8075609$2::*)()>(&bug8075609$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8075609$2_EnclosingMethodInfo_ = {
	"bug8075609",
	"runTest1",
	"()V"
};

$InnerClassInfo _bug8075609$2_InnerClassesInfo_[] = {
	{"bug8075609$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8075609$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8075609$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8075609$2_MethodInfo_,
	nullptr,
	&_bug8075609$2_EnclosingMethodInfo_,
	_bug8075609$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8075609"
};

$Object* allocate$bug8075609$2($Class* clazz) {
	return $of($alloc(bug8075609$2));
}

void bug8075609$2::init$() {
}

void bug8075609$2::run() {
	$init($bug8075609);
	if (!$nc($bug8075609::textField)->hasFocus()) {
		$nc($System::out)->println("Radio Button Group Go To Next Component through Tab Key failed"_s);
		$throwNew($RuntimeException, "Focus is not on textField as Expected"_s);
	}
}

bug8075609$2::bug8075609$2() {
}

$Class* bug8075609$2::load$($String* name, bool initialize) {
	$loadClass(bug8075609$2, name, initialize, &_bug8075609$2_ClassInfo_, allocate$bug8075609$2);
	return class$;
}

$Class* bug8075609$2::class$ = nullptr;