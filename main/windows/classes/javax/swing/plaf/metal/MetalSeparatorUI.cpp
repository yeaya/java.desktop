#include <javax/swing/plaf/metal/MetalSeparatorUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

#undef VERTICAL

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalSeparatorUI::*)()>(&MetalSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalSeparatorUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalSeparatorUI",
	"javax.swing.plaf.basic.BasicSeparatorUI",
	nullptr,
	nullptr,
	_MetalSeparatorUI_MethodInfo_
};

$Object* allocate$MetalSeparatorUI($Class* clazz) {
	return $of($alloc(MetalSeparatorUI));
}

void MetalSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

$ComponentUI* MetalSeparatorUI::createUI($JComponent* c) {
	$init(MetalSeparatorUI);
	return $new(MetalSeparatorUI);
}

void MetalSeparatorUI::installDefaults($JSeparator* s) {
	$LookAndFeel::installColors(s, "Separator.background"_s, "Separator.foreground"_s);
}

void MetalSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$var($Dimension, s, $nc(c)->getSize());
	if ($nc(($cast($JSeparator, c)))->getOrientation() == $JSeparator::VERTICAL) {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(0, 0, 0, $nc(s)->height);
		g->setColor($(c->getBackground()));
		g->drawLine(1, 0, 1, $nc(s)->height);
	} else {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(0, 0, $nc(s)->width, 0);
		g->setColor($(c->getBackground()));
		g->drawLine(0, 1, $nc(s)->width, 1);
	}
}

$Dimension* MetalSeparatorUI::getPreferredSize($JComponent* c) {
	if ($nc(($cast($JSeparator, c)))->getOrientation() == $JSeparator::VERTICAL) {
		return $new($Dimension, 2, 0);
	} else {
		return $new($Dimension, 0, 2);
	}
}

MetalSeparatorUI::MetalSeparatorUI() {
}

$Class* MetalSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(MetalSeparatorUI, name, initialize, &_MetalSeparatorUI_ClassInfo_, allocate$MetalSeparatorUI);
	return class$;
}

$Class* MetalSeparatorUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax