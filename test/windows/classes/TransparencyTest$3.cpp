#include <TransparencyTest$3.h>

#include <TransparencyTest.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ICONIFIED

using $TransparencyTest = ::TransparencyTest;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _TransparencyTest$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TransparencyTest$3::*)()>(&TransparencyTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TransparencyTest$3_EnclosingMethodInfo_ = {
	"TransparencyTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TransparencyTest$3_InnerClassesInfo_[] = {
	{"TransparencyTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransparencyTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"TransparencyTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TransparencyTest$3_MethodInfo_,
	nullptr,
	&_TransparencyTest$3_EnclosingMethodInfo_,
	_TransparencyTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransparencyTest"
};

$Object* allocate$TransparencyTest$3($Class* clazz) {
	return $of($alloc(TransparencyTest$3));
}

void TransparencyTest$3::init$() {
}

void TransparencyTest$3::run() {
	$init($TransparencyTest);
	$nc($TransparencyTest::frame)->setExtendedState($JFrame::ICONIFIED);
}

TransparencyTest$3::TransparencyTest$3() {
}

$Class* TransparencyTest$3::load$($String* name, bool initialize) {
	$loadClass(TransparencyTest$3, name, initialize, &_TransparencyTest$3_ClassInfo_, allocate$TransparencyTest$3);
	return class$;
}

$Class* TransparencyTest$3::class$ = nullptr;