#include <bug6613904.h>

#include <bug6613904$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6613904$1 = ::bug6613904$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6613904_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6613904::*)()>(&bug6613904::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6613904::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6613904_InnerClassesInfo_[] = {
	{"bug6613904$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6613904_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6613904",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6613904_MethodInfo_,
	nullptr,
	nullptr,
	_bug6613904_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6613904$1"
};

$Object* allocate$bug6613904($Class* clazz) {
	return $of($alloc(bug6613904));
}

void bug6613904::init$() {
}

void bug6613904::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6613904$1));
}

bug6613904::bug6613904() {
}

$Class* bug6613904::load$($String* name, bool initialize) {
	$loadClass(bug6613904, name, initialize, &_bug6613904_ClassInfo_, allocate$bug6613904);
	return class$;
}

$Class* bug6613904::class$ = nullptr;