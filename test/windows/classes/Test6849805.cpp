#include <Test6849805.h>

#include <Test6849805$Minimbus.h>
#include <java/awt/Color.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BLACK
#undef GREEN
#undef RED
#undef WHITE

using $Test6849805$Minimbus = ::Test6849805$Minimbus;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _Test6849805_FieldInfo_[] = {
	{"pass", "Z", nullptr, $STATIC, $staticField(Test6849805, pass)},
	{}
};

$MethodInfo _Test6849805_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6849805::*)()>(&Test6849805::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6849805::main))},
	{}
};

$InnerClassInfo _Test6849805_InnerClassesInfo_[] = {
	{"Test6849805$Minimbus", "Test6849805", "Minimbus", $STATIC},
	{}
};

$ClassInfo _Test6849805_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6849805",
	"java.lang.Object",
	nullptr,
	_Test6849805_FieldInfo_,
	_Test6849805_MethodInfo_,
	nullptr,
	nullptr,
	_Test6849805_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6849805$Minimbus"
};

$Object* allocate$Test6849805($Class* clazz) {
	return $of($alloc(Test6849805));
}

bool Test6849805::pass = false;

void Test6849805::init$() {
}

void Test6849805::main($StringArray* args) {
	$init(Test6849805);
	$var($Test6849805$Minimbus, laf, $new($Test6849805$Minimbus));
	$init($Color);
	laf->test($Color::WHITE, $Color::BLACK, 0.0f);
	laf->test($Color::WHITE, $Color::BLACK, 1.0f);
	laf->test($Color::BLACK, $Color::WHITE, 0.0f);
	laf->test($Color::BLACK, $Color::WHITE, 1.0f);
	laf->test($Color::RED, $Color::GREEN, 0.0f);
	laf->test($Color::RED, $Color::GREEN, 1.0f);
	$var($Color, var$0, $new($Color, 127, 127, 127));
	laf->test(var$0, $$new($Color, 51, 151, 212), 0.0f);
	$var($Color, var$1, $new($Color, 127, 127, 127));
	laf->test(var$1, $$new($Color, 51, 151, 212), 1.0f);
	$var($Color, var$2, $new($Color, 221, 63, 189));
	laf->test(var$2, $$new($Color, 112, 200, 89), 0.0f);
	$var($Color, var$3, $new($Color, 221, 63, 189));
	laf->test(var$3, $$new($Color, 112, 200, 89), 1.0f);
	if (!Test6849805::pass) {
		$throwNew($RuntimeException, "Some testcases failed, see above"_s);
	}
}

void clinit$Test6849805($Class* class$) {
	Test6849805::pass = true;
}

Test6849805::Test6849805() {
}

$Class* Test6849805::load$($String* name, bool initialize) {
	$loadClass(Test6849805, name, initialize, &_Test6849805_ClassInfo_, clinit$Test6849805, allocate$Test6849805);
	return class$;
}

$Class* Test6849805::class$ = nullptr;