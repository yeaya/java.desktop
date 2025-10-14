#include <javax/swing/Spring$SumSpring.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring$CompoundSpring.h>
#include <javax/swing/Spring.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $Spring$AbstractSpring = ::javax::swing::Spring$AbstractSpring;
using $Spring$CompoundSpring = ::javax::swing::Spring$CompoundSpring;

namespace javax {
	namespace swing {

$MethodInfo _Spring$SumSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)V", nullptr, $PUBLIC, $method(static_cast<void(Spring$SumSpring::*)($Spring*,$Spring*)>(&Spring$SumSpring::init$))},
	{"op", "(II)I", nullptr, $PROTECTED},
	{"setNonClearValue", "(I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Spring$SumSpring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$SumSpring", "javax.swing.Spring", "SumSpring", $PRIVATE | $STATIC},
	{"javax.swing.Spring$CompoundSpring", "javax.swing.Spring", "CompoundSpring", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Spring$SumSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Spring$SumSpring",
	"javax.swing.Spring$CompoundSpring",
	nullptr,
	nullptr,
	_Spring$SumSpring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$SumSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$SumSpring($Class* clazz) {
	return $of($alloc(Spring$SumSpring));
}

void Spring$SumSpring::init$($Spring* s1, $Spring* s2) {
	$Spring$CompoundSpring::init$(s1, s2);
}

int32_t Spring$SumSpring::op(int32_t x, int32_t y) {
	return x + y;
}

void Spring$SumSpring::setNonClearValue(int32_t size) {
	$Spring$CompoundSpring::setNonClearValue(size);
	$nc(this->s1)->setStrain(this->getStrain());
	$nc(this->s2)->setValue(size - $nc(this->s1)->getValue());
}

Spring$SumSpring::Spring$SumSpring() {
}

$Class* Spring$SumSpring::load$($String* name, bool initialize) {
	$loadClass(Spring$SumSpring, name, initialize, &_Spring$SumSpring_ClassInfo_, allocate$Spring$SumSpring);
	return class$;
}

$Class* Spring$SumSpring::class$ = nullptr;

	} // swing
} // javax