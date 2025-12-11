#include <bug8075314$2.h>

#include <bug8075314.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $bug8075314 = ::bug8075314;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JInternalFrame = ::javax::swing::JInternalFrame;

$MethodInfo _bug8075314$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8075314$2::*)()>(&bug8075314$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8075314$2_EnclosingMethodInfo_ = {
	"bug8075314",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8075314$2_InnerClassesInfo_[] = {
	{"bug8075314$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8075314$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8075314$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8075314$2_MethodInfo_,
	nullptr,
	&_bug8075314$2_EnclosingMethodInfo_,
	_bug8075314$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8075314"
};

$Object* allocate$bug8075314$2($Class* clazz) {
	return $of($alloc(bug8075314$2));
}

void bug8075314$2::init$() {
}

void bug8075314$2::run() {
	try {
		$init($bug8075314);
		$nc($bug8075314::frame1)->setMaximum(true);
		$nc($bug8075314::frame1)->setClosed(true);
		if ($nc($bug8075314::frame2)->isMaximum()) {
			$throwNew($RuntimeException, "Frame2 is maximized!"_s);
		}
	} catch ($PropertyVetoException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

bug8075314$2::bug8075314$2() {
}

$Class* bug8075314$2::load$($String* name, bool initialize) {
	$loadClass(bug8075314$2, name, initialize, &_bug8075314$2_ClassInfo_, allocate$bug8075314$2);
	return class$;
}

$Class* bug8075314$2::class$ = nullptr;