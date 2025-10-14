#include <com/sun/java/swing/plaf/motif/MotifTreeUI.h>

#include <com/sun/java/swing/plaf/motif/MotifTreeCellRenderer.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <jcpp.h>

#undef HALF_SIZE
#undef SIZE

using $MotifTreeCellRenderer = ::com::sun::java::swing::plaf::motif::MotifTreeCellRenderer;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifTreeUI_FieldInfo_[] = {
	{"HALF_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(MotifTreeUI, HALF_SIZE)},
	{"SIZE", "I", nullptr, $STATIC | $FINAL, $constField(MotifTreeUI, SIZE)},
	{}
};

$MethodInfo _MotifTreeUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTreeUI::*)()>(&MotifTreeUI::init$))},
	{"createDefaultCellRenderer", "()Ljavax/swing/tree/TreeCellRenderer;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifTreeUI::createUI))},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintHorizontalLine", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;III)V", nullptr, $PROTECTED},
	{"paintVerticalLine", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;III)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifTreeUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifCollapsedIcon", "com.sun.java.swing.plaf.motif.MotifTreeUI", "MotifCollapsedIcon", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon", "com.sun.java.swing.plaf.motif.MotifTreeUI", "MotifExpandedIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifTreeUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTreeUI",
	"javax.swing.plaf.basic.BasicTreeUI",
	nullptr,
	_MotifTreeUI_FieldInfo_,
	_MotifTreeUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifTreeUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifCollapsedIcon,com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon"
};

$Object* allocate$MotifTreeUI($Class* clazz) {
	return $of($alloc(MotifTreeUI));
}

void MotifTreeUI::init$() {
	$BasicTreeUI::init$();
}

void MotifTreeUI::installUI($JComponent* c) {
	$BasicTreeUI::installUI(c);
}

void MotifTreeUI::paintVerticalLine($Graphics* g, $JComponent* c, int32_t x, int32_t top, int32_t bottom) {
	if ($nc($($nc(this->tree)->getComponentOrientation()))->isLeftToRight()) {
		$nc(g)->fillRect(x, top, 2, bottom - top + 2);
	} else {
		$nc(g)->fillRect(x - 1, top, 2, bottom - top + 2);
	}
}

void MotifTreeUI::paintHorizontalLine($Graphics* g, $JComponent* c, int32_t y, int32_t left, int32_t right) {
	$nc(g)->fillRect(left, y, right - left + 1, 2);
}

$ComponentUI* MotifTreeUI::createUI($JComponent* x) {
	$init(MotifTreeUI);
	return $new(MotifTreeUI);
}

$TreeCellRenderer* MotifTreeUI::createDefaultCellRenderer() {
	return $new($MotifTreeCellRenderer);
}

MotifTreeUI::MotifTreeUI() {
}

$Class* MotifTreeUI::load$($String* name, bool initialize) {
	$loadClass(MotifTreeUI, name, initialize, &_MotifTreeUI_ClassInfo_, allocate$MotifTreeUI);
	return class$;
}

$Class* MotifTreeUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com