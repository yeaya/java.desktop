#include <bug6875716$1.h>

#include <bug6875716.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug6875716 = ::bug6875716;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6875716$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6875716$1::*)()>(&bug6875716$1::init$))},
	{}
};

$EnclosingMethodInfo _bug6875716$1_EnclosingMethodInfo_ = {
	"bug6875716",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6875716$1_InnerClassesInfo_[] = {
	{"bug6875716$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6875716$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6875716$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_bug6875716$1_MethodInfo_,
	nullptr,
	&_bug6875716$1_EnclosingMethodInfo_,
	_bug6875716$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6875716"
};

$Object* allocate$bug6875716$1($Class* clazz) {
	return $of($alloc(bug6875716$1));
}

void bug6875716$1::init$() {
	$Component::init$();
}

bug6875716$1::bug6875716$1() {
}

$Class* bug6875716$1::load$($String* name, bool initialize) {
	$loadClass(bug6875716$1, name, initialize, &_bug6875716$1_ClassInfo_, allocate$bug6875716$1);
	return class$;
}

$Class* bug6875716$1::class$ = nullptr;