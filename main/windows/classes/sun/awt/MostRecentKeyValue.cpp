#include <sun/awt/MostRecentKeyValue.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$FieldInfo _MostRecentKeyValue_FieldInfo_[] = {
	{"key", "Ljava/lang/Object;", nullptr, 0, $field(MostRecentKeyValue, key)},
	{"value", "Ljava/lang/Object;", nullptr, 0, $field(MostRecentKeyValue, value)},
	{}
};

$MethodInfo _MostRecentKeyValue_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(MostRecentKeyValue::*)(Object$*,Object$*)>(&MostRecentKeyValue::init$))},
	{"setPair", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(MostRecentKeyValue::*)(Object$*,Object$*)>(&MostRecentKeyValue::setPair))},
	{}
};

$ClassInfo _MostRecentKeyValue_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.MostRecentKeyValue",
	"java.lang.Object",
	nullptr,
	_MostRecentKeyValue_FieldInfo_,
	_MostRecentKeyValue_MethodInfo_
};

$Object* allocate$MostRecentKeyValue($Class* clazz) {
	return $of($alloc(MostRecentKeyValue));
}

void MostRecentKeyValue::init$(Object$* k, Object$* v) {
	$set(this, key, k);
	$set(this, value, v);
}

void MostRecentKeyValue::setPair(Object$* k, Object$* v) {
	$set(this, key, k);
	$set(this, value, v);
}

MostRecentKeyValue::MostRecentKeyValue() {
}

$Class* MostRecentKeyValue::load$($String* name, bool initialize) {
	$loadClass(MostRecentKeyValue, name, initialize, &_MostRecentKeyValue_ClassInfo_, allocate$MostRecentKeyValue);
	return class$;
}

$Class* MostRecentKeyValue::class$ = nullptr;

	} // awt
} // sun