#include <javax/swing/plaf/metal/MetalBorders$MenuBarBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalToolBarUI.h>
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
using $JMenuBar = ::javax::swing::JMenuBar;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalToolBarUI = ::javax::swing::plaf::metal::MetalToolBarUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders$MenuBarBorder_FieldInfo_[] = {
	{"borderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $STATIC, $staticField(MetalBorders$MenuBarBorder, borderInsets)},
	{}
};

$MethodInfo _MetalBorders$MenuBarBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$MenuBarBorder::*)()>(&MetalBorders$MenuBarBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$MenuBarBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$MenuBarBorder", "javax.swing.plaf.metal.MetalBorders", "MenuBarBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$MenuBarBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$MenuBarBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MetalBorders$MenuBarBorder_FieldInfo_,
	_MetalBorders$MenuBarBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$MenuBarBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$MenuBarBorder($Class* clazz) {
	return $of($alloc(MetalBorders$MenuBarBorder));
}

int32_t MetalBorders$MenuBarBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$MenuBarBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$MenuBarBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$MenuBarBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$MenuBarBorder::finalize() {
	this->$AbstractBorder::finalize();
}

$Insets* MetalBorders$MenuBarBorder::borderInsets = nullptr;

void MetalBorders$MenuBarBorder::init$() {
	$AbstractBorder::init$();
}

void MetalBorders$MenuBarBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	if ($MetalLookAndFeel::usingOcean()) {
		if ($instanceOf($JMenuBar, c) && !$MetalToolBarUI::doesMenuBarBorderToolBar($cast($JMenuBar, c))) {
			g->setColor($($MetalLookAndFeel::getControl()));
			$SwingUtilities2::drawHLine(g, 0, w - 1, h - 2);
			g->setColor($($UIManager::getColor("MenuBar.borderColor"_s)));
			$SwingUtilities2::drawHLine(g, 0, w - 1, h - 1);
		}
	} else {
		g->setColor($($MetalLookAndFeel::getControlShadow()));
		$SwingUtilities2::drawHLine(g, 0, w - 1, h - 1);
	}
	g->translate(-x, -y);
}

$Insets* MetalBorders$MenuBarBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	if ($MetalLookAndFeel::usingOcean()) {
		$nc(newInsets)->set(0, 0, 2, 0);
	} else {
		$nc(newInsets)->set(1, 0, 1, 0);
	}
	return newInsets;
}

void clinit$MetalBorders$MenuBarBorder($Class* class$) {
	$assignStatic(MetalBorders$MenuBarBorder::borderInsets, $new($Insets, 1, 0, 1, 0));
}

MetalBorders$MenuBarBorder::MetalBorders$MenuBarBorder() {
}

$Class* MetalBorders$MenuBarBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$MenuBarBorder, name, initialize, &_MetalBorders$MenuBarBorder_ClassInfo_, clinit$MetalBorders$MenuBarBorder, allocate$MetalBorders$MenuBarBorder);
	return class$;
}

$Class* MetalBorders$MenuBarBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax