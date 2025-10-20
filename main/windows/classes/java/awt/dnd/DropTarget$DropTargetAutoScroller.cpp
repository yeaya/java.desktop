#include <java/awt/dnd/DropTarget$DropTargetAutoScroller.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/dnd/Autoscroll.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Autoscroll = ::java::awt::dnd::Autoscroll;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::javax::swing::Timer;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DropTarget$DropTargetAutoScroller_FieldInfo_[] = {
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, component)},
	{"autoScroll", "Ljava/awt/dnd/Autoscroll;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, autoScroll)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, timer)},
	{"locn", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, locn)},
	{"prev", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, prev)},
	{"outer", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, outer)},
	{"inner", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, inner)},
	{"hysteresis", "I", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, hysteresis)},
	{}
};

$MethodInfo _DropTarget$DropTargetAutoScroller_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/awt/Point;)V", nullptr, $PROTECTED, $method(static_cast<void(DropTarget$DropTargetAutoScroller::*)($Component*,$Point*)>(&DropTarget$DropTargetAutoScroller::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"stop", "()V", nullptr, $PROTECTED},
	{"updateLocation", "(Ljava/awt/Point;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"updateRegion", "()V", nullptr, $PRIVATE, $method(static_cast<void(DropTarget$DropTargetAutoScroller::*)()>(&DropTarget$DropTargetAutoScroller::updateRegion))},
	{}
};

$InnerClassInfo _DropTarget$DropTargetAutoScroller_InnerClassesInfo_[] = {
	{"java.awt.dnd.DropTarget$DropTargetAutoScroller", "java.awt.dnd.DropTarget", "DropTargetAutoScroller", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _DropTarget$DropTargetAutoScroller_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DropTarget$DropTargetAutoScroller",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_DropTarget$DropTargetAutoScroller_FieldInfo_,
	_DropTarget$DropTargetAutoScroller_MethodInfo_,
	nullptr,
	nullptr,
	_DropTarget$DropTargetAutoScroller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.dnd.DropTarget"
};

$Object* allocate$DropTarget$DropTargetAutoScroller($Class* clazz) {
	return $of($alloc(DropTarget$DropTargetAutoScroller));
}

void DropTarget$DropTargetAutoScroller::init$($Component* c, $Point* p) {
	$useLocalCurrentObjectStackCache();
	$set(this, outer, $new($Rectangle));
	$set(this, inner, $new($Rectangle));
	this->hysteresis = 10;
	$set(this, component, c);
	$set(this, autoScroll, $cast($Autoscroll, this->component));
	$var($Toolkit, t, $Toolkit::getDefaultToolkit());
	$var($Integer, initial, $Integer::valueOf(100));
	$var($Integer, interval, $Integer::valueOf(100));
	try {
		$assign(initial, $cast($Integer, $nc(t)->getDesktopProperty("DnD.Autoscroll.initialDelay"_s)));
	} catch ($Exception&) {
		$catch();
	}
	try {
		$assign(interval, $cast($Integer, $nc(t)->getDesktopProperty("DnD.Autoscroll.interval"_s)));
	} catch ($Exception&) {
		$catch();
	}
	$set(this, timer, $new($Timer, $nc(interval)->intValue(), this));
	$nc(this->timer)->setCoalesce(true);
	$nc(this->timer)->setInitialDelay($nc(initial)->intValue());
	$set(this, locn, p);
	$set(this, prev, p);
	try {
		this->hysteresis = $nc(($cast($Integer, $($nc(t)->getDesktopProperty("DnD.Autoscroll.cursorHysteresis"_s)))))->intValue();
	} catch ($Exception&) {
		$catch();
	}
	$nc(this->timer)->start();
}

void DropTarget$DropTargetAutoScroller::updateRegion() {
	$useLocalCurrentObjectStackCache();
	$var($Insets, i, $nc(this->autoScroll)->getAutoscrollInsets());
	$var($Dimension, size, $nc(this->component)->getSize());
	if ($nc(size)->width != $nc(this->outer)->width || $nc(size)->height != $nc(this->outer)->height) {
		$nc(this->outer)->reshape(0, 0, size->width, size->height);
	}
	if ($nc(this->inner)->x != $nc(i)->left || $nc(this->inner)->y != $nc(i)->top) {
		$nc(this->inner)->setLocation(i->left, i->top);
	}
	int32_t newWidth = $nc(size)->width - ($nc(i)->left + i->right);
	int32_t newHeight = size->height - (i->top + i->bottom);
	if (newWidth != $nc(this->inner)->width || newHeight != $nc(this->inner)->height) {
		$nc(this->inner)->setSize(newWidth, newHeight);
	}
}

void DropTarget$DropTargetAutoScroller::updateLocation($Point* newLocn) {
	$synchronized(this) {
		$set(this, prev, this->locn);
		$set(this, locn, newLocn);
		bool var$0 = $Math::abs($nc(this->locn)->x - $nc(this->prev)->x) > this->hysteresis;
		if (var$0 || $Math::abs($nc(this->locn)->y - $nc(this->prev)->y) > this->hysteresis) {
			if ($nc(this->timer)->isRunning()) {
				$nc(this->timer)->stop();
			}
		} else if (!$nc(this->timer)->isRunning()) {
			$nc(this->timer)->start();
		}
	}
}

void DropTarget$DropTargetAutoScroller::stop() {
	$nc(this->timer)->stop();
}

void DropTarget$DropTargetAutoScroller::actionPerformed($ActionEvent* e) {
	$synchronized(this) {
		updateRegion();
		bool var$0 = $nc(this->outer)->contains(this->locn);
		if (var$0 && !$nc(this->inner)->contains(this->locn)) {
			$nc(this->autoScroll)->autoscroll(this->locn);
		}
	}
}

DropTarget$DropTargetAutoScroller::DropTarget$DropTargetAutoScroller() {
}

$Class* DropTarget$DropTargetAutoScroller::load$($String* name, bool initialize) {
	$loadClass(DropTarget$DropTargetAutoScroller, name, initialize, &_DropTarget$DropTargetAutoScroller_ClassInfo_, allocate$DropTarget$DropTargetAutoScroller);
	return class$;
}

$Class* DropTarget$DropTargetAutoScroller::class$ = nullptr;

		} // dnd
	} // awt
} // java