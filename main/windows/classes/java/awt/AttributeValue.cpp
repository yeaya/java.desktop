#include <java/awt/AttributeValue.h>

#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINER
#undef FINEST

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$FieldInfo _AttributeValue_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AttributeValue, log)},
	{"value", "I", nullptr, $PRIVATE | $FINAL, $field(AttributeValue, value)},
	{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AttributeValue, names)},
	{}
};

$MethodInfo _AttributeValue_MethodInfo_[] = {
	{"<init>", "(I[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(AttributeValue::*)(int32_t,$StringArray*)>(&AttributeValue::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttributeValue_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.awt.AttributeValue",
	"java.lang.Object",
	nullptr,
	_AttributeValue_FieldInfo_,
	_AttributeValue_MethodInfo_
};

$Object* allocate$AttributeValue($Class* clazz) {
	return $of($alloc(AttributeValue));
}

$PlatformLogger* AttributeValue::log = nullptr;

void AttributeValue::init$(int32_t value, $StringArray* names) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(AttributeValue::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(AttributeValue::log)->finest($$str({"value = "_s, $$str(value), ", names = "_s, names}));
	}
	if ($nc(AttributeValue::log)->isLoggable($PlatformLogger$Level::FINER)) {
		if ((value < 0) || (names == nullptr) || (value >= $nc(names)->length)) {
			$nc(AttributeValue::log)->finer("Assertion failed"_s);
		}
	}
	this->value = value;
	$set(this, names, names);
}

int32_t AttributeValue::hashCode() {
	return this->value;
}

$String* AttributeValue::toString() {
	return $nc(this->names)->get(this->value);
}

void clinit$AttributeValue($Class* class$) {
	$assignStatic(AttributeValue::log, $PlatformLogger::getLogger("java.awt.AttributeValue"_s));
}

AttributeValue::AttributeValue() {
}

$Class* AttributeValue::load$($String* name, bool initialize) {
	$loadClass(AttributeValue, name, initialize, &_AttributeValue_ClassInfo_, clinit$AttributeValue, allocate$AttributeValue);
	return class$;
}

$Class* AttributeValue::class$ = nullptr;

	} // awt
} // java