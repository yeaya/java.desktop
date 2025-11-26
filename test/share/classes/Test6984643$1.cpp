#include <Test6984643$1.h>

#include <Test6984643.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

using $Test6984643 = ::Test6984643;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

$MethodInfo _Test6984643$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6984643$1::*)()>(&Test6984643$1::init$))},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6984643$1_EnclosingMethodInfo_ = {
	"Test6984643",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test6984643$1_InnerClassesInfo_[] = {
	{"Test6984643$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6984643$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test6984643$1",
	"javax.swing.plaf.basic.BasicLookAndFeel",
	nullptr,
	nullptr,
	_Test6984643$1_MethodInfo_,
	nullptr,
	&_Test6984643$1_EnclosingMethodInfo_,
	_Test6984643$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6984643"
};

$Object* allocate$Test6984643$1($Class* clazz) {
	return $of($alloc(Test6984643$1));
}

void Test6984643$1::init$() {
	$BasicLookAndFeel::init$();
}

$String* Test6984643$1::getName() {
	return "A name"_s;
}

$String* Test6984643$1::getID() {
	return "An id"_s;
}

$String* Test6984643$1::getDescription() {
	return "A description"_s;
}

bool Test6984643$1::isNativeLookAndFeel() {
	return false;
}

bool Test6984643$1::isSupportedLookAndFeel() {
	return true;
}

Test6984643$1::Test6984643$1() {
}

$Class* Test6984643$1::load$($String* name, bool initialize) {
	$loadClass(Test6984643$1, name, initialize, &_Test6984643$1_ClassInfo_, allocate$Test6984643$1);
	return class$;
}

$Class* Test6984643$1::class$ = nullptr;