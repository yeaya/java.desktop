#include <sun/print/ServiceNotifier.h>

#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/Vector.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/HashPrintServiceAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/event/PrintServiceAttributeEvent.h>
#include <javax/print/event/PrintServiceAttributeListener.h>
#include <sun/print/AttributeUpdater.h>
#include <jcpp.h>

#undef NORM_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Vector = ::java::util::Vector;
using $PrintService = ::javax::print::PrintService;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $HashPrintServiceAttributeSet = ::javax::print::attribute::HashPrintServiceAttributeSet;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $PrintServiceAttributeEvent = ::javax::print::event::PrintServiceAttributeEvent;
using $PrintServiceAttributeListener = ::javax::print::event::PrintServiceAttributeListener;
using $AttributeUpdater = ::sun::print::AttributeUpdater;

namespace sun {
	namespace print {

$FieldInfo _ServiceNotifier_FieldInfo_[] = {
	{"service", "Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(ServiceNotifier, service)},
	{"listeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/event/PrintServiceAttributeListener;>;", $PRIVATE, $field(ServiceNotifier, listeners)},
	{"stop", "Z", nullptr, $PRIVATE, $field(ServiceNotifier, stop$)},
	{"lastSet", "Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PRIVATE, $field(ServiceNotifier, lastSet)},
	{}
};

$MethodInfo _ServiceNotifier_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/PrintService;)V", nullptr, 0, $method(static_cast<void(ServiceNotifier::*)($PrintService*)>(&ServiceNotifier::init$))},
	{"addListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, 0},
	{"isEmpty", "()Z", nullptr, 0},
	{"removeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{"stopNotifier", "()V", nullptr, 0},
	{"wake", "()V", nullptr, 0},
	{}
};

$ClassInfo _ServiceNotifier_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceNotifier",
	"java.lang.Thread",
	nullptr,
	_ServiceNotifier_FieldInfo_,
	_ServiceNotifier_MethodInfo_
};

$Object* allocate$ServiceNotifier($Class* clazz) {
	return $of($alloc(ServiceNotifier));
}

void ServiceNotifier::init$($PrintService* service) {
	$useLocalCurrentObjectStackCache();
	$Thread::init$(nullptr, nullptr, $$str({$($nc(service)->getName()), " notifier"_s}), 0, false);
	this->stop$ = false;
	$set(this, service, service);
	$set(this, listeners, $new($Vector));
	try {
		setPriority($Thread::NORM_PRIORITY - 1);
		setDaemon(true);
		start();
	} catch ($SecurityException& e) {
	}
}

void ServiceNotifier::addListener($PrintServiceAttributeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->listeners == nullptr) {
			return;
		}
		$nc(this->listeners)->add(listener);
	}
}

void ServiceNotifier::removeListener($PrintServiceAttributeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->listeners == nullptr) {
			return;
		}
		$nc(this->listeners)->remove($of(listener));
	}
}

bool ServiceNotifier::isEmpty() {
	return (this->listeners == nullptr || $nc(this->listeners)->isEmpty());
}

void ServiceNotifier::stopNotifier() {
	this->stop$ = true;
}

void ServiceNotifier::wake() {
	try {
		interrupt();
	} catch ($SecurityException& e) {
	}
}

void ServiceNotifier::run() {
	$useLocalCurrentObjectStackCache();
	int64_t minSleepTime = 15000;
	int64_t sleepTime = 2000;
	$var($HashPrintServiceAttributeSet, attrs, nullptr);
	$var($PrintServiceAttributeEvent, attrEvent, nullptr);
	$var($PrintServiceAttributeListener, listener, nullptr);
	$var($PrintServiceAttributeSet, psa, nullptr);
	while (!this->stop$) {
		try {
			$Thread::sleep(sleepTime);
		} catch ($InterruptedException& e) {
		}
		$synchronized(this) {
			if (this->listeners == nullptr) {
				continue;
			}
			int64_t startTime = $System::currentTimeMillis();
			if (this->listeners != nullptr) {
				if ($instanceOf($AttributeUpdater, this->service)) {
					$assign(psa, $nc(($cast($AttributeUpdater, this->service)))->getUpdatedAttributes());
				} else {
					$assign(psa, $nc(this->service)->getAttributes());
				}
				if (psa != nullptr && !psa->isEmpty()) {
					for (int32_t i = 0; i < $nc(this->listeners)->size(); ++i) {
						$assign(listener, $cast($PrintServiceAttributeListener, $nc(this->listeners)->elementAt(i)));
						$assign(attrs, $new($HashPrintServiceAttributeSet, psa));
						$assign(attrEvent, $new($PrintServiceAttributeEvent, this->service, attrs));
						$nc(listener)->attributeUpdate(attrEvent);
					}
				}
			}
			sleepTime = ($System::currentTimeMillis() - startTime) * 10;
			if (sleepTime < minSleepTime) {
				sleepTime = minSleepTime;
			}
		}
	}
}

ServiceNotifier::ServiceNotifier() {
}

$Class* ServiceNotifier::load$($String* name, bool initialize) {
	$loadClass(ServiceNotifier, name, initialize, &_ServiceNotifier_ClassInfo_, allocate$ServiceNotifier);
	return class$;
}

$Class* ServiceNotifier::class$ = nullptr;

	} // print
} // sun