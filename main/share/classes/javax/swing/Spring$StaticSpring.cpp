#include <javax/swing/Spring$StaticSpring.h>

#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring$AbstractSpring = ::javax::swing::Spring$AbstractSpring;

namespace javax {
	namespace swing {

$FieldInfo _Spring$StaticSpring_FieldInfo_[] = {
	{"min", "I", nullptr, $PROTECTED, $field(Spring$StaticSpring, min)},
	{"pref", "I", nullptr, $PROTECTED, $field(Spring$StaticSpring, pref)},
	{"max", "I", nullptr, $PROTECTED, $field(Spring$StaticSpring, max)},
	{}
};

$MethodInfo _Spring$StaticSpring_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Spring$StaticSpring::*)(int32_t)>(&Spring$StaticSpring::init$))},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(Spring$StaticSpring::*)(int32_t,int32_t,int32_t)>(&Spring$StaticSpring::init$))},
	{"getMaximumValue", "()I", nullptr, $PUBLIC},
	{"getMinimumValue", "()I", nullptr, $PUBLIC},
	{"getPreferredValue", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spring$StaticSpring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$StaticSpring", "javax.swing.Spring", "StaticSpring", $PRIVATE | $STATIC},
	{"javax.swing.Spring$AbstractSpring", "javax.swing.Spring", "AbstractSpring", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Spring$StaticSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Spring$StaticSpring",
	"javax.swing.Spring$AbstractSpring",
	nullptr,
	_Spring$StaticSpring_FieldInfo_,
	_Spring$StaticSpring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$StaticSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$StaticSpring($Class* clazz) {
	return $of($alloc(Spring$StaticSpring));
}

void Spring$StaticSpring::init$(int32_t pref) {
	Spring$StaticSpring::init$(pref, pref, pref);
}

void Spring$StaticSpring::init$(int32_t min, int32_t pref, int32_t max) {
	$Spring$AbstractSpring::init$();
	this->min = min;
	this->pref = pref;
	this->max = max;
}

$String* Spring$StaticSpring::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"StaticSpring ["_s, $$str(this->min), ", "_s, $$str(this->pref), ", "_s, $$str(this->max), "]"_s});
}

int32_t Spring$StaticSpring::getMinimumValue() {
	return this->min;
}

int32_t Spring$StaticSpring::getPreferredValue() {
	return this->pref;
}

int32_t Spring$StaticSpring::getMaximumValue() {
	return this->max;
}

Spring$StaticSpring::Spring$StaticSpring() {
}

$Class* Spring$StaticSpring::load$($String* name, bool initialize) {
	$loadClass(Spring$StaticSpring, name, initialize, &_Spring$StaticSpring_ClassInfo_, allocate$Spring$StaticSpring);
	return class$;
}

$Class* Spring$StaticSpring::class$ = nullptr;

	} // swing
} // javax