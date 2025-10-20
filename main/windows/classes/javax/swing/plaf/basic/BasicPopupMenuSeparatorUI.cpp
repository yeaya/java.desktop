#include <javax/swing/plaf/basic/BasicPopupMenuSeparatorUI.h>

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
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicPopupMenuSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicPopupMenuSeparatorUI::*)()>(&BasicPopupMenuSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicPopupMenuSeparatorUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicPopupMenuSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuSeparatorUI",
	"javax.swing.plaf.basic.BasicSeparatorUI",
	nullptr,
	nullptr,
	_BasicPopupMenuSeparatorUI_MethodInfo_
};

$Object* allocate$BasicPopupMenuSeparatorUI($Class* clazz) {
	return $of($alloc(BasicPopupMenuSeparatorUI));
}

void BasicPopupMenuSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

$ComponentUI* BasicPopupMenuSeparatorUI::createUI($JComponent* c) {
	$init(BasicPopupMenuSeparatorUI);
	return $new(BasicPopupMenuSeparatorUI);
}

void BasicPopupMenuSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, s, $nc(c)->getSize());
	$nc(g)->setColor($(c->getForeground()));
	g->drawLine(0, 0, $nc(s)->width, 0);
	g->setColor($(c->getBackground()));
	g->drawLine(0, 1, $nc(s)->width, 1);
}

$Dimension* BasicPopupMenuSeparatorUI::getPreferredSize($JComponent* c) {
	return $new($Dimension, 0, 2);
}

BasicPopupMenuSeparatorUI::BasicPopupMenuSeparatorUI() {
}

$Class* BasicPopupMenuSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuSeparatorUI, name, initialize, &_BasicPopupMenuSeparatorUI_ClassInfo_, allocate$BasicPopupMenuSeparatorUI);
	return class$;
}

$Class* BasicPopupMenuSeparatorUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax