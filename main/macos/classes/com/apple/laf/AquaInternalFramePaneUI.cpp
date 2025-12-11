#include <com/apple/laf/AquaInternalFramePaneUI.h>

#include <com/apple/laf/AquaInternalFrameManager.h>
#include <com/apple/laf/AquaInternalFramePaneUI$AquaDockingDesktopManager.h>
#include <com/apple/laf/AquaInternalFramePaneUI$Dock.h>
#include <com/apple/laf/AquaInternalFramePaneUI$DockLayoutManager.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopPaneUI.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

using $AquaInternalFrameManager = ::com::apple::laf::AquaInternalFrameManager;
using $AquaInternalFramePaneUI$AquaDockingDesktopManager = ::com::apple::laf::AquaInternalFramePaneUI$AquaDockingDesktopManager;
using $AquaInternalFramePaneUI$Dock = ::com::apple::laf::AquaInternalFramePaneUI$Dock;
using $AquaInternalFramePaneUI$DockLayoutManager = ::com::apple::laf::AquaInternalFramePaneUI$DockLayoutManager;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopPaneUI = ::javax::swing::plaf::DesktopPaneUI;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFramePaneUI_FieldInfo_[] = {
	{"fDock", "Ljavax/swing/JComponent;", nullptr, 0, $field(AquaInternalFramePaneUI, fDock)},
	{"fLayoutMgr", "Lcom/apple/laf/AquaInternalFramePaneUI$DockLayoutManager;", nullptr, 0, $field(AquaInternalFramePaneUI, fLayoutMgr)},
	{}
};

$MethodInfo _AquaInternalFramePaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaInternalFramePaneUI::*)()>(&AquaInternalFramePaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaInternalFramePaneUI::createUI))},
	{"getDock", "()Ljavax/swing/JComponent;", nullptr, 0},
	{"installDesktopManager", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDesktopManager", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaInternalFramePaneUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFramePaneUI$AquaDockingDesktopManager", "com.apple.laf.AquaInternalFramePaneUI", "AquaDockingDesktopManager", 0},
	{"com.apple.laf.AquaInternalFramePaneUI$Dock", "com.apple.laf.AquaInternalFramePaneUI", "Dock", 0},
	{"com.apple.laf.AquaInternalFramePaneUI$DockLayoutManager", "com.apple.laf.AquaInternalFramePaneUI", "DockLayoutManager", 0},
	{}
};

$ClassInfo _AquaInternalFramePaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaInternalFramePaneUI",
	"javax.swing.plaf.basic.BasicDesktopPaneUI",
	"java.awt.event.MouseListener",
	_AquaInternalFramePaneUI_FieldInfo_,
	_AquaInternalFramePaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFramePaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFramePaneUI$AquaDockingDesktopManager,com.apple.laf.AquaInternalFramePaneUI$Dock,com.apple.laf.AquaInternalFramePaneUI$DockLayoutManager"
};

$Object* allocate$AquaInternalFramePaneUI($Class* clazz) {
	return $of($alloc(AquaInternalFramePaneUI));
}

int32_t AquaInternalFramePaneUI::hashCode() {
	 return this->$BasicDesktopPaneUI::hashCode();
}

bool AquaInternalFramePaneUI::equals(Object$* arg0) {
	 return this->$BasicDesktopPaneUI::equals(arg0);
}

$Object* AquaInternalFramePaneUI::clone() {
	 return this->$BasicDesktopPaneUI::clone();
}

$String* AquaInternalFramePaneUI::toString() {
	 return this->$BasicDesktopPaneUI::toString();
}

void AquaInternalFramePaneUI::finalize() {
	this->$BasicDesktopPaneUI::finalize();
}

void AquaInternalFramePaneUI::init$() {
	$BasicDesktopPaneUI::init$();
}

$ComponentUI* AquaInternalFramePaneUI::createUI($JComponent* c) {
	$init(AquaInternalFramePaneUI);
	return $new(AquaInternalFramePaneUI);
}

void AquaInternalFramePaneUI::update($Graphics* g, $JComponent* c) {
	if ($nc(c)->isOpaque()) {
		$BasicDesktopPaneUI::update(g, c);
		return;
	}
	paint(g, c);
}

void AquaInternalFramePaneUI::installUI($JComponent* c) {
	$BasicDesktopPaneUI::installUI(c);
	$set(this, fLayoutMgr, $new($AquaInternalFramePaneUI$DockLayoutManager, this));
	$nc(c)->setLayout(this->fLayoutMgr);
	c->addMouseListener(this);
}

void AquaInternalFramePaneUI::uninstallUI($JComponent* c) {
	$nc(c)->removeMouseListener(this);
	if (this->fDock != nullptr) {
		c->remove(static_cast<$Component*>(this->fDock));
		$set(this, fDock, nullptr);
	}
	if (this->fLayoutMgr != nullptr) {
		c->setLayout(nullptr);
		$set(this, fLayoutMgr, nullptr);
	}
	$BasicDesktopPaneUI::uninstallUI(c);
}

void AquaInternalFramePaneUI::installDesktopManager() {
	if ($nc(this->desktop)->getDesktopManager() == nullptr) {
		$set(this, desktopManager, $new($AquaInternalFramePaneUI$AquaDockingDesktopManager, this));
		$nc(this->desktop)->setDesktopManager(this->desktopManager);
	}
}

void AquaInternalFramePaneUI::uninstallDesktopManager() {
	$var($DesktopManager, manager, $nc(this->desktop)->getDesktopManager());
	if ($instanceOf($AquaInternalFramePaneUI$AquaDockingDesktopManager, manager)) {
		$nc(this->desktop)->setDesktopManager(nullptr);
	}
}

$JComponent* AquaInternalFramePaneUI::getDock() {
	if (this->fDock == nullptr) {
		$set(this, fDock, $new($AquaInternalFramePaneUI$Dock, this, this->desktop));
		$nc(this->desktop)->add(static_cast<$Component*>(this->fDock), $($of($Integer::valueOf(399))));
	}
	return this->fDock;
}

void AquaInternalFramePaneUI::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame, selectedFrame, $nc(this->desktop)->getSelectedFrame());
	if (selectedFrame != nullptr) {
		try {
			selectedFrame->setSelected(false);
		} catch ($PropertyVetoException& ex) {
		}
		$nc($($nc(this->desktop)->getDesktopManager()))->deactivateFrame(selectedFrame);
	}
}

void AquaInternalFramePaneUI::mouseReleased($MouseEvent* e) {
}

void AquaInternalFramePaneUI::mouseClicked($MouseEvent* e) {
}

void AquaInternalFramePaneUI::mouseEntered($MouseEvent* e) {
}

void AquaInternalFramePaneUI::mouseExited($MouseEvent* e) {
}

AquaInternalFramePaneUI::AquaInternalFramePaneUI() {
}

$Class* AquaInternalFramePaneUI::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFramePaneUI, name, initialize, &_AquaInternalFramePaneUI_ClassInfo_, allocate$AquaInternalFramePaneUI);
	return class$;
}

$Class* AquaInternalFramePaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com