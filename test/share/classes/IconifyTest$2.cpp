#include <IconifyTest$2.h>

#include <IconifyTest.h>
#include <java/awt/Frame.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ICONIFIED

using $IconifyTest = ::IconifyTest;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _IconifyTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IconifyTest$2::*)()>(&IconifyTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IconifyTest$2_EnclosingMethodInfo_ = {
	"IconifyTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _IconifyTest$2_InnerClassesInfo_[] = {
	{"IconifyTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IconifyTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"IconifyTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_IconifyTest$2_MethodInfo_,
	nullptr,
	&_IconifyTest$2_EnclosingMethodInfo_,
	_IconifyTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IconifyTest"
};

$Object* allocate$IconifyTest$2($Class* clazz) {
	return $of($alloc(IconifyTest$2));
}

void IconifyTest$2::init$() {
}

void IconifyTest$2::run() {
	$init($IconifyTest);
	$nc($IconifyTest::frame)->setExtendedState($Frame::ICONIFIED);
}

IconifyTest$2::IconifyTest$2() {
}

$Class* IconifyTest$2::load$($String* name, bool initialize) {
	$loadClass(IconifyTest$2, name, initialize, &_IconifyTest$2_ClassInfo_, allocate$IconifyTest$2);
	return class$;
}

$Class* IconifyTest$2::class$ = nullptr;