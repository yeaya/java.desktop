#include <bug7013453.h>

#include <bug7013453$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug7013453$1 = ::bug7013453$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug7013453_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7013453::*)()>(&bug7013453::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7013453::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7013453_InnerClassesInfo_[] = {
	{"bug7013453$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7013453_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7013453",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug7013453_MethodInfo_,
	nullptr,
	nullptr,
	_bug7013453_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7013453$1,bug7013453$1$1"
};

$Object* allocate$bug7013453($Class* clazz) {
	return $of($alloc(bug7013453));
}

void bug7013453::init$() {
}

void bug7013453::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug7013453$1));
}

bug7013453::bug7013453() {
}

$Class* bug7013453::load$($String* name, bool initialize) {
	$loadClass(bug7013453, name, initialize, &_bug7013453_ClassInfo_, allocate$bug7013453);
	return class$;
}

$Class* bug7013453::class$ = nullptr;