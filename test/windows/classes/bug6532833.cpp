#include <bug6532833.h>

#include <bug6532833$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6532833$1 = ::bug6532833$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6532833_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6532833::*)()>(&bug6532833::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6532833::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6532833_InnerClassesInfo_[] = {
	{"bug6532833$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6532833_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6532833",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6532833_MethodInfo_,
	nullptr,
	nullptr,
	_bug6532833_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6532833$1"
};

$Object* allocate$bug6532833($Class* clazz) {
	return $of($alloc(bug6532833));
}

void bug6532833::init$() {
}

void bug6532833::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6532833$1));
}

bug6532833::bug6532833() {
}

$Class* bug6532833::load$($String* name, bool initialize) {
	$loadClass(bug6532833, name, initialize, &_bug6532833_ClassInfo_, allocate$bug6532833);
	return class$;
}

$Class* bug6532833::class$ = nullptr;