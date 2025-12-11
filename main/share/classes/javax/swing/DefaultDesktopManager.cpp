#include <javax/swing/DefaultDesktopManager.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/DefaultDesktopManager$1.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

#undef DEFAULT_DRAG_MODE
#undef FASTER_DRAG_MODE
#undef HAS_BEEN_ICONIFIED_PROPERTY
#undef LIVE_DRAG_MODE
#undef OUTLINE_DRAG_MODE
#undef TRUE

using $ComponentArray = $Array<::java::awt::Component>;
using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $DefaultDesktopManager$1 = ::javax::swing::DefaultDesktopManager$1;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace javax {
	namespace swing {

$FieldInfo _DefaultDesktopManager_FieldInfo_[] = {
	{"HAS_BEEN_ICONIFIED_PROPERTY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DefaultDesktopManager, HAS_BEEN_ICONIFIED_PROPERTY)},
	{"DEFAULT_DRAG_MODE", "I", nullptr, $STATIC | $FINAL, $constField(DefaultDesktopManager, DEFAULT_DRAG_MODE)},
	{"OUTLINE_DRAG_MODE", "I", nullptr, $STATIC | $FINAL, $constField(DefaultDesktopManager, OUTLINE_DRAG_MODE)},
	{"FASTER_DRAG_MODE", "I", nullptr, $STATIC | $FINAL, $constField(DefaultDesktopManager, FASTER_DRAG_MODE)},
	{"dragMode", "I", nullptr, 0, $field(DefaultDesktopManager, dragMode)},
	{"currentBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultDesktopManager, currentBounds)},
	{"desktopGraphics", "Ljava/awt/Graphics;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultDesktopManager, desktopGraphics)},
	{"desktopBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultDesktopManager, desktopBounds)},
	{"floatingItems", "[Ljava/awt/Rectangle;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultDesktopManager, floatingItems)},
	{"didDrag", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultDesktopManager, didDrag)},
	{"currentLoc", "Ljava/awt/Point;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultDesktopManager, currentLoc)},
	{}
};

$MethodInfo _DefaultDesktopManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultDesktopManager::*)()>(&DefaultDesktopManager::init$))},
	{"activateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"beginDraggingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"beginResizingFrame", "(Ljavax/swing/JComponent;I)V", nullptr, $PUBLIC},
	{"closeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"deactivateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"deiconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"dragFrame", "(Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC},
	{"dragFrameFaster", "(Ljavax/swing/JComponent;II)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultDesktopManager::*)($JComponent*,int32_t,int32_t)>(&DefaultDesktopManager::dragFrameFaster))},
	{"emergencyCleanup", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultDesktopManager::*)($JComponent*)>(&DefaultDesktopManager::emergencyCleanup))},
	{"endDraggingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"endResizingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"findFloatingItems", "(Ljavax/swing/JComponent;)[Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$RectangleArray*(DefaultDesktopManager::*)($JComponent*)>(&DefaultDesktopManager::findFloatingItems))},
	{"getBoundsForIconOf", "(Ljavax/swing/JInternalFrame;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getDesktopPane", "(Ljavax/swing/JComponent;)Ljavax/swing/JDesktopPane;", nullptr, 0},
	{"getPreviousBounds", "(Ljavax/swing/JInternalFrame;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"iconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"isFloaterCollision", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultDesktopManager::*)($Rectangle*,$Rectangle*)>(&DefaultDesktopManager::isFloaterCollision))},
	{"maximizeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"minimizeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"openFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"removeIconFor", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"resizeFrame", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{"setBoundsForFrame", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{"setPreviousBounds", "(Ljavax/swing/JInternalFrame;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"setWasIcon", "(Ljavax/swing/JInternalFrame;Ljava/lang/Boolean;)V", nullptr, $PROTECTED},
	{"setupDragMode", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultDesktopManager::*)($JComponent*)>(&DefaultDesktopManager::setupDragMode))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wasIcon", "(Ljavax/swing/JInternalFrame;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DefaultDesktopManager_InnerClassesInfo_[] = {
	{"javax.swing.DefaultDesktopManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultDesktopManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultDesktopManager",
	"java.lang.Object",
	"javax.swing.DesktopManager,java.io.Serializable",
	_DefaultDesktopManager_FieldInfo_,
	_DefaultDesktopManager_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultDesktopManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.DefaultDesktopManager$1"
};

$Object* allocate$DefaultDesktopManager($Class* clazz) {
	return $of($alloc(DefaultDesktopManager));
}

int32_t DefaultDesktopManager::hashCode() {
	 return this->$DesktopManager::hashCode();
}

bool DefaultDesktopManager::equals(Object$* arg0) {
	 return this->$DesktopManager::equals(arg0);
}

$Object* DefaultDesktopManager::clone() {
	 return this->$DesktopManager::clone();
}

$String* DefaultDesktopManager::toString() {
	 return this->$DesktopManager::toString();
}

void DefaultDesktopManager::finalize() {
	this->$DesktopManager::finalize();
}

$String* DefaultDesktopManager::HAS_BEEN_ICONIFIED_PROPERTY = nullptr;

void DefaultDesktopManager::init$() {
	this->dragMode = DefaultDesktopManager::DEFAULT_DRAG_MODE;
	$set(this, currentBounds, nullptr);
	$set(this, desktopGraphics, nullptr);
	$set(this, desktopBounds, nullptr);
	$set(this, floatingItems, $new($RectangleArray, 0));
	$set(this, currentLoc, nullptr);
}

void DefaultDesktopManager::openFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(f)->getDesktopIcon()))->getParent() != nullptr) {
		$nc($($nc($(f->getDesktopIcon()))->getParent()))->add(static_cast<$Component*>(f));
		removeIconFor(f);
	}
}

void DefaultDesktopManager::closeFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JDesktopPane, d, $nc(f)->getDesktopPane());
	if (d == nullptr) {
		return;
	}
	bool findNext = f->isSelected();
	$var($Container, c, f->getParent());
	$var($JInternalFrame, nextFrame, nullptr);
	if (findNext) {
		$assign(nextFrame, $nc(d)->getNextFrame(f));
		try {
			f->setSelected(false);
		} catch ($PropertyVetoException& e2) {
		}
	}
	if (c != nullptr) {
		c->remove(static_cast<$Component*>(f));
		int32_t var$0 = f->getX();
		int32_t var$1 = f->getY();
		int32_t var$2 = f->getWidth();
		c->repaint(var$0, var$1, var$2, f->getHeight());
	}
	removeIconFor(f);
	if (f->getNormalBounds() != nullptr) {
		f->setNormalBounds(nullptr);
	}
	if (wasIcon(f)) {
		setWasIcon(f, nullptr);
	}
	if (nextFrame != nullptr) {
		try {
			nextFrame->setSelected(true);
		} catch ($PropertyVetoException& e2) {
		}
	} else if (findNext && $nc(d)->getComponentCount() == 0) {
		d->requestFocus();
	}
}

