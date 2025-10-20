#include <com/sun/java/swing/plaf/motif/MotifDesktopPaneUI$MotifDesktopManager.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopPaneUI$DragPane.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ComponentArray = $Array<::java::awt::Component>;
using $JInternalFrameArray = $Array<::javax::swing::JInternalFrame>;
using $MotifDesktopPaneUI = ::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI;
using $MotifDesktopPaneUI$DragPane = ::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI$DragPane;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifDesktopPaneUI$MotifDesktopManager_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopPaneUI$MotifDesktopManager, this$0)},
	{"dragPane", "Ljavax/swing/JComponent;", nullptr, 0, $field(MotifDesktopPaneUI$MotifDesktopManager, dragPane)},
	{"usingDragPane", "Z", nullptr, 0, $field(MotifDesktopPaneUI$MotifDesktopManager, usingDragPane)},
	{"layeredPaneForDragPane", "Ljavax/swing/JLayeredPane;", nullptr, $PRIVATE | $TRANSIENT, $field(MotifDesktopPaneUI$MotifDesktopManager, layeredPaneForDragPane)},
	{"iconWidth", "I", nullptr, 0, $field(MotifDesktopPaneUI$MotifDesktopManager, iconWidth)},
	{"iconHeight", "I", nullptr, 0, $field(MotifDesktopPaneUI$MotifDesktopManager, iconHeight)},
	{}
};

$MethodInfo _MotifDesktopPaneUI$MotifDesktopManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopPaneUI;)V", nullptr, $PRIVATE, $method(static_cast<void(MotifDesktopPaneUI$MotifDesktopManager::*)($MotifDesktopPaneUI*)>(&MotifDesktopPaneUI$MotifDesktopManager::init$))},
	{"adjustBoundsForIcon", "(Ljavax/swing/JInternalFrame$JDesktopIcon;II)V", nullptr, $PROTECTED},
	{"adjustIcons", "(Ljavax/swing/JDesktopPane;)V", nullptr, $PROTECTED},
	{"beginDraggingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"beginResizingFrame", "(Ljavax/swing/JComponent;I)V", nullptr, $PUBLIC},
	{"dragFrame", "(Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC},
	{"endDraggingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"endResizingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"getIconAt", "(Ljavax/swing/JDesktopPane;Ljavax/swing/JInternalFrame$JDesktopIcon;II)Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, $PROTECTED},
	{"iconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"resizeFrame", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{"setBoundsForFrame", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifDesktopPaneUI$MotifDesktopManager_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$MotifDesktopManager", "com.sun.java.swing.plaf.motif.MotifDesktopPaneUI", "MotifDesktopManager", $PRIVATE},
	{}
};

$ClassInfo _MotifDesktopPaneUI$MotifDesktopManager_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$MotifDesktopManager",
	"javax.swing.DefaultDesktopManager",
	"javax.swing.plaf.UIResource",
	_MotifDesktopPaneUI$MotifDesktopManager_FieldInfo_,
	_MotifDesktopPaneUI$MotifDesktopManager_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDesktopPaneUI$MotifDesktopManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI"
};

$Object* allocate$MotifDesktopPaneUI$MotifDesktopManager($Class* clazz) {
	return $of($alloc(MotifDesktopPaneUI$MotifDesktopManager));
}

int32_t MotifDesktopPaneUI$MotifDesktopManager::hashCode() {
	 return this->$DefaultDesktopManager::hashCode();
}

bool MotifDesktopPaneUI$MotifDesktopManager::equals(Object$* arg0) {
	 return this->$DefaultDesktopManager::equals(arg0);
}

$Object* MotifDesktopPaneUI$MotifDesktopManager::clone() {
	 return this->$DefaultDesktopManager::clone();
}

$String* MotifDesktopPaneUI$MotifDesktopManager::toString() {
	 return this->$DefaultDesktopManager::toString();
}

void MotifDesktopPaneUI$MotifDesktopManager::finalize() {
	this->$DefaultDesktopManager::finalize();
}

void MotifDesktopPaneUI$MotifDesktopManager::init$($MotifDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultDesktopManager::init$();
	this->usingDragPane = false;
}

void MotifDesktopPaneUI$MotifDesktopManager::setBoundsForFrame($JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) {
	$useLocalCurrentObjectStackCache();
	if (!this->usingDragPane) {
		bool didResize = false;
		bool var$0 = $nc(f)->getWidth() != newWidth;
		didResize = (var$0 || $nc(f)->getHeight() != newHeight);
		$var($Rectangle, r, f->getBounds());
		f->setBounds(newX, newY, newWidth, newHeight);
		$SwingUtilities::computeUnion(newX, newY, newWidth, newHeight, r);
		$nc($(f->getParent()))->repaint($nc(r)->x, r->y, r->width, r->height);
		if (didResize) {
			f->validate();
		}
	} else {
		$var($Rectangle, r, $nc(this->dragPane)->getBounds());
		$nc(this->dragPane)->setBounds(newX, newY, newWidth, newHeight);
		$SwingUtilities::computeUnion(newX, newY, newWidth, newHeight, r);
		$nc($($nc(this->dragPane)->getParent()))->repaint($nc(r)->x, r->y, r->width, r->height);
	}
}

void MotifDesktopPaneUI$MotifDesktopManager::beginDraggingFrame($JComponent* f) {
	this->usingDragPane = false;
	if ($instanceOf($JLayeredPane, $($nc(f)->getParent()))) {
		if (this->dragPane == nullptr) {
			$set(this, dragPane, $new($MotifDesktopPaneUI$DragPane, this->this$0));
		}
		$set(this, layeredPaneForDragPane, $cast($JLayeredPane, f->getParent()));
		$nc(this->layeredPaneForDragPane)->setLayer(this->dragPane, $Integer::MAX_VALUE);
		int32_t var$0 = f->getX();
		int32_t var$1 = f->getY();
		int32_t var$2 = f->getWidth();
		$nc(this->dragPane)->setBounds(var$0, var$1, var$2, f->getHeight());
		$nc(this->layeredPaneForDragPane)->add(static_cast<$Component*>(this->dragPane));
		this->usingDragPane = true;
	}
}

void MotifDesktopPaneUI$MotifDesktopManager::dragFrame($JComponent* f, int32_t newX, int32_t newY) {
	$var($JComponent, var$0, f);
	int32_t var$1 = newX;
	int32_t var$2 = newY;
	int32_t var$3 = $nc(f)->getWidth();
	setBoundsForFrame(var$0, var$1, var$2, var$3, f->getHeight());
}

void MotifDesktopPaneUI$MotifDesktopManager::endDraggingFrame($JComponent* f) {
	$useLocalCurrentObjectStackCache();
	if (this->usingDragPane) {
		$nc(this->layeredPaneForDragPane)->remove(static_cast<$Component*>(this->dragPane));
		this->usingDragPane = false;
		if ($instanceOf($JInternalFrame, f)) {
			$var($JComponent, var$0, f);
			int32_t var$1 = $nc(this->dragPane)->getX();
			int32_t var$2 = $nc(this->dragPane)->getY();
			int32_t var$3 = $nc(this->dragPane)->getWidth();
			setBoundsForFrame(var$0, var$1, var$2, var$3, $nc(this->dragPane)->getHeight());
		} else if ($instanceOf($JInternalFrame$JDesktopIcon, f)) {
			$var($JInternalFrame$JDesktopIcon, var$4, $cast($JInternalFrame$JDesktopIcon, f));
			int32_t var$5 = $nc(this->dragPane)->getX();
			adjustBoundsForIcon(var$4, var$5, $nc(this->dragPane)->getY());
		}
	}
}

void MotifDesktopPaneUI$MotifDesktopManager::beginResizingFrame($JComponent* f, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	this->usingDragPane = false;
	if ($instanceOf($JLayeredPane, $($nc(f)->getParent()))) {
		if (this->dragPane == nullptr) {
			$set(this, dragPane, $new($MotifDesktopPaneUI$DragPane, this->this$0));
		}
		$var($JLayeredPane, p, $cast($JLayeredPane, f->getParent()));
		$nc(p)->setLayer(this->dragPane, $Integer::MAX_VALUE);
		int32_t var$0 = f->getX();
		int32_t var$1 = f->getY();
		int32_t var$2 = f->getWidth();
		$nc(this->dragPane)->setBounds(var$0, var$1, var$2, f->getHeight());
		p->add(static_cast<$Component*>(this->dragPane));
		this->usingDragPane = true;
	}
}

void MotifDesktopPaneUI$MotifDesktopManager::resizeFrame($JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) {
	setBoundsForFrame(f, newX, newY, newWidth, newHeight);
}

void MotifDesktopPaneUI$MotifDesktopManager::endResizingFrame($JComponent* f) {
	$useLocalCurrentObjectStackCache();
	if (this->usingDragPane) {
		$var($JLayeredPane, p, $cast($JLayeredPane, $nc(f)->getParent()));
		$nc(p)->remove(static_cast<$Component*>(this->dragPane));
		this->usingDragPane = false;
		$var($JComponent, var$0, f);
		int32_t var$1 = $nc(this->dragPane)->getX();
		int32_t var$2 = $nc(this->dragPane)->getY();
		int32_t var$3 = $nc(this->dragPane)->getWidth();
		setBoundsForFrame(var$0, var$1, var$2, var$3, $nc(this->dragPane)->getHeight());
	}
}

void MotifDesktopPaneUI$MotifDesktopManager::iconifyFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, icon, $nc(f)->getDesktopIcon());
	$var($Point, p, $nc(icon)->getLocation());
	adjustBoundsForIcon(icon, $nc(p)->x, p->y);
	$DefaultDesktopManager::iconifyFrame(f);
}

