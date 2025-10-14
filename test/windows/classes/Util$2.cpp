#include <Util$2.h>

#include <Util.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <jcpp.h>

using $Util = ::Util;
using $ExceptionArray = $Array<::java::lang::Exception>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;

$FieldInfo _Util$2_FieldInfo_[] = {
	{"val$exception", "[Ljava/lang/Exception;", nullptr, $FINAL | $SYNTHETIC, $field(Util$2, val$exception)},
	{"val$task", "Ljava/util/concurrent/Callable;", nullptr, $FINAL | $SYNTHETIC, $field(Util$2, val$task)},
	{"val$result", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(Util$2, val$result)},
	{}
};

$MethodInfo _Util$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Ljava/util/concurrent/Callable;[Ljava/lang/Exception;)V", "()V", 0, $method(static_cast<void(Util$2::*)($List*,$Callable*,$ExceptionArray*)>(&Util$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Util$2_EnclosingMethodInfo_ = {
	"Util",
	"invokeOnEDT",
	"(Ljava/util/concurrent/Callable;)Ljava/lang/Object;"
};

$InnerClassInfo _Util$2_InnerClassesInfo_[] = {
	{"Util$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Util$2_ClassInfo_ = {
	$ACC_SUPER,
	"Util$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_Util$2_FieldInfo_,
	_Util$2_MethodInfo_,
	nullptr,
	&_Util$2_EnclosingMethodInfo_,
	_Util$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Util"
};

$Object* allocate$Util$2($Class* clazz) {
	return $of($alloc(Util$2));
}

void Util$2::init$($List* val$result, $Callable* val$task, $ExceptionArray* val$exception) {
	$set(this, val$result, val$result);
	$set(this, val$task, val$task);
	$set(this, val$exception, val$exception);
}

void Util$2::run() {
	try {
		$nc(this->val$result)->add($($nc(this->val$task)->call()));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$nc(this->val$exception)->set(0, e);
	}
}

Util$2::Util$2() {
}

$Class* Util$2::load$($String* name, bool initialize) {
	$loadClass(Util$2, name, initialize, &_Util$2_ClassInfo_, allocate$Util$2);
	return class$;
}

$Class* Util$2::class$ = nullptr;