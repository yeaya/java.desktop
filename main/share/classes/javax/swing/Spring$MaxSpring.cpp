#include <javax/swing/Spring$MaxSpring.h>

#include <java/lang/Math.h>
#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring$CompoundSpring.h>
#include <javax/swing/Spring.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $Spring$AbstractSpring = ::javax::swing::Spring$AbstractSpring;
using $Spring$CompoundSpring = ::javax::swing::Spring$CompoundSpring;

namespace javax {
	namespace swing {

$MethodInfo _Spring$MaxSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Spring;Ljavax/swing/Spring;)V", nullptr, $PUBLIC, $method(static_cast<void(Spring$MaxSpring::*)($Spring*,$Spring*)>(&Spring$MaxSpring::init$))},
	{"op", "(II)I", nullptr, $PROTECTED},
	{"setNonClearValue", "(I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Spring$MaxSpring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$MaxSpring", "javax.swing.Spring", "MaxSpring", $PRIVATE | $STATIC},
	{"javax.swing.Spring$CompoundSpring", "javax.swing.Spring", "CompoundSpring", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Spring$MaxSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Spring$MaxSpring",
	"javax.swing.Spring$CompoundSpring",
	nullptr,
	nullptr,
	_Spring$MaxSpring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$MaxSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$MaxSpring($Class* clazz) {
	return $of($alloc(Spring$MaxSpring));
}

void Spring$MaxSpring::init$($Spring* s1, $Spring* s2) {
	$Spring$CompoundSpring::init$(s1, s2);
}

int32_t Spring$MaxSpring::op(int32_t x, int32_t y) {
	return $Math::max(x, y);
}

void Spring$MaxSpring::setNonClearValue(int32_t size) {
	$Spring$CompoundSpring::setNonClearValue(size);
	$nc(this->s1)->setValue(size);
	$nc(this->s2)->setValue(size);
}

Spring$MaxSpring::Spring$MaxSpring() {
}

$Class* Spring$MaxSpring::load$($String* name, bool initialize) {
	$loadClass(Spring$MaxSpring, name, initialize, &_Spring$MaxSpring_ClassInfo_, allocate$Spring$MaxSpring);
	return class$;
}

$Class* Spring$MaxSpring::class$ = nullptr;

	} // swing
} // javax