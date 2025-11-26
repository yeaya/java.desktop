#include <javax/swing/Spring$HeightSpring.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/Spring$AbstractSpring.h>
#include <javax/swing/Spring.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Spring = ::javax::swing::Spring;
using $Spring$AbstractSpring = ::javax::swing::Spring$AbstractSpring;

namespace javax {
	namespace swing {

$FieldInfo _Spring$HeightSpring_FieldInfo_[] = {
	{"c", "Ljava/awt/Component;", nullptr, 0, $field(Spring$HeightSpring, c)},
	{}
};

$MethodInfo _Spring$HeightSpring_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(Spring$HeightSpring::*)($Component*)>(&Spring$HeightSpring::init$))},
	{"getMaximumValue", "()I", nullptr, $PUBLIC},
	{"getMinimumValue", "()I", nullptr, $PUBLIC},
	{"getPreferredValue", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spring$HeightSpring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$HeightSpring", "javax.swing.Spring", "HeightSpring", $STATIC},
	{"javax.swing.Spring$AbstractSpring", "javax.swing.Spring", "AbstractSpring", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Spring$HeightSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Spring$HeightSpring",
	"javax.swing.Spring$AbstractSpring",
	nullptr,
	_Spring$HeightSpring_FieldInfo_,
	_Spring$HeightSpring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$HeightSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$HeightSpring($Class* clazz) {
	return $of($alloc(Spring$HeightSpring));
}

void Spring$HeightSpring::init$($Component* c) {
	$Spring$AbstractSpring::init$();
	$set(this, c, c);
}

int32_t Spring$HeightSpring::getMinimumValue() {
	return $nc($($nc(this->c)->getMinimumSize()))->height;
}

int32_t Spring$HeightSpring::getPreferredValue() {
	return $nc($($nc(this->c)->getPreferredSize()))->height;
}

int32_t Spring$HeightSpring::getMaximumValue() {
	return $Math::min((int32_t)$Short::MAX_VALUE, $nc($($nc(this->c)->getMaximumSize()))->height);
}

Spring$HeightSpring::Spring$HeightSpring() {
}

$Class* Spring$HeightSpring::load$($String* name, bool initialize) {
	$loadClass(Spring$HeightSpring, name, initialize, &_Spring$HeightSpring_ClassInfo_, allocate$Spring$HeightSpring);
	return class$;
}

$Class* Spring$HeightSpring::class$ = nullptr;

	} // swing
} // javax