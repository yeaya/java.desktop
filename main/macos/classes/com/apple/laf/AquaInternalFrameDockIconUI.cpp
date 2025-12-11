#include <com/apple/laf/AquaInternalFrameDockIconUI.h>

#include <com/apple/laf/AquaInternalFrameDockIconUI$DockLabel.h>
#include <com/apple/laf/AquaInternalFrameDockIconUI$ScaledImageLabel.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CENTER

using $AquaInternalFrameDockIconUI$DockLabel = ::com::apple::laf::AquaInternalFrameDockIconUI$DockLabel;
using $AquaInternalFrameDockIconUI$ScaledImageLabel = ::com::apple::laf::AquaInternalFrameDockIconUI$ScaledImageLabel;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLabel = ::javax::swing::JLabel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameDockIconUI_FieldInfo_[] = {
	{"fDesktopIcon", "Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, $PRIVATE, $field(AquaInternalFrameDockIconUI, fDesktopIcon)},
	{"fFrame", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE, $field(AquaInternalFrameDockIconUI, fFrame)},
	{"fIconPane", "Lcom/apple/laf/AquaInternalFrameDockIconUI$ScaledImageLabel;", nullptr, $PRIVATE, $field(AquaInternalFrameDockIconUI, fIconPane)},
	{"fDockLabel", "Lcom/apple/laf/AquaInternalFrameDockIconUI$DockLabel;", nullptr, $PRIVATE, $field(AquaInternalFrameDockIconUI, fDockLabel)},
	{"fTrackingIcon", "Z", nullptr, $PRIVATE, $field(AquaInternalFrameDockIconUI, fTrackingIcon)},
	{}
};

$MethodInfo _AquaInternalFrameDockIconUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaInternalFrameDockIconUI::*)()>(&AquaInternalFrameDockIconUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaInternalFrameDockIconUI::createUI))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installComponents", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaInternalFrameDockIconUI::*)()>(&AquaInternalFrameDockIconUI::installComponents))},
	{"installListeners", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaInternalFrameDockIconUI::*)()>(&AquaInternalFrameDockIconUI::installListeners))},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaInternalFrameDockIconUI::*)()>(&AquaInternalFrameDockIconUI::uninstallComponents))},
	{"uninstallListeners", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaInternalFrameDockIconUI::*)()>(&AquaInternalFrameDockIconUI::uninstallListeners))},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateIcon", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameDockIconUI::*)()>(&AquaInternalFrameDockIconUI::updateIcon))},
	{}
};

$InnerClassInfo _AquaInternalFrameDockIconUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameDockIconUI$DockLabel", "com.apple.laf.AquaInternalFrameDockIconUI", "DockLabel", $PRIVATE | $STATIC | $FINAL},
	{"com.apple.laf.AquaInternalFrameDockIconUI$ScaledImageLabel", "com.apple.laf.AquaInternalFrameDockIconUI", "ScaledImageLabel", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _AquaInternalFrameDockIconUI_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.apple.laf.AquaInternalFrameDockIconUI",
	"javax.swing.plaf.DesktopIconUI",
	"java.awt.event.MouseListener,java.awt.event.MouseMotionListener",
	_AquaInternalFrameDockIconUI_FieldInfo_,
	_AquaInternalFrameDockIconUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameDockIconUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameDockIconUI$DockLabel,com.apple.laf.AquaInternalFrameDockIconUI$ScaledImageLabel"
};

$Object* allocate$AquaInternalFrameDockIconUI($Class* clazz) {
	return $of($alloc(AquaInternalFrameDockIconUI));
}

int32_t AquaInternalFrameDockIconUI::hashCode() {
	 return this->$DesktopIconUI::hashCode();
}

bool AquaInternalFrameDockIconUI::equals(Object$* arg0) {
	 return this->$DesktopIconUI::equals(arg0);
}

$Object* AquaInternalFrameDockIconUI::clone() {
	 return this->$DesktopIconUI::clone();
}

$String* AquaInternalFrameDockIconUI::toString() {
	 return this->$DesktopIconUI::toString();
}

void AquaInternalFrameDockIconUI::finalize() {
	this->$DesktopIconUI::finalize();
}

void AquaInternalFrameDockIconUI::init$() {
	$DesktopIconUI::init$();
}

$ComponentUI* AquaInternalFrameDockIconUI::createUI($JComponent* c) {
	$init(AquaInternalFrameDockIconUI);
	return $new(AquaInternalFrameDockIconUI);
}

void AquaInternalFrameDockIconUI::installUI($JComponent* c) {
	$set(this, fDesktopIcon, $cast($JInternalFrame$JDesktopIcon, c));
	installComponents();
	installListeners();
}

