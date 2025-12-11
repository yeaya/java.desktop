#include <javax/swing/Spring$CompoundSpring.h>

#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring$StaticSpring.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

#undef UNSET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $Spring$StaticSpring = ::javax::swing::Spring$StaticSpring;
using $SpringLayout = ::javax::swing::SpringLayout;

namespace javax {
	namespace swing {

$FieldInfo _Spring$CompoundSpring_FieldInfo_[] = {
	{"s1", "Ljavax/swing/Spring;", nullptr, $PROTECTED, $field(Spring$CompoundSpring, s1)},
	{"s2", "Ljavax/swing/Spring;", nullptr, $PROTECTED, $field(Spring$CompoundSpring, s2)},
	{}
};

$MethodInfo _Spring$CompoundSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)V", nullptr, $PUBLIC, $method(static_cast<void(Spring$CompoundSpring::*)($Spring*,$Spring*)>(&Spring$CompoundSpring::init$))},
	{"clear", "()V", nullptr, $PROTECTED},
	{"getMaximumValue", "()I", nullptr, $PUBLIC},
	{"getMinimumValue", "()I", nullptr, $PUBLIC},
	{"getPreferredValue", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"isCyclic", "(Ljavax/swing/SpringLayout;)Z", nullptr, 0},
	{"op", "(II)I", nullptr, $PROTECTED | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spring$CompoundSpring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$CompoundSpring", "javax.swing.Spring", "CompoundSpring", $STATIC | $ABSTRACT},
	{"javax.swing.Spring$StaticSpring", "javax.swing.Spring", "StaticSpring", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Spring$CompoundSpring_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.Spring$CompoundSpring",
	"javax.swing.Spring$StaticSpring",
	nullptr,
	_Spring$CompoundSpring_FieldInfo_,
	_Spring$CompoundSpring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$CompoundSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$CompoundSpring($Class* clazz) {
	return $of($alloc(Spring$CompoundSpring));
}

void Spring$CompoundSpring::init$($Spring* s1, $Spring* s2) {
	$Spring$StaticSpring::init$($Spring::UNSET);
	$set(this, s1, s1);
	$set(this, s2, s2);
}

$String* Spring$CompoundSpring::toString() {
	return $str({"CompoundSpring of "_s, this->s1, " and "_s, this->s2});
}

void Spring$CompoundSpring::clear() {
	$Spring$StaticSpring::clear();
	this->min = (this->pref = (this->max = $Spring::UNSET));
	$nc(this->s1)->setValue($Spring::UNSET);
	$nc(this->s2)->setValue($Spring::UNSET);
}

int32_t Spring$CompoundSpring::getMinimumValue() {
	if (this->min == $Spring::UNSET) {
		int32_t var$0 = $nc(this->s1)->getMinimumValue();
		this->min = op(var$0, $nc(this->s2)->getMinimumValue());
	}
	return this->min;
}

int32_t Spring$CompoundSpring::getPreferredValue() {
	if (this->pref == $Spring::UNSET) {
		int32_t var$0 = $nc(this->s1)->getPreferredValue();
		this->pref = op(var$0, $nc(this->s2)->getPreferredValue());
	}
	return this->pref;
}

int32_t Spring$CompoundSpring::getMaximumValue() {
	if (this->max == $Spring::UNSET) {
		int32_t var$0 = $nc(this->s1)->getMaximumValue();
		this->max = op(var$0, $nc(this->s2)->getMaximumValue());
	}
	return this->max;
}

int32_t Spring$CompoundSpring::getValue() {
	if (this->size == $Spring::UNSET) {
		int32_t var$0 = $nc(this->s1)->getValue();
		this->size = op(var$0, $nc(this->s2)->getValue());
	}
	return this->size;
}

bool Spring$CompoundSpring::isCyclic($SpringLayout* l) {
	bool var$0 = $nc(l)->isCyclic(this->s1);
	return var$0 || $nc(l)->isCyclic(this->s2);
}

Spring$CompoundSpring::Spring$CompoundSpring() {
}

$Class* Spring$CompoundSpring::load$($String* name, bool initialize) {
	$loadClass(Spring$CompoundSpring, name, initialize, &_Spring$CompoundSpring_ClassInfo_, allocate$Spring$CompoundSpring);
	return class$;
}

$Class* Spring$CompoundSpring::class$ = nullptr;

	} // swing
} // javax