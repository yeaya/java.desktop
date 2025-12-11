#include <com/apple/laf/AquaRootPaneUI.h>

#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaMenuBarUI.h>
#include <com/apple/laf/AquaRootPaneUI$DefaultButtonPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/AncestorEvent.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>
#include <jcpp.h>

#undef FALSE
#undef FRAME_ACTIVE_PROPERTY
#undef TRUE

using $ComponentArray = $Array<::java::awt::Component>;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaMenuBarUI = ::com::apple::laf::AquaMenuBarUI;
using $AquaRootPaneUI$DefaultButtonPainter = ::com::apple::laf::AquaRootPaneUI$DefaultButtonPainter;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;
using $AncestorListener = ::javax::swing::event::AncestorListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicRootPaneUI = ::javax::swing::plaf::basic::BasicRootPaneUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaRootPaneUI_FieldInfo_[] = {
	{"sRootPaneUI", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaRootPaneUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaRootPaneUI, sRootPaneUI)},
	{"kDefaultButtonPaintDelayBetweenFrames", "I", nullptr, $STATIC | $FINAL, $constField(AquaRootPaneUI, kDefaultButtonPaintDelayBetweenFrames)},
	{"fCurrentDefaultButton", "Ljavax/swing/JButton;", nullptr, 0, $field(AquaRootPaneUI, fCurrentDefaultButton)},
	{"fTimer", "Ljavax/swing/Timer;", nullptr, 0, $field(AquaRootPaneUI, fTimer)},
	{"sUseScreenMenuBar", "Z", nullptr, $STATIC | $FINAL, $staticField(AquaRootPaneUI, sUseScreenMenuBar)},
	{}
};

$MethodInfo _AquaRootPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaRootPaneUI::*)()>(&AquaRootPaneUI::init$))},
	{"ancestorAdded", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorMoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorRemoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaRootPaneUI::createUI))},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"stopTimer", "()V", nullptr, $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $FINAL},
	{"updateComponentTreeUIActivation", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*,Object$*)>(&AquaRootPaneUI::updateComponentTreeUIActivation))},
	{"updateDefaultButton", "(Ljavax/swing/JRootPane;)V", nullptr, $SYNCHRONIZED},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowGainedFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowLostFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowStateChanged", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaRootPaneUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaRootPaneUI$DefaultButtonPainter", "com.apple.laf.AquaRootPaneUI", "DefaultButtonPainter", 0},
	{}
};

$ClassInfo _AquaRootPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaRootPaneUI",
	"javax.swing.plaf.basic.BasicRootPaneUI",
	"javax.swing.event.AncestorListener,java.awt.event.WindowListener,java.awt.event.ContainerListener",
	_AquaRootPaneUI_FieldInfo_,
	_AquaRootPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaRootPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaRootPaneUI$DefaultButtonPainter"
};

$Object* allocate$AquaRootPaneUI($Class* clazz) {
	return $of($alloc(AquaRootPaneUI));
}

int32_t AquaRootPaneUI::hashCode() {
	 return this->$BasicRootPaneUI::hashCode();
}

bool AquaRootPaneUI::equals(Object$* arg0) {
	 return this->$BasicRootPaneUI::equals(arg0);
}

$Object* AquaRootPaneUI::clone() {
	 return this->$BasicRootPaneUI::clone();
}

$String* AquaRootPaneUI::toString() {
	 return this->$BasicRootPaneUI::toString();
}

void AquaRootPaneUI::finalize() {
	this->$BasicRootPaneUI::finalize();
}

$AquaUtils$RecyclableSingleton* AquaRootPaneUI::sRootPaneUI = nullptr;
bool AquaRootPaneUI::sUseScreenMenuBar = false;

void AquaRootPaneUI::init$() {
	$BasicRootPaneUI::init$();
	$set(this, fCurrentDefaultButton, nullptr);
	$set(this, fTimer, nullptr);
}

$ComponentUI* AquaRootPaneUI::createUI($JComponent* c) {
	$init(AquaRootPaneUI);
	return $cast($ComponentUI, $nc(AquaRootPaneUI::sRootPaneUI)->get());
}

void AquaRootPaneUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$BasicRootPaneUI::installUI(c);
	$nc(c)->addAncestorListener(this);
	bool var$0 = c->isShowing();
	if (var$0 && c->isEnabled()) {
		updateDefaultButton($cast($JRootPane, c));
	}
	$var($Component, parent, c->getParent());
	if (parent != nullptr && $instanceOf($JFrame, parent)) {
		$var($JFrame, frameParent, $cast($JFrame, parent));
		$var($Color, bg, frameParent->getBackground());
		if (bg == nullptr || $instanceOf($UIResource, bg)) {
			frameParent->setBackground($($UIManager::getColor("Panel.background"_s)));
		}
	}
	if (AquaRootPaneUI::sUseScreenMenuBar) {
		$var($JRootPane, root, $cast($JRootPane, c));
		root->addContainerListener(this);
		$nc($(root->getLayeredPane()))->addContainerListener(this);
	}
}

void AquaRootPaneUI::uninstallUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	stopTimer();
	$nc(c)->removeAncestorListener(this);
	if (AquaRootPaneUI::sUseScreenMenuBar) {
		$var($JRootPane, root, $cast($JRootPane, c));
		root->removeContainerListener(this);
		$nc($(root->getLayeredPane()))->removeContainerListener(this);
	}
	$BasicRootPaneUI::uninstallUI(c);
}

void AquaRootPaneUI::componentAdded($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JRootPane, $($nc(e)->getContainer()))) {
		$var($JRootPane, root, $cast($JRootPane, e->getContainer()));
		if ($equals(e->getChild(), $nc(root)->getLayeredPane())) {
			$var($JLayeredPane, layered, root->getLayeredPane());
			$nc(layered)->addContainerListener(this);
		}
	} else if ($instanceOf($JMenuBar, $(e->getChild()))) {
		$var($JMenuBar, jmb, $cast($JMenuBar, e->getChild()));
		$var($MenuBarUI, mbui, $cast($MenuBarUI, $nc(jmb)->getUI()));
		if ($instanceOf($AquaMenuBarUI, mbui)) {
			$var($Window, owningWindow, $SwingUtilities::getWindowAncestor(jmb));
			if (owningWindow != nullptr && $instanceOf($JFrame, owningWindow)) {
				$nc(($cast($AquaMenuBarUI, mbui)))->setScreenMenuBar($cast($JFrame, owningWindow));
			}
		}
	}
}

void AquaRootPaneUI::componentRemoved($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JRootPane, $($nc(e)->getContainer()))) {
		$var($JRootPane, root, $cast($JRootPane, e->getContainer()));
		if ($equals(e->getChild(), $nc(root)->getLayeredPane())) {
			$var($JLayeredPane, layered, root->getLayeredPane());
			$nc(layered)->removeContainerListener(this);
		}
	} else if ($instanceOf($JMenuBar, $(e->getChild()))) {
		$var($JMenuBar, jmb, $cast($JMenuBar, e->getChild()));
		$var($MenuBarUI, mbui, $cast($MenuBarUI, $nc(jmb)->getUI()));
		if ($instanceOf($AquaMenuBarUI, mbui)) {
			$var($Window, owningWindow, $SwingUtilities::getWindowAncestor(jmb));
			if (owningWindow != nullptr && $instanceOf($JFrame, owningWindow)) {
				$nc(($cast($AquaMenuBarUI, mbui)))->clearScreenMenuBar($cast($JFrame, owningWindow));
			}
		}
	}
}

void AquaRootPaneUI::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$BasicRootPaneUI::propertyChange(e);
	$var($String, prop, $nc(e)->getPropertyName());
	bool var$0 = "defaultButton"_s->equals(prop);
	if (var$0 || "temporaryDefaultButton"_s->equals(prop)) {
		$var($JRootPane, root, $cast($JRootPane, e->getSource()));
		bool var$1 = $nc(root)->isShowing();
		if (var$1 && root->isEnabled()) {
			updateDefaultButton(root);
		}
	} else {
		bool var$3 = "enabled"_s->equals(prop);
		$init($AquaFocusHandler);
		if (var$3 || $nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals(prop)) {
			$var($JRootPane, root, $cast($JRootPane, e->getSource()));
			if ($nc(root)->isShowing()) {
				if ($nc(($cast($Boolean, $(e->getNewValue()))))->booleanValue()) {
					updateDefaultButton($cast($JRootPane, $(e->getSource())));
				} else {
					stopTimer();
				}
			}
		}
	}
}

void AquaRootPaneUI::stopTimer() {
	$synchronized(this) {
		if (this->fTimer != nullptr) {
			$nc(this->fTimer)->stop();
			$set(this, fTimer, nullptr);
		}
	}
}

