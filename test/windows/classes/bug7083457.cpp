#include <bug7083457.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

$MethodInfo _bug7083457_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7083457::*)()>(&bug7083457::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7083457::main))},
	{}
};

$ClassInfo _bug7083457_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7083457",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug7083457_MethodInfo_
};

$Object* allocate$bug7083457($Class* clazz) {
	return $of($alloc(bug7083457));
}

void bug7083457::init$() {
}

void bug7083457::main($StringArray* args) {
	$var($DefaultCaret, caret, $new($DefaultCaret));
	for (int32_t i = 0; i < 10; ++i) {
		bool active = (i % 2 == 0);
		caret->setVisible(active);
		if (caret->isActive() != active) {
			$throwNew($RuntimeException, $$str({"caret.isActive() does not equal: "_s, $$str(active)}));
		}
	}
}

bug7083457::bug7083457() {
}

$Class* bug7083457::load$($String* name, bool initialize) {
	$loadClass(bug7083457, name, initialize, &_bug7083457_ClassInfo_, allocate$bug7083457);
	return class$;
}

$Class* bug7083457::class$ = nullptr;