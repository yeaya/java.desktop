#include <javax/swing/Spring$SpringMap.h>

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
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef UNSET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Spring = ::javax::swing::Spring;
using $SpringLayout = ::javax::swing::SpringLayout;

namespace javax {
	namespace swing {

$FieldInfo _Spring$SpringMap_FieldInfo_[] = {
	{"s", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(Spring$SpringMap, s)},
	{}
};

$MethodInfo _Spring$SpringMap_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Spring;)V", nullptr, $PUBLIC, $method(static_cast<void(Spring$SpringMap::*)($Spring*)>(&Spring$SpringMap::init$))},
	{"getMaximumValue", "()I", nullptr, $PUBLIC},
	{"getMinimumValue", "()I", nullptr, $PUBLIC},
	{"getPreferredValue", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"inv", "(I)I", nullptr, $PROTECTED | $ABSTRACT},
	{"isCyclic", "(Ljavax/swing/SpringLayout;)Z", nullptr, 0},
	{"map", "(I)I", nullptr, $PROTECTED | $ABSTRACT},
	{"setValue", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spring$SpringMap_InnerClassesInfo_[] = {
	{"javax.swing.Spring$SpringMap", "javax.swing.Spring", "SpringMap", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Spring$SpringMap_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.Spring$SpringMap",
	"javax.swing.Spring",
	nullptr,
	_Spring$SpringMap_FieldInfo_,
	_Spring$SpringMap_MethodInfo_,
	nullptr,
	nullptr,
	_Spring$SpringMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Spring"
};

$Object* allocate$Spring$SpringMap($Class* clazz) {
	return $of($alloc(Spring$SpringMap));
}

void Spring$SpringMap::init$($Spring* s) {
	$Spring::init$();
	$set(this, s, s);
}

int32_t Spring$SpringMap::getMinimumValue() {
	return map($nc(this->s)->getMinimumValue());
}

int32_t Spring$SpringMap::getPreferredValue() {
	return map($nc(this->s)->getPreferredValue());
}

int32_t Spring$SpringMap::getMaximumValue() {
	return $Math::min((int32_t)$Short::MAX_VALUE, map($nc(this->s)->getMaximumValue()));
}

int32_t Spring$SpringMap::getValue() {
	return map($nc(this->s)->getValue());
}

void Spring$SpringMap::setValue(int32_t value) {
	if (value == $Spring::UNSET) {
		$nc(this->s)->setValue($Spring::UNSET);
	} else {
		$nc(this->s)->setValue(inv(value));
	}
}

bool Spring$SpringMap::isCyclic($SpringLayout* l) {
	return $nc(this->s)->isCyclic(l);
}

Spring$SpringMap::Spring$SpringMap() {
}

$Class* Spring$SpringMap::load$($String* name, bool initialize) {
	$loadClass(Spring$SpringMap, name, initialize, &_Spring$SpringMap_ClassInfo_, allocate$Spring$SpringMap);
	return class$;
}

$Class* Spring$SpringMap::class$ = nullptr;

	} // swing
} // javax