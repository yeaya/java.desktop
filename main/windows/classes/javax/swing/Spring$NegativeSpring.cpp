#include <javax/swing/Spring$NegativeSpring.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $SpringLayout = ::javax::swing::SpringLayout;

namespace javax {
	namespace swing {

$FieldInfo _Spring$NegativeSpring_FieldInfo_[] = {
	{"s", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(Spring$NegativeSpring, s)},
	{}
};

$MethodInfo _Spring$NegativeSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Spring;)V", nullptr, $PUBLIC, $method(static_cast<void(Spring$NegativeSpring::*)($Spring*)>(&Spring$NegativeSpring::init$))},
	{"getMaximumValue", "()I", nullptr, $PUBLIC},
	{"getMinimumValue", "()I", nullptr, $PUBLIC},
	{"getPreferredValue", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"isCyclic", "(Ljavax/swing/SpringLayout;)Z", nullptr, 0},
	{"setValue", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spring$NegativeSpring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$NegativeSpring", "javax.swing.Spring", "NegativeSpring", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Spring$NegativeSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Spring$NegativeSpring",
	"javax.swing.Spring",
	nullptr,
	_Spring$NegativeSpring_FieldInfo_,
	_Spring$NegativeSpring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$NegativeSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$NegativeSpring($Class* clazz) {
	return $of($alloc(Spring$NegativeSpring));
}

void Spring$NegativeSpring::init$($Spring* s) {
	$Spring::init$();
	$set(this, s, s);
}

int32_t Spring$NegativeSpring::getMinimumValue() {
	return -$nc(this->s)->getMaximumValue();
}

int32_t Spring$NegativeSpring::getPreferredValue() {
	return -$nc(this->s)->getPreferredValue();
}

int32_t Spring$NegativeSpring::getMaximumValue() {
	return -$nc(this->s)->getMinimumValue();
}

int32_t Spring$NegativeSpring::getValue() {
	return -$nc(this->s)->getValue();
}

void Spring$NegativeSpring::setValue(int32_t size) {
	$nc(this->s)->setValue(-size);
}

bool Spring$NegativeSpring::isCyclic($SpringLayout* l) {
	return $nc(this->s)->isCyclic(l);
}

Spring$NegativeSpring::Spring$NegativeSpring() {
}

$Class* Spring$NegativeSpring::load$($String* name, bool initialize) {
	$loadClass(Spring$NegativeSpring, name, initialize, &_Spring$NegativeSpring_ClassInfo_, allocate$Spring$NegativeSpring);
	return class$;
}

$Class* Spring$NegativeSpring::class$ = nullptr;

	} // swing
} // javax