void AquaInternalFrameDockIconUI::uninstallUI($JComponent* c) {
	uninstallComponents();
	uninstallListeners();
	$set(this, fDesktopIcon, nullptr);
	$set(this, fFrame, nullptr);
}

void AquaInternalFrameDockIconUI::installComponents() {
	$set(this, fFrame, $nc(this->fDesktopIcon)->getInternalFrame());
	$set(this, fIconPane, $new($AquaInternalFrameDockIconUI$ScaledImageLabel, this));
	$nc(this->fDesktopIcon)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc(this->fDesktopIcon)->add(static_cast<$Component*>(this->fIconPane), $of($BorderLayout::CENTER));
}

void AquaInternalFrameDockIconUI::uninstallComponents() {
	$nc(this->fDesktopIcon)->setLayout(nullptr);
	$nc(this->fDesktopIcon)->remove(static_cast<$Component*>(this->fIconPane));
}

void AquaInternalFrameDockIconUI::installListeners() {
	$nc(this->fDesktopIcon)->addMouseListener(this);
	$nc(this->fDesktopIcon)->addMouseMotionListener(this);
}

void AquaInternalFrameDockIconUI::uninstallListeners() {
	$nc(this->fDesktopIcon)->removeMouseMotionListener(this);
	$nc(this->fDesktopIcon)->removeMouseListener(this);
}

$Dimension* AquaInternalFrameDockIconUI::getMinimumSize($JComponent* c) {
	return $new($Dimension, 32, 32);
}

$Dimension* AquaInternalFrameDockIconUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, 128, 128);
}

$Dimension* AquaInternalFrameDockIconUI::getPreferredSize($JComponent* c) {
	return $new($Dimension, 64, 64);
}

void AquaInternalFrameDockIconUI::updateIcon() {
	$nc(this->fIconPane)->updateIcon();
}

void AquaInternalFrameDockIconUI::mousePressed($MouseEvent* e) {
	this->fTrackingIcon = $nc(this->fIconPane)->mouseInIcon(e);
	if (this->fTrackingIcon) {
		$nc(this->fIconPane)->repaint();
	}
}

void AquaInternalFrameDockIconUI::mouseReleased($MouseEvent* e) {
	bool var$0 = $nc(this->fFrame)->isIconifiable();
	if (var$0 && $nc(this->fFrame)->isIcon()) {
		if (this->fTrackingIcon) {
			this->fTrackingIcon = false;
			if ($nc(this->fIconPane)->mouseInIcon(e)) {
				if (this->fDockLabel != nullptr) {
					$nc(this->fDockLabel)->hide();
				}
				try {
					$nc(this->fFrame)->setIcon(false);
				} catch ($PropertyVetoException& e2) {
				}
			} else {
				$nc(this->fIconPane)->repaint();
			}
		}
	}
	bool var$1 = this->fDockLabel != nullptr;
	if (var$1) {
		int32_t var$2 = $nc(e)->getX();
		var$1 = !$nc($($nc(this->fIconPane)->getBounds()))->contains(var$2, e->getY());
	}
	if (var$1) {
		$nc(this->fDockLabel)->hide();
	}
}

void AquaInternalFrameDockIconUI::mouseEntered($MouseEvent* e) {
	if (((int32_t)($nc(e)->getModifiers() & (uint32_t)$InputEvent::BUTTON1_MASK)) != 0) {
		return;
	}
	$var($String, title, $nc(this->fFrame)->getTitle());
	if (title == nullptr || $nc(title)->isEmpty()) {
		$assign(title, "Untitled"_s);
	}
	$set(this, fDockLabel, $new($AquaInternalFrameDockIconUI$DockLabel, title));
	$nc(this->fDockLabel)->show(static_cast<$Component*>(this->fDesktopIcon));
}

void AquaInternalFrameDockIconUI::mouseExited($MouseEvent* e) {
	if (this->fDockLabel != nullptr && ((int32_t)($nc(e)->getModifiers() & (uint32_t)$InputEvent::BUTTON1_MASK)) == 0) {
		$nc(this->fDockLabel)->hide();
	}
}

void AquaInternalFrameDockIconUI::mouseClicked($MouseEvent* e) {
}

void AquaInternalFrameDockIconUI::mouseDragged($MouseEvent* e) {
}

void AquaInternalFrameDockIconUI::mouseMoved($MouseEvent* e) {
}

AquaInternalFrameDockIconUI::AquaInternalFrameDockIconUI() {
}

$Class* AquaInternalFrameDockIconUI::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameDockIconUI, name, initialize, &_AquaInternalFrameDockIconUI_ClassInfo_, allocate$AquaInternalFrameDockIconUI);
	return class$;
}

$Class* AquaInternalFrameDockIconUI::class$ = nullptr;

		} // laf
	} // apple
} // com