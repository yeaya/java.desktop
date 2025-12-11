#include <com/apple/laf/AquaInternalFrameUI$ResizeBox.h>

#include <com/apple/laf/AquaInternalFrameUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef RESIZE_ICON
#undef SOUTH_EAST
#undef TRUE

using $AquaInternalFrameUI = ::com::apple::laf::AquaInternalFrameUI;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DesktopManager = ::javax::swing::DesktopManager;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLabel = ::javax::swing::JLabel;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameUI$ResizeBox_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$ResizeBox, this$0)},
	{"layeredPane", "Ljavax/swing/JLayeredPane;", nullptr, $PRIVATE | $FINAL, $field(AquaInternalFrameUI$ResizeBox, layeredPane)},
	{"originalSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(AquaInternalFrameUI$ResizeBox, originalSize)},
	{"originalLocation", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(AquaInternalFrameUI$ResizeBox, originalLocation)},
	{}
};

$MethodInfo _AquaInternalFrameUI$ResizeBox_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI;Ljavax/swing/JLayeredPane;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$ResizeBox::*)($AquaInternalFrameUI*,$JLayeredPane*)>(&AquaInternalFrameUI$ResizeBox::init$))},
	{"addListeners", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$ResizeBox::*)()>(&AquaInternalFrameUI$ResizeBox::addListeners))},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"forwardEventToFrame", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$ResizeBox::*)($MouseEvent*)>(&AquaInternalFrameUI$ResizeBox::forwardEventToFrame))},
	{"getComponentToForwardTo", "(Ljava/awt/event/MouseEvent;Ljava/awt/Point;)Ljava/awt/Component;", nullptr, 0, $method(static_cast<$Component*(AquaInternalFrameUI$ResizeBox::*)($MouseEvent*,$Point*)>(&AquaInternalFrameUI$ResizeBox::getComponentToForwardTo))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeListeners", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$ResizeBox::*)()>(&AquaInternalFrameUI$ResizeBox::removeListeners))},
	{"repositionResizeBox", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$ResizeBox::*)()>(&AquaInternalFrameUI$ResizeBox::repositionResizeBox))},
	{"resizeInternalFrame", "(Ljava/awt/Point;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$ResizeBox::*)($Point*)>(&AquaInternalFrameUI$ResizeBox::resizeInternalFrame))},
	{"testGrowboxPoint", "(IIII)Z", nullptr, 0, $method(static_cast<bool(AquaInternalFrameUI$ResizeBox::*)(int32_t,int32_t,int32_t,int32_t)>(&AquaInternalFrameUI$ResizeBox::testGrowboxPoint))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaInternalFrameUI$ResizeBox_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$ResizeBox", "com.apple.laf.AquaInternalFrameUI", "ResizeBox", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _AquaInternalFrameUI$ResizeBox_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$ResizeBox",
	"javax.swing.JLabel",
	"java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.awt.event.MouseWheelListener,java.awt.event.ComponentListener,java.beans.PropertyChangeListener,javax.swing.plaf.UIResource",
	_AquaInternalFrameUI$ResizeBox_FieldInfo_,
	_AquaInternalFrameUI$ResizeBox_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameUI$ResizeBox_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$ResizeBox($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$ResizeBox));
}

$String* AquaInternalFrameUI$ResizeBox::toString() {
	 return this->$JLabel::toString();
}

int32_t AquaInternalFrameUI$ResizeBox::hashCode() {
	 return this->$JLabel::hashCode();
}

bool AquaInternalFrameUI$ResizeBox::equals(Object$* arg0) {
	 return this->$JLabel::equals(arg0);
}

$Object* AquaInternalFrameUI$ResizeBox::clone() {
	 return this->$JLabel::clone();
}

void AquaInternalFrameUI$ResizeBox::finalize() {
	this->$JLabel::finalize();
}

void AquaInternalFrameUI$ResizeBox::init$($AquaInternalFrameUI* this$0, $JLayeredPane* layeredPane) {
	$set(this, this$0, this$0);
	$init($AquaInternalFrameUI);
	$JLabel::init$($cast($Icon, $($nc($AquaInternalFrameUI::RESIZE_ICON)->get())));
	setSize(11, 11);
	$set(this, layeredPane, layeredPane);
	addMouseListener(this);
	addMouseMotionListener(this);
	addMouseWheelListener(this);
}

void AquaInternalFrameUI$ResizeBox::addListeners() {
	$nc($($AquaInternalFrameUI::access$5200(this->this$0)))->addPropertyChangeListener("resizable"_s, this);
}

void AquaInternalFrameUI$ResizeBox::removeListeners() {
	$nc($($AquaInternalFrameUI::access$5300(this->this$0)))->removePropertyChangeListener("resizable"_s, this);
}

