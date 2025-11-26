#include <Test8007563$1.h>

#include <Test8007563.h>
#include <java/awt/SecondaryLoop.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Test8007563 = ::Test8007563;
using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _Test8007563$1_FieldInfo_[] = {
	{"this$0", "LTest8007563;", nullptr, $FINAL | $SYNTHETIC, $field(Test8007563$1, this$0)},
	{"val$secondaryLoop", "Ljava/awt/SecondaryLoop;", nullptr, $FINAL | $SYNTHETIC, $field(Test8007563$1, val$secondaryLoop)},
	{}
};

$MethodInfo _Test8007563$1_MethodInfo_[] = {
	{"<init>", "(LTest8007563;Ljava/awt/SecondaryLoop;)V", nullptr, 0, $method(static_cast<void(Test8007563$1::*)($Test8007563*,$SecondaryLoop*)>(&Test8007563$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test8007563$1_EnclosingMethodInfo_ = {
	"Test8007563",
	"run",
	"()V"
};

$InnerClassInfo _Test8007563$1_InnerClassesInfo_[] = {
	{"Test8007563$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8007563$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test8007563$1",
	"java.lang.Thread",
	nullptr,
	_Test8007563$1_FieldInfo_,
	_Test8007563$1_MethodInfo_,
	nullptr,
	&_Test8007563$1_EnclosingMethodInfo_,
	_Test8007563$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test8007563"
};

$Object* allocate$Test8007563$1($Class* clazz) {
	return $of($alloc(Test8007563$1));
}

void Test8007563$1::init$($Test8007563* this$0, $SecondaryLoop* val$secondaryLoop) {
	$set(this, this$0, this$0);
	$set(this, val$secondaryLoop, val$secondaryLoop);
	$Thread::init$();
}

void Test8007563$1::run() {
	try {
		$Thread::sleep(200);
	} catch ($InterruptedException& e) {
	}
	$nc(this->val$secondaryLoop)->exit();
	$SwingUtilities::invokeLater(this->this$0);
}

Test8007563$1::Test8007563$1() {
}

$Class* Test8007563$1::load$($String* name, bool initialize) {
	$loadClass(Test8007563$1, name, initialize, &_Test8007563$1_ClassInfo_, allocate$Test8007563$1);
	return class$;
}

$Class* Test8007563$1::class$ = nullptr;