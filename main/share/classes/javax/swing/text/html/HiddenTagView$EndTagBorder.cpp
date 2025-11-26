#include <javax/swing/text/html/HiddenTagView$EndTagBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/text/html/HiddenTagView.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;
using $HiddenTagView = ::javax::swing::text::html::HiddenTagView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HiddenTagView$EndTagBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HiddenTagView$EndTagBorder::*)()>(&HiddenTagView$EndTagBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HiddenTagView$EndTagBorder_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HiddenTagView$EndTagBorder", "javax.swing.text.html.HiddenTagView", "EndTagBorder", $STATIC},
	{}
};

$ClassInfo _HiddenTagView$EndTagBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HiddenTagView$EndTagBorder",
	"java.lang.Object",
	"javax.swing.border.Border,java.io.Serializable",
	nullptr,
	_HiddenTagView$EndTagBorder_MethodInfo_,
	nullptr,
	nullptr,
	_HiddenTagView$EndTagBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HiddenTagView"
};

$Object* allocate$HiddenTagView$EndTagBorder($Class* clazz) {
	return $of($alloc(HiddenTagView$EndTagBorder));
}

int32_t HiddenTagView$EndTagBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool HiddenTagView$EndTagBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* HiddenTagView$EndTagBorder::clone() {
	 return this->$Border::clone();
}

$String* HiddenTagView$EndTagBorder::toString() {
	 return this->$Border::toString();
}

void HiddenTagView$EndTagBorder::finalize() {
	this->$Border::finalize();
}

void HiddenTagView$EndTagBorder::init$() {
}

void HiddenTagView$EndTagBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($HiddenTagView);
	$nc(g)->setColor($HiddenTagView::UnknownTagBorderColor);
	x += 3;
	width -= (3 * 2);
	g->drawLine(x + width - 1, y + 3, x + width - 1, y + height - 3);
	g->drawArc(x + width - 6 - 1, y + height - 6 - 1, 6, 6, 270, 90);
	g->drawArc(x + width - 6 - 1, y, 6, 6, 0, 90);
	g->drawLine(x + 6, y, x + width - 3, y);
	g->drawLine(x + 6, y + height - 1, x + width - 3, y + height - 1);
	g->drawLine(x + 6, y, x, y + height / 2);
	g->drawLine(x + 6, y + height, x, y + height / 2);
}

$Insets* HiddenTagView$EndTagBorder::getBorderInsets($Component* c) {
	return $new($Insets, 2, 6 + 2 + 3, 2, 2 + 3);
}

bool HiddenTagView$EndTagBorder::isBorderOpaque() {
	return false;
}

HiddenTagView$EndTagBorder::HiddenTagView$EndTagBorder() {
}

$Class* HiddenTagView$EndTagBorder::load$($String* name, bool initialize) {
	$loadClass(HiddenTagView$EndTagBorder, name, initialize, &_HiddenTagView$EndTagBorder_ClassInfo_, allocate$HiddenTagView$EndTagBorder);
	return class$;
}

$Class* HiddenTagView$EndTagBorder::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax