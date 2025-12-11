#include <NormalBoundsTest$10.h>

#include <NormalBoundsTest.h>
#include <jcpp.h>

using $NormalBoundsTest = ::NormalBoundsTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _NormalBoundsTest$10_FieldInfo_[] = {
	{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(NormalBoundsTest$10, val$lookAndFeelString)},
	{}
};

$MethodInfo _NormalBoundsTest$10_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(NormalBoundsTest$10::*)($String*)>(&NormalBoundsTest$10::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$10_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _NormalBoundsTest$10_InnerClassesInfo_[] = {
	{"NormalBoundsTest$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$10_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$10",
	"java.lang.Object",
	"java.lang.Runnable",
	_NormalBoundsTest$10_FieldInfo_,
	_NormalBoundsTest$10_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$10_EnclosingMethodInfo_,
	_NormalBoundsTest$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$10($Class* clazz) {
	return $of($alloc(NormalBoundsTest$10));
}

void NormalBoundsTest$10::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void NormalBoundsTest$10::run() {
	$NormalBoundsTest::createUI(this->val$lookAndFeelString);
}

NormalBoundsTest$10::NormalBoundsTest$10() {
}

$Class* NormalBoundsTest$10::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$10, name, initialize, &_NormalBoundsTest$10_ClassInfo_, allocate$NormalBoundsTest$10);
	return class$;
}

$Class* NormalBoundsTest$10::class$ = nullptr;