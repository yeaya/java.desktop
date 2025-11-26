#include <javax/sound/sampled/EnumControl.h>

#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/EnumControl$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $EnumControl$Type = ::javax::sound::sampled::EnumControl$Type;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _EnumControl_FieldInfo_[] = {
	{"values", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(EnumControl, values)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(EnumControl, value)},
	{}
};

$MethodInfo _EnumControl_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/EnumControl$Type;[Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(static_cast<void(EnumControl::*)($EnumControl$Type*,$ObjectArray*,Object$*)>(&EnumControl::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getValues", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isValueSupported", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(EnumControl::*)(Object$*)>(&EnumControl::isValueSupported))},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EnumControl_InnerClassesInfo_[] = {
	{"javax.sound.sampled.EnumControl$Type", "javax.sound.sampled.EnumControl", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _EnumControl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.sampled.EnumControl",
	"javax.sound.sampled.Control",
	nullptr,
	_EnumControl_FieldInfo_,
	_EnumControl_MethodInfo_,
	nullptr,
	nullptr,
	_EnumControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.EnumControl$Type"
};

$Object* allocate$EnumControl($Class* clazz) {
	return $of($alloc(EnumControl));
}

void EnumControl::init$($EnumControl$Type* type, $ObjectArray* values, Object$* value) {
	$Control::init$(type);
	$set(this, values, values);
	$set(this, value, value);
}

void EnumControl::setValue(Object$* value) {
	if (!isValueSupported(value)) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, value, " is not supported."_s}));
	}
	$set(this, value, value);
}

$Object* EnumControl::getValue() {
	return $of(this->value);
}

$ObjectArray* EnumControl::getValues() {
	return $cast($ObjectArray, $nc(this->values)->clone());
}

bool EnumControl::isValueSupported(Object$* value) {
	for (int32_t i = 0; i < $nc(this->values)->length; ++i) {
		if ($nc($of(value))->equals($nc(this->values)->get(i))) {
			return true;
		}
	}
	return false;
}

$String* EnumControl::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s with current value: %s"_s, $$new($ObjectArray, {
		$($of($Control::toString())),
		$(getValue())
	}));
}

EnumControl::EnumControl() {
}

$Class* EnumControl::load$($String* name, bool initialize) {
	$loadClass(EnumControl, name, initialize, &_EnumControl_ClassInfo_, allocate$EnumControl);
	return class$;
}

$Class* EnumControl::class$ = nullptr;

		} // sampled
	} // sound
} // javax