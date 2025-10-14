#include <sun/swing/plaf/windows/ClassicSortArrowIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef X_OFFSET

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace windows {

$FieldInfo _ClassicSortArrowIcon_FieldInfo_[] = {
	{"X_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassicSortArrowIcon, X_OFFSET)},
	{"ascending", "Z", nullptr, $PRIVATE, $field(ClassicSortArrowIcon, ascending)},
	{}
};

$MethodInfo _ClassicSortArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ClassicSortArrowIcon::*)(bool)>(&ClassicSortArrowIcon::init$))},
	{"drawSide", "(Ljava/awt/Graphics;III)V", nullptr, $PRIVATE, $method(static_cast<void(ClassicSortArrowIcon::*)($Graphics*,int32_t,int32_t,int32_t)>(&ClassicSortArrowIcon::drawSide))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClassicSortArrowIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.windows.ClassicSortArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_ClassicSortArrowIcon_FieldInfo_,
	_ClassicSortArrowIcon_MethodInfo_
};

$Object* allocate$ClassicSortArrowIcon($Class* clazz) {
	return $of($alloc(ClassicSortArrowIcon));
}

int32_t ClassicSortArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool ClassicSortArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* ClassicSortArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* ClassicSortArrowIcon::toString() {
	 return this->$Icon::toString();
}

void ClassicSortArrowIcon::finalize() {
	this->$Icon::finalize();
}

void ClassicSortArrowIcon::init$(bool ascending) {
	this->ascending = ascending;
}

void ClassicSortArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	x += ClassicSortArrowIcon::X_OFFSET;
	if (this->ascending) {
		$nc(g)->setColor($($UIManager::getColor("Table.sortIconHighlight"_s)));
		drawSide(g, x + 3, y, -1);
		g->setColor($($UIManager::getColor("Table.sortIconLight"_s)));
		drawSide(g, x + 4, y, 1);
		g->fillRect(x + 1, y + 6, 6, 1);
	} else {
		$nc(g)->setColor($($UIManager::getColor("Table.sortIconHighlight"_s)));
		drawSide(g, x + 3, y + 6, -1);
		g->fillRect(x + 1, y, 6, 1);
		g->setColor($($UIManager::getColor("Table.sortIconLight"_s)));
		drawSide(g, x + 4, y + 6, 1);
	}
}

void ClassicSortArrowIcon::drawSide($Graphics* g, int32_t x, int32_t y, int32_t xIncrement) {
	int32_t yIncrement = 2;
	if (this->ascending) {
		$nc(g)->fillRect(x, y, 1, 2);
		++y;
	} else {
		$nc(g)->fillRect(x, --y, 1, 2);
		yIncrement = -2;
		y -= 2;
	}
	x += xIncrement;
	for (int32_t i = 0; i < 2; ++i) {
		$nc(g)->fillRect(x, y, 1, 3);
		x += xIncrement;
		y += yIncrement;
	}
	if (!this->ascending) {
		++y;
	}
	$nc(g)->fillRect(x, y, 1, 2);
}

int32_t ClassicSortArrowIcon::getIconWidth() {
	return ClassicSortArrowIcon::X_OFFSET + 8;
}

int32_t ClassicSortArrowIcon::getIconHeight() {
	return 9;
}

ClassicSortArrowIcon::ClassicSortArrowIcon() {
}

$Class* ClassicSortArrowIcon::load$($String* name, bool initialize) {
	$loadClass(ClassicSortArrowIcon, name, initialize, &_ClassicSortArrowIcon_ClassInfo_, allocate$ClassicSortArrowIcon);
	return class$;
}

$Class* ClassicSortArrowIcon::class$ = nullptr;

			} // windows
		} // plaf
	} // swing
} // sun