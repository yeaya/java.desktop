#include <TransparencyTest$4.h>

#include <TransparencyTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef NORMAL

using $TransparencyTest = ::TransparencyTest;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _TransparencyTest$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TransparencyTest$4::*)()>(&TransparencyTest$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TransparencyTest$4_EnclosingMethodInfo_ = {
	"TransparencyTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TransparencyTest$4_InnerClassesInfo_[] = {
	{"TransparencyTest$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransparencyTest$4_ClassInfo_ = {
	$ACC_SUPER,
	"TransparencyTest$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TransparencyTest$4_MethodInfo_,
	nullptr,
	&_TransparencyTest$4_EnclosingMethodInfo_,
	_TransparencyTest$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransparencyTest"
};

$Object* allocate$TransparencyTest$4($Class* clazz) {
	return $of($alloc(TransparencyTest$4));
}

void TransparencyTest$4::init$() {
}

void TransparencyTest$4::run() {
	$init($TransparencyTest);
	$nc($TransparencyTest::frame)->setExtendedState($JFrame::NORMAL);
}

TransparencyTest$4::TransparencyTest$4() {
}

$Class* TransparencyTest$4::load$($String* name, bool initialize) {
	$loadClass(TransparencyTest$4, name, initialize, &_TransparencyTest$4_ClassInfo_, allocate$TransparencyTest$4);
	return class$;
}

$Class* TransparencyTest$4::class$ = nullptr;