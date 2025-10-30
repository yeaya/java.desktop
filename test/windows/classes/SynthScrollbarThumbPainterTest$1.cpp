#include <SynthScrollbarThumbPainterTest$1.h>

#include <SynthScrollbarThumbPainterTest.h>
#include <jcpp.h>

using $SynthScrollbarThumbPainterTest = ::SynthScrollbarThumbPainterTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _SynthScrollbarThumbPainterTest$1_FieldInfo_[] = {
	{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SynthScrollbarThumbPainterTest$1, val$lookAndFeelString)},
	{}
};

$MethodInfo _SynthScrollbarThumbPainterTest$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(SynthScrollbarThumbPainterTest$1::*)($String*)>(&SynthScrollbarThumbPainterTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthScrollbarThumbPainterTest$1_EnclosingMethodInfo_ = {
	"SynthScrollbarThumbPainterTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SynthScrollbarThumbPainterTest$1_InnerClassesInfo_[] = {
	{"SynthScrollbarThumbPainterTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthScrollbarThumbPainterTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"SynthScrollbarThumbPainterTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_SynthScrollbarThumbPainterTest$1_FieldInfo_,
	_SynthScrollbarThumbPainterTest$1_MethodInfo_,
	nullptr,
	&_SynthScrollbarThumbPainterTest$1_EnclosingMethodInfo_,
	_SynthScrollbarThumbPainterTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SynthScrollbarThumbPainterTest"
};

$Object* allocate$SynthScrollbarThumbPainterTest$1($Class* clazz) {
	return $of($alloc(SynthScrollbarThumbPainterTest$1));
}

void SynthScrollbarThumbPainterTest$1::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void SynthScrollbarThumbPainterTest$1::run() {
	try {
		$SynthScrollbarThumbPainterTest::constructTestUI(this->val$lookAndFeelString);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception creating test UI"_s);
	}
}

SynthScrollbarThumbPainterTest$1::SynthScrollbarThumbPainterTest$1() {
}

$Class* SynthScrollbarThumbPainterTest$1::load$($String* name, bool initialize) {
	$loadClass(SynthScrollbarThumbPainterTest$1, name, initialize, &_SynthScrollbarThumbPainterTest$1_ClassInfo_, allocate$SynthScrollbarThumbPainterTest$1);
	return class$;
}

$Class* SynthScrollbarThumbPainterTest$1::class$ = nullptr;