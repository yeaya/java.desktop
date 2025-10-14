#include <bug7013453$1$1.h>

#include <bug7013453$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug7013453$1 = ::bug7013453$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;

$FieldInfo _bug7013453$1$1_FieldInfo_[] = {
	{"this$0", "Lbug7013453$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug7013453$1$1, this$0)},
	{"val$showingField", "Ljava/lang/reflect/Field;", nullptr, $FINAL | $SYNTHETIC, $field(bug7013453$1$1, val$showingField)},
	{"val$paintManager", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(bug7013453$1$1, val$paintManager)},
	{}
};

$MethodInfo _bug7013453$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug7013453$1;Ljava/lang/Object;Ljava/lang/reflect/Field;)V", "()V", 0, $method(static_cast<void(bug7013453$1$1::*)($bug7013453$1*,Object$*,$Field*)>(&bug7013453$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7013453$1$1_EnclosingMethodInfo_ = {
	"bug7013453$1",
	"run",
	"()V"
};

$InnerClassInfo _bug7013453$1$1_InnerClassesInfo_[] = {
	{"bug7013453$1", nullptr, nullptr, 0},
	{"bug7013453$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7013453$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7013453$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug7013453$1$1_FieldInfo_,
	_bug7013453$1$1_MethodInfo_,
	nullptr,
	&_bug7013453$1$1_EnclosingMethodInfo_,
	_bug7013453$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7013453"
};

$Object* allocate$bug7013453$1$1($Class* clazz) {
	return $of($alloc(bug7013453$1$1));
}

void bug7013453$1$1::init$($bug7013453$1* this$0, Object$* val$paintManager, $Field* val$showingField) {
	$set(this, this$0, this$0);
	$set(this, val$paintManager, val$paintManager);
	$set(this, val$showingField, val$showingField);
}

void bug7013453$1$1::run() {
	$beforeCallerSensitive();
	try {
		$Thread::sleep(500);
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$synchronized(this->val$paintManager) {
		try {
			$nc(this->val$showingField)->setBoolean(this->val$paintManager, false);
		} catch ($IllegalAccessException&) {
			$var($IllegalAccessException, e, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
}

bug7013453$1$1::bug7013453$1$1() {
}

$Class* bug7013453$1$1::load$($String* name, bool initialize) {
	$loadClass(bug7013453$1$1, name, initialize, &_bug7013453$1$1_ClassInfo_, allocate$bug7013453$1$1);
	return class$;
}

$Class* bug7013453$1$1::class$ = nullptr;