#include <com/apple/laf/AquaMenuBarBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/Border.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaMenuBarBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaMenuBarBorder::*)()>(&AquaMenuBarBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AquaMenuBarBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaMenuBarBorder",
	"java.lang.Object",
	"javax.swing.border.Border,javax.swing.plaf.UIResource",
	nullptr,
	_AquaMenuBarBorder_MethodInfo_
};

$Object* allocate$AquaMenuBarBorder($Class* clazz) {
	return $of($alloc(AquaMenuBarBorder));
}

int32_t AquaMenuBarBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool AquaMenuBarBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* AquaMenuBarBorder::clone() {
	 return this->$Border::clone();
}

$String* AquaMenuBarBorder::toString() {
	 return this->$Border::toString();
}

void AquaMenuBarBorder::finalize() {
	this->$Border::finalize();
}

void AquaMenuBarBorder::init$() {
}

void AquaMenuBarBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($Color);
	$nc(g)->setColor($Color::gray);
	$SwingUtilities2::drawHLine(g, x, x + width - 1, y + height - 1);
}

$Insets* AquaMenuBarBorder::getBorderInsets($Component* c) {
	return $new($Insets, 0, 0, 1, 0);
}

bool AquaMenuBarBorder::isBorderOpaque() {
	return false;
}

AquaMenuBarBorder::AquaMenuBarBorder() {
}

$Class* AquaMenuBarBorder::load$($String* name, bool initialize) {
	$loadClass(AquaMenuBarBorder, name, initialize, &_AquaMenuBarBorder_ClassInfo_, allocate$AquaMenuBarBorder);
	return class$;
}

$Class* AquaMenuBarBorder::class$ = nullptr;

		} // laf
	} // apple
} // com