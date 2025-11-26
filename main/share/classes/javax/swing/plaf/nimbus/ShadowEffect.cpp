#include <javax/swing/plaf/nimbus/ShadowEffect.h>

#include <java/awt/Color.h>
#include <javax/swing/plaf/nimbus/Effect.h>
#include <jcpp.h>

#undef BLACK

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Effect = ::javax::swing::plaf::nimbus::Effect;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _ShadowEffect_FieldInfo_[] = {
	{"color", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(ShadowEffect, color)},
	{"opacity", "F", nullptr, $PROTECTED, $field(ShadowEffect, opacity)},
	{"angle", "I", nullptr, $PROTECTED, $field(ShadowEffect, angle)},
	{"distance", "I", nullptr, $PROTECTED, $field(ShadowEffect, distance)},
	{"spread", "I", nullptr, $PROTECTED, $field(ShadowEffect, spread)},
	{"size", "I", nullptr, $PROTECTED, $field(ShadowEffect, size)},
	{}
};

$MethodInfo _ShadowEffect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ShadowEffect::*)()>(&ShadowEffect::init$))},
	{"getAngle", "()I", nullptr, 0},
	{"getColor", "()Ljava/awt/Color;", nullptr, 0},
	{"getDistance", "()I", nullptr, 0},
	{"getOpacity", "()F", nullptr, 0},
	{"getSize", "()I", nullptr, 0},
	{"getSpread", "()I", nullptr, 0},
	{"setAngle", "(I)V", nullptr, 0},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, 0},
	{"setDistance", "(I)V", nullptr, 0},
	{"setOpacity", "(F)V", nullptr, 0},
	{"setSize", "(I)V", nullptr, 0},
	{"setSpread", "(I)V", nullptr, 0},
	{}
};

$ClassInfo _ShadowEffect_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.nimbus.ShadowEffect",
	"javax.swing.plaf.nimbus.Effect",
	nullptr,
	_ShadowEffect_FieldInfo_,
	_ShadowEffect_MethodInfo_
};

$Object* allocate$ShadowEffect($Class* clazz) {
	return $of($alloc(ShadowEffect));
}

void ShadowEffect::init$() {
	$Effect::init$();
	$init($Color);
	$set(this, color, $Color::BLACK);
	this->opacity = 0.75f;
	this->angle = 135;
	this->distance = 5;
	this->spread = 0;
	this->size = 5;
}

$Color* ShadowEffect::getColor() {
	return this->color;
}

void ShadowEffect::setColor($Color* color) {
	$var($Color, old, getColor());
	$set(this, color, color);
}

float ShadowEffect::getOpacity() {
	return this->opacity;
}

void ShadowEffect::setOpacity(float opacity) {
	float old = getOpacity();
	this->opacity = opacity;
}

int32_t ShadowEffect::getAngle() {
	return this->angle;
}

void ShadowEffect::setAngle(int32_t angle) {
	int32_t old = getAngle();
	this->angle = angle;
}

int32_t ShadowEffect::getDistance() {
	return this->distance;
}

void ShadowEffect::setDistance(int32_t distance) {
	int32_t old = getDistance();
	this->distance = distance;
}

int32_t ShadowEffect::getSpread() {
	return this->spread;
}

void ShadowEffect::setSpread(int32_t spread) {
	int32_t old = getSpread();
	this->spread = spread;
}

int32_t ShadowEffect::getSize() {
	return this->size;
}

void ShadowEffect::setSize(int32_t size) {
	int32_t old = getSize();
	this->size = size;
}

ShadowEffect::ShadowEffect() {
}

$Class* ShadowEffect::load$($String* name, bool initialize) {
	$loadClass(ShadowEffect, name, initialize, &_ShadowEffect_ClassInfo_, allocate$ShadowEffect);
	return class$;
}

$Class* ShadowEffect::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax