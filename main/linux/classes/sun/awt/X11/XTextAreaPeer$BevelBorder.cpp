#include <sun/awt/X11/XTextAreaPeer$BevelBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/SystemColor.h>
#include <javax/swing/border/AbstractBorder.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $SystemColor = ::java::awt::SystemColor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$BevelBorder_FieldInfo_[] = {
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XTextAreaPeer$BevelBorder, darkShadow)},
	{"lightShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XTextAreaPeer$BevelBorder, lightShadow)},
	{"control", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XTextAreaPeer$BevelBorder, control)},
	{"isRaised", "Z", nullptr, $PRIVATE, $field(XTextAreaPeer$BevelBorder, isRaised)},
	{}
};

$MethodInfo _XTextAreaPeer$BevelBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZLjava/awt/Color;Ljava/awt/Color;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$BevelBorder::*)(bool,$Color*,$Color*)>(&XTextAreaPeer$BevelBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isOpaque", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextAreaPeer$BevelBorder_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$BevelBorder", "sun.awt.X11.XTextAreaPeer", "BevelBorder", $STATIC},
	{}
};

$ClassInfo _XTextAreaPeer$BevelBorder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$BevelBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_XTextAreaPeer$BevelBorder_FieldInfo_,
	_XTextAreaPeer$BevelBorder_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$BevelBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$BevelBorder($Class* clazz) {
	return $of($alloc(XTextAreaPeer$BevelBorder));
}

int32_t XTextAreaPeer$BevelBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool XTextAreaPeer$BevelBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* XTextAreaPeer$BevelBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* XTextAreaPeer$BevelBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void XTextAreaPeer$BevelBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void XTextAreaPeer$BevelBorder::init$(bool isRaised, $Color* darkShadow, $Color* lightShadow) {
	$AbstractBorder::init$();
	$init($SystemColor);
	$set(this, darkShadow, $SystemColor::controlDkShadow);
	$set(this, lightShadow, $SystemColor::controlLtHighlight);
	$set(this, control, $SystemColor::controlShadow);
	this->isRaised = isRaised;
	$set(this, darkShadow, darkShadow);
	$set(this, lightShadow, lightShadow);
}

void XTextAreaPeer$BevelBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->setColor((this->isRaised) ? this->lightShadow : this->darkShadow);
	g->drawLine(x, y, x + w - 1, y);
	g->drawLine(x, y + h - 1, x, y + 1);
	g->setColor(this->control);
	g->drawLine(x + 1, y + 1, x + w - 2, y + 1);
	g->drawLine(x + 1, y + h - 1, x + 1, y + 1);
	g->setColor((this->isRaised) ? this->darkShadow : this->lightShadow);
	g->drawLine(x + 1, y + h - 1, x + w - 1, y + h - 1);
	g->drawLine(x + w - 1, y + h - 1, x + w - 1, y + 1);
	g->setColor(this->control);
	g->drawLine(x + 1, y + h - 2, x + w - 2, y + h - 2);
	g->drawLine(x + w - 2, y + h - 2, x + w - 2, y + 1);
}

$Insets* XTextAreaPeer$BevelBorder::getBorderInsets($Component* c) {
	return getBorderInsets(c, $$new($Insets, 0, 0, 0, 0));
}

$Insets* XTextAreaPeer$BevelBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->top = (insets->left = (insets->bottom = (insets->right = 2)));
	return insets;
}

bool XTextAreaPeer$BevelBorder::isOpaque($Component* c) {
	return true;
}

XTextAreaPeer$BevelBorder::XTextAreaPeer$BevelBorder() {
}

$Class* XTextAreaPeer$BevelBorder::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$BevelBorder, name, initialize, &_XTextAreaPeer$BevelBorder_ClassInfo_, allocate$XTextAreaPeer$BevelBorder);
	return class$;
}

$Class* XTextAreaPeer$BevelBorder::class$ = nullptr;

		} // X11
	} // awt
} // sun