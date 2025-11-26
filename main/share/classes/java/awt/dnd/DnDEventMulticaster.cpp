#include <java/awt/dnd/DnDEventMulticaster.h>

#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/dnd/DragSourceListener.h>
#include <java/awt/dnd/DragSourceMotionListener.h>
#include <java/awt/event/ComponentListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <jcpp.h>

using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $DragSourceListener = ::java::awt::dnd::DragSourceListener;
using $DragSourceMotionListener = ::java::awt::dnd::DragSourceMotionListener;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _DnDEventMulticaster_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/EventListener;Ljava/util/EventListener;)V", nullptr, $PROTECTED, $method(static_cast<void(DnDEventMulticaster::*)($EventListener*,$EventListener*)>(&DnDEventMulticaster::init$))},
	{"add", "(Ljava/awt/dnd/DragSourceListener;Ljava/awt/dnd/DragSourceListener;)Ljava/awt/dnd/DragSourceListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DragSourceListener*(*)($DragSourceListener*,$DragSourceListener*)>(&DnDEventMulticaster::add))},
	{"add", "(Ljava/awt/dnd/DragSourceMotionListener;Ljava/awt/dnd/DragSourceMotionListener;)Ljava/awt/dnd/DragSourceMotionListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DragSourceMotionListener*(*)($DragSourceMotionListener*,$DragSourceMotionListener*)>(&DnDEventMulticaster::add))},
	{"addInternal", "(Ljava/util/EventListener;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$EventListener*(*)($EventListener*,$EventListener*)>(&DnDEventMulticaster::addInternal))},
	{"dragDropEnd", "(Ljava/awt/dnd/DragSourceDropEvent;)V", nullptr, $PUBLIC},
	{"dragEnter", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dragExit", "(Ljava/awt/dnd/DragSourceEvent;)V", nullptr, $PUBLIC},
	{"dragMouseMoved", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dragOver", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dropActionChanged", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/dnd/DragSourceListener;Ljava/awt/dnd/DragSourceListener;)Ljava/awt/dnd/DragSourceListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DragSourceListener*(*)($DragSourceListener*,$DragSourceListener*)>(&DnDEventMulticaster::remove))},
	{"remove", "(Ljava/awt/dnd/DragSourceMotionListener;Ljava/awt/dnd/DragSourceMotionListener;)Ljava/awt/dnd/DragSourceMotionListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DragSourceMotionListener*(*)($DragSourceMotionListener*,$DragSourceMotionListener*)>(&DnDEventMulticaster::remove))},
	{"remove", "(Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED},
	{"removeInternal", "(Ljava/util/EventListener;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$EventListener*(*)($EventListener*,$EventListener*)>(&DnDEventMulticaster::removeInternal))},
	{"save", "(Ljava/io/ObjectOutputStream;Ljava/lang/String;Ljava/util/EventListener;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($ObjectOutputStream*,$String*,$EventListener*)>(&DnDEventMulticaster::save)), "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DnDEventMulticaster_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.dnd.DnDEventMulticaster",
	"java.awt.AWTEventMulticaster",
	"java.awt.dnd.DragSourceListener,java.awt.dnd.DragSourceMotionListener",
	nullptr,
	_DnDEventMulticaster_MethodInfo_
};

$Object* allocate$DnDEventMulticaster($Class* clazz) {
	return $of($alloc(DnDEventMulticaster));
}

int32_t DnDEventMulticaster::hashCode() {
	 return this->$AWTEventMulticaster::hashCode();
}

bool DnDEventMulticaster::equals(Object$* arg0) {
	 return this->$AWTEventMulticaster::equals(arg0);
}

$Object* DnDEventMulticaster::clone() {
	 return this->$AWTEventMulticaster::clone();
}

$String* DnDEventMulticaster::toString() {
	 return this->$AWTEventMulticaster::toString();
}

void DnDEventMulticaster::finalize() {
	this->$AWTEventMulticaster::finalize();
}

void DnDEventMulticaster::init$($EventListener* a, $EventListener* b) {
	$AWTEventMulticaster::init$(a, b);
}

void DnDEventMulticaster::dragEnter($DragSourceDragEvent* dsde) {
	$nc(($cast($DragSourceListener, this->a)))->dragEnter(dsde);
	$nc(($cast($DragSourceListener, this->b)))->dragEnter(dsde);
}

void DnDEventMulticaster::dragOver($DragSourceDragEvent* dsde) {
	$nc(($cast($DragSourceListener, this->a)))->dragOver(dsde);
	$nc(($cast($DragSourceListener, this->b)))->dragOver(dsde);
}

void DnDEventMulticaster::dropActionChanged($DragSourceDragEvent* dsde) {
	$nc(($cast($DragSourceListener, this->a)))->dropActionChanged(dsde);
	$nc(($cast($DragSourceListener, this->b)))->dropActionChanged(dsde);
}

void DnDEventMulticaster::dragExit($DragSourceEvent* dse) {
	$nc(($cast($DragSourceListener, this->a)))->dragExit(dse);
	$nc(($cast($DragSourceListener, this->b)))->dragExit(dse);
}

void DnDEventMulticaster::dragDropEnd($DragSourceDropEvent* dsde) {
	$nc(($cast($DragSourceListener, this->a)))->dragDropEnd(dsde);
	$nc(($cast($DragSourceListener, this->b)))->dragDropEnd(dsde);
}

void DnDEventMulticaster::dragMouseMoved($DragSourceDragEvent* dsde) {
	$nc(($cast($DragSourceMotionListener, this->a)))->dragMouseMoved(dsde);
	$nc(($cast($DragSourceMotionListener, this->b)))->dragMouseMoved(dsde);
}

$DragSourceListener* DnDEventMulticaster::add($DragSourceListener* a, $DragSourceListener* b) {
	$init(DnDEventMulticaster);
	return $cast($DragSourceListener, addInternal(a, b));
}

$DragSourceMotionListener* DnDEventMulticaster::add($DragSourceMotionListener* a, $DragSourceMotionListener* b) {
	$init(DnDEventMulticaster);
	return $cast($DragSourceMotionListener, addInternal(a, b));
}

$DragSourceListener* DnDEventMulticaster::remove($DragSourceListener* l, $DragSourceListener* oldl) {
	$init(DnDEventMulticaster);
	return $cast($DragSourceListener, removeInternal(l, oldl));
}

$DragSourceMotionListener* DnDEventMulticaster::remove($DragSourceMotionListener* l, $DragSourceMotionListener* ol) {
	$init(DnDEventMulticaster);
	return $cast($DragSourceMotionListener, removeInternal(l, ol));
}

$EventListener* DnDEventMulticaster::addInternal($EventListener* a, $EventListener* b) {
	$init(DnDEventMulticaster);
	if (a == nullptr) {
		return b;
	}
	if (b == nullptr) {
		return a;
	}
	return static_cast<$EventListener*>(static_cast<$ComponentListener*>(static_cast<$AWTEventMulticaster*>($new(DnDEventMulticaster, a, b))));
}

$EventListener* DnDEventMulticaster::remove($EventListener* oldl) {
	$useLocalCurrentObjectStackCache();
	if (oldl == this->a) {
		return this->b;
	}
	if (oldl == this->b) {
		return this->a;
	}
	$var($EventListener, a2, removeInternal(this->a, oldl));
	$var($EventListener, b2, removeInternal(this->b, oldl));
	if (a2 == this->a && b2 == this->b) {
		return static_cast<$EventListener*>(static_cast<$ComponentListener*>(static_cast<$AWTEventMulticaster*>(this)));
	}
	return addInternal(a2, b2);
}

$EventListener* DnDEventMulticaster::removeInternal($EventListener* l, $EventListener* oldl) {
	$init(DnDEventMulticaster);
	if (l == oldl || l == nullptr) {
		return nullptr;
	} else if ($instanceOf(DnDEventMulticaster, l)) {
		return $nc(($cast(DnDEventMulticaster, l)))->remove(oldl);
	} else {
		return l;
	}
}

void DnDEventMulticaster::save($ObjectOutputStream* s, $String* k, $EventListener* l) {
	$init(DnDEventMulticaster);
	$AWTEventMulticaster::save(s, k, l);
}

DnDEventMulticaster::DnDEventMulticaster() {
}

$Class* DnDEventMulticaster::load$($String* name, bool initialize) {
	$loadClass(DnDEventMulticaster, name, initialize, &_DnDEventMulticaster_ClassInfo_, allocate$DnDEventMulticaster);
	return class$;
}

$Class* DnDEventMulticaster::class$ = nullptr;

		} // dnd
	} // awt
} // java