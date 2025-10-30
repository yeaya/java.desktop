#include <com/sun/java/swing/plaf/motif/MotifDesktopPaneUI$DragPane.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopPaneUI.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $MotifDesktopPaneUI = ::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifDesktopPaneUI$DragPane_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopPaneUI$DragPane, this$0)},
	{}
};

$MethodInfo _MotifDesktopPaneUI$DragPane_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopPaneUI;)V", nullptr, $PRIVATE, $method(static_cast<void(MotifDesktopPaneUI$DragPane::*)($MotifDesktopPaneUI*)>(&MotifDesktopPaneUI$DragPane::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifDesktopPaneUI$DragPane_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$DragPane", "com.sun.java.swing.plaf.motif.MotifDesktopPaneUI", "DragPane", $PRIVATE},
	{}
};

$ClassInfo _MotifDesktopPaneUI$DragPane_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$DragPane",
	"javax.swing.JComponent",
	nullptr,
	_MotifDesktopPaneUI$DragPane_FieldInfo_,
	_MotifDesktopPaneUI$DragPane_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDesktopPaneUI$DragPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI"
};

$Object* allocate$MotifDesktopPaneUI$DragPane($Class* clazz) {
	return $of($alloc(MotifDesktopPaneUI$DragPane));
}

void MotifDesktopPaneUI$DragPane::init$($MotifDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$JComponent::init$();
}

void MotifDesktopPaneUI$DragPane::paint($Graphics* g) {
	$init($Color);
	$nc(g)->setColor($Color::darkGray);
	int32_t var$0 = getWidth() - 1;
	g->drawRect(0, 0, var$0, getHeight() - 1);
}

MotifDesktopPaneUI$DragPane::MotifDesktopPaneUI$DragPane() {
}

$Class* MotifDesktopPaneUI$DragPane::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopPaneUI$DragPane, name, initialize, &_MotifDesktopPaneUI$DragPane_ClassInfo_, allocate$MotifDesktopPaneUI$DragPane);
	return class$;
}

$Class* MotifDesktopPaneUI$DragPane::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com