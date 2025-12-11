#include <bug4247996$2.h>

#include <bug4247996.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

using $bug4247996 = ::bug4247996;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $JToggleButton = ::javax::swing::JToggleButton;

$MethodInfo _bug4247996$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4247996$2::*)()>(&bug4247996$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4247996$2_EnclosingMethodInfo_ = {
	"bug4247996",
	"checkButtonsSize",
	"()V"
};

$InnerClassInfo _bug4247996$2_InnerClassesInfo_[] = {
	{"bug4247996$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4247996$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4247996$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4247996$2_MethodInfo_,
	nullptr,
	&_bug4247996$2_EnclosingMethodInfo_,
	_bug4247996$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4247996"
};

$Object* allocate$bug4247996$2($Class* clazz) {
	return $of($alloc(bug4247996$2));
}

void bug4247996$2::init$() {
}

void bug4247996$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug4247996);
	if (!$nc($($nc($bug4247996::button)->getSize()))->equals($($nc($bug4247996::toogleButton)->getSize()))) {
		$throwNew($RuntimeException, "Button sizes are different!"_s);
	}
}

bug4247996$2::bug4247996$2() {
}

$Class* bug4247996$2::load$($String* name, bool initialize) {
	$loadClass(bug4247996$2, name, initialize, &_bug4247996$2_ClassInfo_, allocate$bug4247996$2);
	return class$;
}

$Class* bug4247996$2::class$ = nullptr;