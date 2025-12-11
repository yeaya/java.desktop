#include <com/apple/laf/AquaMenuBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/Box$Filler.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Box$Filler = ::javax::swing::Box$Filler;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JScrollPane = ::javax::swing::JScrollPane;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaMenuBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaMenuBorder::*)()>(&AquaMenuBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getEmptyInsets", "()Ljava/awt/Insets;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Insets*(*)()>(&AquaMenuBorder::getEmptyInsets))},
	{"getItemInsets", "()Ljava/awt/Insets;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Insets*(*)()>(&AquaMenuBorder::getItemInsets))},
	{"getPopupInsets", "()Ljava/awt/Insets;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Insets*(*)()>(&AquaMenuBorder::getPopupInsets))},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AquaMenuBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaMenuBorder",
	"java.lang.Object",
	"javax.swing.border.Border,javax.swing.plaf.UIResource",
	nullptr,
	_AquaMenuBorder_MethodInfo_
};

$Object* allocate$AquaMenuBorder($Class* clazz) {
	return $of($alloc(AquaMenuBorder));
}

int32_t AquaMenuBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool AquaMenuBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* AquaMenuBorder::clone() {
	 return this->$Border::clone();
}

$String* AquaMenuBorder::toString() {
	 return this->$Border::toString();
}

void AquaMenuBorder::finalize() {
	this->$Border::finalize();
}

void AquaMenuBorder::init$() {
}

void AquaMenuBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
}

bool AquaMenuBorder::isBorderOpaque() {
	return false;
}

$Insets* AquaMenuBorder::getItemInsets() {
	$init(AquaMenuBorder);
	return $new($Insets, 1, 5, 1, 5);
}

$Insets* AquaMenuBorder::getEmptyInsets() {
	$init(AquaMenuBorder);
	return $new($Insets, 0, 0, 0, 0);
}

$Insets* AquaMenuBorder::getPopupInsets() {
	$init(AquaMenuBorder);
	return $new($Insets, 4, 0, 4, 0);
}

$Insets* AquaMenuBorder::getBorderInsets($Component* c) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JPopupMenu, c))) {
		return getItemInsets();
	}
	$var($JPopupMenu, menu, $cast($JPopupMenu, c));
	int32_t nChildren = $nc(menu)->getComponentCount();
	if (nChildren > 0) {
		$var($Component, firstChild, menu->getComponent(0));
		if ($instanceOf($Box$Filler, firstChild)) {
			return getEmptyInsets();
		}
		if ($instanceOf($JScrollPane, firstChild)) {
			return getEmptyInsets();
		}
	}
	return getPopupInsets();
}

AquaMenuBorder::AquaMenuBorder() {
}

$Class* AquaMenuBorder::load$($String* name, bool initialize) {
	$loadClass(AquaMenuBorder, name, initialize, &_AquaMenuBorder_ClassInfo_, allocate$AquaMenuBorder);
	return class$;
}

$Class* AquaMenuBorder::class$ = nullptr;

		} // laf
	} // apple
} // com