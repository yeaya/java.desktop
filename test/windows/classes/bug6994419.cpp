#include <bug6994419.h>

#include <bug6994419$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6994419$1 = ::bug6994419$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6994419_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6994419::*)()>(&bug6994419::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug6994419::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6994419_InnerClassesInfo_[] = {
	{"bug6994419$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6994419_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6994419",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6994419_MethodInfo_,
	nullptr,
	nullptr,
	_bug6994419_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6994419$1,bug6994419$1$1"
};

$Object* allocate$bug6994419($Class* clazz) {
	return $of($alloc(bug6994419));
}

void bug6994419::init$() {
}

void bug6994419::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6994419$1));
}

bug6994419::bug6994419() {
}

$Class* bug6994419::load$($String* name, bool initialize) {
	$loadClass(bug6994419, name, initialize, &_bug6994419_ClassInfo_, allocate$bug6994419);
	return class$;
}

$Class* bug6994419::class$ = nullptr;