#include <java/beans/MetaData$1.h>

#include <java/beans/MetaData.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Field = ::java::lang::reflect::Field;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace beans {

$FieldInfo _MetaData$1_FieldInfo_[] = {
	{"val$fieldName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(MetaData$1, val$fieldName)},
	{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(MetaData$1, val$className)},
	{}
};

$MethodInfo _MetaData$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(MetaData$1::*)($String*,$String*)>(&MetaData$1::init$))},
	{"run", "()Ljava/lang/reflect/Field;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetaData$1_EnclosingMethodInfo_ = {
	"java.beans.MetaData",
	"getPrivateFieldValue",
	"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;"
};

$InnerClassInfo _MetaData$1_InnerClassesInfo_[] = {
	{"java.beans.MetaData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetaData$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.MetaData$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_MetaData$1_FieldInfo_,
	_MetaData$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/reflect/Field;>;",
	&_MetaData$1_EnclosingMethodInfo_,
	_MetaData$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$1($Class* clazz) {
	return $of($alloc(MetaData$1));
}

void MetaData$1::init$($String* val$className, $String* val$fieldName) {
	$set(this, val$className, val$className);
	$set(this, val$fieldName, val$fieldName);
}

$Object* MetaData$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($Field, field, $Class::forName(this->val$className)->getDeclaredField(this->val$fieldName));
		$nc(field)->setAccessible(true);
		return $of(field);
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, exception, $catch());
		$throwNew($IllegalStateException, "Could not find class"_s, exception);
	} catch ($NoSuchFieldException&) {
		$var($NoSuchFieldException, exception, $catch());
		$throwNew($IllegalStateException, "Could not find field"_s, exception);
	}
	$shouldNotReachHere();
}

MetaData$1::MetaData$1() {
}

$Class* MetaData$1::load$($String* name, bool initialize) {
	$loadClass(MetaData$1, name, initialize, &_MetaData$1_ClassInfo_, allocate$MetaData$1);
	return class$;
}

$Class* MetaData$1::class$ = nullptr;

	} // beans
} // java