void DefaultDesktopManager::maximizeFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	if ($nc(f)->isIcon()) {
		try {
			f->setIcon(false);
		} catch ($PropertyVetoException& e2) {
		}
	} else {
		$var($Container, c, f->getParent());
		if (c == nullptr) {
			return;
		}
		f->setNormalBounds($(f->getBounds()));
		$var($Rectangle, desktopBounds, $nc(c)->getBounds());
		setBoundsForFrame(f, 0, 0, $nc(desktopBounds)->width, desktopBounds->height);
	}
	try {
		$nc(f)->setSelected(true);
	} catch ($PropertyVetoException& e2) {
	}
}

void DefaultDesktopManager::minimizeFrame($JInternalFrame* f) {
	if ($nc(f)->isIcon()) {
		iconifyFrame(f);
		return;
	}
	if (($nc(f)->getNormalBounds()) != nullptr) {
		$var($Rectangle, r, f->getNormalBounds());
		f->setNormalBounds(nullptr);
		try {
			f->setSelected(true);
		} catch ($PropertyVetoException& e2) {
		}
		setBoundsForFrame(f, $nc(r)->x, r->y, r->width, r->height);
	}
}

void DefaultDesktopManager::iconifyFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, desktopIcon, nullptr);
	$var($Container, c, $nc(f)->getParent());
	$var($JDesktopPane, d, f->getDesktopPane());
	bool findNext = f->isSelected();
	$assign(desktopIcon, f->getDesktopIcon());
	if (!wasIcon(f)) {
		$var($Rectangle, r, getBoundsForIconOf(f));
		$nc(desktopIcon)->setBounds($nc(r)->x, r->y, r->width, r->height);
		desktopIcon->revalidate();
		$init($Boolean);
		setWasIcon(f, $Boolean::TRUE);
	}
	if (c == nullptr || d == nullptr) {
		return;
	}
	if ($instanceOf($JLayeredPane, c)) {
		$var($JLayeredPane, lp, $cast($JLayeredPane, c));
		int32_t layer = $JLayeredPane::getLayer(static_cast<$JComponent*>(f));
		$JLayeredPane::putLayer(desktopIcon, layer);
	}
	$nc(d)->setComponentOrderCheckingEnabled(true);
	$nc(c)->remove(static_cast<$Component*>(f));
	c->add(static_cast<$Component*>(desktopIcon));
	if (findNext) {
		if (d->selectFrame(true) == nullptr) {
			f->restoreSubcomponentFocus();
		}
	}
	int32_t var$0 = f->getX();
	int32_t var$1 = f->getY();
	int32_t var$2 = f->getWidth();
	c->repaint(var$0, var$1, var$2, f->getHeight());
}

