#include <java/awt/Scrollbar.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Scrollbar$AccessibleAWTScrollBar.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ScrollbarPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef ADJUSTMENT_EVENT_MASK
#undef ADJUSTMENT_VALUE_CHANGED
#undef BUSY
#undef HORIZONTAL
#undef MAX_VALUE
#undef MIN_VALUE
#undef VERTICAL

using $AdjustmentListenerArray = $Array<::java::awt::event::AdjustmentListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Scrollbar$AccessibleAWTScrollBar = ::java::awt::Scrollbar$AccessibleAWTScrollBar;
using $Toolkit = ::java::awt::Toolkit;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ScrollbarPeer = ::java::awt::peer::ScrollbarPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$CompoundAttribute _Scrollbar_MethodAnnotations_getLineIncrement10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Scrollbar_MethodAnnotations_getPageIncrement15[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Scrollbar_MethodAnnotations_getVisible19[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Scrollbar_MethodAnnotations_setLineIncrement28[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Scrollbar_MethodAnnotations_setPageIncrement32[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Scrollbar_FieldInfo_[] = {
	{"HORIZONTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Scrollbar, HORIZONTAL)},
	{"VERTICAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Scrollbar, VERTICAL)},
	{"value", "I", nullptr, 0, $field(Scrollbar, value)},
	{"maximum", "I", nullptr, 0, $field(Scrollbar, maximum)},
	{"minimum", "I", nullptr, 0, $field(Scrollbar, minimum)},
	{"visibleAmount", "I", nullptr, 0, $field(Scrollbar, visibleAmount)},
	{"orientation", "I", nullptr, 0, $field(Scrollbar, orientation)},
	{"lineIncrement", "I", nullptr, 0, $field(Scrollbar, lineIncrement)},
	{"pageIncrement", "I", nullptr, 0, $field(Scrollbar, pageIncrement)},
	{"isAdjusting", "Z", nullptr, $TRANSIENT, $field(Scrollbar, isAdjusting)},
	{"adjustmentListener", "Ljava/awt/event/AdjustmentListener;", nullptr, $TRANSIENT, $field(Scrollbar, adjustmentListener)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Scrollbar, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Scrollbar, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Scrollbar, serialVersionUID)},
	{"scrollbarSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Scrollbar, scrollbarSerializedDataVersion)},
	{}
};

$MethodInfo _Scrollbar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Scrollbar::*)()>(&Scrollbar::init$)), "java.awt.HeadlessException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Scrollbar::*)(int32_t)>(&Scrollbar::init$)), "java.awt.HeadlessException"},
	{"<init>", "(IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(Scrollbar::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&Scrollbar::init$)), "java.awt.HeadlessException"},
	{"addAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getAdjustmentListeners", "()[Ljava/awt/event/AdjustmentListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getBlockIncrement", "()I", nullptr, $PUBLIC},
	{"getLineIncrement", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Scrollbar_MethodAnnotations_getLineIncrement10},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getMaximum", "()I", nullptr, $PUBLIC},
	{"getMinimum", "()I", nullptr, $PUBLIC},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"getPageIncrement", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Scrollbar_MethodAnnotations_getPageIncrement15},
	{"getUnitIncrement", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"getVisible", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Scrollbar_MethodAnnotations_getVisible19},
	{"getVisibleAmount", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Scrollbar::initIDs))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processAdjustmentEvent", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PROTECTED},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Scrollbar::*)($ObjectInputStream*)>(&Scrollbar::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"removeAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setBlockIncrement", "(I)V", nullptr, $PUBLIC},
	{"setLineIncrement", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _Scrollbar_MethodAnnotations_setLineIncrement28},
	{"setMaximum", "(I)V", nullptr, $PUBLIC},
	{"setMinimum", "(I)V", nullptr, $PUBLIC},
	{"setOrientation", "(I)V", nullptr, $PUBLIC},
	{"setPageIncrement", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _Scrollbar_MethodAnnotations_setPageIncrement32},
	{"setUnitIncrement", "(I)V", nullptr, $PUBLIC},
	{"setValue", "(I)V", nullptr, $PUBLIC},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC},
	{"setValues", "(IIII)V", nullptr, $PUBLIC},
	{"setVisibleAmount", "(I)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Scrollbar::*)($ObjectOutputStream*)>(&Scrollbar::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 25

$InnerClassInfo _Scrollbar_InnerClassesInfo_[] = {
	{"java.awt.Scrollbar$AccessibleAWTScrollBar", "java.awt.Scrollbar", "AccessibleAWTScrollBar", $PROTECTED},
	{}
};

$ClassInfo _Scrollbar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Scrollbar",
	"java.awt.Component",
	"java.awt.Adjustable,javax.accessibility.Accessible",
	_Scrollbar_FieldInfo_,
	_Scrollbar_MethodInfo_,
	nullptr,
	nullptr,
	_Scrollbar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Scrollbar$AccessibleAWTScrollBar"
};

$Object* allocate$Scrollbar($Class* clazz) {
	return $of($alloc(Scrollbar));
}

$String* Scrollbar::toString() {
	 return this->$Component::toString();
}

int32_t Scrollbar::hashCode() {
	 return this->$Component::hashCode();
}

bool Scrollbar::equals(Object$* arg0) {
	 return this->$Component::equals(arg0);
}

$Object* Scrollbar::clone() {
	 return this->$Component::clone();
}

void Scrollbar::finalize() {
	this->$Component::finalize();
}

$String* Scrollbar::base = nullptr;
int32_t Scrollbar::nameCounter = 0;

void Scrollbar::initIDs() {
	$init(Scrollbar);
	$prepareNativeStatic(Scrollbar, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Scrollbar::init$() {
	Scrollbar::init$(Scrollbar::VERTICAL, 0, 10, 0, 100);
}

void Scrollbar::init$(int32_t orientation) {
	Scrollbar::init$(orientation, 0, 10, 0, 100);
}

void Scrollbar::init$(int32_t orientation, int32_t value, int32_t visible, int32_t minimum, int32_t maximum) {
	$Component::init$();
	this->lineIncrement = 1;
	this->pageIncrement = 10;
	this->scrollbarSerializedDataVersion = 1;
	$GraphicsEnvironment::checkHeadless();
	switch (orientation) {
	case Scrollbar::HORIZONTAL:
		{}
	case Scrollbar::VERTICAL:
		{
			this->orientation = orientation;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "illegal scrollbar orientation"_s);
		}
	}
	setValues(value, visible, minimum, maximum);
}

$String* Scrollbar::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Scrollbar::class$) {
		$var($String, var$0, Scrollbar::base);
		return $concat(var$0, $$str(Scrollbar::nameCounter++));
	}
}

void Scrollbar::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createScrollbar(this));
		}
		$Component::addNotify();
	}
}

