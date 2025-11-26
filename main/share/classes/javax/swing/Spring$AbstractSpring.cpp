#include <javax/swing/Spring$AbstractSpring.h>

#include <javax/swing/Spring.h>
#include <jcpp.h>

#undef UNSET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;

namespace javax {
	namespace swing {

$FieldInfo _Spring$AbstractSpring_FieldInfo_[] = {
	{"size", "I", nullptr, $PROTECTED, $field(Spring$AbstractSpring, size)},
	{}
};

$MethodInfo _Spring$AbstractSpring_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Spring$AbstractSpring::*)()>(&Spring$AbstractSpring::init$))},
	{"clear", "()V", nullptr, $PROTECTED},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"setNonClearValue", "(I)V", nullptr, $PROTECTED},
	{"setValue", "(I)V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Spring$AbstractSpring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$AbstractSpring", "javax.swing.Spring", "AbstractSpring", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Spring$AbstractSpring_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.Spring$AbstractSpring",
	"javax.swing.Spring",
	nullptr,
	_Spring$AbstractSpring_FieldInfo_,
	_Spring$AbstractSpring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$AbstractSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$AbstractSpring($Class* clazz) {
	return $of($alloc(Spring$AbstractSpring));
}

void Spring$AbstractSpring::init$() {
	$Spring::init$();
	this->size = $Spring::UNSET;
}

int32_t Spring$AbstractSpring::getValue() {
	return this->size != $Spring::UNSET ? this->size : getPreferredValue();
}

void Spring$AbstractSpring::setValue(int32_t size) {
	if (this->size == size) {
		return;
	}
	if (size == $Spring::UNSET) {
		clear();
	} else {
		setNonClearValue(size);
	}
}

void Spring$AbstractSpring::clear() {
	this->size = $Spring::UNSET;
}

void Spring$AbstractSpring::setNonClearValue(int32_t size) {
	this->size = size;
}

Spring$AbstractSpring::Spring$AbstractSpring() {
}

$Class* Spring$AbstractSpring::load$($String* name, bool initialize) {
	$loadClass(Spring$AbstractSpring, name, initialize, &_Spring$AbstractSpring_ClassInfo_, allocate$Spring$AbstractSpring);
	return class$;
}

$Class* Spring$AbstractSpring::class$ = nullptr;

	} // swing
} // javax