void DefaultDesktopManager::deiconifyFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, desktopIcon, $nc(f)->getDesktopIcon());
	$var($Container, c, $nc(desktopIcon)->getParent());
	$var($JDesktopPane, d, f->getDesktopPane());
	if (c != nullptr && d != nullptr) {
		c->add(static_cast<$Component*>(f));
		if (f->isMaximum()) {
			$var($Rectangle, desktopBounds, c->getBounds());
			bool var$0 = f->getWidth() != $nc(desktopBounds)->width;
			if (var$0 || f->getHeight() != $nc(desktopBounds)->height) {
				setBoundsForFrame(f, 0, 0, desktopBounds->width, desktopBounds->height);
			}
		}
		removeIconFor(f);
		if (f->isSelected()) {
			f->moveToFront();
			f->restoreSubcomponentFocus();
		} else {
			try {
				f->setSelected(true);
			} catch ($PropertyVetoException& e2) {
			}
		}
	}
}

void DefaultDesktopManager::activateFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($Container, p, $nc(f)->getParent());
	$var($ComponentArray, c, nullptr);
	$var($JDesktopPane, d, f->getDesktopPane());
	$var($JInternalFrame, currentlyActiveFrame, (d == nullptr) ? ($JInternalFrame*)nullptr : $nc(d)->getSelectedFrame());
	if (p == nullptr) {
		$assign(p, $nc($(f->getDesktopIcon()))->getParent());
		if (p == nullptr) {
			return;
		}
	}
	if (currentlyActiveFrame == nullptr) {
		if (d != nullptr) {
			d->setSelectedFrame(f);
		}
	} else if (currentlyActiveFrame != f) {
		if ($nc(currentlyActiveFrame)->isSelected()) {
			try {
				currentlyActiveFrame->setSelected(false);
			} catch ($PropertyVetoException& e2) {
			}
		}
		if (d != nullptr) {
			d->setSelectedFrame(f);
		}
	}
	f->moveToFront();
}

void DefaultDesktopManager::deactivateFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JDesktopPane, d, $nc(f)->getDesktopPane());
	$var($JInternalFrame, currentlyActiveFrame, (d == nullptr) ? ($JInternalFrame*)nullptr : $nc(d)->getSelectedFrame());
	if (currentlyActiveFrame == f) {
		d->setSelectedFrame(nullptr);
	}
}

void DefaultDesktopManager::beginDraggingFrame($JComponent* f) {
	setupDragMode(f);
	if (this->dragMode == DefaultDesktopManager::FASTER_DRAG_MODE) {
		$var($Component, desktop, $nc(f)->getParent());
		$set(this, floatingItems, findFloatingItems(f));
		$set(this, currentBounds, f->getBounds());
		if ($instanceOf($JComponent, desktop)) {
			$set(this, desktopBounds, $nc(($cast($JComponent, desktop)))->getVisibleRect());
		} else {
			$set(this, desktopBounds, $nc(desktop)->getBounds());
			$nc(this->desktopBounds)->x = ($nc(this->desktopBounds)->y = 0);
		}
		$set(this, desktopGraphics, $JComponent::safelyGetGraphics(desktop));
		$nc(($cast($JInternalFrame, f)))->isDragging = true;
		this->didDrag = false;
	}
}