int32_t Scrollbar::getOrientation() {
	return this->orientation;
}

void Scrollbar::setOrientation(int32_t orientation) {
	$synchronized(getTreeLock()) {
		if (orientation == this->orientation) {
			return;
		}
		switch (orientation) {
		case Scrollbar::HORIZONTAL:
			{}
		case Scrollbar::VERTICAL:
			{
				this->orientation = orientation;
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException, "illegal scrollbar orientation"_s);
			}
		}
		if (this->peer != nullptr) {
			removeNotify();
			addNotify();
			invalidate();
		}
	}
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((orientation == Scrollbar::VERTICAL) ? $of($AccessibleState::HORIZONTAL) : $of($AccessibleState::VERTICAL)), ((orientation == Scrollbar::VERTICAL) ? $of($AccessibleState::VERTICAL) : $of($AccessibleState::HORIZONTAL)));
	}
}

int32_t Scrollbar::getValue() {
	return this->value;
}

void Scrollbar::setValue(int32_t newValue) {
	setValues(newValue, this->visibleAmount, this->minimum, this->maximum);
}

int32_t Scrollbar::getMinimum() {
	return this->minimum;
}

void Scrollbar::setMinimum(int32_t newMinimum) {
	setValues(this->value, this->visibleAmount, newMinimum, this->maximum);
}

