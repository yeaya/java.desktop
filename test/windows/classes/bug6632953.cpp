#include <bug6632953.h>

#include <bug6632953$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6632953$1 = ::bug6632953$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6632953_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6632953::*)()>(&bug6632953::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug6632953::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6632953_InnerClassesInfo_[] = {
	{"bug6632953$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6632953_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6632953",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6632953_MethodInfo_,
	nullptr,
	nullptr,
	_bug6632953_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6632953$1"
};

$Object* allocate$bug6632953($Class* clazz) {
	return $of($alloc(bug6632953));
}

void bug6632953::init$() {
}

void bug6632953::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6632953$1));
}

bug6632953::bug6632953() {
}

$Class* bug6632953::load$($String* name, bool initialize) {
	$loadClass(bug6632953, name, initialize, &_bug6632953_ClassInfo_, allocate$bug6632953);
	return class$;
}

$Class* bug6632953::class$ = nullptr;