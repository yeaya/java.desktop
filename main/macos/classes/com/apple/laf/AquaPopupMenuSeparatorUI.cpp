#include <com/apple/laf/AquaPopupMenuSeparatorUI.h>

#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

#undef VERTICAL

using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaPopupMenuSeparatorUI_FieldInfo_[] = {
	{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor;", "Lcom/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor<Lcom/apple/laf/AquaPopupMenuSeparatorUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaPopupMenuSeparatorUI, instance)},
	{}
};

$MethodInfo _AquaPopupMenuSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaPopupMenuSeparatorUI::*)()>(&AquaPopupMenuSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaPopupMenuSeparatorUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AquaPopupMenuSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaPopupMenuSeparatorUI",
	"javax.swing.plaf.basic.BasicSeparatorUI",
	nullptr,
	_AquaPopupMenuSeparatorUI_FieldInfo_,
	_AquaPopupMenuSeparatorUI_MethodInfo_
};

$Object* allocate$AquaPopupMenuSeparatorUI($Class* clazz) {
	return $of($alloc(AquaPopupMenuSeparatorUI));
}

$AquaUtils$RecyclableSingletonFromDefaultConstructor* AquaPopupMenuSeparatorUI::instance = nullptr;

void AquaPopupMenuSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

$ComponentUI* AquaPopupMenuSeparatorUI::createUI($JComponent* c) {
	$init(AquaPopupMenuSeparatorUI);
	return $cast($ComponentUI, $nc(AquaPopupMenuSeparatorUI::instance)->get());
}

void AquaPopupMenuSeparatorUI::update($Graphics* g, $JComponent* c) {
	paint(g, c);
}

void AquaPopupMenuSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, s, $nc(c)->getSize());
	if ($nc(($cast($JSeparator, c)))->getOrientation() == $SwingConstants::VERTICAL) {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(5, 1, 5, $nc(s)->height - 2);
		g->setColor($(c->getBackground()));
		g->drawLine(6, 1, 6, $nc(s)->height - 2);
	} else {
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(1, 5, $nc(s)->width - 2, 5);
		g->setColor($(c->getBackground()));
		g->drawLine(1, 6, $nc(s)->width - 2, 6);
	}
}

$Dimension* AquaPopupMenuSeparatorUI::getPreferredSize($JComponent* c) {
	if ($nc(($cast($JSeparator, c)))->getOrientation() == $SwingConstants::VERTICAL) {
		return $new($Dimension, 12, 0);
	}
	return $new($Dimension, 0, 12);
}

void clinit$AquaPopupMenuSeparatorUI($Class* class$) {
	$assignStatic(AquaPopupMenuSeparatorUI::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaPopupMenuSeparatorUI::class$));
}

AquaPopupMenuSeparatorUI::AquaPopupMenuSeparatorUI() {
}

$Class* AquaPopupMenuSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(AquaPopupMenuSeparatorUI, name, initialize, &_AquaPopupMenuSeparatorUI_ClassInfo_, clinit$AquaPopupMenuSeparatorUI, allocate$AquaPopupMenuSeparatorUI);
	return class$;
}

$Class* AquaPopupMenuSeparatorUI::class$ = nullptr;

		} // laf
	} // apple
} // com