#include <bug6938583.h>

#include <bug6938583$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6938583$1 = ::bug6938583$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6938583_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6938583::*)()>(&bug6938583::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6938583::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6938583_InnerClassesInfo_[] = {
	{"bug6938583$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6938583_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6938583",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6938583_MethodInfo_,
	nullptr,
	nullptr,
	_bug6938583_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6938583$1"
};

$Object* allocate$bug6938583($Class* clazz) {
	return $of($alloc(bug6938583));
}

void bug6938583::init$() {
}

void bug6938583::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6938583$1));
}

bug6938583::bug6938583() {
}

$Class* bug6938583::load$($String* name, bool initialize) {
	$loadClass(bug6938583, name, initialize, &_bug6938583_ClassInfo_, allocate$bug6938583);
	return class$;
}

$Class* bug6938583::class$ = nullptr;