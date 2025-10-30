#include <java/awt/Toolkit$DesktopPropertyChangeSupport.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Toolkit$DesktopPropertyChangeSupport$1.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/lang/Runnable.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef PROP_CHANGE_SUPPORT_KEY
#undef ULTIMATE_PRIORITY_EVENT

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Toolkit = ::java::awt::Toolkit;
using $Toolkit$DesktopPropertyChangeSupport$1 = ::java::awt::Toolkit$DesktopPropertyChangeSupport$1;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $AppContext = ::sun::awt::AppContext;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

$FieldInfo _Toolkit$DesktopPropertyChangeSupport_FieldInfo_[] = {
	{"PROP_CHANGE_SUPPORT_KEY", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Toolkit$DesktopPropertyChangeSupport, PROP_CHANGE_SUPPORT_KEY)},
	{"source", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Toolkit$DesktopPropertyChangeSupport, source)},
	{}
};

$MethodInfo _Toolkit$DesktopPropertyChangeSupport_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Toolkit$DesktopPropertyChangeSupport::*)(Object$*)>(&Toolkit$DesktopPropertyChangeSupport::init$))},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"firePropertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _Toolkit$DesktopPropertyChangeSupport_InnerClassesInfo_[] = {
	{"java.awt.Toolkit$DesktopPropertyChangeSupport", "java.awt.Toolkit", "DesktopPropertyChangeSupport", $PRIVATE | $STATIC},
	{"java.awt.Toolkit$DesktopPropertyChangeSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Toolkit$DesktopPropertyChangeSupport_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Toolkit$DesktopPropertyChangeSupport",
	"java.beans.PropertyChangeSupport",
	nullptr,
	_Toolkit$DesktopPropertyChangeSupport_FieldInfo_,
	_Toolkit$DesktopPropertyChangeSupport_MethodInfo_,
	nullptr,
	nullptr,
	_Toolkit$DesktopPropertyChangeSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Toolkit"
};

$Object* allocate$Toolkit$DesktopPropertyChangeSupport($Class* clazz) {
	return $of($alloc(Toolkit$DesktopPropertyChangeSupport));
}

$StringBuilder* Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY = nullptr;

void Toolkit$DesktopPropertyChangeSupport::init$(Object$* sourceBean) {
	$PropertyChangeSupport::init$(sourceBean);
	$set(this, source, sourceBean);
}

void Toolkit$DesktopPropertyChangeSupport::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($PropertyChangeSupport, pcs, $cast($PropertyChangeSupport, $nc($($AppContext::getAppContext()))->get(Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY)));
		if (nullptr == pcs) {
			$assign(pcs, $new($PropertyChangeSupport, this->source));
			$nc($($AppContext::getAppContext()))->put(Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY, pcs);
		}
		$nc(pcs)->addPropertyChangeListener(propertyName, listener);
	}
}

void Toolkit$DesktopPropertyChangeSupport::removePropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($PropertyChangeSupport, pcs, $cast($PropertyChangeSupport, $nc($($AppContext::getAppContext()))->get(Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY)));
		if (nullptr != pcs) {
			pcs->removePropertyChangeListener(propertyName, listener);
		}
	}
}

$PropertyChangeListenerArray* Toolkit$DesktopPropertyChangeSupport::getPropertyChangeListeners() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($PropertyChangeSupport, pcs, $cast($PropertyChangeSupport, $nc($($AppContext::getAppContext()))->get(Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY)));
		if (nullptr != pcs) {
			return pcs->getPropertyChangeListeners();
		} else {
			return $new($PropertyChangeListenerArray, 0);
		}
	}
}

$PropertyChangeListenerArray* Toolkit$DesktopPropertyChangeSupport::getPropertyChangeListeners($String* propertyName) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($PropertyChangeSupport, pcs, $cast($PropertyChangeSupport, $nc($($AppContext::getAppContext()))->get(Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY)));
		if (nullptr != pcs) {
			return pcs->getPropertyChangeListeners(propertyName);
		} else {
			return $new($PropertyChangeListenerArray, 0);
		}
	}
}

void Toolkit$DesktopPropertyChangeSupport::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($PropertyChangeSupport, pcs, $cast($PropertyChangeSupport, $nc($($AppContext::getAppContext()))->get(Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY)));
		if (nullptr == pcs) {
			$assign(pcs, $new($PropertyChangeSupport, this->source));
			$nc($($AppContext::getAppContext()))->put(Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY, pcs);
		}
		$nc(pcs)->addPropertyChangeListener(listener);
	}
}

void Toolkit$DesktopPropertyChangeSupport::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($PropertyChangeSupport, pcs, $cast($PropertyChangeSupport, $nc($($AppContext::getAppContext()))->get(Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY)));
		if (nullptr != pcs) {
			pcs->removePropertyChangeListener(listener);
		}
	}
}

void Toolkit$DesktopPropertyChangeSupport::firePropertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($Object, oldValue, $nc(evt)->getOldValue());
	$var($Object, newValue, evt->getNewValue());
	$var($String, propertyName, evt->getPropertyName());
	if (oldValue != nullptr && newValue != nullptr && $of(oldValue)->equals(newValue)) {
		return;
	}
	$var($Runnable, updater, $new($Toolkit$DesktopPropertyChangeSupport$1, this, evt));
	$var($AppContext, currentAppContext, $AppContext::getAppContext());
	{
		$var($Iterator, i$, $nc($($AppContext::getAppContexts()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AppContext, appContext, $cast($AppContext, i$->next()));
			{
				if (nullptr == appContext || $nc(appContext)->isDisposed()) {
					continue;
				}
				if (currentAppContext == appContext) {
					updater->run();
				} else {
					$var($PeerEvent, e, $new($PeerEvent, this->source, updater, $PeerEvent::ULTIMATE_PRIORITY_EVENT));
					$SunToolkit::postEvent(appContext, e);
				}
			}
		}
	}
}

void clinit$Toolkit$DesktopPropertyChangeSupport($Class* class$) {
	$assignStatic(Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY, $new($StringBuilder, "desktop property change support key"_s));
}

Toolkit$DesktopPropertyChangeSupport::Toolkit$DesktopPropertyChangeSupport() {
}

$Class* Toolkit$DesktopPropertyChangeSupport::load$($String* name, bool initialize) {
	$loadClass(Toolkit$DesktopPropertyChangeSupport, name, initialize, &_Toolkit$DesktopPropertyChangeSupport_ClassInfo_, clinit$Toolkit$DesktopPropertyChangeSupport, allocate$Toolkit$DesktopPropertyChangeSupport);
	return class$;
}

$Class* Toolkit$DesktopPropertyChangeSupport::class$ = nullptr;

	} // awt
} // java