#include <bug6953396.h>

#include <bug6953396$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6953396$1 = ::bug6953396$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6953396_FieldInfo_[] = {
	{"flag", "Z", nullptr, $STATIC | $VOLATILE, $staticField(bug6953396, flag)},
	{}
};

$MethodInfo _bug6953396_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6953396::*)()>(&bug6953396::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6953396::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6953396_InnerClassesInfo_[] = {
	{"bug6953396$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6953396_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6953396",
	"java.lang.Object",
	nullptr,
	_bug6953396_FieldInfo_,
	_bug6953396_MethodInfo_,
	nullptr,
	nullptr,
	_bug6953396_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6953396$1,bug6953396$1$1"
};

$Object* allocate$bug6953396($Class* clazz) {
	return $of($alloc(bug6953396));
}

$volatile(bool) bug6953396::flag = false;

void bug6953396::init$() {
}

void bug6953396::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6953396$1));
	$init(bug6953396);
	if (bug6953396::flag) {
		$throwNew($RuntimeException, "uninstallDefaults() hasn\'t been called"_s);
	}
}

bug6953396::bug6953396() {
}

$Class* bug6953396::load$($String* name, bool initialize) {
	$loadClass(bug6953396, name, initialize, &_bug6953396_ClassInfo_, allocate$bug6953396);
	return class$;
}

$Class* bug6953396::class$ = nullptr;