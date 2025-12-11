#include <javax/swing/text/html/HiddenTagView$StartTagBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/text/html/HiddenTagView.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;
using $HiddenTagView = ::javax::swing::text::html::HiddenTagView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HiddenTagView$StartTagBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HiddenTagView$StartTagBorder::*)()>(&HiddenTagView$StartTagBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HiddenTagView$StartTagBorder_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HiddenTagView$StartTagBorder", "javax.swing.text.html.HiddenTagView", "StartTagBorder", $STATIC},
	{}
};

$ClassInfo _HiddenTagView$StartTagBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HiddenTagView$StartTagBorder",
	"java.lang.Object",
	"javax.swing.border.Border,java.io.Serializable",
	nullptr,
	_HiddenTagView$StartTagBorder_MethodInfo_,
	nullptr,
	nullptr,
	_HiddenTagView$StartTagBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HiddenTagView"
};

$Object* allocate$HiddenTagView$StartTagBorder($Class* clazz) {
	return $of($alloc(HiddenTagView$StartTagBorder));
}

int32_t HiddenTagView$StartTagBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool HiddenTagView$StartTagBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* HiddenTagView$StartTagBorder::clone() {
	 return this->$Border::clone();
}

$String* HiddenTagView$StartTagBorder::toString() {
	 return this->$Border::toString();
}

void HiddenTagView$StartTagBorder::finalize() {
	this->$Border::finalize();
}

void HiddenTagView$StartTagBorder::init$() {
}

void HiddenTagView$StartTagBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($HiddenTagView);
	$nc(g)->setColor($HiddenTagView::UnknownTagBorderColor);
	x += 3;
	width -= (3 * 2);
	g->drawLine(x, y + 3, x, y + height - 3);
	g->drawArc(x, y + height - 6 - 1, 6, 6, 180, 90);
	g->drawArc(x, y, 6, 6, 90, 90);
	g->drawLine(x + 3, y, x + width - 6, y);
	g->drawLine(x + 3, y + height - 1, x + width - 6, y + height - 1);
	g->drawLine(x + width - 6, y, x + width - 1, y + height / 2);
	g->drawLine(x + width - 6, y + height, x + width - 1, y + height / 2);
}

$Insets* HiddenTagView$StartTagBorder::getBorderInsets($Component* c) {
	return $new($Insets, 2, 2 + 3, 2, 6 + 2 + 3);
}

bool HiddenTagView$StartTagBorder::isBorderOpaque() {
	return false;
}

HiddenTagView$StartTagBorder::HiddenTagView$StartTagBorder() {
}

$Class* HiddenTagView$StartTagBorder::load$($String* name, bool initialize) {
	$loadClass(HiddenTagView$StartTagBorder, name, initialize, &_HiddenTagView$StartTagBorder_ClassInfo_, allocate$HiddenTagView$StartTagBorder);
	return class$;
}

$Class* HiddenTagView$StartTagBorder::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax