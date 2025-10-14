#include <bug4960629$1.h>

#include <bug4960629.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug4960629 = ::bug4960629;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _bug4960629$1_FieldInfo_[] = {
	{"this$0", "Lbug4960629;", nullptr, $FINAL | $SYNTHETIC, $field(bug4960629$1, this$0)},
	{}
};

$MethodInfo _bug4960629$1_MethodInfo_[] = {
	{"<init>", "(Lbug4960629;)V", nullptr, 0, $method(static_cast<void(bug4960629$1::*)($bug4960629*)>(&bug4960629$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4960629$1_EnclosingMethodInfo_ = {
	"bug4960629",
	"<init>",
	"()V"
};

$InnerClassInfo _bug4960629$1_InnerClassesInfo_[] = {
	{"bug4960629$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4960629$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4960629$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4960629$1_FieldInfo_,
	_bug4960629$1_MethodInfo_,
	nullptr,
	&_bug4960629$1_EnclosingMethodInfo_,
	_bug4960629$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4960629"
};

$Object* allocate$bug4960629$1($Class* clazz) {
	return $of($alloc(bug4960629$1));
}

void bug4960629$1::init$($bug4960629* this$0) {
	$set(this, this$0, this$0);
}

void bug4960629$1::run() {
	try {
		this->this$0->createAndShowGUI();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, $$str({"Exception "_s, $(e->getMessage())}));
	}
}

bug4960629$1::bug4960629$1() {
}

$Class* bug4960629$1::load$($String* name, bool initialize) {
	$loadClass(bug4960629$1, name, initialize, &_bug4960629$1_ClassInfo_, allocate$bug4960629$1);
	return class$;
}

$Class* bug4960629$1::class$ = nullptr;