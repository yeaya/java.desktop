#include <bug5074573$1.h>

#include <bug5074573.h>
#include <jcpp.h>

using $bug5074573 = ::bug5074573;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug5074573$1_FieldInfo_[] = {
	{"val$textComponentClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(bug5074573$1, val$textComponentClass)},
	{}
};

$MethodInfo _bug5074573$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(bug5074573$1::*)($Class*)>(&bug5074573$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug5074573$1_EnclosingMethodInfo_ = {
	"bug5074573",
	"test",
	"(Ljava/lang/Class;)Z"
};

$InnerClassInfo _bug5074573$1_InnerClassesInfo_[] = {
	{"bug5074573$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug5074573$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug5074573$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug5074573$1_FieldInfo_,
	_bug5074573$1_MethodInfo_,
	nullptr,
	&_bug5074573$1_EnclosingMethodInfo_,
	_bug5074573$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug5074573"
};

$Object* allocate$bug5074573$1($Class* clazz) {
	return $of($alloc(bug5074573$1));
}

void bug5074573$1::init$($Class* val$textComponentClass) {
	$set(this, val$textComponentClass, val$textComponentClass);
}

void bug5074573$1::run() {
	$bug5074573::initialize(this->val$textComponentClass);
}

bug5074573$1::bug5074573$1() {
}

$Class* bug5074573$1::load$($String* name, bool initialize) {
	$loadClass(bug5074573$1, name, initialize, &_bug5074573$1_ClassInfo_, allocate$bug5074573$1);
	return class$;
}

$Class* bug5074573$1::class$ = nullptr;