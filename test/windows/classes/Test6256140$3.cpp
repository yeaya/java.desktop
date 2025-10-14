#include <Test6256140$3.h>

#include <Test6256140.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Test6256140 = ::Test6256140;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _Test6256140$3_FieldInfo_[] = {
	{"val$result", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(Test6256140$3, val$result)},
	{}
};

$MethodInfo _Test6256140$3_MethodInfo_[] = {
	{"<init>", "([Z)V", "()V", 0, $method(static_cast<void(Test6256140$3::*)($booleans*)>(&Test6256140$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6256140$3_EnclosingMethodInfo_ = {
	"Test6256140",
	"isTextEqual",
	"()Z"
};

$InnerClassInfo _Test6256140$3_InnerClassesInfo_[] = {
	{"Test6256140$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6256140$3_ClassInfo_ = {
	$ACC_SUPER,
	"Test6256140$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test6256140$3_FieldInfo_,
	_Test6256140$3_MethodInfo_,
	nullptr,
	&_Test6256140$3_EnclosingMethodInfo_,
	_Test6256140$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6256140"
};

$Object* allocate$Test6256140$3($Class* clazz) {
	return $of($alloc(Test6256140$3));
}

void Test6256140$3::init$($booleans* val$result) {
	$set(this, val$result, val$result);
}

void Test6256140$3::run() {
	$init($Test6256140);
	$nc(this->val$result)->set(0, "value"_s->equals($($nc($Test6256140::ft)->getText())));
}

Test6256140$3::Test6256140$3() {
}

$Class* Test6256140$3::load$($String* name, bool initialize) {
	$loadClass(Test6256140$3, name, initialize, &_Test6256140$3_ClassInfo_, allocate$Test6256140$3);
	return class$;
}

$Class* Test6256140$3::class$ = nullptr;