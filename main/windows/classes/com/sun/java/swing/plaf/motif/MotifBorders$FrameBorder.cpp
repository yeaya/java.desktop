#include <com/sun/java/swing/plaf/motif/MotifBorders$FrameBorder.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <jcpp.h>

#undef BORDER_SIZE

using $MotifBorders = ::com::sun::java::swing::plaf::motif::MotifBorders;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifBorders$FrameBorder_FieldInfo_[] = {
	{"jcomp", "Ljavax/swing/JComponent;", nullptr, 0, $field(MotifBorders$FrameBorder, jcomp)},
	{"frameHighlight", "Ljava/awt/Color;", nullptr, 0, $field(MotifBorders$FrameBorder, frameHighlight)},
	{"frameColor", "Ljava/awt/Color;", nullptr, 0, $field(MotifBorders$FrameBorder, frameColor)},
	{"frameShadow", "Ljava/awt/Color;", nullptr, 0, $field(MotifBorders$FrameBorder, frameShadow)},
	{"BORDER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifBorders$FrameBorder, BORDER_SIZE)},
	{}
};

$MethodInfo _MotifBorders$FrameBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifBorders$FrameBorder::*)($JComponent*)>(&MotifBorders$FrameBorder::init$))},
	{"component", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"drawBottomBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)Z", nullptr, $PROTECTED},
	{"drawLeftBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)Z", nullptr, $PROTECTED},
	{"drawRightBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)Z", nullptr, $PROTECTED},
	{"drawTopBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)Z", nullptr, $PROTECTED},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getFrameColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getFrameHighlight", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getFrameShadow", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"isActiveFrame", "()Z", nullptr, $PROTECTED},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"setComponent", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifBorders$FrameBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifBorders$FrameBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "FrameBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifBorders$FrameBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifBorders$FrameBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MotifBorders$FrameBorder_FieldInfo_,
	_MotifBorders$FrameBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MotifBorders$FrameBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifBorders"
};

$Object* allocate$MotifBorders$FrameBorder($Class* clazz) {
	return $of($alloc(MotifBorders$FrameBorder));
}

int32_t MotifBorders$FrameBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MotifBorders$FrameBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MotifBorders$FrameBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MotifBorders$FrameBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MotifBorders$FrameBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MotifBorders$FrameBorder::init$($JComponent* comp) {
	$AbstractBorder::init$();
	$set(this, jcomp, comp);
}

void MotifBorders$FrameBorder::setComponent($JComponent* comp) {
	$set(this, jcomp, comp);
}

$JComponent* MotifBorders$FrameBorder::component() {
	return this->jcomp;
}

$Color* MotifBorders$FrameBorder::getFrameHighlight() {
	return this->frameHighlight;
}

$Color* MotifBorders$FrameBorder::getFrameColor() {
	return this->frameColor;
}

$Color* MotifBorders$FrameBorder::getFrameShadow() {
	return this->frameShadow;
}

$Insets* MotifBorders$FrameBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(MotifBorders$FrameBorder::BORDER_SIZE, MotifBorders$FrameBorder::BORDER_SIZE, MotifBorders$FrameBorder::BORDER_SIZE, MotifBorders$FrameBorder::BORDER_SIZE);
	return newInsets;
}

bool MotifBorders$FrameBorder::drawTopBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Rectangle, titleBarRect, $new($Rectangle, x, y, width, MotifBorders$FrameBorder::BORDER_SIZE));
	if (!$nc($($nc(g)->getClipBounds()))->intersects(titleBarRect)) {
		return false;
	}
	int32_t maxX = width - 1;
	int32_t maxY = MotifBorders$FrameBorder::BORDER_SIZE - 1;
	$nc(g)->setColor(this->frameColor);
	g->drawLine(x, y + 2, maxX - 2, y + 2);
	g->drawLine(x, y + 3, maxX - 2, y + 3);
	g->drawLine(x, y + 4, maxX - 2, y + 4);
	g->setColor(this->frameHighlight);
	g->drawLine(x, y, maxX, y);
	g->drawLine(x, y + 1, maxX, y + 1);
	g->drawLine(x, y + 2, x, y + 4);
	g->drawLine(x + 1, y + 2, x + 1, y + 4);
	g->setColor(this->frameShadow);
	g->drawLine(x + 4, y + 4, maxX - 4, y + 4);
	g->drawLine(maxX, y + 1, maxX, maxY);
	g->drawLine(maxX - 1, y + 2, maxX - 1, maxY);
	return true;
}

