#include <bug6735286.h>

#include <bug6735286$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6735286$1 = ::bug6735286$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6735286_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6735286::*)()>(&bug6735286::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6735286::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6735286_InnerClassesInfo_[] = {
	{"bug6735286$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6735286_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6735286",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6735286_MethodInfo_,
	nullptr,
	nullptr,
	_bug6735286_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6735286$1"
};

$Object* allocate$bug6735286($Class* clazz) {
	return $of($alloc(bug6735286));
}

void bug6735286::init$() {
}

void bug6735286::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6735286$1));
}

bug6735286::bug6735286() {
}

$Class* bug6735286::load$($String* name, bool initialize) {
	$loadClass(bug6735286, name, initialize, &_bug6735286_ClassInfo_, allocate$bug6735286);
	return class$;
}

$Class* bug6735286::class$ = nullptr;