void MotifDesktopPaneUI$MotifDesktopManager::adjustIcons($JDesktopPane* desktop) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, icon, $new($JInternalFrame$JDesktopIcon, $$new($JInternalFrame)));
	$var($Dimension, iconSize, icon->getPreferredSize());
	this->iconWidth = $nc(iconSize)->width;
	this->iconHeight = iconSize->height;
	$var($JInternalFrameArray, frames, $nc(desktop)->getAllFrames());
	for (int32_t i = 0; i < $nc(frames)->length; ++i) {
		$assign(icon, $nc(frames->get(i))->getDesktopIcon());
		$var($Point, ip, $nc(icon)->getLocation());
		adjustBoundsForIcon(icon, $nc(ip)->x, ip->y);
	}
}

void MotifDesktopPaneUI$MotifDesktopManager::adjustBoundsForIcon($JInternalFrame$JDesktopIcon* icon, int32_t x, int32_t y) {
	$var($JDesktopPane, c, $nc(icon)->getDesktopPane());
	int32_t maxy = $nc(c)->getHeight();
	int32_t w = this->iconWidth;
	int32_t h = this->iconHeight;
	c->repaint(x, y, w, h);
	x = x < 0 ? 0 : x;
	y = y < 0 ? 0 : y;
	y = y >= maxy ? (maxy - 1) : y;
	int32_t lx = ($div(x, w)) * w;
	int32_t ygap = $mod(maxy, h);
	int32_t ly = ($div((y - ygap), h)) * h + ygap;
	int32_t dx = x - lx;
	int32_t dy = y - ly;
	x = dx < w / 2 ? lx : lx + w;
	y = dy < h / 2 ? ly : ((ly + h) < maxy ? ly + h : ly);
	while (getIconAt(c, icon, x, y) != nullptr) {
		x += w;
	}
	if (x > c->getWidth()) {
		return;
	}
	if (icon->getParent() != nullptr) {
		setBoundsForFrame(icon, x, y, w, h);
	} else {
		icon->setLocation(x, y);
	}
}

$JInternalFrame$JDesktopIcon* MotifDesktopPaneUI$MotifDesktopManager::getIconAt($JDesktopPane* desktop, $JInternalFrame$JDesktopIcon* icon, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, currentIcon, nullptr);
	$var($ComponentArray, components, $nc(desktop)->getComponents());
	for (int32_t i = 0; i < $nc(components)->length; ++i) {
		$var($Component, comp, components->get(i));
		if ($instanceOf($JInternalFrame$JDesktopIcon, comp) && !$equals(comp, icon)) {
			$var($Point, p, $nc(comp)->getLocation());
			if ($nc(p)->x == x && p->y == y) {
				return $cast($JInternalFrame$JDesktopIcon, comp);
			}
		}
	}
	return nullptr;
}

MotifDesktopPaneUI$MotifDesktopManager::MotifDesktopPaneUI$MotifDesktopManager() {
}

$Class* MotifDesktopPaneUI$MotifDesktopManager::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopPaneUI$MotifDesktopManager, name, initialize, &_MotifDesktopPaneUI$MotifDesktopManager_ClassInfo_, allocate$MotifDesktopPaneUI$MotifDesktopManager);
	return class$;
}

$Class* MotifDesktopPaneUI$MotifDesktopManager::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com