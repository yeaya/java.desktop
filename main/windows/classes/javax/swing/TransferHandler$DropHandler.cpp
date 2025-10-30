#include <javax/swing/TransferHandler$DropHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/dnd/DropTargetContext.h>
#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetDropEvent.h>
#include <java/awt/dnd/DropTargetEvent.h>
#include <java/awt/dnd/DropTargetListener.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Scrollable.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/Timer.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/TransferHandler$HasGetTransferHandler.h>
#include <javax/swing/TransferHandler$TransferSupport.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/SwingAccessor$JTextComponentAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

#undef AUTOSCROLL_INSET
#undef HORIZONTAL
#undef VERTICAL

using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetDropEvent = ::java::awt::dnd::DropTargetDropEvent;
using $DropTargetEvent = ::java::awt::dnd::DropTargetEvent;
using $DropTargetListener = ::java::awt::dnd::DropTargetListener;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $Scrollable = ::javax::swing::Scrollable;
using $SwingConstants = ::javax::swing::SwingConstants;
using $Timer = ::javax::swing::Timer;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $TransferHandler$HasGetTransferHandler = ::javax::swing::TransferHandler$HasGetTransferHandler;
using $TransferHandler$TransferSupport = ::javax::swing::TransferHandler$TransferSupport;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JTextComponentAccessor = ::sun::swing::SwingAccessor$JTextComponentAccessor;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler$DropHandler_FieldInfo_[] = {
	{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE, $field(TransferHandler$DropHandler, timer)},
	{"lastPosition", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(TransferHandler$DropHandler, lastPosition)},
	{"outer", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(TransferHandler$DropHandler, outer)},
	{"inner", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(TransferHandler$DropHandler, inner)},
	{"hysteresis", "I", nullptr, $PRIVATE, $field(TransferHandler$DropHandler, hysteresis)},
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(TransferHandler$DropHandler, component)},
	{"state", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(TransferHandler$DropHandler, state)},
	{"support", "Ljavax/swing/TransferHandler$TransferSupport;", nullptr, $PRIVATE, $field(TransferHandler$DropHandler, support)},
	{"AUTOSCROLL_INSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransferHandler$DropHandler, AUTOSCROLL_INSET)},
	{}
};

$MethodInfo _TransferHandler$DropHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TransferHandler$DropHandler::*)()>(&TransferHandler$DropHandler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"autoscroll", "(Ljavax/swing/JComponent;Ljava/awt/Point;)V", nullptr, $PRIVATE, $method(static_cast<void(TransferHandler$DropHandler::*)($JComponent*,$Point*)>(&TransferHandler$DropHandler::autoscroll))},
	{"cleanup", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(TransferHandler$DropHandler::*)(bool)>(&TransferHandler$DropHandler::cleanup))},
	{"dragEnter", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"dragExit", "(Ljava/awt/dnd/DropTargetEvent;)V", nullptr, $PUBLIC},
	{"dragOver", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"drop", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PUBLIC},
	{"dropActionChanged", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"handleDrag", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(TransferHandler$DropHandler::*)($DropTargetDragEvent*)>(&TransferHandler$DropHandler::handleDrag))},
	{"initPropertiesIfNecessary", "()V", nullptr, $PRIVATE, $method(static_cast<void(TransferHandler$DropHandler::*)()>(&TransferHandler$DropHandler::initPropertiesIfNecessary))},
	{"setComponentDropLocation", "(Ljavax/swing/TransferHandler$TransferSupport;Z)V", nullptr, $PRIVATE, $method(static_cast<void(TransferHandler$DropHandler::*)($TransferHandler$TransferSupport*,bool)>(&TransferHandler$DropHandler::setComponentDropLocation))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAutoscrollRegion", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(TransferHandler$DropHandler::*)($JComponent*)>(&TransferHandler$DropHandler::updateAutoscrollRegion))},
	{}
};

$InnerClassInfo _TransferHandler$DropHandler_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$DropHandler", "javax.swing.TransferHandler", "DropHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransferHandler$DropHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TransferHandler$DropHandler",
	"java.lang.Object",
	"java.awt.dnd.DropTargetListener,java.io.Serializable,java.awt.event.ActionListener",
	_TransferHandler$DropHandler_FieldInfo_,
	_TransferHandler$DropHandler_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler$DropHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$DropHandler($Class* clazz) {
	return $of($alloc(TransferHandler$DropHandler));
}

int32_t TransferHandler$DropHandler::hashCode() {
	 return this->$DropTargetListener::hashCode();
}

bool TransferHandler$DropHandler::equals(Object$* arg0) {
	 return this->$DropTargetListener::equals(arg0);
}

$Object* TransferHandler$DropHandler::clone() {
	 return this->$DropTargetListener::clone();
}

$String* TransferHandler$DropHandler::toString() {
	 return this->$DropTargetListener::toString();
}

void TransferHandler$DropHandler::finalize() {
	this->$DropTargetListener::finalize();
}

void TransferHandler$DropHandler::init$() {
	$set(this, outer, $new($Rectangle));
	$set(this, inner, $new($Rectangle));
	this->hysteresis = 10;
	$set(this, support, $new($TransferHandler$TransferSupport, ($Component*)nullptr, ($DropTargetEvent*)nullptr));
}

void TransferHandler$DropHandler::updateAutoscrollRegion($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, visible, $nc(c)->getVisibleRect());
	$nc(this->outer)->setBounds($nc(visible)->x, visible->y, visible->width, visible->height);
	$var($Insets, i, $new($Insets, 0, 0, 0, 0));
	if ($instanceOf($Scrollable, c)) {
		int32_t minSize = 2 * TransferHandler$DropHandler::AUTOSCROLL_INSET;
		if ($nc(visible)->width >= minSize) {
			i->left = (i->right = TransferHandler$DropHandler::AUTOSCROLL_INSET);
		}
		if ($nc(visible)->height >= minSize) {
			i->top = (i->bottom = TransferHandler$DropHandler::AUTOSCROLL_INSET);
		}
	}
	$nc(this->inner)->setBounds($nc(visible)->x + i->left, visible->y + i->top, visible->width - (i->left + i->right), visible->height - (i->top + i->bottom));
}

void TransferHandler$DropHandler::autoscroll($JComponent* c, $Point* pos) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Scrollable, c)) {
		$var($Scrollable, s, $cast($Scrollable, c));
		if ($nc(pos)->y < $nc(this->inner)->y) {
			int32_t dy = $nc(s)->getScrollableUnitIncrement(this->outer, $SwingConstants::VERTICAL, -1);
			$var($Rectangle, r, $new($Rectangle, $nc(this->inner)->x, $nc(this->outer)->y - dy, $nc(this->inner)->width, dy));
			$nc(c)->scrollRectToVisible(r);
		} else if (pos->y > ($nc(this->inner)->y + $nc(this->inner)->height)) {
			int32_t dy = $nc(s)->getScrollableUnitIncrement(this->outer, $SwingConstants::VERTICAL, 1);
			$var($Rectangle, r, $new($Rectangle, $nc(this->inner)->x, $nc(this->outer)->y + $nc(this->outer)->height, $nc(this->inner)->width, dy));
			$nc(c)->scrollRectToVisible(r);
		}
		if ($nc(pos)->x < $nc(this->inner)->x) {
			int32_t dx = $nc(s)->getScrollableUnitIncrement(this->outer, $SwingConstants::HORIZONTAL, -1);
			$var($Rectangle, r, $new($Rectangle, $nc(this->outer)->x - dx, $nc(this->inner)->y, dx, $nc(this->inner)->height));
			$nc(c)->scrollRectToVisible(r);
		} else if (pos->x > ($nc(this->inner)->x + $nc(this->inner)->width)) {
			int32_t dx = $nc(s)->getScrollableUnitIncrement(this->outer, $SwingConstants::HORIZONTAL, 1);
			$var($Rectangle, r, $new($Rectangle, $nc(this->outer)->x + $nc(this->outer)->width, $nc(this->inner)->y, dx, $nc(this->inner)->height));
			$nc(c)->scrollRectToVisible(r);
		}
	}
}

void TransferHandler$DropHandler::initPropertiesIfNecessary() {
	$useLocalCurrentObjectStackCache();
	if (this->timer == nullptr) {
		$var($Toolkit, t, $Toolkit::getDefaultToolkit());
		$var($Integer, prop, nullptr);
		$assign(prop, $cast($Integer, $nc(t)->getDesktopProperty("DnD.Autoscroll.interval"_s)));
		$set(this, timer, $new($Timer, prop == nullptr ? 100 : $nc(prop)->intValue(), this));
		$assign(prop, $cast($Integer, t->getDesktopProperty("DnD.Autoscroll.initialDelay"_s)));
		$nc(this->timer)->setInitialDelay(prop == nullptr ? 100 : $nc(prop)->intValue());
		$assign(prop, $cast($Integer, t->getDesktopProperty("DnD.Autoscroll.cursorHysteresis"_s)));
		if (prop != nullptr) {
			this->hysteresis = prop->intValue();
		}
	}
}

void TransferHandler$DropHandler::actionPerformed($ActionEvent* e) {
	updateAutoscrollRegion($cast($JComponent, this->component));
	bool var$0 = $nc(this->outer)->contains(this->lastPosition);
	if (var$0 && !$nc(this->inner)->contains(this->lastPosition)) {
		autoscroll($cast($JComponent, this->component), this->lastPosition);
	}
}

