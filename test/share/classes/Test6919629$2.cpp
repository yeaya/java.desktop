#include <Test6919629$2.h>

#include <Test6919629.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $Test6919629 = ::Test6919629;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _Test6919629$2_FieldInfo_[] = {
	{"this$0", "LTest6919629;", nullptr, $FINAL | $SYNTHETIC, $field(Test6919629$2, this$0)},
	{}
};

$MethodInfo _Test6919629$2_MethodInfo_[] = {
	{"<init>", "(LTest6919629;)V", nullptr, 0, $method(static_cast<void(Test6919629$2::*)($Test6919629*)>(&Test6919629$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6919629$2_EnclosingMethodInfo_ = {
	"Test6919629",
	"test",
	"()V"
};

$InnerClassInfo _Test6919629$2_InnerClassesInfo_[] = {
	{"Test6919629$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6919629$2_ClassInfo_ = {
	$ACC_SUPER,
	"Test6919629$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test6919629$2_FieldInfo_,
	_Test6919629$2_MethodInfo_,
	nullptr,
	&_Test6919629$2_EnclosingMethodInfo_,
	_Test6919629$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6919629"
};

$Object* allocate$Test6919629$2($Class* clazz) {
	return $of($alloc(Test6919629$2));
}

void Test6919629$2::init$($Test6919629* this$0) {
	$set(this, this$0, this$0);
}

void Test6919629$2::run() {
	$nc($($nc(this->this$0->f)->getContentPane()))->removeAll();
	$nc(this->this$0->f)->setVisible(false);
	$nc(this->this$0->f)->dispose();
}

Test6919629$2::Test6919629$2() {
}

$Class* Test6919629$2::load$($String* name, bool initialize) {
	$loadClass(Test6919629$2, name, initialize, &_Test6919629$2_ClassInfo_, allocate$Test6919629$2);
	return class$;
}

$Class* Test6919629$2::class$ = nullptr;