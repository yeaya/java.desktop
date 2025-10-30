#include <sun/swing/icon/SortArrowIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef ARROW_HEIGHT
#undef X_PADDING

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace sun {
	namespace swing {
		namespace icon {

$FieldInfo _SortArrowIcon_FieldInfo_[] = {
	{"ARROW_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SortArrowIcon, ARROW_HEIGHT)},
	{"X_PADDING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SortArrowIcon, X_PADDING)},
	{"ascending", "Z", nullptr, $PRIVATE, $field(SortArrowIcon, ascending)},
	{"color", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SortArrowIcon, color)},
	{"colorKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SortArrowIcon, colorKey)},
	{}
};

$MethodInfo _SortArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZLjava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(SortArrowIcon::*)(bool,$Color*)>(&SortArrowIcon::init$))},
	{"<init>", "(ZLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SortArrowIcon::*)(bool,$String*)>(&SortArrowIcon::init$))},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(SortArrowIcon::*)()>(&SortArrowIcon::getColor))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SortArrowIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.icon.SortArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_SortArrowIcon_FieldInfo_,
	_SortArrowIcon_MethodInfo_
};

$Object* allocate$SortArrowIcon($Class* clazz) {
	return $of($alloc(SortArrowIcon));
}

int32_t SortArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool SortArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* SortArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* SortArrowIcon::toString() {
	 return this->$Icon::toString();
}

void SortArrowIcon::finalize() {
	this->$Icon::finalize();
}

void SortArrowIcon::init$(bool ascending, $Color* color) {
	this->ascending = ascending;
	$set(this, color, color);
	if (color == nullptr) {
		$throwNew($IllegalArgumentException);
	}
}

void SortArrowIcon::init$(bool ascending, $String* colorKey) {
	this->ascending = ascending;
	$set(this, colorKey, colorKey);
	if (colorKey == nullptr) {
		$throwNew($IllegalArgumentException);
	}
}

void SortArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc(g)->setColor($(getColor()));
	int32_t startX = SortArrowIcon::X_PADDING + x + SortArrowIcon::ARROW_HEIGHT / 2;
	if (this->ascending) {
		int32_t startY = y;
		g->fillRect(startX, startY, 1, 1);
		for (int32_t line = 1; line < SortArrowIcon::ARROW_HEIGHT; ++line) {
			g->fillRect(startX - line, startY + line, line + line + 1, 1);
		}
	} else {
		int32_t startY = y + SortArrowIcon::ARROW_HEIGHT - 1;
		g->fillRect(startX, startY, 1, 1);
		for (int32_t line = 1; line < SortArrowIcon::ARROW_HEIGHT; ++line) {
			g->fillRect(startX - line, startY - line, line + line + 1, 1);
		}
	}
}

int32_t SortArrowIcon::getIconWidth() {
	return SortArrowIcon::X_PADDING + SortArrowIcon::ARROW_HEIGHT * 2;
}

int32_t SortArrowIcon::getIconHeight() {
	return SortArrowIcon::ARROW_HEIGHT + 2;
}

$Color* SortArrowIcon::getColor() {
	if (this->color != nullptr) {
		return this->color;
	}
	return $UIManager::getColor(this->colorKey);
}

SortArrowIcon::SortArrowIcon() {
}

$Class* SortArrowIcon::load$($String* name, bool initialize) {
	$loadClass(SortArrowIcon, name, initialize, &_SortArrowIcon_ClassInfo_, allocate$SortArrowIcon);
	return class$;
}

$Class* SortArrowIcon::class$ = nullptr;

		} // icon
	} // swing
} // sun