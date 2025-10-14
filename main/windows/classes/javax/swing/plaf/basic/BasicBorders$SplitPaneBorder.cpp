#include <javax/swing/plaf/basic/BasicBorders$SplitPaneBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <jcpp.h>

#undef HORIZONTAL_SPLIT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicBorders$SplitPaneBorder_FieldInfo_[] = {
	{"highlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$SplitPaneBorder, highlight)},
	{"shadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicBorders$SplitPaneBorder, shadow)},
	{}
};

$MethodInfo _BasicBorders$SplitPaneBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicBorders$SplitPaneBorder::*)($Color*,$Color*)>(&BasicBorders$SplitPaneBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicBorders$SplitPaneBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$SplitPaneBorder", "javax.swing.plaf.basic.BasicBorders", "SplitPaneBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicBorders$SplitPaneBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders$SplitPaneBorder",
	"java.lang.Object",
	"javax.swing.border.Border,javax.swing.plaf.UIResource",
	_BasicBorders$SplitPaneBorder_FieldInfo_,
	_BasicBorders$SplitPaneBorder_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders$SplitPaneBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders"
};

$Object* allocate$BasicBorders$SplitPaneBorder($Class* clazz) {
	return $of($alloc(BasicBorders$SplitPaneBorder));
}

int32_t BasicBorders$SplitPaneBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool BasicBorders$SplitPaneBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* BasicBorders$SplitPaneBorder::clone() {
	 return this->$Border::clone();
}

$String* BasicBorders$SplitPaneBorder::toString() {
	 return this->$Border::toString();
}

void BasicBorders$SplitPaneBorder::finalize() {
	this->$Border::finalize();
}

void BasicBorders$SplitPaneBorder::init$($Color* highlight, $Color* shadow) {
	$set(this, highlight, highlight);
	$set(this, shadow, shadow);
}

void BasicBorders$SplitPaneBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (!($instanceOf($JSplitPane, c))) {
		return;
	}
	$var($Component, child, nullptr);
	$var($Rectangle, cBounds, nullptr);
	$var($JSplitPane, splitPane, $cast($JSplitPane, c));
	$assign(child, $nc(splitPane)->getLeftComponent());
	$nc(g)->setColor($($nc(c)->getBackground()));
	g->drawRect(x, y, width - 1, height - 1);
	if (splitPane->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
		if (child != nullptr) {
			$assign(cBounds, child->getBounds());
			g->setColor(this->shadow);
			g->drawLine(0, 0, $nc(cBounds)->width + 1, 0);
			g->drawLine(0, 1, 0, $nc(cBounds)->height + 1);
			g->setColor(this->highlight);
			g->drawLine(0, $nc(cBounds)->height + 1, cBounds->width + 1, cBounds->height + 1);
		}
		$assign(child, splitPane->getRightComponent());
		if (child != nullptr) {
			$assign(cBounds, child->getBounds());
			int32_t maxX = $nc(cBounds)->x + cBounds->width;
			int32_t maxY = cBounds->y + cBounds->height;
			g->setColor(this->shadow);
			g->drawLine(cBounds->x - 1, 0, maxX, 0);
			g->setColor(this->highlight);
			g->drawLine(cBounds->x - 1, maxY, maxX, maxY);
			g->drawLine(maxX, 0, maxX, maxY + 1);
		}
	} else {
		if (child != nullptr) {
			$assign(cBounds, child->getBounds());
			g->setColor(this->shadow);
			g->drawLine(0, 0, $nc(cBounds)->width + 1, 0);
			g->drawLine(0, 1, 0, $nc(cBounds)->height);
			g->setColor(this->highlight);
			g->drawLine(1 + $nc(cBounds)->width, 0, 1 + cBounds->width, cBounds->height + 1);
			g->drawLine(0, $nc(cBounds)->height + 1, 0, cBounds->height + 1);
		}
		$assign(child, splitPane->getRightComponent());
		if (child != nullptr) {
			$assign(cBounds, child->getBounds());
			int32_t maxX = $nc(cBounds)->x + cBounds->width;
			int32_t maxY = cBounds->y + cBounds->height;
			g->setColor(this->shadow);
			g->drawLine(0, cBounds->y - 1, 0, maxY);
			g->drawLine(maxX, cBounds->y - 1, maxX, cBounds->y - 1);
			g->setColor(this->highlight);
			g->drawLine(0, maxY, cBounds->width + 1, maxY);
			g->drawLine(maxX, cBounds->y, maxX, maxY);
		}
	}
}

$Insets* BasicBorders$SplitPaneBorder::getBorderInsets($Component* c) {
	return $new($Insets, 1, 1, 1, 1);
}

bool BasicBorders$SplitPaneBorder::isBorderOpaque() {
	return true;
}

BasicBorders$SplitPaneBorder::BasicBorders$SplitPaneBorder() {
}

$Class* BasicBorders$SplitPaneBorder::load$($String* name, bool initialize) {
	$loadClass(BasicBorders$SplitPaneBorder, name, initialize, &_BasicBorders$SplitPaneBorder_ClassInfo_, allocate$BasicBorders$SplitPaneBorder);
	return class$;
}

$Class* BasicBorders$SplitPaneBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax