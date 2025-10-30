#include <javax/swing/Spring.h>

#include <java/awt/Component.h>
#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring$CompoundSpring.h>
#include <javax/swing/Spring$HeightSpring.h>
#include <javax/swing/Spring$MaxSpring.h>
#include <javax/swing/Spring$NegativeSpring.h>
#include <javax/swing/Spring$ScaleSpring.h>
#include <javax/swing/Spring$StaticSpring.h>
#include <javax/swing/Spring$SumSpring.h>
#include <javax/swing/Spring$WidthSpring.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

#undef UNSET

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Spring$AbstractSpring = ::javax::swing::Spring$AbstractSpring;
using $Spring$CompoundSpring = ::javax::swing::Spring$CompoundSpring;
using $Spring$HeightSpring = ::javax::swing::Spring$HeightSpring;
using $Spring$MaxSpring = ::javax::swing::Spring$MaxSpring;
using $Spring$NegativeSpring = ::javax::swing::Spring$NegativeSpring;
using $Spring$ScaleSpring = ::javax::swing::Spring$ScaleSpring;
using $Spring$StaticSpring = ::javax::swing::Spring$StaticSpring;
using $Spring$SumSpring = ::javax::swing::Spring$SumSpring;
using $Spring$WidthSpring = ::javax::swing::Spring$WidthSpring;
using $SpringLayout = ::javax::swing::SpringLayout;

namespace javax {
	namespace swing {

$FieldInfo _Spring_FieldInfo_[] = {
	{"UNSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Spring, UNSET)},
	{}
};

$MethodInfo _Spring_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Spring::*)()>(&Spring::init$))},
	{"checkArg", "(Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*)>(&Spring::checkArg))},
	{"constant", "(I)Ljavax/swing/Spring;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Spring*(*)(int32_t)>(&Spring::constant))},
	{"constant", "(III)Ljavax/swing/Spring;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Spring*(*)(int32_t,int32_t,int32_t)>(&Spring::constant))},
	{"difference", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $STATIC, $method(static_cast<Spring*(*)(Spring*,Spring*)>(&Spring::difference))},
	{"getMaximumValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinimumValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreferredValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStrain", "()D", nullptr, 0},
	{"getValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"height", "(Ljava/awt/Component;)Ljavax/swing/Spring;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Spring*(*)($Component*)>(&Spring::height))},
	{"isCyclic", "(Ljavax/swing/SpringLayout;)Z", nullptr, 0},
	{"max", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Spring*(*)(Spring*,Spring*)>(&Spring::max))},
	{"minus", "(Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Spring*(*)(Spring*)>(&Spring::minus))},
	{"range", "(Z)D", nullptr, $PRIVATE, $method(static_cast<double(Spring::*)(bool)>(&Spring::range))},
	{"scale", "(Ljavax/swing/Spring;F)Ljavax/swing/Spring;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Spring*(*)(Spring*,float)>(&Spring::scale))},
	{"setStrain", "(D)V", nullptr, 0},
	{"setValue", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"sum", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Spring*(*)(Spring*,Spring*)>(&Spring::sum))},
	{"width", "(Ljava/awt/Component;)Ljavax/swing/Spring;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Spring*(*)($Component*)>(&Spring::width))},
	{}
};

$InnerClassInfo _Spring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$MaxSpring", "javax.swing.Spring", "MaxSpring", $PRIVATE | $STATIC},
	{"javax.swing.Spring$SumSpring", "javax.swing.Spring", "SumSpring", $PRIVATE | $STATIC},
	{"javax.swing.Spring$CompoundSpring", "javax.swing.Spring", "CompoundSpring", $STATIC | $ABSTRACT},
	{"javax.swing.Spring$SpringMap", "javax.swing.Spring", "SpringMap", $STATIC | $ABSTRACT},
	{"javax.swing.Spring$HeightSpring", "javax.swing.Spring", "HeightSpring", $STATIC},
	{"javax.swing.Spring$WidthSpring", "javax.swing.Spring", "WidthSpring", $STATIC},
	{"javax.swing.Spring$ScaleSpring", "javax.swing.Spring", "ScaleSpring", $PRIVATE | $STATIC},
	{"javax.swing.Spring$NegativeSpring", "javax.swing.Spring", "NegativeSpring", $PRIVATE | $STATIC},
	{"javax.swing.Spring$StaticSpring", "javax.swing.Spring", "StaticSpring", $PRIVATE | $STATIC},
	{"javax.swing.Spring$AbstractSpring", "javax.swing.Spring", "AbstractSpring", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Spring_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.Spring",
	"java.lang.Object",
	nullptr,
	_Spring_FieldInfo_,
	_Spring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.Spring$MaxSpring,javax.swing.Spring$SumSpring,javax.swing.Spring$CompoundSpring,javax.swing.Spring$SpringMap,javax.swing.Spring$HeightSpring,javax.swing.Spring$WidthSpring,javax.swing.Spring$ScaleSpring,javax.swing.Spring$NegativeSpring,javax.swing.Spring$StaticSpring,javax.swing.Spring$AbstractSpring"
};

$Object* allocate$Spring($Class* clazz) {
	return $of($alloc(Spring));
}

void Spring::init$() {
}

double Spring::range(bool contract) {
	int32_t var$0 = 0;
	if (contract) {
		int32_t var$1 = getPreferredValue();
		var$0 = (var$1 - getMinimumValue());
	} else {
		int32_t var$2 = getMaximumValue();
		var$0 = (var$2 - getPreferredValue());
	}
	return (double)var$0;
}

double Spring::getStrain() {
	int32_t var$0 = getValue();
	double delta = ((double)(var$0 - getPreferredValue()));
	double var$1 = delta;
	int32_t var$3 = getValue();
	double var$2 = range(var$3 < getPreferredValue());
	return var$1 / var$2;
}

void Spring::setStrain(double strain) {
	int32_t var$0 = getPreferredValue();
	setValue(var$0 + $cast(int32_t, (strain * range(strain < 0))));
}

bool Spring::isCyclic($SpringLayout* l) {
	return false;
}

Spring* Spring::constant(int32_t pref) {
	return constant(pref, pref, pref);
}

Spring* Spring::constant(int32_t min, int32_t pref, int32_t max) {
	return $new($Spring$StaticSpring, min, pref, max);
}

Spring* Spring::minus(Spring* s) {
	return $new($Spring$NegativeSpring, s);
}

Spring* Spring::sum(Spring* s1, Spring* s2) {
	return $new($Spring$SumSpring, s1, s2);
}

Spring* Spring::max(Spring* s1, Spring* s2) {
	return $new($Spring$MaxSpring, s1, s2);
}

Spring* Spring::difference(Spring* s1, Spring* s2) {
	return sum(s1, $(minus(s2)));
}

Spring* Spring::scale(Spring* s, float factor) {
	checkArg(s);
	return $new($Spring$ScaleSpring, s, factor);
}

Spring* Spring::width($Component* c) {
	checkArg(c);
	return $new($Spring$WidthSpring, c);
}

Spring* Spring::height($Component* c) {
	checkArg(c);
	return $new($Spring$HeightSpring, c);
}

void Spring::checkArg(Object$* s) {
	if (s == nullptr) {
		$throwNew($NullPointerException, "Argument must not be null"_s);
	}
}

Spring::Spring() {
}

$Class* Spring::load$($String* name, bool initialize) {
	$loadClass(Spring, name, initialize, &_Spring_ClassInfo_, allocate$Spring);
	return class$;
}

$Class* Spring::class$ = nullptr;

	} // swing
} // javax