void DefaultDesktopManager::setupDragMode($JComponent* f) {
	$useLocalCurrentObjectStackCache();
	$var($JDesktopPane, p, getDesktopPane(f));
	$var($Container, parent, $nc(f)->getParent());
	this->dragMode = DefaultDesktopManager::DEFAULT_DRAG_MODE;
	if (p != nullptr) {
		$var($String, mode, $cast($String, p->getClientProperty("JDesktopPane.dragMode"_s)));
		$var($Window, window, $SwingUtilities::getWindowAncestor(f));
		if (window != nullptr && !window->isOpaque()) {
			this->dragMode = DefaultDesktopManager::DEFAULT_DRAG_MODE;
		} else if (mode != nullptr && mode->equals("outline"_s)) {
			this->dragMode = DefaultDesktopManager::OUTLINE_DRAG_MODE;
		} else {
			bool var$3 = mode != nullptr && mode->equals("faster"_s) && $instanceOf($JInternalFrame, f);
			bool var$2 = var$3 && $nc(($cast($JInternalFrame, f)))->isOpaque();
			if (var$2 && (parent == nullptr || $nc(parent)->isOpaque())) {
				this->dragMode = DefaultDesktopManager::FASTER_DRAG_MODE;
			} else if (p->getDragMode() == $JDesktopPane::OUTLINE_DRAG_MODE) {
				this->dragMode = DefaultDesktopManager::OUTLINE_DRAG_MODE;
			} else {
				bool var$5 = p->getDragMode() == $JDesktopPane::LIVE_DRAG_MODE && $instanceOf($JInternalFrame, f);
				if (var$5 && $nc(($cast($JInternalFrame, f)))->isOpaque()) {
					this->dragMode = DefaultDesktopManager::FASTER_DRAG_MODE;
				} else {
					this->dragMode = DefaultDesktopManager::DEFAULT_DRAG_MODE;
				}
			}
		}
	}
}

void DefaultDesktopManager::dragFrame($JComponent* f, int32_t newX, int32_t newY) {
	$useLocalCurrentObjectStackCache();
	if (this->dragMode == DefaultDesktopManager::OUTLINE_DRAG_MODE) {
		$var($JDesktopPane, desktopPane, getDesktopPane(f));
		if (desktopPane != nullptr) {
			$var($Graphics, g, $JComponent::safelyGetGraphics(desktopPane));
			$init($Color);
			$nc(g)->setXORMode($Color::white);
			if (this->currentLoc != nullptr) {
				int32_t var$0 = $nc(this->currentLoc)->x;
				int32_t var$1 = $nc(this->currentLoc)->y;
				int32_t var$2 = $nc(f)->getWidth() - 1;
				g->drawRect(var$0, var$1, var$2, f->getHeight() - 1);
			}
			int32_t var$3 = newX;
			int32_t var$4 = newY;
			int32_t var$5 = $nc(f)->getWidth() - 1;
			g->drawRect(var$3, var$4, var$5, f->getHeight() - 1);
			$var($SurfaceData, sData, $nc(($cast($SunGraphics2D, g)))->getSurfaceData());
			if (!$nc(sData)->isSurfaceLost()) {
				$set(this, currentLoc, $new($Point, newX, newY));
			}
			g->dispose();
		}
	} else if (this->dragMode == DefaultDesktopManager::FASTER_DRAG_MODE) {
		dragFrameFaster(f, newX, newY);
	} else {
		$var($JComponent, var$6, f);
		int32_t var$7 = newX;
		int32_t var$8 = newY;
		int32_t var$9 = $nc(f)->getWidth();
		setBoundsForFrame(var$6, var$7, var$8, var$9, f->getHeight());
	}
}

