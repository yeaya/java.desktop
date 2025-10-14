#include <sun/swing/MenuItemLayoutHelper$LayoutResult.h>

#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/swing/MenuItemLayoutHelper.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $MenuItemLayoutHelper = ::sun::swing::MenuItemLayoutHelper;

namespace sun {
	namespace swing {

$FieldInfo _MenuItemLayoutHelper$LayoutResult_FieldInfo_[] = {
	{"iconRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$LayoutResult, iconRect)},
	{"textRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$LayoutResult, textRect)},
	{"accRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$LayoutResult, accRect)},
	{"checkRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$LayoutResult, checkRect)},
	{"arrowRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$LayoutResult, arrowRect)},
	{"labelRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$LayoutResult, labelRect)},
	{}
};

$MethodInfo _MenuItemLayoutHelper$LayoutResult_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MenuItemLayoutHelper$LayoutResult::*)()>(&MenuItemLayoutHelper$LayoutResult::init$))},
	{"<init>", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(MenuItemLayoutHelper$LayoutResult::*)($Rectangle*,$Rectangle*,$Rectangle*,$Rectangle*,$Rectangle*,$Rectangle*)>(&MenuItemLayoutHelper$LayoutResult::init$))},
	{"getAccRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getAllRects", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/awt/Rectangle;>;", $PUBLIC},
	{"getArrowRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCheckRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getIconRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getLabelRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getTextRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"setAccRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setArrowRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setCheckRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setIconRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setLabelRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setTextRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MenuItemLayoutHelper$LayoutResult_InnerClassesInfo_[] = {
	{"sun.swing.MenuItemLayoutHelper$LayoutResult", "sun.swing.MenuItemLayoutHelper", "LayoutResult", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MenuItemLayoutHelper$LayoutResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.MenuItemLayoutHelper$LayoutResult",
	"java.lang.Object",
	nullptr,
	_MenuItemLayoutHelper$LayoutResult_FieldInfo_,
	_MenuItemLayoutHelper$LayoutResult_MethodInfo_,
	nullptr,
	nullptr,
	_MenuItemLayoutHelper$LayoutResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.MenuItemLayoutHelper"
};

$Object* allocate$MenuItemLayoutHelper$LayoutResult($Class* clazz) {
	return $of($alloc(MenuItemLayoutHelper$LayoutResult));
}

void MenuItemLayoutHelper$LayoutResult::init$() {
	$set(this, iconRect, $new($Rectangle));
	$set(this, textRect, $new($Rectangle));
	$set(this, accRect, $new($Rectangle));
	$set(this, checkRect, $new($Rectangle));
	$set(this, arrowRect, $new($Rectangle));
	$set(this, labelRect, $new($Rectangle));
}

void MenuItemLayoutHelper$LayoutResult::init$($Rectangle* iconRect, $Rectangle* textRect, $Rectangle* accRect, $Rectangle* checkRect, $Rectangle* arrowRect, $Rectangle* labelRect) {
	$set(this, iconRect, iconRect);
	$set(this, textRect, textRect);
	$set(this, accRect, accRect);
	$set(this, checkRect, checkRect);
	$set(this, arrowRect, arrowRect);
	$set(this, labelRect, labelRect);
}

$Rectangle* MenuItemLayoutHelper$LayoutResult::getIconRect() {
	return this->iconRect;
}

void MenuItemLayoutHelper$LayoutResult::setIconRect($Rectangle* iconRect) {
	$set(this, iconRect, iconRect);
}

$Rectangle* MenuItemLayoutHelper$LayoutResult::getTextRect() {
	return this->textRect;
}

void MenuItemLayoutHelper$LayoutResult::setTextRect($Rectangle* textRect) {
	$set(this, textRect, textRect);
}

$Rectangle* MenuItemLayoutHelper$LayoutResult::getAccRect() {
	return this->accRect;
}

void MenuItemLayoutHelper$LayoutResult::setAccRect($Rectangle* accRect) {
	$set(this, accRect, accRect);
}

$Rectangle* MenuItemLayoutHelper$LayoutResult::getCheckRect() {
	return this->checkRect;
}

void MenuItemLayoutHelper$LayoutResult::setCheckRect($Rectangle* checkRect) {
	$set(this, checkRect, checkRect);
}

$Rectangle* MenuItemLayoutHelper$LayoutResult::getArrowRect() {
	return this->arrowRect;
}

void MenuItemLayoutHelper$LayoutResult::setArrowRect($Rectangle* arrowRect) {
	$set(this, arrowRect, arrowRect);
}

$Rectangle* MenuItemLayoutHelper$LayoutResult::getLabelRect() {
	return this->labelRect;
}

void MenuItemLayoutHelper$LayoutResult::setLabelRect($Rectangle* labelRect) {
	$set(this, labelRect, labelRect);
}

$Map* MenuItemLayoutHelper$LayoutResult::getAllRects() {
	$var($Map, result, $new($HashMap));
	result->put("checkRect"_s, this->checkRect);
	result->put("iconRect"_s, this->iconRect);
	result->put("textRect"_s, this->textRect);
	result->put("accRect"_s, this->accRect);
	result->put("arrowRect"_s, this->arrowRect);
	result->put("labelRect"_s, this->labelRect);
	return result;
}

MenuItemLayoutHelper$LayoutResult::MenuItemLayoutHelper$LayoutResult() {
}

$Class* MenuItemLayoutHelper$LayoutResult::load$($String* name, bool initialize) {
	$loadClass(MenuItemLayoutHelper$LayoutResult, name, initialize, &_MenuItemLayoutHelper$LayoutResult_ClassInfo_, allocate$MenuItemLayoutHelper$LayoutResult);
	return class$;
}

$Class* MenuItemLayoutHelper$LayoutResult::class$ = nullptr;

	} // swing
} // sun