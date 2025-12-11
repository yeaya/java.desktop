#include <com/sun/java/swing/plaf/motif/MotifOptionPaneUI$1.h>

#include <com/sun/java/swing/plaf/motif/MotifOptionPaneUI.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $MotifOptionPaneUI = ::com::sun::java::swing::plaf::motif::MotifOptionPaneUI;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifOptionPaneUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifOptionPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifOptionPaneUI$1, this$0)},
	{}
};

$MethodInfo _MotifOptionPaneUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifOptionPaneUI;)V", nullptr, 0, $method(static_cast<void(MotifOptionPaneUI$1::*)($MotifOptionPaneUI*)>(&MotifOptionPaneUI$1::init$))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifOptionPaneUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifOptionPaneUI",
	"createSeparator",
	"()Ljava/awt/Container;"
};

$InnerClassInfo _MotifOptionPaneUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifOptionPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifOptionPaneUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifOptionPaneUI$1",
	"javax.swing.JPanel",
	nullptr,
	_MotifOptionPaneUI$1_FieldInfo_,
	_MotifOptionPaneUI$1_MethodInfo_,
	nullptr,
	&_MotifOptionPaneUI$1_EnclosingMethodInfo_,
	_MotifOptionPaneUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifOptionPaneUI"
};

$Object* allocate$MotifOptionPaneUI$1($Class* clazz) {
	return $of($alloc(MotifOptionPaneUI$1));
}

void MotifOptionPaneUI$1::init$($MotifOptionPaneUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
}

$Dimension* MotifOptionPaneUI$1::getPreferredSize() {
	return $new($Dimension, 10, 2);
}

void MotifOptionPaneUI$1::paint($Graphics* g) {
	int32_t width = getWidth();
	$init($Color);
	$nc(g)->setColor($Color::darkGray);
	g->drawLine(0, 0, width, 0);
	g->setColor($Color::white);
	g->drawLine(0, 1, width, 1);
}

MotifOptionPaneUI$1::MotifOptionPaneUI$1() {
}

$Class* MotifOptionPaneUI$1::load$($String* name, bool initialize) {
	$loadClass(MotifOptionPaneUI$1, name, initialize, &_MotifOptionPaneUI$1_ClassInfo_, allocate$MotifOptionPaneUI$1);
	return class$;
}

$Class* MotifOptionPaneUI$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com