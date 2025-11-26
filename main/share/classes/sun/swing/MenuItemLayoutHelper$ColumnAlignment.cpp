#include <sun/swing/MenuItemLayoutHelper$ColumnAlignment.h>

#include <javax/swing/SwingConstants.h>
#include <sun/swing/MenuItemLayoutHelper.h>
#include <jcpp.h>

#undef LEFT
#undef LEFT_ALIGNMENT
#undef RIGHT
#undef RIGHT_ALIGNMENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingConstants = ::javax::swing::SwingConstants;
using $MenuItemLayoutHelper = ::sun::swing::MenuItemLayoutHelper;

namespace sun {
	namespace swing {

$FieldInfo _MenuItemLayoutHelper$ColumnAlignment_FieldInfo_[] = {
	{"checkAlignment", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$ColumnAlignment, checkAlignment)},
	{"iconAlignment", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$ColumnAlignment, iconAlignment)},
	{"textAlignment", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$ColumnAlignment, textAlignment)},
	{"accAlignment", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$ColumnAlignment, accAlignment)},
	{"arrowAlignment", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$ColumnAlignment, arrowAlignment)},
	{"LEFT_ALIGNMENT", "Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MenuItemLayoutHelper$ColumnAlignment, LEFT_ALIGNMENT)},
	{"RIGHT_ALIGNMENT", "Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MenuItemLayoutHelper$ColumnAlignment, RIGHT_ALIGNMENT)},
	{}
};

$MethodInfo _MenuItemLayoutHelper$ColumnAlignment_MethodInfo_[] = {
	{"<init>", "(IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(MenuItemLayoutHelper$ColumnAlignment::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&MenuItemLayoutHelper$ColumnAlignment::init$))},
	{"getAccAlignment", "()I", nullptr, $PUBLIC},
	{"getArrowAlignment", "()I", nullptr, $PUBLIC},
	{"getCheckAlignment", "()I", nullptr, $PUBLIC},
	{"getIconAlignment", "()I", nullptr, $PUBLIC},
	{"getTextAlignment", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MenuItemLayoutHelper$ColumnAlignment_InnerClassesInfo_[] = {
	{"sun.swing.MenuItemLayoutHelper$ColumnAlignment", "sun.swing.MenuItemLayoutHelper", "ColumnAlignment", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MenuItemLayoutHelper$ColumnAlignment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.MenuItemLayoutHelper$ColumnAlignment",
	"java.lang.Object",
	nullptr,
	_MenuItemLayoutHelper$ColumnAlignment_FieldInfo_,
	_MenuItemLayoutHelper$ColumnAlignment_MethodInfo_,
	nullptr,
	nullptr,
	_MenuItemLayoutHelper$ColumnAlignment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.MenuItemLayoutHelper"
};

$Object* allocate$MenuItemLayoutHelper$ColumnAlignment($Class* clazz) {
	return $of($alloc(MenuItemLayoutHelper$ColumnAlignment));
}

MenuItemLayoutHelper$ColumnAlignment* MenuItemLayoutHelper$ColumnAlignment::LEFT_ALIGNMENT = nullptr;
MenuItemLayoutHelper$ColumnAlignment* MenuItemLayoutHelper$ColumnAlignment::RIGHT_ALIGNMENT = nullptr;

void MenuItemLayoutHelper$ColumnAlignment::init$(int32_t checkAlignment, int32_t iconAlignment, int32_t textAlignment, int32_t accAlignment, int32_t arrowAlignment) {
	this->checkAlignment = checkAlignment;
	this->iconAlignment = iconAlignment;
	this->textAlignment = textAlignment;
	this->accAlignment = accAlignment;
	this->arrowAlignment = arrowAlignment;
}

int32_t MenuItemLayoutHelper$ColumnAlignment::getCheckAlignment() {
	return this->checkAlignment;
}

int32_t MenuItemLayoutHelper$ColumnAlignment::getIconAlignment() {
	return this->iconAlignment;
}

int32_t MenuItemLayoutHelper$ColumnAlignment::getTextAlignment() {
	return this->textAlignment;
}

int32_t MenuItemLayoutHelper$ColumnAlignment::getAccAlignment() {
	return this->accAlignment;
}

int32_t MenuItemLayoutHelper$ColumnAlignment::getArrowAlignment() {
	return this->arrowAlignment;
}

void clinit$MenuItemLayoutHelper$ColumnAlignment($Class* class$) {
	$assignStatic(MenuItemLayoutHelper$ColumnAlignment::LEFT_ALIGNMENT, $new(MenuItemLayoutHelper$ColumnAlignment, $SwingConstants::LEFT, $SwingConstants::LEFT, $SwingConstants::LEFT, $SwingConstants::LEFT, $SwingConstants::LEFT));
	$assignStatic(MenuItemLayoutHelper$ColumnAlignment::RIGHT_ALIGNMENT, $new(MenuItemLayoutHelper$ColumnAlignment, $SwingConstants::RIGHT, $SwingConstants::RIGHT, $SwingConstants::RIGHT, $SwingConstants::RIGHT, $SwingConstants::RIGHT));
}

MenuItemLayoutHelper$ColumnAlignment::MenuItemLayoutHelper$ColumnAlignment() {
}

$Class* MenuItemLayoutHelper$ColumnAlignment::load$($String* name, bool initialize) {
	$loadClass(MenuItemLayoutHelper$ColumnAlignment, name, initialize, &_MenuItemLayoutHelper$ColumnAlignment_ClassInfo_, clinit$MenuItemLayoutHelper$ColumnAlignment, allocate$MenuItemLayoutHelper$ColumnAlignment);
	return class$;
}

$Class* MenuItemLayoutHelper$ColumnAlignment::class$ = nullptr;

	} // swing
} // sun