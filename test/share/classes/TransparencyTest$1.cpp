#include <TransparencyTest$1.h>

#include <TransparencyTest.h>
#include <jcpp.h>

using $TransparencyTest = ::TransparencyTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TransparencyTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TransparencyTest$1::*)()>(&TransparencyTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TransparencyTest$1_EnclosingMethodInfo_ = {
	"TransparencyTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TransparencyTest$1_InnerClassesInfo_[] = {
	{"TransparencyTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransparencyTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"TransparencyTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TransparencyTest$1_MethodInfo_,
	nullptr,
	&_TransparencyTest$1_EnclosingMethodInfo_,
	_TransparencyTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransparencyTest"
};

$Object* allocate$TransparencyTest$1($Class* clazz) {
	return $of($alloc(TransparencyTest$1));
}

void TransparencyTest$1::init$() {
}

void TransparencyTest$1::run() {
	$TransparencyTest::createAndShowGUI();
}

TransparencyTest$1::TransparencyTest$1() {
}

$Class* TransparencyTest$1::load$($String* name, bool initialize) {
	$loadClass(TransparencyTest$1, name, initialize, &_TransparencyTest$1_ClassInfo_, allocate$TransparencyTest$1);
	return class$;
}

$Class* TransparencyTest$1::class$ = nullptr;