void AquaRootPaneUI::updateDefaultButton($JRootPane* root) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($JButton, button, $nc(root)->getDefaultButton());
		$set(this, fCurrentDefaultButton, button);
		stopTimer();
		if (button != nullptr) {
			$set(this, fTimer, $new($Timer, AquaRootPaneUI::kDefaultButtonPaintDelayBetweenFrames, $$new($AquaRootPaneUI$DefaultButtonPainter, this, root)));
			$nc(this->fTimer)->start();
		}
	}
}

void AquaRootPaneUI::ancestorAdded($AncestorEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Container, ancestor, $nc(event)->getComponent());
	$var($Window, owningWindow, $SwingUtilities::getWindowAncestor(ancestor));
	if (owningWindow != nullptr) {
		owningWindow->removeWindowListener(this);
		owningWindow->addWindowListener(this);
	}
	$var($JComponent, comp, event->getComponent());
	if ($instanceOf($JRootPane, comp)) {
		$var($JRootPane, rp, $cast($JRootPane, comp));
		bool var$0 = $nc(rp)->isEnabled();
		if (var$0 && rp->getDefaultButton() != nullptr) {
			updateDefaultButton($cast($JRootPane, comp));
		}
	}
}

void AquaRootPaneUI::ancestorRemoved($AncestorEvent* event) {
}

void AquaRootPaneUI::ancestorMoved($AncestorEvent* event) {
}

void AquaRootPaneUI::windowActivated($WindowEvent* e) {
	$init($Boolean);
	updateComponentTreeUIActivation($cast($Component, $($nc(e)->getSource())), $Boolean::TRUE);
}

void AquaRootPaneUI::windowDeactivated($WindowEvent* e) {
	$init($Boolean);
	updateComponentTreeUIActivation($cast($Component, $($nc(e)->getSource())), $Boolean::FALSE);
}

void AquaRootPaneUI::windowOpened($WindowEvent* e) {
}

void AquaRootPaneUI::windowClosing($WindowEvent* e) {
}

void AquaRootPaneUI::windowClosed($WindowEvent* e) {
	$var($Window, w, $nc(e)->getWindow());
	$nc(w)->removeWindowListener(this);
}

void AquaRootPaneUI::windowIconified($WindowEvent* e) {
}

void AquaRootPaneUI::windowDeiconified($WindowEvent* e) {
}

void AquaRootPaneUI::windowStateChanged($WindowEvent* e) {
}

void AquaRootPaneUI::windowGainedFocus($WindowEvent* e) {
}

void AquaRootPaneUI::windowLostFocus($WindowEvent* e) {
}

void AquaRootPaneUI::updateComponentTreeUIActivation($Component* c, Object$* active$renamed) {
	$init(AquaRootPaneUI);
	$useLocalCurrentObjectStackCache();
	$var($Object, active, active$renamed);
	if ($instanceOf($JInternalFrame, c)) {
		$init($Boolean);
		$assign(active, $nc(($cast($JInternalFrame, c)))->isSelected() ? $Boolean::TRUE : $Boolean::FALSE);
	}
	if ($instanceOf($JComponent, c)) {
		$init($AquaFocusHandler);
		$nc(($cast($JComponent, c)))->putClientProperty($AquaFocusHandler::FRAME_ACTIVE_PROPERTY, active);
	}
	$var($ComponentArray, children, nullptr);
	if ($instanceOf($JMenu, c)) {
		$assign(children, $nc(($cast($JMenu, c)))->getMenuComponents());
	} else if ($instanceOf($Container, c)) {
		$assign(children, $nc(($cast($Container, c)))->getComponents());
	}
	if (children == nullptr) {
		return;
	}
	{
		$var($ComponentArray, arr$, children);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, element, arr$->get(i$));
			{
				updateComponentTreeUIActivation(element, active);
			}
		}
	}
}

void AquaRootPaneUI::update($Graphics* g, $JComponent* c) {
	if ($nc(c)->isOpaque()) {
		$AquaUtils::fillRect(g, c);
	}
	paint(g, c);
}

void clinit$AquaRootPaneUI($Class* class$) {
	$assignStatic(AquaRootPaneUI::sRootPaneUI, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaRootPaneUI::class$));
	AquaRootPaneUI::sUseScreenMenuBar = $AquaMenuBarUI::getScreenMenuBarProperty();
}

AquaRootPaneUI::AquaRootPaneUI() {
}

$Class* AquaRootPaneUI::load$($String* name, bool initialize) {
	$loadClass(AquaRootPaneUI, name, initialize, &_AquaRootPaneUI_ClassInfo_, clinit$AquaRootPaneUI, allocate$AquaRootPaneUI);
	return class$;
}

$Class* AquaRootPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com