void DefaultDesktopManager::endDraggingFrame($JComponent* f) {
	if (this->dragMode == DefaultDesktopManager::OUTLINE_DRAG_MODE && this->currentLoc != nullptr) {
		$var($JComponent, var$0, f);
		int32_t var$1 = $nc(this->currentLoc)->x;
		int32_t var$2 = $nc(this->currentLoc)->y;
		int32_t var$3 = $nc(f)->getWidth();
		setBoundsForFrame(var$0, var$1, var$2, var$3, f->getHeight());
		$set(this, currentLoc, nullptr);
	} else if (this->dragMode == DefaultDesktopManager::FASTER_DRAG_MODE) {
		$set(this, currentBounds, nullptr);
		if (this->desktopGraphics != nullptr) {
			$nc(this->desktopGraphics)->dispose();
			$set(this, desktopGraphics, nullptr);
		}
		$set(this, desktopBounds, nullptr);
		$nc(($cast($JInternalFrame, f)))->isDragging = false;
	}
}

void DefaultDesktopManager::beginResizingFrame($JComponent* f, int32_t direction) {
	setupDragMode(f);
}

void DefaultDesktopManager::resizeFrame($JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) {
	$useLocalCurrentObjectStackCache();
	if (this->dragMode == DefaultDesktopManager::DEFAULT_DRAG_MODE || this->dragMode == DefaultDesktopManager::FASTER_DRAG_MODE) {
		setBoundsForFrame(f, newX, newY, newWidth, newHeight);
	} else {
		$var($JDesktopPane, desktopPane, getDesktopPane(f));
		if (desktopPane != nullptr) {
			$var($Graphics, g, $JComponent::safelyGetGraphics(desktopPane));
			$init($Color);
			$nc(g)->setXORMode($Color::white);
			if (this->currentBounds != nullptr) {
				g->drawRect($nc(this->currentBounds)->x, $nc(this->currentBounds)->y, $nc(this->currentBounds)->width - 1, $nc(this->currentBounds)->height - 1);
			}
			g->drawRect(newX, newY, newWidth - 1, newHeight - 1);
			$var($SurfaceData, sData, $nc(($cast($SunGraphics2D, g)))->getSurfaceData());
			if (!$nc(sData)->isSurfaceLost()) {
				$set(this, currentBounds, $new($Rectangle, newX, newY, newWidth, newHeight));
			}
			g->setPaintMode();
			g->dispose();
		}
	}
}

void DefaultDesktopManager::endResizingFrame($JComponent* f) {
	if (this->dragMode == DefaultDesktopManager::OUTLINE_DRAG_MODE && this->currentBounds != nullptr) {
		setBoundsForFrame(f, $nc(this->currentBounds)->x, $nc(this->currentBounds)->y, $nc(this->currentBounds)->width, $nc(this->currentBounds)->height);
		$set(this, currentBounds, nullptr);
	}
}

void DefaultDesktopManager::setBoundsForFrame($JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) {
	$nc(f)->setBounds(newX, newY, newWidth, newHeight);
	f->revalidate();
}

void DefaultDesktopManager::removeIconFor($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, di, $nc(f)->getDesktopIcon());
	$var($Container, c, $nc(di)->getParent());
	if (c != nullptr) {
		c->remove(static_cast<$Component*>(di));
		int32_t var$0 = di->getX();
		int32_t var$1 = di->getY();
		int32_t var$2 = di->getWidth();
		c->repaint(var$0, var$1, var$2, di->getHeight());
	}
}

