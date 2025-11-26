#include <bug6604281.h>

#include <bug6604281$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6604281$1 = ::bug6604281$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6604281_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6604281::*)()>(&bug6604281::init$))},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&bug6604281::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6604281::main)), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _bug6604281_InnerClassesInfo_[] = {
	{"bug6604281$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6604281_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6604281",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6604281_MethodInfo_,
	nullptr,
	nullptr,
	_bug6604281_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6604281$1"
};

$Object* allocate$bug6604281($Class* clazz) {
	return $of($alloc(bug6604281));
}

void bug6604281::init$() {
}

void bug6604281::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6604281$1));
}

void bug6604281::fail($String* s) {
	$throwNew($RuntimeException, $$str({"Test failed: "_s, s}));
}

bug6604281::bug6604281() {
}

$Class* bug6604281::load$($String* name, bool initialize) {
	$loadClass(bug6604281, name, initialize, &_bug6604281_ClassInfo_, allocate$bug6604281);
	return class$;
}

$Class* bug6604281::class$ = nullptr;