#include <javax/swing/Spring$ScaleSpring.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

#undef UNSET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $SpringLayout = ::javax::swing::SpringLayout;

namespace javax {
	namespace swing {

$FieldInfo _Spring$ScaleSpring_FieldInfo_[] = {
	{"s", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(Spring$ScaleSpring, s)},
	{"factor", "F", nullptr, $PRIVATE, $field(Spring$ScaleSpring, factor)},
	{}
};

$MethodInfo _Spring$ScaleSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Spring;F)V", nullptr, $PRIVATE, $method(static_cast<void(Spring$ScaleSpring::*)($Spring*,float)>(&Spring$ScaleSpring::init$))},
	{"getMaximumValue", "()I", nullptr, $PUBLIC},
	{"getMinimumValue", "()I", nullptr, $PUBLIC},
	{"getPreferredValue", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"isCyclic", "(Ljavax/swing/SpringLayout;)Z", nullptr, 0},
	{"setValue", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spring$ScaleSpring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$ScaleSpring", "javax.swing.Spring", "ScaleSpring", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Spring$ScaleSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Spring$ScaleSpring",
	"javax.swing.Spring",
	nullptr,
	_Spring$ScaleSpring_FieldInfo_,
	_Spring$ScaleSpring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$ScaleSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$ScaleSpring($Class* clazz) {
	return $of($alloc(Spring$ScaleSpring));
}

void Spring$ScaleSpring::init$($Spring* s, float factor) {
	$Spring::init$();
	$set(this, s, s);
	this->factor = factor;
}

int32_t Spring$ScaleSpring::getMinimumValue() {
	return $Math::round((this->factor < 0 ? $nc(this->s)->getMaximumValue() : $nc(this->s)->getMinimumValue()) * this->factor);
}

int32_t Spring$ScaleSpring::getPreferredValue() {
	return $Math::round($nc(this->s)->getPreferredValue() * this->factor);
}

int32_t Spring$ScaleSpring::getMaximumValue() {
	return $Math::round((this->factor < 0 ? $nc(this->s)->getMinimumValue() : $nc(this->s)->getMaximumValue()) * this->factor);
}

int32_t Spring$ScaleSpring::getValue() {
	return $Math::round($nc(this->s)->getValue() * this->factor);
}

void Spring$ScaleSpring::setValue(int32_t value) {
	if (value == $Spring::UNSET) {
		$nc(this->s)->setValue($Spring::UNSET);
	} else {
		$nc(this->s)->setValue($Math::round(value / this->factor));
	}
}

bool Spring$ScaleSpring::isCyclic($SpringLayout* l) {
	return $nc(this->s)->isCyclic(l);
}

Spring$ScaleSpring::Spring$ScaleSpring() {
}

$Class* Spring$ScaleSpring::load$($String* name, bool initialize) {
	$loadClass(Spring$ScaleSpring, name, initialize, &_Spring$ScaleSpring_ClassInfo_, allocate$Spring$ScaleSpring);
	return class$;
}

$Class* Spring$ScaleSpring::class$ = nullptr;

	} // swing
} // javax