$Rectangle* DefaultDesktopManager::getBoundsForIconOf($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, icon, $nc(f)->getDesktopIcon());
	$var($Dimension, prefSize, $nc(icon)->getPreferredSize());
	$var($Container, c, f->getParent());
	if (c == nullptr) {
		$assign(c, $nc($(f->getDesktopIcon()))->getParent());
	}
	if (c == nullptr) {
		return $new($Rectangle, 0, 0, $nc(prefSize)->width, prefSize->height);
	}
	$var($Rectangle, parentBounds, $nc(c)->getBounds());
	$var($ComponentArray, components, c->getComponents());
	$var($Rectangle, availableRectangle, nullptr);
	$var($JInternalFrame$JDesktopIcon, currentIcon, nullptr);
	int32_t x = 0;
	int32_t y = $nc(parentBounds)->height - $nc(prefSize)->height;
	int32_t w = prefSize->width;
	int32_t h = prefSize->height;
	bool found = false;
	while (!found) {
		$assign(availableRectangle, $new($Rectangle, x, y, w, h));
		found = true;
		for (int32_t i = 0; i < $nc(components)->length; ++i) {
			if ($instanceOf($JInternalFrame, components->get(i))) {
				$assign(currentIcon, $nc(($cast($JInternalFrame, components->get(i))))->getDesktopIcon());
			} else if ($instanceOf($JInternalFrame$JDesktopIcon, components->get(i))) {
				$assign(currentIcon, $cast($JInternalFrame$JDesktopIcon, components->get(i)));
			} else {
				continue;
			}
			if (!$nc($of(currentIcon))->equals(icon)) {
				if (availableRectangle->intersects($(currentIcon->getBounds()))) {
					found = false;
					break;
				}
			}
		}
		if (currentIcon == nullptr) {
			return availableRectangle;
		}
		x += $nc($($nc(currentIcon)->getBounds()))->width;
		if (x + w > parentBounds->width) {
			x = 0;
			y -= h;
		}
	}
	return (availableRectangle);
}

void DefaultDesktopManager::setPreviousBounds($JInternalFrame* f, $Rectangle* r) {
	$nc(f)->setNormalBounds(r);
}

$Rectangle* DefaultDesktopManager::getPreviousBounds($JInternalFrame* f) {
	return $nc(f)->getNormalBounds();
}

void DefaultDesktopManager::setWasIcon($JInternalFrame* f, $Boolean* value) {
	if (value != nullptr) {
		$nc(f)->putClientProperty(DefaultDesktopManager::HAS_BEEN_ICONIFIED_PROPERTY, value);
	}
}

bool DefaultDesktopManager::wasIcon($JInternalFrame* f) {
	$init($Boolean);
	return ($equals($nc(f)->getClientProperty(DefaultDesktopManager::HAS_BEEN_ICONIFIED_PROPERTY), $Boolean::TRUE));
}

$JDesktopPane* DefaultDesktopManager::getDesktopPane($JComponent* frame) {
	$useLocalCurrentObjectStackCache();
	$var($JDesktopPane, pane, nullptr);
	$var($Component, c, $nc(frame)->getParent());
	while (pane == nullptr) {
		if ($instanceOf($JDesktopPane, c)) {
			$assign(pane, $cast($JDesktopPane, c));
		} else if (c == nullptr) {
			break;
		} else {
			$assign(c, $nc(c)->getParent());
		}
	}
	return pane;
}

