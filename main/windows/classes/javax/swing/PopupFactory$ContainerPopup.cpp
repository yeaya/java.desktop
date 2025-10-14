#include <javax/swing/PopupFactory$ContainerPopup.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JWindow.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $WindowArray = $Array<::java::awt::Window>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JWindow = ::javax::swing::JWindow;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$FieldInfo _PopupFactory$ContainerPopup_FieldInfo_[] = {
	{"owner", "Ljava/awt/Component;", nullptr, 0, $field(PopupFactory$ContainerPopup, owner)},
	{"x", "I", nullptr, 0, $field(PopupFactory$ContainerPopup, x)},
	{"y", "I", nullptr, 0, $field(PopupFactory$ContainerPopup, y)},
	{}
};

$MethodInfo _PopupFactory$ContainerPopup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PopupFactory$ContainerPopup::*)()>(&PopupFactory$ContainerPopup::init$))},
	{"fitsOnScreen", "()Z", nullptr, 0},
	{"getContainerPopupArea", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/Rectangle;", nullptr, 0},
	{"hide", "()V", nullptr, $PUBLIC},
	{"overlappedByOwnedWindow", "()Z", nullptr, 0},
	{"pack", "()V", nullptr, $PUBLIC},
	{"reset", "(Ljava/awt/Component;Ljava/awt/Component;II)V", nullptr, 0},
	{}
};

$InnerClassInfo _PopupFactory$ContainerPopup_InnerClassesInfo_[] = {
	{"javax.swing.PopupFactory$ContainerPopup", "javax.swing.PopupFactory", "ContainerPopup", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PopupFactory$ContainerPopup_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.PopupFactory$ContainerPopup",
	"javax.swing.Popup",
	nullptr,
	_PopupFactory$ContainerPopup_FieldInfo_,
	_PopupFactory$ContainerPopup_MethodInfo_,
	nullptr,
	nullptr,
	_PopupFactory$ContainerPopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.PopupFactory"
};

$Object* allocate$PopupFactory$ContainerPopup($Class* clazz) {
	return $of($alloc(PopupFactory$ContainerPopup));
}

void PopupFactory$ContainerPopup::init$() {
	$Popup::init$();
}

void PopupFactory$ContainerPopup::hide() {
	$var($Component, component, getComponent());
	if (component != nullptr) {
		$var($Container, parent, component->getParent());
		if (parent != nullptr) {
			$var($Rectangle, bounds, component->getBounds());
			parent->remove(component);
			parent->repaint($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
		}
	}
	$set(this, owner, nullptr);
}

void PopupFactory$ContainerPopup::pack() {
	$var($Component, component, getComponent());
	if (component != nullptr) {
		component->setSize($(component->getPreferredSize()));
	}
}

void PopupFactory$ContainerPopup::reset($Component* owner$renamed, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$var($Component, owner, owner$renamed);
	if (($instanceOf($JFrame, owner)) || ($instanceOf($JDialog, owner)) || ($instanceOf($JWindow, owner))) {
		$assign(owner, $nc(($cast($RootPaneContainer, owner)))->getLayeredPane());
	}
	$Popup::reset(owner, contents, ownerX, ownerY);
	this->x = ownerX;
	this->y = ownerY;
	$set(this, owner, owner);
}

bool PopupFactory$ContainerPopup::overlappedByOwnedWindow() {
	$var($Component, component, getComponent());
	if (this->owner != nullptr && component != nullptr) {
		$var($Window, w, $SwingUtilities::getWindowAncestor(this->owner));
		if (w == nullptr) {
			return false;
		}
		$var($WindowArray, ownedWindows, $nc(w)->getOwnedWindows());
		if (ownedWindows != nullptr) {
			$var($Rectangle, bnd, component->getBounds());
			{
				$var($WindowArray, arr$, ownedWindows);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Window, window, arr$->get(i$));
					{
						bool var$0 = $nc(window)->isVisible();
						if (var$0 && $nc(bnd)->intersects($(window->getBounds()))) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool PopupFactory$ContainerPopup::fitsOnScreen() {
	bool result = false;
	$var($Component, component, getComponent());
	if (this->owner != nullptr && component != nullptr) {
		int32_t popupWidth = component->getWidth();
		int32_t popupHeight = component->getHeight();
		$var($Container, parent, $cast($Container, $SwingUtilities::getRoot(this->owner)));
		if ($instanceOf($JFrame, parent) || $instanceOf($JDialog, parent) || $instanceOf($JWindow, parent)) {
			$var($Rectangle, parentBounds, $nc(parent)->getBounds());
			$var($Insets, i, parent->getInsets());
			$nc(parentBounds)->x += $nc(i)->left;
			parentBounds->y += i->top;
			parentBounds->width -= i->left + i->right;
			parentBounds->height -= i->top + i->bottom;
			if ($JPopupMenu::canPopupOverlapTaskBar()) {
				$var($GraphicsConfiguration, gc, parent->getGraphicsConfiguration());
				$var($Rectangle, popupArea, getContainerPopupArea(gc));
				result = $nc($(parentBounds->intersection(popupArea)))->contains(this->x, this->y, popupWidth, popupHeight);
			} else {
				result = parentBounds->contains(this->x, this->y, popupWidth, popupHeight);
			}
		} else if ($instanceOf($JApplet, parent)) {
			$var($Rectangle, parentBounds, $nc(parent)->getBounds());
			$var($Point, p, parent->getLocationOnScreen());
			$nc(parentBounds)->x = $nc(p)->x;
			parentBounds->y = p->y;
			result = parentBounds->contains(this->x, this->y, popupWidth, popupHeight);
		}
	}
	return result;
}

$Rectangle* PopupFactory$ContainerPopup::getContainerPopupArea($GraphicsConfiguration* gc) {
	$var($Rectangle, screenBounds, nullptr);
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($Insets, insets, nullptr);
	if (gc != nullptr) {
		$assign(screenBounds, gc->getBounds());
		$assign(insets, $nc(toolkit)->getScreenInsets(gc));
	} else {
		$assign(screenBounds, $new($Rectangle, $($nc(toolkit)->getScreenSize())));
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	$nc(screenBounds)->x += $nc(insets)->left;
	screenBounds->y += insets->top;
	screenBounds->width -= (insets->left + insets->right);
	screenBounds->height -= (insets->top + insets->bottom);
	return screenBounds;
}

PopupFactory$ContainerPopup::PopupFactory$ContainerPopup() {
}

$Class* PopupFactory$ContainerPopup::load$($String* name, bool initialize) {
	$loadClass(PopupFactory$ContainerPopup, name, initialize, &_PopupFactory$ContainerPopup_ClassInfo_, allocate$PopupFactory$ContainerPopup);
	return class$;
}

$Class* PopupFactory$ContainerPopup::class$ = nullptr;

	} // swing
} // javax