void AquaInternalFrameUI$ResizeBox::repositionResizeBox() {
	if ($AquaInternalFrameUI::access$5400(this->this$0) == nullptr) {
		setSize(0, 0);
	} else {
		setSize(11, 11);
	}
	int32_t var$0 = $nc(this->layeredPane)->getWidth() - 12;
	setLocation(var$0, $nc(this->layeredPane)->getHeight() - 12);
}

void AquaInternalFrameUI$ResizeBox::resizeInternalFrame($Point* pt) {
	$useLocalCurrentObjectStackCache();
	if (this->originalLocation == nullptr || $AquaInternalFrameUI::access$5500(this->this$0) == nullptr) {
		return;
	}
	$var($Container, parent, $nc($($AquaInternalFrameUI::access$5600(this->this$0)))->getParent());
	if (!($instanceOf($JDesktopPane, parent))) {
		return;
	}
	$var($Point, newPoint, $SwingUtilities::convertPoint(this, pt, $($AquaInternalFrameUI::access$5700(this->this$0))));
	int32_t deltaX = $nc(this->originalLocation)->x - $nc(newPoint)->x;
	int32_t deltaY = $nc(this->originalLocation)->y - newPoint->y;
	$var($Dimension, min, $nc($($AquaInternalFrameUI::access$5800(this->this$0)))->getMinimumSize());
	$var($Dimension, max, $nc($($AquaInternalFrameUI::access$5900(this->this$0)))->getMaximumSize());
	int32_t newX = $nc($($AquaInternalFrameUI::access$6000(this->this$0)))->getX();
	int32_t newY = $nc($($AquaInternalFrameUI::access$6100(this->this$0)))->getY();
	int32_t newW = $nc($($AquaInternalFrameUI::access$6200(this->this$0)))->getWidth();
	int32_t newH = $nc($($AquaInternalFrameUI::access$6300(this->this$0)))->getHeight();
	$var($Rectangle, parentBounds, $nc(parent)->getBounds());
	if ($nc(this->originalSize)->width - deltaX < $nc(min)->width) {
		deltaX = $nc(this->originalSize)->width - min->width;
	} else if ($nc(this->originalSize)->width - deltaX > $nc(max)->width) {
		deltaX = -(max->width - $nc(this->originalSize)->width);
	}
	if (newX + $nc(this->originalSize)->width - deltaX > $nc(parentBounds)->width) {
		deltaX = newX + $nc(this->originalSize)->width - parentBounds->width;
	}
	if ($nc(this->originalSize)->height - deltaY < $nc(min)->height) {
		deltaY = $nc(this->originalSize)->height - min->height;
	} else if ($nc(this->originalSize)->height - deltaY > $nc(max)->height) {
		deltaY = -(max->height - $nc(this->originalSize)->height);
	}
	if (newY + $nc(this->originalSize)->height - deltaY > $nc(parentBounds)->height) {
		deltaY = newY + $nc(this->originalSize)->height - parentBounds->height;
	}
	newW = $nc(this->originalSize)->width - deltaX;
	newH = $nc(this->originalSize)->height - deltaY;
	$nc($($AquaInternalFrameUI::access$6500(this->this$0)))->resizeFrame($($AquaInternalFrameUI::access$6400(this->this$0)), newX, newY, newW, newH);
}

bool AquaInternalFrameUI$ResizeBox::testGrowboxPoint(int32_t x, int32_t y, int32_t w, int32_t h) {
	return (w - x) + (h - y) < 12;
}

void AquaInternalFrameUI$ResizeBox::forwardEventToFrame($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Point, pt, $new($Point));
	$var($Component, c, getComponentToForwardTo(e, pt));
	if (c == nullptr) {
		return;
	}
	$var($Component, var$0, c);
	int32_t var$1 = $nc(e)->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = pt->x;
	int32_t var$5 = pt->y;
	int32_t var$6 = e->getClickCount();
	bool var$7 = e->isPopupTrigger();
	$nc(c)->dispatchEvent($$new($MouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, e->getButton()));
}

$Component* AquaInternalFrameUI$ResizeBox::getComponentToForwardTo($MouseEvent* e, $Point* dst) {
	$useLocalCurrentObjectStackCache();
	if ($AquaInternalFrameUI::access$6600(this->this$0) == nullptr) {
		return nullptr;
	}
	$var($Container, contentPane, $nc($($AquaInternalFrameUI::access$6700(this->this$0)))->getContentPane());
	if (contentPane == nullptr) {
		return nullptr;
	}
	$var($Point, pt, $SwingUtilities::convertPoint(this, $($nc(e)->getPoint()), contentPane));
	$var($Component, c, $SwingUtilities::getDeepestComponentAt(contentPane, $nc(pt)->x, pt->y));
	if (c == nullptr) {
		return nullptr;
	}
	$assign(pt, $SwingUtilities::convertPoint(contentPane, pt, c));
	if (dst != nullptr) {
		dst->setLocation(pt);
	}
	return c;
}

