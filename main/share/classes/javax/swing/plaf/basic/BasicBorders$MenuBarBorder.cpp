#include <javax/swing/plaf/basic/BasicBorders$MenuBarBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicBorders$MenuBarBorder_FieldInfo_[] = {
	{"shadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicBorders$MenuBarBorder, shadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicBorders$MenuBarBorder, highlight)},
	{}
};

$MethodInfo _BasicBorders$MenuBarBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicBorders$MenuBarBorder::*)($Color*,$Color*)>(&BasicBorders$MenuBarBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicBorders$MenuBarBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$MenuBarBorder", "javax.swing.plaf.basic.BasicBorders", "MenuBarBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicBorders$MenuBarBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders$MenuBarBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_BasicBorders$MenuBarBorder_FieldInfo_,
	_BasicBorders$MenuBarBorder_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders$MenuBarBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders"
};

$Object* allocate$BasicBorders$MenuBarBorder($Class* clazz) {
	return $of($alloc(BasicBorders$MenuBarBorder));
}

int32_t BasicBorders$MenuBarBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool BasicBorders$MenuBarBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* BasicBorders$MenuBarBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* BasicBorders$MenuBarBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void BasicBorders$MenuBarBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void BasicBorders$MenuBarBorder::init$($Color* shadow, $Color* highlight) {
	$AbstractBorder::init$();
	$set(this, shadow, shadow);
	$set(this, highlight, highlight);
}

void BasicBorders$MenuBarBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	g->setColor(this->shadow);
	$SwingUtilities2::drawHLine(g, 0, width - 1, height - 2);
	g->setColor(this->highlight);
	$SwingUtilities2::drawHLine(g, 0, width - 1, height - 1);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

$Insets* BasicBorders$MenuBarBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(0, 0, 2, 0);
	return insets;
}

BasicBorders$MenuBarBorder::BasicBorders$MenuBarBorder() {
}

$Class* BasicBorders$MenuBarBorder::load$($String* name, bool initialize) {
	$loadClass(BasicBorders$MenuBarBorder, name, initialize, &_BasicBorders$MenuBarBorder_ClassInfo_, allocate$BasicBorders$MenuBarBorder);
	return class$;
}

$Class* BasicBorders$MenuBarBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax