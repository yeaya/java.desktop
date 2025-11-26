#include <com/sun/java/swing/plaf/motif/MotifOptionPaneUI.h>

#include <com/sun/java/swing/plaf/motif/MotifOptionPaneUI$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/OptionPaneUI.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonAreaLayout.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef CENTER

using $MotifOptionPaneUI$1 = ::com::sun::java::swing::plaf::motif::MotifOptionPaneUI$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $OptionPaneUI = ::javax::swing::plaf::OptionPaneUI;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;
using $BasicOptionPaneUI$ButtonAreaLayout = ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonAreaLayout;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifOptionPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifOptionPaneUI::*)()>(&MotifOptionPaneUI::init$))},
	{"addIcon", "(Ljava/awt/Container;)V", nullptr, $PROTECTED},
	{"createButtonArea", "()Ljava/awt/Container;", nullptr, $PROTECTED},
	{"createSeparator", "()Ljava/awt/Container;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifOptionPaneUI::createUI))},
	{"getMinimumOptionPaneSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifOptionPaneUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifOptionPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifOptionPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifOptionPaneUI",
	"javax.swing.plaf.basic.BasicOptionPaneUI",
	nullptr,
	nullptr,
	_MotifOptionPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifOptionPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifOptionPaneUI$1"
};

$Object* allocate$MotifOptionPaneUI($Class* clazz) {
	return $of($alloc(MotifOptionPaneUI));
}

void MotifOptionPaneUI::init$() {
	$BasicOptionPaneUI::init$();
}

$ComponentUI* MotifOptionPaneUI::createUI($JComponent* x) {
	$init(MotifOptionPaneUI);
	return $new(MotifOptionPaneUI);
}

$Container* MotifOptionPaneUI::createButtonArea() {
	$useLocalCurrentObjectStackCache();
	$var($Container, b, $BasicOptionPaneUI::createButtonArea());
	if (b != nullptr && $instanceOf($BasicOptionPaneUI$ButtonAreaLayout, $(b->getLayout()))) {
		$nc(($cast($BasicOptionPaneUI$ButtonAreaLayout, $(b->getLayout()))))->setCentersChildren(false);
	}
	return b;
}

$Dimension* MotifOptionPaneUI::getMinimumOptionPaneSize() {
	return nullptr;
}

$Container* MotifOptionPaneUI::createSeparator() {
	return $new($MotifOptionPaneUI$1, this);
}

void MotifOptionPaneUI::addIcon($Container* top) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, sideIcon, getIcon());
	if (sideIcon != nullptr) {
		$var($JLabel, iconLabel, $new($JLabel, sideIcon));
		iconLabel->setVerticalAlignment($SwingConstants::CENTER);
		$nc(top)->add(static_cast<$Component*>(iconLabel), $of("West"_s));
	}
}

MotifOptionPaneUI::MotifOptionPaneUI() {
}

$Class* MotifOptionPaneUI::load$($String* name, bool initialize) {
	$loadClass(MotifOptionPaneUI, name, initialize, &_MotifOptionPaneUI_ClassInfo_, allocate$MotifOptionPaneUI);
	return class$;
}

$Class* MotifOptionPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com