bool MotifBorders$FrameBorder::drawLeftBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Rectangle, borderRect, $new($Rectangle, 0, 0, $nc($(getBorderInsets(c)))->left, height));
	if (!$nc($($nc(g)->getClipBounds()))->intersects(borderRect)) {
		return false;
	}
	int32_t startY = MotifBorders$FrameBorder::BORDER_SIZE;
	$nc(g)->setColor(this->frameHighlight);
	g->drawLine(x, startY, x, height - 1);
	g->drawLine(x + 1, startY, x + 1, height - 2);
	g->setColor(this->frameColor);
	g->fillRect(x + 2, startY, x + 2, height - 3);
	g->setColor(this->frameShadow);
	g->drawLine(x + 4, startY, x + 4, height - 5);
	return true;
}

bool MotifBorders$FrameBorder::drawRightBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	int32_t var$0 = width - $nc($(getBorderInsets(c)))->right;
	$var($Rectangle, borderRect, $new($Rectangle, var$0, 0, $nc($(getBorderInsets(c)))->right, height));
	if (!$nc($($nc(g)->getClipBounds()))->intersects(borderRect)) {
		return false;
	}
	int32_t startX = width - $nc($(getBorderInsets(c)))->right;
	int32_t startY = MotifBorders$FrameBorder::BORDER_SIZE;
	$nc(g)->setColor(this->frameColor);
	g->fillRect(startX + 1, startY, 2, height - 1);
	g->setColor(this->frameShadow);
	g->fillRect(startX + 3, startY, 2, height - 1);
	g->setColor(this->frameHighlight);
	g->drawLine(startX, startY, startX, height - 1);
	return true;
}

bool MotifBorders$FrameBorder::drawBottomBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Rectangle, borderRect, nullptr);
	int32_t marginHeight = 0;
	int32_t startY = 0;
	int32_t var$0 = height - $nc($(getBorderInsets(c)))->bottom;
	int32_t var$1 = width;
	$assign(borderRect, $new($Rectangle, 0, var$0, var$1, $nc($(getBorderInsets(c)))->bottom));
	if (!$nc($($nc(g)->getClipBounds()))->intersects(borderRect)) {
		return false;
	}
	startY = height - $nc($(getBorderInsets(c)))->bottom;
	$nc(g)->setColor(this->frameShadow);
	g->drawLine(x + 1, height - 1, width - 1, height - 1);
	g->drawLine(x + 2, height - 2, width - 2, height - 2);
	g->setColor(this->frameColor);
	g->fillRect(x + 2, startY + 1, width - 4, 2);
	g->setColor(this->frameHighlight);
	g->drawLine(x + 5, startY, width - 5, startY);
	return true;
}

bool MotifBorders$FrameBorder::isActiveFrame() {
	return $nc(this->jcomp)->hasFocus();
}

void MotifBorders$FrameBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (isActiveFrame()) {
		$set(this, frameColor, $UIManager::getColor("activeCaptionBorder"_s));
	} else {
		$set(this, frameColor, $UIManager::getColor("inactiveCaptionBorder"_s));
	}
	$set(this, frameHighlight, $nc(this->frameColor)->brighter());
	$set(this, frameShadow, $nc($($nc(this->frameColor)->darker()))->darker());
	drawTopBorder(c, g, x, y, width, height);
	drawLeftBorder(c, g, x, y, width, height);
	drawRightBorder(c, g, x, y, width, height);
	drawBottomBorder(c, g, x, y, width, height);
}

MotifBorders$FrameBorder::MotifBorders$FrameBorder() {
}

$Class* MotifBorders$FrameBorder::load$($String* name, bool initialize) {
	$loadClass(MotifBorders$FrameBorder, name, initialize, &_MotifBorders$FrameBorder_ClassInfo_, allocate$MotifBorders$FrameBorder);
	return class$;
}

$Class* MotifBorders$FrameBorder::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com