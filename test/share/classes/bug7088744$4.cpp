#include <bug7088744$4.h>

#include <bug7088744.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef BUTTON_EVENTS_SEQUENCE

using $bug7088744 = ::bug7088744;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug7088744$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7088744$4::*)()>(&bug7088744$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7088744$4_EnclosingMethodInfo_ = {
	"bug7088744",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7088744$4_InnerClassesInfo_[] = {
	{"bug7088744$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7088744$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug7088744$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7088744$4_MethodInfo_,
	nullptr,
	&_bug7088744$4_EnclosingMethodInfo_,
	_bug7088744$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7088744"
};

$Object* allocate$bug7088744$4($Class* clazz) {
	return $of($alloc(bug7088744$4));
}

void bug7088744$4::init$() {
}

void bug7088744$4::run() {
	$init($bug7088744);
	$nc($bug7088744::frame)->dispose();
	if ($bug7088744::eventCount != $nc($bug7088744::BUTTON_EVENTS_SEQUENCE)->length) {
		$throwNew($RuntimeException, "Not all events received"_s);
	}
}

bug7088744$4::bug7088744$4() {
}

$Class* bug7088744$4::load$($String* name, bool initialize) {
	$loadClass(bug7088744$4, name, initialize, &_bug7088744$4_ClassInfo_, allocate$bug7088744$4);
	return class$;
}

$Class* bug7088744$4::class$ = nullptr;