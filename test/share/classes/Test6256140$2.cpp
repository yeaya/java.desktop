#include <Test6256140$2.h>

#include <Test6256140.h>
#include <java/awt/Component.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $Test6256140 = ::Test6256140;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JLabel = ::javax::swing::JLabel;

$FieldInfo _Test6256140$2_FieldInfo_[] = {
	{"val$result", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(Test6256140$2, val$result)},
	{}
};

$MethodInfo _Test6256140$2_MethodInfo_[] = {
	{"<init>", "([Z)V", "()V", 0, $method(static_cast<void(Test6256140$2::*)($booleans*)>(&Test6256140$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6256140$2_EnclosingMethodInfo_ = {
	"Test6256140",
	"isTooltipShowning",
	"()Z"
};

$InnerClassInfo _Test6256140$2_InnerClassesInfo_[] = {
	{"Test6256140$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6256140$2_ClassInfo_ = {
	$ACC_SUPER,
	"Test6256140$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test6256140$2_FieldInfo_,
	_Test6256140$2_MethodInfo_,
	nullptr,
	&_Test6256140$2_EnclosingMethodInfo_,
	_Test6256140$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6256140"
};

$Object* allocate$Test6256140$2($Class* clazz) {
	return $of($alloc(Test6256140$2));
}

void Test6256140$2::init$($booleans* val$result) {
	$set(this, val$result, val$result);
}

void Test6256140$2::run() {
	$init($Test6256140);
	$nc(this->val$result)->set(0, $nc($Test6256140::toolTipLabel)->isShowing());
}

Test6256140$2::Test6256140$2() {
}

$Class* Test6256140$2::load$($String* name, bool initialize) {
	$loadClass(Test6256140$2, name, initialize, &_Test6256140$2_ClassInfo_, allocate$Test6256140$2);
	return class$;
}

$Class* Test6256140$2::class$ = nullptr;