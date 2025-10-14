#include <bug6694823$2.h>

#include <bug6694823.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $bug6694823 = ::bug6694823;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Permission = ::java::security::Permission;

$MethodInfo _bug6694823$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6694823$2::*)()>(&bug6694823$2::init$))},
	{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6694823$2_EnclosingMethodInfo_ = {
	"bug6694823",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6694823$2_InnerClassesInfo_[] = {
	{"bug6694823$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6694823$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6694823$2",
	"java.lang.SecurityManager",
	nullptr,
	nullptr,
	_bug6694823$2_MethodInfo_,
	nullptr,
	&_bug6694823$2_EnclosingMethodInfo_,
	_bug6694823$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6694823"
};

$Object* allocate$bug6694823$2($Class* clazz) {
	return $of($alloc(bug6694823$2));
}

void bug6694823$2::init$() {
	$SecurityManager::init$();
}

void bug6694823$2::checkPermission($Permission* perm) {
	if ($nc($($nc(perm)->getName()))->equals("setWindowAlwaysOnTop"_s)) {
		$throwNew($SecurityException);
	}
}

bug6694823$2::bug6694823$2() {
}

$Class* bug6694823$2::load$($String* name, bool initialize) {
	$loadClass(bug6694823$2, name, initialize, &_bug6694823$2_ClassInfo_, allocate$bug6694823$2);
	return class$;
}

$Class* bug6694823$2::class$ = nullptr;