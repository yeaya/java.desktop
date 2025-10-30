#include <bug8034955.h>

#include <bug8034955$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug8034955$1 = ::bug8034955$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug8034955_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8034955::*)()>(&bug8034955::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8034955::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8034955_InnerClassesInfo_[] = {
	{"bug8034955$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8034955_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8034955",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8034955_MethodInfo_,
	nullptr,
	nullptr,
	_bug8034955_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8034955$1"
};

$Object* allocate$bug8034955($Class* clazz) {
	return $of($alloc(bug8034955));
}

void bug8034955::init$() {
}

void bug8034955::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug8034955$1));
}

bug8034955::bug8034955() {
}

$Class* bug8034955::load$($String* name, bool initialize) {
	$loadClass(bug8034955, name, initialize, &_bug8034955_ClassInfo_, allocate$bug8034955);
	return class$;
}

$Class* bug8034955::class$ = nullptr;