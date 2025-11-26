#include <TransparencyTest$2.h>

#include <TransparencyTest.h>
#include <java/awt/Dialog.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $TransparencyTest = ::TransparencyTest;
using $Dialog = ::java::awt::Dialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JDialog = ::javax::swing::JDialog;

$MethodInfo _TransparencyTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TransparencyTest$2::*)()>(&TransparencyTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TransparencyTest$2_EnclosingMethodInfo_ = {
	"TransparencyTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TransparencyTest$2_InnerClassesInfo_[] = {
	{"TransparencyTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransparencyTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"TransparencyTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TransparencyTest$2_MethodInfo_,
	nullptr,
	&_TransparencyTest$2_EnclosingMethodInfo_,
	_TransparencyTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransparencyTest"
};

$Object* allocate$TransparencyTest$2($Class* clazz) {
	return $of($alloc(TransparencyTest$2));
}

void TransparencyTest$2::init$() {
}

void TransparencyTest$2::run() {
	$init($TransparencyTest);
	$nc($TransparencyTest::dialog)->setOpacity(0.6f);
}

TransparencyTest$2::TransparencyTest$2() {
}

$Class* TransparencyTest$2::load$($String* name, bool initialize) {
	$loadClass(TransparencyTest$2, name, initialize, &_TransparencyTest$2_ClassInfo_, allocate$TransparencyTest$2);
	return class$;
}

$Class* TransparencyTest$2::class$ = nullptr;