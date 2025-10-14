#include <javax/sound/sampled/BooleanControl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/BooleanControl$Type.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BooleanControl$Type = ::javax::sound::sampled::BooleanControl$Type;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _BooleanControl_FieldInfo_[] = {
	{"trueStateLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BooleanControl, trueStateLabel)},
	{"falseStateLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BooleanControl, falseStateLabel)},
	{"value", "Z", nullptr, $PRIVATE, $field(BooleanControl, value)},
	{}
};

$MethodInfo _BooleanControl_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/BooleanControl$Type;ZLjava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(BooleanControl::*)($BooleanControl$Type*,bool,$String*,$String*)>(&BooleanControl::init$))},
	{"<init>", "(Ljavax/sound/sampled/BooleanControl$Type;Z)V", nullptr, $PROTECTED, $method(static_cast<void(BooleanControl::*)($BooleanControl$Type*,bool)>(&BooleanControl::init$))},
	{"getStateLabel", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Z", nullptr, $PUBLIC},
	{"setValue", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BooleanControl_InnerClassesInfo_[] = {
	{"javax.sound.sampled.BooleanControl$Type", "javax.sound.sampled.BooleanControl", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BooleanControl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.sampled.BooleanControl",
	"javax.sound.sampled.Control",
	nullptr,
	_BooleanControl_FieldInfo_,
	_BooleanControl_MethodInfo_,
	nullptr,
	nullptr,
	_BooleanControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.BooleanControl$Type"
};

$Object* allocate$BooleanControl($Class* clazz) {
	return $of($alloc(BooleanControl));
}

void BooleanControl::init$($BooleanControl$Type* type, bool initialValue, $String* trueStateLabel, $String* falseStateLabel) {
	$Control::init$(type);
	this->value = initialValue;
	$set(this, trueStateLabel, trueStateLabel);
	$set(this, falseStateLabel, falseStateLabel);
}

void BooleanControl::init$($BooleanControl$Type* type, bool initialValue) {
	BooleanControl::init$(type, initialValue, "true"_s, "false"_s);
}

void BooleanControl::setValue(bool value) {
	this->value = value;
}

bool BooleanControl::getValue() {
	return this->value;
}

$String* BooleanControl::getStateLabel(bool state) {
	return ((state == true) ? this->trueStateLabel : this->falseStateLabel);
}

$String* BooleanControl::toString() {
	return $String::format("%s with current value: %s"_s, $$new($ObjectArray, {
		$($of($Control::toString())),
		$($of(getStateLabel(getValue())))
	}));
}

BooleanControl::BooleanControl() {
}

$Class* BooleanControl::load$($String* name, bool initialize) {
	$loadClass(BooleanControl, name, initialize, &_BooleanControl_ClassInfo_, allocate$BooleanControl);
	return class$;
}

$Class* BooleanControl::class$ = nullptr;

		} // sampled
	} // sound
} // javax