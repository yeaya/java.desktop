#include <java/awt/ComponentOrientation.h>

#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

#undef HORIZ_BIT
#undef LEFT_TO_RIGHT
#undef LTR_BIT
#undef RIGHT_TO_LEFT
#undef UNKNOWN
#undef UNK_BIT

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace java {
	namespace awt {

$CompoundAttribute _ComponentOrientation_MethodAnnotations_getOrientation2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ComponentOrientation_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComponentOrientation, serialVersionUID)},
	{"UNK_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComponentOrientation, UNK_BIT)},
	{"HORIZ_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComponentOrientation, HORIZ_BIT)},
	{"LTR_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComponentOrientation, LTR_BIT)},
	{"LEFT_TO_RIGHT", "Ljava/awt/ComponentOrientation;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ComponentOrientation, LEFT_TO_RIGHT)},
	{"RIGHT_TO_LEFT", "Ljava/awt/ComponentOrientation;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ComponentOrientation, RIGHT_TO_LEFT)},
	{"UNKNOWN", "Ljava/awt/ComponentOrientation;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ComponentOrientation, UNKNOWN)},
	{"orientation", "I", nullptr, $PRIVATE, $field(ComponentOrientation, orientation)},
	{}
};

$MethodInfo _ComponentOrientation_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ComponentOrientation::*)(int32_t)>(&ComponentOrientation::init$))},
	{"getOrientation", "(Ljava/util/Locale;)Ljava/awt/ComponentOrientation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ComponentOrientation*(*)($Locale*)>(&ComponentOrientation::getOrientation))},
	{"getOrientation", "(Ljava/util/ResourceBundle;)Ljava/awt/ComponentOrientation;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<ComponentOrientation*(*)($ResourceBundle*)>(&ComponentOrientation::getOrientation)), nullptr, nullptr, _ComponentOrientation_MethodAnnotations_getOrientation2},
	{"isHorizontal", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ComponentOrientation::*)()>(&ComponentOrientation::isHorizontal))},
	{"isLeftToRight", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ComponentOrientation::*)()>(&ComponentOrientation::isLeftToRight))},
	{}
};

$ClassInfo _ComponentOrientation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.ComponentOrientation",
	"java.lang.Object",
	"java.io.Serializable",
	_ComponentOrientation_FieldInfo_,
	_ComponentOrientation_MethodInfo_
};

$Object* allocate$ComponentOrientation($Class* clazz) {
	return $of($alloc(ComponentOrientation));
}

ComponentOrientation* ComponentOrientation::LEFT_TO_RIGHT = nullptr;
ComponentOrientation* ComponentOrientation::RIGHT_TO_LEFT = nullptr;
ComponentOrientation* ComponentOrientation::UNKNOWN = nullptr;

bool ComponentOrientation::isHorizontal() {
	return ((int32_t)(this->orientation & (uint32_t)ComponentOrientation::HORIZ_BIT)) != 0;
}

bool ComponentOrientation::isLeftToRight() {
	return ((int32_t)(this->orientation & (uint32_t)ComponentOrientation::LTR_BIT)) != 0;
}

ComponentOrientation* ComponentOrientation::getOrientation($Locale* locale) {
	$init(ComponentOrientation);
	$useLocalCurrentObjectStackCache();
	$var($String, s6144$, $nc(locale)->getLanguage());
	int32_t tmp6144$ = -1;
	switch ($nc(s6144$)->hashCode()) {
	case 3121:
		{
			if (s6144$->equals("ar"_s)) {
				tmp6144$ = 0;
			}
			break;
		}
	case 3259:
		{
			if (s6144$->equals("fa"_s)) {
				tmp6144$ = 1;
			}
			break;
		}
	case 3325:
		{
			if (s6144$->equals("he"_s)) {
				tmp6144$ = 2;
			}
			break;
		}
	case 3374:
		{
			if (s6144$->equals("iw"_s)) {
				tmp6144$ = 3;
			}
			break;
		}
	case 3391:
		{
			if (s6144$->equals("ji"_s)) {
				tmp6144$ = 4;
			}
			break;
		}
	case 3741:
		{
			if (s6144$->equals("ur"_s)) {
				tmp6144$ = 5;
			}
			break;
		}
	case 3856:
		{
			if (s6144$->equals("yi"_s)) {
				tmp6144$ = 6;
			}
			break;
		}
	}

	$var(ComponentOrientation, var$0, nullptr)
	switch (tmp6144$) {
	case 0:
		{}
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{
			$assign(var$0, ComponentOrientation::RIGHT_TO_LEFT);
			break;
		}
	default:
		{
			$assign(var$0, ComponentOrientation::LEFT_TO_RIGHT);
			break;
		}
	}
	return var$0;
}

ComponentOrientation* ComponentOrientation::getOrientation($ResourceBundle* bdl) {
	$init(ComponentOrientation);
	$useLocalCurrentObjectStackCache();
	$var(ComponentOrientation, result, nullptr);
	try {
		$assign(result, $cast(ComponentOrientation, $nc(bdl)->getObject("Orientation"_s)));
	} catch ($Exception& e) {
	}
	if (result == nullptr) {
		$assign(result, getOrientation($($nc(bdl)->getLocale())));
	}
	if (result == nullptr) {
		$assign(result, getOrientation($($Locale::getDefault())));
	}
	return result;
}

void ComponentOrientation::init$(int32_t value) {
	this->orientation = value;
}

void clinit$ComponentOrientation($Class* class$) {
	$assignStatic(ComponentOrientation::LEFT_TO_RIGHT, $new(ComponentOrientation, ComponentOrientation::HORIZ_BIT | ComponentOrientation::LTR_BIT));
	$assignStatic(ComponentOrientation::RIGHT_TO_LEFT, $new(ComponentOrientation, ComponentOrientation::HORIZ_BIT));
	$assignStatic(ComponentOrientation::UNKNOWN, $new(ComponentOrientation, (ComponentOrientation::HORIZ_BIT | ComponentOrientation::LTR_BIT) | ComponentOrientation::UNK_BIT));
}

ComponentOrientation::ComponentOrientation() {
}

$Class* ComponentOrientation::load$($String* name, bool initialize) {
	$loadClass(ComponentOrientation, name, initialize, &_ComponentOrientation_ClassInfo_, clinit$ComponentOrientation, allocate$ComponentOrientation);
	return class$;
}

$Class* ComponentOrientation::class$ = nullptr;

	} // awt
} // java