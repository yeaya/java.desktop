#include <sun/swing/MenuItemLayoutHelper$RectSize.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/MenuItemLayoutHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuItemLayoutHelper = ::sun::swing::MenuItemLayoutHelper;

namespace sun {
	namespace swing {

$FieldInfo _MenuItemLayoutHelper$RectSize_FieldInfo_[] = {
	{"width", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$RectSize, width)},
	{"height", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$RectSize, height)},
	{"origWidth", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$RectSize, origWidth)},
	{"maxWidth", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$RectSize, maxWidth)},
	{}
};

$MethodInfo _MenuItemLayoutHelper$RectSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MenuItemLayoutHelper$RectSize::*)()>(&MenuItemLayoutHelper$RectSize::init$))},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(MenuItemLayoutHelper$RectSize::*)(int32_t,int32_t,int32_t,int32_t)>(&MenuItemLayoutHelper$RectSize::init$))},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getMaxWidth", "()I", nullptr, $PUBLIC},
	{"getOrigWidth", "()I", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"setHeight", "(I)V", nullptr, $PUBLIC},
	{"setMaxWidth", "(I)V", nullptr, $PUBLIC},
	{"setOrigWidth", "(I)V", nullptr, $PUBLIC},
	{"setWidth", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MenuItemLayoutHelper$RectSize_InnerClassesInfo_[] = {
	{"sun.swing.MenuItemLayoutHelper$RectSize", "sun.swing.MenuItemLayoutHelper", "RectSize", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MenuItemLayoutHelper$RectSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.MenuItemLayoutHelper$RectSize",
	"java.lang.Object",
	nullptr,
	_MenuItemLayoutHelper$RectSize_FieldInfo_,
	_MenuItemLayoutHelper$RectSize_MethodInfo_,
	nullptr,
	nullptr,
	_MenuItemLayoutHelper$RectSize_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.MenuItemLayoutHelper"
};

$Object* allocate$MenuItemLayoutHelper$RectSize($Class* clazz) {
	return $of($alloc(MenuItemLayoutHelper$RectSize));
}

void MenuItemLayoutHelper$RectSize::init$() {
}

void MenuItemLayoutHelper$RectSize::init$(int32_t width, int32_t height, int32_t origWidth, int32_t maxWidth) {
	this->width = width;
	this->height = height;
	this->origWidth = origWidth;
	this->maxWidth = maxWidth;
}

int32_t MenuItemLayoutHelper$RectSize::getWidth() {
	return this->width;
}

int32_t MenuItemLayoutHelper$RectSize::getHeight() {
	return this->height;
}

int32_t MenuItemLayoutHelper$RectSize::getOrigWidth() {
	return this->origWidth;
}

int32_t MenuItemLayoutHelper$RectSize::getMaxWidth() {
	return this->maxWidth;
}

void MenuItemLayoutHelper$RectSize::setWidth(int32_t width) {
	this->width = width;
}

void MenuItemLayoutHelper$RectSize::setHeight(int32_t height) {
	this->height = height;
}

void MenuItemLayoutHelper$RectSize::setOrigWidth(int32_t origWidth) {
	this->origWidth = origWidth;
}

void MenuItemLayoutHelper$RectSize::setMaxWidth(int32_t maxWidth) {
	this->maxWidth = maxWidth;
}

$String* MenuItemLayoutHelper$RectSize::toString() {
	return $str({"[w="_s, $$str(this->width), ",h="_s, $$str(this->height), ",ow="_s, $$str(this->origWidth), ",mw="_s, $$str(this->maxWidth), "]"_s});
}

MenuItemLayoutHelper$RectSize::MenuItemLayoutHelper$RectSize() {
}

$Class* MenuItemLayoutHelper$RectSize::load$($String* name, bool initialize) {
	$loadClass(MenuItemLayoutHelper$RectSize, name, initialize, &_MenuItemLayoutHelper$RectSize_ClassInfo_, allocate$MenuItemLayoutHelper$RectSize);
	return class$;
}

$Class* MenuItemLayoutHelper$RectSize::class$ = nullptr;

	} // swing
} // sun