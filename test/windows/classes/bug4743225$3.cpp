#include <bug4743225$3.h>

#include <bug4743225.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $bug4743225 = ::bug4743225;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JList = ::javax::swing::JList;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

$MethodInfo _bug4743225$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4743225$3::*)()>(&bug4743225$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4743225$3_EnclosingMethodInfo_ = {
	"bug4743225",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4743225$3_InnerClassesInfo_[] = {
	{"bug4743225$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4743225$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4743225$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4743225$3_MethodInfo_,
	nullptr,
	&_bug4743225$3_EnclosingMethodInfo_,
	_bug4743225$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4743225"
};

$Object* allocate$bug4743225$3($Class* clazz) {
	return $of($alloc(bug4743225$3));
}

void bug4743225$3::init$() {
}

void bug4743225$3::run() {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($bug4743225::getPopup()))->getList()))->getLastVisibleIndex() == 3) {
		$init($bug4743225);
		$bug4743225::flag = true;
	}
}

bug4743225$3::bug4743225$3() {
}

$Class* bug4743225$3::load$($String* name, bool initialize) {
	$loadClass(bug4743225$3, name, initialize, &_bug4743225$3_ClassInfo_, allocate$bug4743225$3);
	return class$;
}

$Class* bug4743225$3::class$ = nullptr;