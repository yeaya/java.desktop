#include <bug8079640$3.h>

#include <bug8079640.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8079640 = ::bug8079640;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8079640$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8079640$3::*)()>(&bug8079640$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8079640$3_EnclosingMethodInfo_ = {
	"bug8079640",
	"test",
	"()V"
};

$InnerClassInfo _bug8079640$3_InnerClassesInfo_[] = {
	{"bug8079640$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8079640$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug8079640$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8079640$3_MethodInfo_,
	nullptr,
	&_bug8079640$3_EnclosingMethodInfo_,
	_bug8079640$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8079640"
};

$Object* allocate$bug8079640$3($Class* clazz) {
	return $of($alloc(bug8079640$3));
}

void bug8079640$3::init$() {
}

void bug8079640$3::run() {
	$init($bug8079640);
	double var$0 = $nc($($nc($bug8079640::comp2)->getLocation()))->getY();
	if (var$0 > $nc($bug8079640::frame)->getHeight()) {
		$throwNew($RuntimeException, "GroupLayout fails: comp2 is out of the window"_s);
	}
}

bug8079640$3::bug8079640$3() {
}

$Class* bug8079640$3::load$($String* name, bool initialize) {
	$loadClass(bug8079640$3, name, initialize, &_bug8079640$3_ClassInfo_, allocate$bug8079640$3);
	return class$;
}

$Class* bug8079640$3::class$ = nullptr;