void DefaultDesktopManager::dragFrameFaster($JComponent* f, int32_t newX, int32_t newY) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, previousBounds, $new($Rectangle, $nc(this->currentBounds)->x, $nc(this->currentBounds)->y, $nc(this->currentBounds)->width, $nc(this->currentBounds)->height));
	$nc(this->currentBounds)->x = newX;
	$nc(this->currentBounds)->y = newY;
	if (this->didDrag) {
		emergencyCleanup(f);
	} else {
		this->didDrag = true;
		$nc(($cast($JInternalFrame, f)))->danger = false;
	}
	bool floaterCollision = isFloaterCollision(previousBounds, this->currentBounds);
	$var($JComponent, parent, $cast($JComponent, $nc(f)->getParent()));
	$var($Rectangle, visBounds, previousBounds->intersection(this->desktopBounds));
	$var($RepaintManager, currentManager, $RepaintManager::currentManager(f));
	$nc(currentManager)->beginPaint();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!floaterCollision) {
				currentManager->copyArea(parent, this->desktopGraphics, $nc(visBounds)->x, visBounds->y, visBounds->width, visBounds->height, newX - previousBounds->x, newY - previousBounds->y, true);
			}
			f->setBounds(this->currentBounds);
			if (!floaterCollision) {
				$var($Rectangle, r, this->currentBounds);
				currentManager->notifyRepaintPerformed(parent, $nc(r)->x, r->y, r->width, r->height);
			}
			if (floaterCollision) {
				$nc(($cast($JInternalFrame, f)))->isDragging = false;
				$nc(parent)->paintImmediately(this->currentBounds);
				($cast($JInternalFrame, f))->isDragging = true;
			}
			currentManager->markCompletelyClean(parent);
			currentManager->markCompletelyClean(f);
			$var($RectangleArray, dirtyRects, nullptr);
			if (previousBounds->intersects(this->currentBounds)) {
				$assign(dirtyRects, $SwingUtilities::computeDifference(previousBounds, this->currentBounds));
			} else {
				$assign(dirtyRects, $new($RectangleArray, 1));
				dirtyRects->set(0, previousBounds);
			}
			for (int32_t i = 0; i < $nc(dirtyRects)->length; ++i) {
				$nc(parent)->paintImmediately(dirtyRects->get(i));
				$var($Rectangle, r, dirtyRects->get(i));
				currentManager->notifyRepaintPerformed(parent, $nc(r)->x, r->y, r->width, r->height);
			}
			if (!($nc(visBounds)->equals(previousBounds))) {
				$assign(dirtyRects, $SwingUtilities::computeDifference(previousBounds, this->desktopBounds));
				for (int32_t i = 0; i < $nc(dirtyRects)->length; ++i) {
					$nc(dirtyRects->get(i))->x += newX - previousBounds->x;
					$nc(dirtyRects->get(i))->y += newY - previousBounds->y;
					$nc(($cast($JInternalFrame, f)))->isDragging = false;
					$nc(parent)->paintImmediately(dirtyRects->get(i));
					($cast($JInternalFrame, f))->isDragging = true;
					$var($Rectangle, r, dirtyRects->get(i));
					currentManager->notifyRepaintPerformed(parent, $nc(r)->x, r->y, r->width, r->height);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			currentManager->endPaint();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($Window, topLevel, $SwingUtilities::getWindowAncestor(f));
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	bool var$2 = !$nc(topLevel)->isOpaque() && ($instanceOf($SunToolkit, tk));
	if (var$2 && $nc(($cast($SunToolkit, tk)))->needUpdateWindow()) {
		$nc($($AWTAccessor::getWindowAccessor()))->updateWindow(topLevel);
	}
}

bool DefaultDesktopManager::isFloaterCollision($Rectangle* moveFrom, $Rectangle* moveTo) {
	if ($nc(this->floatingItems)->length == 0) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->floatingItems)->length; ++i) {
		bool intersectsFrom = $nc(moveFrom)->intersects($nc(this->floatingItems)->get(i));
		if (intersectsFrom) {
			return true;
		}
		bool intersectsTo = $nc(moveTo)->intersects($nc(this->floatingItems)->get(i));
		if (intersectsTo) {
			return true;
		}
	}
	return false;
}

$RectangleArray* DefaultDesktopManager::findFloatingItems($JComponent* f) {
	$useLocalCurrentObjectStackCache();
	$var($Container, desktop, $nc(f)->getParent());
	$var($ComponentArray, children, $nc(desktop)->getComponents());
	int32_t i = 0;
	for (i = 0; i < $nc(children)->length; ++i) {
		if ($equals(children->get(i), f)) {
			break;
		}
	}
	$var($RectangleArray, floaters, $new($RectangleArray, i));
	for (i = 0; i < floaters->length; ++i) {
		floaters->set(i, $($nc($nc(children)->get(i))->getBounds()));
	}
	return floaters;
}

void DefaultDesktopManager::emergencyCleanup($JComponent* f) {
	if ($nc(($cast($JInternalFrame, f)))->danger) {
		$SwingUtilities::invokeLater($$new($DefaultDesktopManager$1, this, f));
		($cast($JInternalFrame, f))->danger = false;
	}
}

DefaultDesktopManager::DefaultDesktopManager() {
}

void clinit$DefaultDesktopManager($Class* class$) {
	$assignStatic(DefaultDesktopManager::HAS_BEEN_ICONIFIED_PROPERTY, "wasIconOnce"_s);
}

$Class* DefaultDesktopManager::load$($String* name, bool initialize) {
	$loadClass(DefaultDesktopManager, name, initialize, &_DefaultDesktopManager_ClassInfo_, clinit$DefaultDesktopManager, allocate$DefaultDesktopManager);
	return class$;
}

$Class* DefaultDesktopManager::class$ = nullptr;

	} // swing
} // javax