#include <Test4124729.h>

#include <java/awt/Color.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/border/LineBorder.h>
#include <jcpp.h>

#undef BLUE

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LineBorder = ::javax::swing::border::LineBorder;

$MethodInfo _Test4124729_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4124729::*)()>(&Test4124729::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test4124729::main))},
	{}
};

$ClassInfo _Test4124729_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4124729",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test4124729_MethodInfo_
};

$Object* allocate$Test4124729($Class* clazz) {
	return $of($alloc(Test4124729));
}

void Test4124729::init$() {
}

void Test4124729::main($StringArray* args) {
	$init($Color);
	$new($LineBorder, $Color::BLUE, 3, true);
}

Test4124729::Test4124729() {
}

$Class* Test4124729::load$($String* name, bool initialize) {
	$loadClass(Test4124729, name, initialize, &_Test4124729_ClassInfo_, allocate$Test4124729);
	return class$;
}

$Class* Test4124729::class$ = nullptr;