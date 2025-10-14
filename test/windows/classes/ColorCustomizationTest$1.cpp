#include <ColorCustomizationTest$1.h>

#include <ColorCustomizationTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ColorCustomizationTest = ::ColorCustomizationTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _ColorCustomizationTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ColorCustomizationTest$1::*)()>(&ColorCustomizationTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ColorCustomizationTest$1_EnclosingMethodInfo_ = {
	"ColorCustomizationTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ColorCustomizationTest$1_InnerClassesInfo_[] = {
	{"ColorCustomizationTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ColorCustomizationTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ColorCustomizationTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ColorCustomizationTest$1_MethodInfo_,
	nullptr,
	&_ColorCustomizationTest$1_EnclosingMethodInfo_,
	_ColorCustomizationTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ColorCustomizationTest"
};

$Object* allocate$ColorCustomizationTest$1($Class* clazz) {
	return $of($alloc(ColorCustomizationTest$1));
}

void ColorCustomizationTest$1::init$() {
}

void ColorCustomizationTest$1::run() {
	$$new($ColorCustomizationTest)->test();
}

ColorCustomizationTest$1::ColorCustomizationTest$1() {
}

$Class* ColorCustomizationTest$1::load$($String* name, bool initialize) {
	$loadClass(ColorCustomizationTest$1, name, initialize, &_ColorCustomizationTest$1_ClassInfo_, allocate$ColorCustomizationTest$1);
	return class$;
}

$Class* ColorCustomizationTest$1::class$ = nullptr;