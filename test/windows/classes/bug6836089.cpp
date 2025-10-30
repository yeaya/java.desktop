#include <bug6836089.h>

#include <bug6836089$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6836089$1 = ::bug6836089$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6836089_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6836089::*)()>(&bug6836089::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6836089::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6836089_InnerClassesInfo_[] = {
	{"bug6836089$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6836089_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6836089",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6836089_MethodInfo_,
	nullptr,
	nullptr,
	_bug6836089_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6836089$1"
};

$Object* allocate$bug6836089($Class* clazz) {
	return $of($alloc(bug6836089));
}

void bug6836089::init$() {
}

void bug6836089::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6836089$1));
}

bug6836089::bug6836089() {
}

$Class* bug6836089::load$($String* name, bool initialize) {
	$loadClass(bug6836089, name, initialize, &_bug6836089_ClassInfo_, allocate$bug6836089);
	return class$;
}

$Class* bug6836089::class$ = nullptr;