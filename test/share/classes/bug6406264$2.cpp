#include <bug6406264$2.h>

#include <bug6406264.h>
#include <jcpp.h>

using $bug6406264 = ::bug6406264;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComboBox = ::javax::swing::JComboBox;

$MethodInfo _bug6406264$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6406264$2::*)()>(&bug6406264$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6406264$2_EnclosingMethodInfo_ = {
	"bug6406264",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6406264$2_InnerClassesInfo_[] = {
	{"bug6406264$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6406264$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6406264$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6406264$2_MethodInfo_,
	nullptr,
	&_bug6406264$2_EnclosingMethodInfo_,
	_bug6406264$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6406264"
};

$Object* allocate$bug6406264$2($Class* clazz) {
	return $of($alloc(bug6406264$2));
}

void bug6406264$2::init$() {
}

void bug6406264$2::run() {
	$init($bug6406264);
	$nc($bug6406264::comboBox)->showPopup();
}

bug6406264$2::bug6406264$2() {
}

$Class* bug6406264$2::load$($String* name, bool initialize) {
	$loadClass(bug6406264$2, name, initialize, &_bug6406264$2_ClassInfo_, allocate$bug6406264$2);
	return class$;
}

$Class* bug6406264$2::class$ = nullptr;