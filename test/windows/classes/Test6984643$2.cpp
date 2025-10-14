#include <Test6984643$2.h>

#include <Test6984643.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $Test6984643 = ::Test6984643;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFileChooser = ::javax::swing::JFileChooser;

$MethodInfo _Test6984643$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6984643$2::*)()>(&Test6984643$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6984643$2_EnclosingMethodInfo_ = {
	"Test6984643",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test6984643$2_InnerClassesInfo_[] = {
	{"Test6984643$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6984643$2_ClassInfo_ = {
	$ACC_SUPER,
	"Test6984643$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test6984643$2_MethodInfo_,
	nullptr,
	&_Test6984643$2_EnclosingMethodInfo_,
	_Test6984643$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6984643"
};

$Object* allocate$Test6984643$2($Class* clazz) {
	return $of($alloc(Test6984643$2));
}

void Test6984643$2::init$() {
}

void Test6984643$2::run() {
	$new($JFileChooser);
}

Test6984643$2::Test6984643$2() {
}

$Class* Test6984643$2::load$($String* name, bool initialize) {
	$loadClass(Test6984643$2, name, initialize, &_Test6984643$2_ClassInfo_, allocate$Test6984643$2);
	return class$;
}

$Class* Test6984643$2::class$ = nullptr;