void AquaInternalFrameUI$ResizeBox::mouseClicked($MouseEvent* e) {
	forwardEventToFrame(e);
}

void AquaInternalFrameUI$ResizeBox::mouseEntered($MouseEvent* e) {
}

void AquaInternalFrameUI$ResizeBox::mouseExited($MouseEvent* e) {
}

void AquaInternalFrameUI$ResizeBox::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($AquaInternalFrameUI::access$6800(this->this$0) == nullptr) {
		return;
	}
	bool var$1 = $nc($($AquaInternalFrameUI::access$6900(this->this$0)))->isResizable();
	bool var$0 = var$1 && !$nc($($AquaInternalFrameUI::access$7000(this->this$0)))->isMaximum();
	if (var$0) {
		int32_t var$2 = $nc(e)->getX();
		int32_t var$3 = e->getY();
		int32_t var$4 = getWidth();
		var$0 = testGrowboxPoint(var$2, var$3, var$4, getHeight());
	}
	if (var$0) {
		$var($Point, var$5, $nc(e)->getPoint());
		$set(this, originalLocation, $SwingUtilities::convertPoint(this, var$5, $($AquaInternalFrameUI::access$7100(this->this$0))));
		$set(this, originalSize, $nc($($AquaInternalFrameUI::access$7200(this->this$0)))->getSize());
		$nc($($AquaInternalFrameUI::access$7400(this->this$0)))->beginResizingFrame($($AquaInternalFrameUI::access$7300(this->this$0)), $SwingConstants::SOUTH_EAST);
		return;
	}
	forwardEventToFrame(e);
}

void AquaInternalFrameUI$ResizeBox::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->originalLocation != nullptr) {
		resizeInternalFrame($($nc(e)->getPoint()));
		$set(this, originalLocation, nullptr);
		$nc($($AquaInternalFrameUI::access$7600(this->this$0)))->endResizingFrame($($AquaInternalFrameUI::access$7500(this->this$0)));
		return;
	}
	forwardEventToFrame(e);
}

void AquaInternalFrameUI$ResizeBox::mouseDragged($MouseEvent* e) {
	resizeInternalFrame($($nc(e)->getPoint()));
	repositionResizeBox();
}

void AquaInternalFrameUI$ResizeBox::mouseMoved($MouseEvent* e) {
}

void AquaInternalFrameUI$ResizeBox::mouseWheelMoved($MouseWheelEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Point, pt, $new($Point));
	$var($Component, c, getComponentToForwardTo(e, pt));
	if (c == nullptr) {
		return;
	}
	$var($Component, var$0, c);
	int32_t var$1 = $nc(e)->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = pt->x;
	int32_t var$5 = pt->y;
	int32_t var$6 = e->getXOnScreen();
	int32_t var$7 = e->getYOnScreen();
	int32_t var$8 = e->getClickCount();
	bool var$9 = e->isPopupTrigger();
	int32_t var$10 = e->getScrollType();
	int32_t var$11 = e->getScrollAmount();
	int32_t var$12 = e->getWheelRotation();
	$nc(c)->dispatchEvent($$new($MouseWheelEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, var$12, e->getPreciseWheelRotation()));
}

void AquaInternalFrameUI$ResizeBox::componentResized($ComponentEvent* e) {
	repositionResizeBox();
}

void AquaInternalFrameUI$ResizeBox::componentShown($ComponentEvent* e) {
	repositionResizeBox();
}

void AquaInternalFrameUI$ResizeBox::componentMoved($ComponentEvent* e) {
	repositionResizeBox();
}

void AquaInternalFrameUI$ResizeBox::componentHidden($ComponentEvent* e) {
}

void AquaInternalFrameUI$ResizeBox::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if (!"resizable"_s->equals($($nc(evt)->getPropertyName()))) {
		return;
	}
	$init($Boolean);
	setVisible($nc($Boolean::TRUE)->equals($($nc(evt)->getNewValue())));
}

AquaInternalFrameUI$ResizeBox::AquaInternalFrameUI$ResizeBox() {
}

$Class* AquaInternalFrameUI$ResizeBox::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$ResizeBox, name, initialize, &_AquaInternalFrameUI$ResizeBox_ClassInfo_, allocate$AquaInternalFrameUI$ResizeBox);
	return class$;
}

$Class* AquaInternalFrameUI$ResizeBox::class$ = nullptr;

		} // laf
	} // apple
} // com