#include <sun/swing/StringUIClientPropertyKey.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

$FieldInfo _StringUIClientPropertyKey_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(StringUIClientPropertyKey, key)},
	{}
};

$MethodInfo _StringUIClientPropertyKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringUIClientPropertyKey::*)($String*)>(&StringUIClientPropertyKey::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringUIClientPropertyKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.StringUIClientPropertyKey",
	"java.lang.Object",
	"javax.swing.UIClientPropertyKey",
	_StringUIClientPropertyKey_FieldInfo_,
	_StringUIClientPropertyKey_MethodInfo_
};

$Object* allocate$StringUIClientPropertyKey($Class* clazz) {
	return $of($alloc(StringUIClientPropertyKey));
}

void StringUIClientPropertyKey::init$($String* key) {
	$set(this, key, key);
}

$String* StringUIClientPropertyKey::toString() {
	return this->key;
}

StringUIClientPropertyKey::StringUIClientPropertyKey() {
}

$Class* StringUIClientPropertyKey::load$($String* name, bool initialize) {
	$loadClass(StringUIClientPropertyKey, name, initialize, &_StringUIClientPropertyKey_ClassInfo_, allocate$StringUIClientPropertyKey);
	return class$;
}

$Class* StringUIClientPropertyKey::class$ = nullptr;

	} // swing
} // sun