#include <javax/swing/plaf/metal/MetalPopupMenuSeparatorUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <javax/swing/plaf/metal/MetalSeparatorUI.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;
using $MetalSeparatorUI = ::javax::swing::plaf::metal::MetalSeparatorUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalPopupMenuSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalPopupMenuSeparatorUI::*)()>(&MetalPopupMenuSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalPopupMenuSeparatorUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalPopupMenuSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalPopupMenuSeparatorUI",
	"javax.swing.plaf.metal.MetalSeparatorUI",
	nullptr,
	nullptr,
	_MetalPopupMenuSeparatorUI_MethodInfo_
};

$Object* allocate$MetalPopupMenuSeparatorUI($Class* clazz) {
	return $of($alloc(MetalPopupMenuSeparatorUI));
}

void MetalPopupMenuSeparatorUI::init$() {
	$MetalSeparatorUI::init$();
}

$ComponentUI* MetalPopupMenuSeparatorUI::createUI($JComponent* c) {
	$init(MetalPopupMenuSeparatorUI);
	return $new(MetalPopupMenuSeparatorUI);
}

void MetalPopupMenuSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, s, $nc(c)->getSize());
	$nc(g)->setColor($(c->getForeground()));
	g->drawLine(0, 1, $nc(s)->width, 1);
	g->setColor($(c->getBackground()));
	g->drawLine(0, 2, $nc(s)->width, 2);
	g->drawLine(0, 0, 0, 0);
	g->drawLine(0, 3, 0, 3);
}

$Dimension* MetalPopupMenuSeparatorUI::getPreferredSize($JComponent* c) {
	return $new($Dimension, 0, 4);
}

MetalPopupMenuSeparatorUI::MetalPopupMenuSeparatorUI() {
}

$Class* MetalPopupMenuSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(MetalPopupMenuSeparatorUI, name, initialize, &_MetalPopupMenuSeparatorUI_ClassInfo_, allocate$MetalPopupMenuSeparatorUI);
	return class$;
}

$Class* MetalPopupMenuSeparatorUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax