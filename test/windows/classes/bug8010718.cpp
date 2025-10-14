#include <bug8010718.h>

#include <bug8010718$1.h>
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

using $bug8010718$1 = ::bug8010718$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug8010718_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8010718::*)()>(&bug8010718::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8010718::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8010718_InnerClassesInfo_[] = {
	{"bug8010718$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8010718_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8010718",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8010718_MethodInfo_,
	nullptr,
	nullptr,
	_bug8010718_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8010718$1,bug8010718$1$2,bug8010718$1$1"
};

$Object* allocate$bug8010718($Class* clazz) {
	return $of($alloc(bug8010718));
}

void bug8010718::init$() {
}

void bug8010718::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug8010718$1));
}

bug8010718::bug8010718() {
}

$Class* bug8010718::load$($String* name, bool initialize) {
	$loadClass(bug8010718, name, initialize, &_bug8010718_ClassInfo_, allocate$bug8010718);
	return class$;
}

$Class* bug8010718::class$ = nullptr;