void TransferHandler$DropHandler::setComponentDropLocation($TransferHandler$TransferSupport* support, bool forDrop) {
	$useLocalCurrentObjectStackCache();
	$var($TransferHandler$DropLocation, dropLocation, (support == nullptr) ? ($TransferHandler$DropLocation*)nullptr : $nc(support)->getDropLocation());
	if ($SunToolkit::isInstanceOf($of(this->component), "javax.swing.text.JTextComponent"_s)) {
		$set(this, state, $nc($($SwingAccessor::getJTextComponentAccessor()))->setDropLocation($cast($JTextComponent, this->component), dropLocation, this->state, forDrop));
	} else if ($instanceOf($JComponent, this->component)) {
		$set(this, state, $nc(($cast($JComponent, this->component)))->setDropLocation(dropLocation, this->state, forDrop));
	}
}

void TransferHandler$DropHandler::handleDrag($DropTargetDragEvent* e) {
	$var($TransferHandler, importer, $nc(($cast($TransferHandler$HasGetTransferHandler, this->component)))->getTransferHandler());
	if (importer == nullptr) {
		$nc(e)->rejectDrag();
		setComponentDropLocation(nullptr, false);
		return;
	}
	$nc(this->support)->setDNDVariables(this->component, e);
	bool canImport = $nc(importer)->canImport(this->support);
	if (canImport) {
		$nc(e)->acceptDrag($nc(this->support)->getDropAction());
	} else {
		$nc(e)->rejectDrag();
	}
	bool showLocation = $nc(this->support)->showDropLocationIsSet ? $nc(this->support)->showDropLocation : canImport;
	setComponentDropLocation(showLocation ? this->support : ($TransferHandler$TransferSupport*)nullptr, false);
}

void TransferHandler$DropHandler::dragEnter($DropTargetDragEvent* e) {
	$set(this, state, nullptr);
	$set(this, component, $nc($($nc(e)->getDropTargetContext()))->getComponent());
	handleDrag(e);
	if ($instanceOf($JComponent, this->component)) {
		$set(this, lastPosition, e->getLocation());
		updateAutoscrollRegion($cast($JComponent, this->component));
		initPropertiesIfNecessary();
	}
}

void TransferHandler$DropHandler::dragOver($DropTargetDragEvent* e) {
	handleDrag(e);
	if (!($instanceOf($JComponent, this->component))) {
		return;
	}
	$var($Point, p, $nc(e)->getLocation());
	bool var$0 = $Math::abs($nc(p)->x - $nc(this->lastPosition)->x) > this->hysteresis;
	if (var$0 || $Math::abs($nc(p)->y - $nc(this->lastPosition)->y) > this->hysteresis) {
		if ($nc(this->timer)->isRunning()) {
			$nc(this->timer)->stop();
		}
	} else if (!$nc(this->timer)->isRunning()) {
		$nc(this->timer)->start();
	}
	$set(this, lastPosition, p);
}

void TransferHandler$DropHandler::dragExit($DropTargetEvent* e) {
	cleanup(false);
}

void TransferHandler$DropHandler::drop($DropTargetDropEvent* e) {
	$var($TransferHandler, importer, $nc(($cast($TransferHandler$HasGetTransferHandler, this->component)))->getTransferHandler());
	if (importer == nullptr) {
		$nc(e)->rejectDrop();
		cleanup(false);
		return;
	}
	$nc(this->support)->setDNDVariables(this->component, e);
	bool canImport = $nc(importer)->canImport(this->support);
	if (canImport) {
		$nc(e)->acceptDrop($nc(this->support)->getDropAction());
		bool showLocation = $nc(this->support)->showDropLocationIsSet ? $nc(this->support)->showDropLocation : canImport;
		setComponentDropLocation(showLocation ? this->support : ($TransferHandler$TransferSupport*)nullptr, false);
		bool success = false;
		try {
			success = importer->importData(this->support);
		} catch ($RuntimeException& re) {
			success = false;
		}
		e->dropComplete(success);
		cleanup(success);
	} else {
		$nc(e)->rejectDrop();
		cleanup(false);
	}
}

void TransferHandler$DropHandler::dropActionChanged($DropTargetDragEvent* e) {
	if (this->component == nullptr) {
		return;
	}
	handleDrag(e);
}

void TransferHandler$DropHandler::cleanup(bool forDrop) {
	setComponentDropLocation(nullptr, forDrop);
	if ($instanceOf($JComponent, this->component)) {
		$nc(($cast($JComponent, this->component)))->dndDone();
	}
	if (this->timer != nullptr) {
		$nc(this->timer)->stop();
	}
	$set(this, state, nullptr);
	$set(this, component, nullptr);
	$set(this, lastPosition, nullptr);
}

TransferHandler$DropHandler::TransferHandler$DropHandler() {
}

$Class* TransferHandler$DropHandler::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$DropHandler, name, initialize, &_TransferHandler$DropHandler_ClassInfo_, allocate$TransferHandler$DropHandler);
	return class$;
}

$Class* TransferHandler$DropHandler::class$ = nullptr;

	} // swing
} // javax