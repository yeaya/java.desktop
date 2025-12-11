#include <bug7068740$2.h>

#include <bug7068740.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $bug7068740 = ::bug7068740;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug7068740$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7068740$2::*)()>(&bug7068740$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7068740$2_EnclosingMethodInfo_ = {
	"bug7068740",
	"setUp",
	"()V"
};

$InnerClassInfo _bug7068740$2_InnerClassesInfo_[] = {
	{"bug7068740$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7068740$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7068740$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7068740$2_MethodInfo_,
	nullptr,
	&_bug7068740$2_EnclosingMethodInfo_,
	_bug7068740$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7068740"
};

$Object* allocate$bug7068740$2($Class* clazz) {
	return $of($alloc(bug7068740$2));
}

void bug7068740$2::init$() {
}

void bug7068740$2::run() {
	$var($bug7068740, test, $new($bug7068740));
	test->setVisible(true);
}

bug7068740$2::bug7068740$2() {
}

$Class* bug7068740$2::load$($String* name, bool initialize) {
	$loadClass(bug7068740$2, name, initialize, &_bug7068740$2_ClassInfo_, allocate$bug7068740$2);
	return class$;
}

$Class* bug7068740$2::class$ = nullptr;