int32_t Scrollbar::getMaximum() {
	return this->maximum;
}

void Scrollbar::setMaximum(int32_t newMaximum) {
	if (newMaximum == $Integer::MIN_VALUE) {
		newMaximum = $Integer::MIN_VALUE + 1;
	}
	if (this->minimum >= newMaximum) {
		this->minimum = newMaximum - 1;
	}
	setValues(this->value, this->visibleAmount, this->minimum, newMaximum);
}

int32_t Scrollbar::getVisibleAmount() {
	return getVisible();
}

int32_t Scrollbar::getVisible() {
	return this->visibleAmount;
}

void Scrollbar::setVisibleAmount(int32_t newAmount) {
	setValues(this->value, newAmount, this->minimum, this->maximum);
}

void Scrollbar::setUnitIncrement(int32_t v) {
	setLineIncrement(v);
}

void Scrollbar::setLineIncrement(int32_t v) {
	$synchronized(this) {
		int32_t tmp = (v < 1) ? 1 : v;
		if (this->lineIncrement == tmp) {
			return;
		}
		this->lineIncrement = tmp;
		$var($ScrollbarPeer, peer, $cast($ScrollbarPeer, this->peer));
		if (peer != nullptr) {
			peer->setLineIncrement(this->lineIncrement);
		}
	}
}

int32_t Scrollbar::getUnitIncrement() {
	return getLineIncrement();
}

int32_t Scrollbar::getLineIncrement() {
	return this->lineIncrement;
}

void Scrollbar::setBlockIncrement(int32_t v) {
	setPageIncrement(v);
}

void Scrollbar::setPageIncrement(int32_t v) {
	$synchronized(this) {
		int32_t tmp = (v < 1) ? 1 : v;
		if (this->pageIncrement == tmp) {
			return;
		}
		this->pageIncrement = tmp;
		$var($ScrollbarPeer, peer, $cast($ScrollbarPeer, this->peer));
		if (peer != nullptr) {
			peer->setPageIncrement(this->pageIncrement);
		}
	}
}

int32_t Scrollbar::getBlockIncrement() {
	return getPageIncrement();
}

int32_t Scrollbar::getPageIncrement() {
	return this->pageIncrement;
}

void Scrollbar::setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum) {
	$useLocalCurrentObjectStackCache();
	int32_t oldValue = 0;
	$synchronized(this) {
		if (minimum == $Integer::MAX_VALUE) {
			minimum = $Integer::MAX_VALUE - 1;
		}
		if (maximum <= minimum) {
			maximum = minimum + 1;
		}
		int64_t maxMinusMin = (int64_t)maximum - (int64_t)minimum;
		if (maxMinusMin > $Integer::MAX_VALUE) {
			maxMinusMin = $Integer::MAX_VALUE;
			maximum = minimum + (int32_t)maxMinusMin;
		}
		if (visible > (int32_t)maxMinusMin) {
			visible = (int32_t)maxMinusMin;
		}
		if (visible < 1) {
			visible = 1;
		}
		if (value < minimum) {
			value = minimum;
		}
		if (value > maximum - visible) {
			value = maximum - visible;
		}
		oldValue = this->value;
		this->value = value;
		this->visibleAmount = visible;
		this->minimum = minimum;
		this->maximum = maximum;
		$var($ScrollbarPeer, peer, $cast($ScrollbarPeer, this->peer));
		if (peer != nullptr) {
			peer->setValues(value, this->visibleAmount, minimum, maximum);
		}
	}
	if ((oldValue != value) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
		$var($Object, var$1, $of($Integer::valueOf(oldValue)));
		$nc(this->accessibleContext)->firePropertyChange(var$0, var$1, $($Integer::valueOf(value)));
	}
}

