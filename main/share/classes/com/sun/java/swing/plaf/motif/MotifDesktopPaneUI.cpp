#include <com/sun/java/swing/plaf/motif/MotifDesktopPaneUI.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopPaneUI$MotifDesktopManager.h>
#include <java/awt/Insets.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopPaneUI.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

using $MotifDesktopPaneUI$MotifDesktopManager = ::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI$MotifDesktopManager;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopPaneUI = ::javax::swing::plaf::DesktopPaneUI;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifDesktopPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifDesktopPaneUI::*)()>(&MotifDesktopPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifDesktopPaneUI::createUI))},
	{"getInsets", "(Ljavax/swing/JComponent;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"installDesktopManager", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifDesktopPaneUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$MotifDesktopManager", "com.sun.java.swing.plaf.motif.MotifDesktopPaneUI", "MotifDesktopManager", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$DragPane", "com.sun.java.swing.plaf.motif.MotifDesktopPaneUI", "DragPane", $PRIVATE},
	{}
};

$ClassInfo _MotifDesktopPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI",
	"javax.swing.plaf.basic.BasicDesktopPaneUI",
	nullptr,
	nullptr,
	_MotifDesktopPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDesktopPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$MotifDesktopManager,com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$DragPane"
};

$Object* allocate$MotifDesktopPaneUI($Class* clazz) {
	return $of($alloc(MotifDesktopPaneUI));
}

$ComponentUI* MotifDesktopPaneUI::createUI($JComponent* d) {
	$init(MotifDesktopPaneUI);
	return $new(MotifDesktopPaneUI);
}

void MotifDesktopPaneUI::init$() {
	$BasicDesktopPaneUI::init$();
}

void MotifDesktopPaneUI::installDesktopManager() {
	$set(this, desktopManager, $nc(this->desktop)->getDesktopManager());
	if (this->desktopManager == nullptr) {
		$set(this, desktopManager, $new($MotifDesktopPaneUI$MotifDesktopManager, this));
		$nc(this->desktop)->setDesktopManager(this->desktopManager);
		$nc(($cast($MotifDesktopPaneUI$MotifDesktopManager, this->desktopManager)))->adjustIcons(this->desktop);
	}
}

$Insets* MotifDesktopPaneUI::getInsets($JComponent* c) {
	return $new($Insets, 0, 0, 0, 0);
}

MotifDesktopPaneUI::MotifDesktopPaneUI() {
}

$Class* MotifDesktopPaneUI::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopPaneUI, name, initialize, &_MotifDesktopPaneUI_ClassInfo_, allocate$MotifDesktopPaneUI);
	return class$;
}

$Class* MotifDesktopPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com