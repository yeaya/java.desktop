#include <javax/swing/Spring$WidthSpring.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Spring$WidthSpring_FieldInfo_[] = {
	{"c", "Ljava/awt/Component;", nullptr, 0, $field(Spring$WidthSpring, c)},
	{}
};

$MethodInfo _Spring$WidthSpring_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(Spring$WidthSpring::*)($Component*)>(&Spring$WidthSpring::init$))},
	{"getMaximumValue", "()I", nullptr, $PUBLIC},
	{"getMinimumValue", "()I", nullptr, $PUBLIC},
	{"getPreferredValue", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spring$WidthSpring_InnerClassesInfo_[] = {
	{"javax.swing.Spring$WidthSpring", "javax.swing.Spring", "WidthSpring", $STATIC},
	{"javax.swing.Spring$AbstractSpring", "javax.swing.Spring", "AbstractSpring", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Spring$WidthSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Spring$WidthSpring",
	"javax.swing.Spring$AbstractSpring",
	nullptr,
	_Spring$WidthSpring_FieldInfo_,
	_Spring$WidthSpring_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$WidthSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$WidthSpring($Class* clazz) {
	return $of($alloc(Spring$WidthSpring));
}

void Spring$WidthSpring::init$($Component* c) {
	$Spring$AbstractSpring::init$();
	$set(this, c, c);
}

int32_t Spring$WidthSpring::getMinimumValue() {
	return $nc($($nc(this->c)->getMinimumSize()))->width;
}

int32_t Spring$WidthSpring::getPreferredValue() {
	return $nc($($nc(this->c)->getPreferredSize()))->width;
}

int32_t Spring$WidthSpring::getMaximumValue() {
	return $Math::min((int32_t)$Short::MAX_VALUE, $nc($($nc(this->c)->getMaximumSize()))->width);
}

Spring$WidthSpring::Spring$WidthSpring() {
}

$Class* Spring$WidthSpring::load$($String* name, bool initialize) {
	$loadClass(Spring$WidthSpring, name, initialize, &_Spring$WidthSpring_ClassInfo_, allocate$Spring$WidthSpring);
	return class$;
}

$Class* Spring$WidthSpring::class$ = nullptr;

	} // swing
} // javax