bool Scrollbar::getValueIsAdjusting() {
	return this->isAdjusting;
}

void Scrollbar::setValueIsAdjusting(bool b) {
	bool oldValue = false;
	$synchronized(this) {
		oldValue = this->isAdjusting;
		this->isAdjusting = b;
	}
	if ((oldValue != b) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldValue) ? $of($AccessibleState::BUSY) : ($Object*)nullptr), ((b) ? $of($AccessibleState::BUSY) : ($Object*)nullptr));
	}
}

void Scrollbar::addAdjustmentListener($AdjustmentListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, adjustmentListener, $AWTEventMulticaster::add(this->adjustmentListener, l));
		this->newEventsOnly = true;
	}
}

void Scrollbar::removeAdjustmentListener($AdjustmentListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, adjustmentListener, $AWTEventMulticaster::remove(this->adjustmentListener, l));
	}
}

$AdjustmentListenerArray* Scrollbar::getAdjustmentListeners() {
	$synchronized(this) {
		$load($AdjustmentListener);
		return $fcast($AdjustmentListenerArray, getListeners($AdjustmentListener::class$));
	}
}

$EventListenerArray* Scrollbar::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($AdjustmentListener);
	if (listenerType == $AdjustmentListener::class$) {
		$assign(l, this->adjustmentListener);
	} else {
		return $Component::getListeners(listenerType);
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool Scrollbar::eventEnabled($AWTEvent* e) {
	if ($nc(e)->id == $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ADJUSTMENT_EVENT_MASK)) != 0 || this->adjustmentListener != nullptr) {
			return true;
		}
		return false;
	}
	return $Component::eventEnabled(e);
}

void Scrollbar::processEvent($AWTEvent* e) {
	if ($instanceOf($AdjustmentEvent, e)) {
		processAdjustmentEvent($cast($AdjustmentEvent, e));
		return;
	}
	$Component::processEvent(e);
}

void Scrollbar::processAdjustmentEvent($AdjustmentEvent* e) {
	$var($AdjustmentListener, listener, this->adjustmentListener);
	if (listener != nullptr) {
		listener->adjustmentValueChanged(e);
	}
}

$String* Scrollbar::paramString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Component::paramString()), ",val="_s, $$str(this->value), ",vis="_s, $$str(this->visibleAmount), ",min="_s, $$str(this->minimum), ",max="_s, $$str(this->maximum), ((this->orientation == Scrollbar::VERTICAL) ? ",vert"_s : ",horz"_s), ",isAdjusting="_s, $$str(this->isAdjusting)});
}

void Scrollbar::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$init($Component);
	$AWTEventMulticaster::save(s, $Component::adjustmentListenerK, this->adjustmentListener);
	s->writeObject(nullptr);
}

void Scrollbar::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$GraphicsEnvironment::checkHeadless();
	$nc(s)->defaultReadObject();
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		$init($Component);
		if ($Component::adjustmentListenerK == key) {
			addAdjustmentListener(($cast($AdjustmentListener, $(s->readObject()))));
		} else {
			s->readObject();
		}
	}
}

$AccessibleContext* Scrollbar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Scrollbar$AccessibleAWTScrollBar, this));
	}
	return this->accessibleContext;
}

void clinit$Scrollbar($Class* class$) {
	$assignStatic(Scrollbar::base, "scrollbar"_s);
	Scrollbar::nameCounter = 0;
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Scrollbar::initIDs();
		}
	}
}

Scrollbar::Scrollbar() {
}

$Class* Scrollbar::load$($String* name, bool initialize) {
	$loadClass(Scrollbar, name, initialize, &_Scrollbar_ClassInfo_, clinit$Scrollbar, allocate$Scrollbar);
	return class$;
}

$Class* Scrollbar::class$ = nullptr;

	} // awt
} // java