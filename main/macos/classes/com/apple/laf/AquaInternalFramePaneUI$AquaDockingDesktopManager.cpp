#include <com/apple/laf/AquaInternalFramePaneUI$AquaDockingDesktopManager.h>

#include <com/apple/laf/AquaInternalFrameDockIconUI.h>
#include <com/apple/laf/AquaInternalFrameManager.h>
#include <com/apple/laf/AquaInternalFramePaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <javax/swing/plaf/DesktopPaneUI.h>
#include <jcpp.h>

using $AquaInternalFrameDockIconUI = ::com::apple::laf::AquaInternalFrameDockIconUI;
using $AquaInternalFrameManager = ::com::apple::laf::AquaInternalFrameManager;
using $AquaInternalFramePaneUI = ::com::apple::laf::AquaInternalFramePaneUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;
using $DesktopPaneUI = ::javax::swing::plaf::DesktopPaneUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFramePaneUI$AquaDockingDesktopManager_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFramePaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFramePaneUI$AquaDockingDesktopManager, this$0)},
	{}
};

$MethodInfo _AquaInternalFramePaneUI$AquaDockingDesktopManager_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFramePaneUI;)V", nullptr, 0, $method(static_cast<void(AquaInternalFramePaneUI$AquaDockingDesktopManager::*)($AquaInternalFramePaneUI*)>(&AquaInternalFramePaneUI$AquaDockingDesktopManager::init$))},
	{"addIcon", "(Ljava/awt/Container;Ljavax/swing/JInternalFrame$JDesktopIcon;)V", nullptr, 0},
	{"deiconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"iconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"openFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaInternalFramePaneUI$AquaDockingDesktopManager_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFramePaneUI$AquaDockingDesktopManager", "com.apple.laf.AquaInternalFramePaneUI", "AquaDockingDesktopManager", 0},
	{}
};

$ClassInfo _AquaInternalFramePaneUI$AquaDockingDesktopManager_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFramePaneUI$AquaDockingDesktopManager",
	"com.apple.laf.AquaInternalFrameManager",
	nullptr,
	_AquaInternalFramePaneUI$AquaDockingDesktopManager_FieldInfo_,
	_AquaInternalFramePaneUI$AquaDockingDesktopManager_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFramePaneUI$AquaDockingDesktopManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFramePaneUI"
};

$Object* allocate$AquaInternalFramePaneUI$AquaDockingDesktopManager($Class* clazz) {
	return $of($alloc(AquaInternalFramePaneUI$AquaDockingDesktopManager));
}

void AquaInternalFramePaneUI$AquaDockingDesktopManager::init$($AquaInternalFramePaneUI* this$0) {
	$set(this, this$0, this$0);
	$AquaInternalFrameManager::init$();
}

void AquaInternalFramePaneUI$AquaDockingDesktopManager::openFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, desktopIcon, $nc(f)->getDesktopIcon());
	$var($Container, dock, $nc(desktopIcon)->getParent());
	if (dock == nullptr) {
		return;
	}
	if ($nc(dock)->getParent() != nullptr) {
		$nc($(dock->getParent()))->add(static_cast<$Component*>(f));
	}
	removeIconFor(f);
}

void AquaInternalFramePaneUI$AquaDockingDesktopManager::deiconifyFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, desktopIcon, $nc(f)->getDesktopIcon());
	$var($Container, dock, $nc(desktopIcon)->getParent());
	if (dock == nullptr) {
		return;
	}
	if ($nc(dock)->getParent() != nullptr) {
		$nc($(dock->getParent()))->add(static_cast<$Component*>(f));
	}
	removeIconFor(f);
	f->moveToFront();
	try {
		f->setSelected(true);
	} catch ($PropertyVetoException& pve) {
	}
}

void AquaInternalFramePaneUI$AquaDockingDesktopManager::iconifyFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, desktopIcon, $nc(f)->getDesktopIcon());
	$nc(($cast($AquaInternalFrameDockIconUI, $($cast($DesktopIconUI, $nc(desktopIcon)->getUI())))))->updateIcon();
	$AquaInternalFrameManager::iconifyFrame(f);
}

void AquaInternalFramePaneUI$AquaDockingDesktopManager::addIcon($Container* c, $JInternalFrame$JDesktopIcon* desktopIcon) {
	$useLocalCurrentObjectStackCache();
	$var($DesktopPaneUI, ui, $cast($DesktopPaneUI, $nc(($cast($JDesktopPane, c)))->getUI()));
	$nc($($nc(($cast($AquaInternalFramePaneUI, ui)))->getDock()))->add(static_cast<$Component*>(desktopIcon));
}

AquaInternalFramePaneUI$AquaDockingDesktopManager::AquaInternalFramePaneUI$AquaDockingDesktopManager() {
}

$Class* AquaInternalFramePaneUI$AquaDockingDesktopManager::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFramePaneUI$AquaDockingDesktopManager, name, initialize, &_AquaInternalFramePaneUI$AquaDockingDesktopManager_ClassInfo_, allocate$AquaInternalFramePaneUI$AquaDockingDesktopManager);
	return class$;
}

$Class* AquaInternalFramePaneUI$AquaDockingDesktopManager::class$ = nullptr;

		} // laf
	} // apple
} // com