#include <com/sun/java/swing/plaf/motif/MotifPopupMenuSeparatorUI.h>

#include <com/sun/java/swing/plaf/motif/MotifSeparatorUI.h>
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

using $MotifSeparatorUI = ::com::sun::java::swing::plaf::motif::MotifSeparatorUI;
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifPopupMenuSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifPopupMenuSeparatorUI::*)()>(&MotifPopupMenuSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifPopupMenuSeparatorUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MotifPopupMenuSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifPopupMenuSeparatorUI",
	"com.sun.java.swing.plaf.motif.MotifSeparatorUI",
	nullptr,
	nullptr,
	_MotifPopupMenuSeparatorUI_MethodInfo_
};

$Object* allocate$MotifPopupMenuSeparatorUI($Class* clazz) {
	return $of($alloc(MotifPopupMenuSeparatorUI));
}

void MotifPopupMenuSeparatorUI::init$() {
	$MotifSeparatorUI::init$();
}

$ComponentUI* MotifPopupMenuSeparatorUI::createUI($JComponent* c) {
	$init(MotifPopupMenuSeparatorUI);
	return $new(MotifPopupMenuSeparatorUI);
}

void MotifPopupMenuSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, s, $nc(c)->getSize());
	$nc(g)->setColor($(c->getForeground()));
	g->drawLine(0, 0, $nc(s)->width, 0);
	g->setColor($(c->getBackground()));
	g->drawLine(0, 1, $nc(s)->width, 1);
}

$Dimension* MotifPopupMenuSeparatorUI::getPreferredSize($JComponent* c) {
	return $new($Dimension, 0, 2);
}

MotifPopupMenuSeparatorUI::MotifPopupMenuSeparatorUI() {
}

$Class* MotifPopupMenuSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(MotifPopupMenuSeparatorUI, name, initialize, &_MotifPopupMenuSeparatorUI_ClassInfo_, allocate$MotifPopupMenuSeparatorUI);
	return class$;
}

$Class* MotifPopupMenuSeparatorUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com