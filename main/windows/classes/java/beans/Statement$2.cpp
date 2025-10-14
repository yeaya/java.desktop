#include <java/beans/Statement$2.h>

#include <java/beans/Statement.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Statement = ::java::beans::Statement;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace java {
	namespace beans {

$FieldInfo _Statement$2_FieldInfo_[] = {
	{"this$0", "Ljava/beans/Statement;", nullptr, $FINAL | $SYNTHETIC, $field(Statement$2, this$0)},
	{}
};

$MethodInfo _Statement$2_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/Statement;)V", nullptr, 0, $method(static_cast<void(Statement$2::*)($Statement*)>(&Statement$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Statement$2_EnclosingMethodInfo_ = {
	"java.beans.Statement",
	"invoke",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _Statement$2_InnerClassesInfo_[] = {
	{"java.beans.Statement$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Statement$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.Statement$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Statement$2_FieldInfo_,
	_Statement$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_Statement$2_EnclosingMethodInfo_,
	_Statement$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.Statement"
};

$Object* allocate$Statement$2($Class* clazz) {
	return $of($alloc(Statement$2));
}

void Statement$2::init$($Statement* this$0) {
	$set(this, this$0, this$0);
}

$Object* Statement$2::run() {
	return $of(this->this$0->invokeInternal());
}

Statement$2::Statement$2() {
}

$Class* Statement$2::load$($String* name, bool initialize) {
	$loadClass(Statement$2, name, initialize, &_Statement$2_ClassInfo_, allocate$Statement$2);
	return class$;
}

$Class* Statement$2::class$ = nullptr;

	} // beans
} // java