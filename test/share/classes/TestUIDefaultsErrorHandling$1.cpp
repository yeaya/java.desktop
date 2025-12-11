#include <TestUIDefaultsErrorHandling$1.h>

#include <TestUIDefaultsErrorHandling.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _TestUIDefaultsErrorHandling$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestUIDefaultsErrorHandling$1::*)()>(&TestUIDefaultsErrorHandling$1::init$))},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestUIDefaultsErrorHandling$1_EnclosingMethodInfo_ = {
	"TestUIDefaultsErrorHandling",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestUIDefaultsErrorHandling$1_InnerClassesInfo_[] = {
	{"TestUIDefaultsErrorHandling$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestUIDefaultsErrorHandling$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestUIDefaultsErrorHandling$1",
	"javax.swing.JLabel",
	nullptr,
	nullptr,
	_TestUIDefaultsErrorHandling$1_MethodInfo_,
	nullptr,
	&_TestUIDefaultsErrorHandling$1_EnclosingMethodInfo_,
	_TestUIDefaultsErrorHandling$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestUIDefaultsErrorHandling"
};

$Object* allocate$TestUIDefaultsErrorHandling$1($Class* clazz) {
	return $of($alloc(TestUIDefaultsErrorHandling$1));
}

void TestUIDefaultsErrorHandling$1::init$() {
	$JLabel::init$();
}

$String* TestUIDefaultsErrorHandling$1::getUIClassID() {
	return "BrokenUI"_s;
}

TestUIDefaultsErrorHandling$1::TestUIDefaultsErrorHandling$1() {
}

$Class* TestUIDefaultsErrorHandling$1::load$($String* name, bool initialize) {
	$loadClass(TestUIDefaultsErrorHandling$1, name, initialize, &_TestUIDefaultsErrorHandling$1_ClassInfo_, allocate$TestUIDefaultsErrorHandling$1);
	return class$;
}

$Class* TestUIDefaultsErrorHandling$1::class$ = nullptr;