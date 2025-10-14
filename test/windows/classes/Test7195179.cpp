#include <Test7195179.h>

#include <Test7195179$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Test7195179$1 = ::Test7195179$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _Test7195179_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test7195179, frame)},
	{}
};

$MethodInfo _Test7195179_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test7195179::*)()>(&Test7195179::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test7195179::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test7195179_InnerClassesInfo_[] = {
	{"Test7195179$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test7195179_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test7195179",
	"java.lang.Object",
	nullptr,
	_Test7195179_FieldInfo_,
	_Test7195179_MethodInfo_,
	nullptr,
	nullptr,
	_Test7195179_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test7195179$1,Test7195179$1$1"
};

$Object* allocate$Test7195179($Class* clazz) {
	return $of($alloc(Test7195179));
}

$JFrame* Test7195179::frame = nullptr;

void Test7195179::init$() {
}

void Test7195179::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($Test7195179$1));
}

Test7195179::Test7195179() {
}

$Class* Test7195179::load$($String* name, bool initialize) {
	$loadClass(Test7195179, name, initialize, &_Test7195179_ClassInfo_, allocate$Test7195179);
	return class$;
}

$Class* Test7195179::class$ = nullptr;