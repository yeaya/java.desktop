#include <bug4252173.h>

#include <bug4252173$1.h>
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

using $bug4252173$1 = ::bug4252173$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug4252173_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4252173::*)()>(&bug4252173::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4252173::main)), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _bug4252173_InnerClassesInfo_[] = {
	{"bug4252173$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4252173_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4252173",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug4252173_MethodInfo_,
	nullptr,
	nullptr,
	_bug4252173_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4252173$1"
};

$Object* allocate$bug4252173($Class* clazz) {
	return $of($alloc(bug4252173));
}

void bug4252173::init$() {
}

void bug4252173::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug4252173$1));
}

bug4252173::bug4252173() {
}

$Class* bug4252173::load$($String* name, bool initialize) {
	$loadClass(bug4252173, name, initialize, &_bug4252173_ClassInfo_, allocate$bug4252173);
	return class$;
}

$Class* bug4252173::class$ = nullptr;