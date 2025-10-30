#include <java/beans/beancontext/BeanContextChildSupport.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/beans/PropertyVetoException.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/VetoableChangeSupport.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextChild.h>
#include <java/beans/beancontext/BeanContextServiceAvailableEvent.h>
#include <java/beans/beancontext/BeanContextServiceRevokedEvent.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $VetoableChangeSupport = ::java::beans::VetoableChangeSupport;
using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextChild = ::java::beans::beancontext::BeanContextChild;
using $BeanContextServiceAvailableEvent = ::java::beans::beancontext::BeanContextServiceAvailableEvent;
using $BeanContextServiceRevokedEvent = ::java::beans::beancontext::BeanContextServiceRevokedEvent;
using $BeanContextServicesListener = ::java::beans::beancontext::BeanContextServicesListener;
using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextChildSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextChildSupport, serialVersionUID)},
	{"beanContextChildPeer", "Ljava/beans/beancontext/BeanContextChild;", nullptr, $PUBLIC, $field(BeanContextChildSupport, beanContextChildPeer)},
	{"pcSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $PROTECTED, $field(BeanContextChildSupport, pcSupport)},
	{"vcSupport", "Ljava/beans/VetoableChangeSupport;", nullptr, $PROTECTED, $field(BeanContextChildSupport, vcSupport)},
	{"beanContext", "Ljava/beans/beancontext/BeanContext;", nullptr, $PROTECTED | $TRANSIENT, $field(BeanContextChildSupport, beanContext)},
	{"rejectedSetBCOnce", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(BeanContextChildSupport, rejectedSetBCOnce)},
	{}
};

$MethodInfo _BeanContextChildSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextChildSupport::*)()>(&BeanContextChildSupport::init$))},
	{"<init>", "(Ljava/beans/beancontext/BeanContextChild;)V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextChildSupport::*)($BeanContextChild*)>(&BeanContextChildSupport::init$))},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"fireVetoableChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{"getBeanContext", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getBeanContextChildPeer", "()Ljava/beans/beancontext/BeanContextChild;", nullptr, $PUBLIC},
	{"initializeBeanContextResources", "()V", nullptr, $PROTECTED},
	{"isDelegated", "()Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BeanContextChildSupport::*)($ObjectInputStream*)>(&BeanContextChildSupport::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"releaseBeanContextResources", "()V", nullptr, $PROTECTED},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"serviceAvailable", "(Ljava/beans/beancontext/BeanContextServiceAvailableEvent;)V", nullptr, $PUBLIC},
	{"serviceRevoked", "(Ljava/beans/beancontext/BeanContextServiceRevokedEvent;)V", nullptr, $PUBLIC},
	{"setBeanContext", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.beans.PropertyVetoException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validatePendingSetBeanContext", "(Ljava/beans/beancontext/BeanContext;)Z", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BeanContextChildSupport::*)($ObjectOutputStream*)>(&BeanContextChildSupport::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _BeanContextChildSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextChildSupport",
	"java.lang.Object",
	"java.beans.beancontext.BeanContextChild,java.beans.beancontext.BeanContextServicesListener,java.io.Serializable",
	_BeanContextChildSupport_FieldInfo_,
	_BeanContextChildSupport_MethodInfo_
};

$Object* allocate$BeanContextChildSupport($Class* clazz) {
	return $of($alloc(BeanContextChildSupport));
}

int32_t BeanContextChildSupport::hashCode() {
	 return this->$BeanContextChild::hashCode();
}

bool BeanContextChildSupport::equals(Object$* arg0) {
	 return this->$BeanContextChild::equals(arg0);
}

$Object* BeanContextChildSupport::clone() {
	 return this->$BeanContextChild::clone();
}

$String* BeanContextChildSupport::toString() {
	 return this->$BeanContextChild::toString();
}

void BeanContextChildSupport::finalize() {
	this->$BeanContextChild::finalize();
}

void BeanContextChildSupport::init$() {
	$set(this, beanContextChildPeer, this);
	$set(this, pcSupport, $new($PropertyChangeSupport, this->beanContextChildPeer));
	$set(this, vcSupport, $new($VetoableChangeSupport, this->beanContextChildPeer));
}

void BeanContextChildSupport::init$($BeanContextChild* bcc) {
	$set(this, beanContextChildPeer, (bcc != nullptr) ? bcc : static_cast<$BeanContextChild*>(this));
	$set(this, pcSupport, $new($PropertyChangeSupport, this->beanContextChildPeer));
	$set(this, vcSupport, $new($VetoableChangeSupport, this->beanContextChildPeer));
}

void BeanContextChildSupport::setBeanContext($BeanContext* bc) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (bc == this->beanContext) {
			return;
		}
		$var($BeanContext, oldValue, this->beanContext);
		$var($BeanContext, newValue, bc);
		if (!this->rejectedSetBCOnce) {
			if (this->rejectedSetBCOnce = !validatePendingSetBeanContext(bc)) {
				$throwNew($PropertyVetoException, "setBeanContext() change rejected:"_s, $$new($PropertyChangeEvent, this->beanContextChildPeer, "beanContext"_s, oldValue, newValue));
			}
			try {
				fireVetoableChange("beanContext"_s, oldValue, newValue);
			} catch ($PropertyVetoException& pve) {
				this->rejectedSetBCOnce = true;
				$throw(pve);
			}
		}
		if (this->beanContext != nullptr) {
			releaseBeanContextResources();
		}
		$set(this, beanContext, newValue);
		this->rejectedSetBCOnce = false;
		firePropertyChange("beanContext"_s, oldValue, newValue);
		if (this->beanContext != nullptr) {
			initializeBeanContextResources();
		}
	}
}

$BeanContext* BeanContextChildSupport::getBeanContext() {
	$synchronized(this) {
		return this->beanContext;
	}
}

void BeanContextChildSupport::addPropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	$nc(this->pcSupport)->addPropertyChangeListener(name, pcl);
}

void BeanContextChildSupport::removePropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	$nc(this->pcSupport)->removePropertyChangeListener(name, pcl);
}

void BeanContextChildSupport::addVetoableChangeListener($String* name, $VetoableChangeListener* vcl) {
	$nc(this->vcSupport)->addVetoableChangeListener(name, vcl);
}

void BeanContextChildSupport::removeVetoableChangeListener($String* name, $VetoableChangeListener* vcl) {
	$nc(this->vcSupport)->removeVetoableChangeListener(name, vcl);
}

void BeanContextChildSupport::serviceRevoked($BeanContextServiceRevokedEvent* bcsre) {
}

void BeanContextChildSupport::serviceAvailable($BeanContextServiceAvailableEvent* bcsae) {
}

$BeanContextChild* BeanContextChildSupport::getBeanContextChildPeer() {
	return this->beanContextChildPeer;
}

bool BeanContextChildSupport::isDelegated() {
	return !$of(this)->equals(this->beanContextChildPeer);
}

void BeanContextChildSupport::firePropertyChange($String* name, Object$* oldValue, Object$* newValue) {
	$nc(this->pcSupport)->firePropertyChange(name, oldValue, newValue);
}

void BeanContextChildSupport::fireVetoableChange($String* name, Object$* oldValue, Object$* newValue) {
	$nc(this->vcSupport)->fireVetoableChange(name, oldValue, newValue);
}

bool BeanContextChildSupport::validatePendingSetBeanContext($BeanContext* newValue) {
	return true;
}

void BeanContextChildSupport::releaseBeanContextResources() {
}

void BeanContextChildSupport::initializeBeanContextResources() {
}

void BeanContextChildSupport::writeObject($ObjectOutputStream* oos) {
	if (!equals(this->beanContextChildPeer) && !($instanceOf($Serializable, this->beanContextChildPeer))) {
		$throwNew($IOException, "BeanContextChildSupport beanContextChildPeer not Serializable"_s);
	} else {
		$nc(oos)->defaultWriteObject();
	}
}

void BeanContextChildSupport::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
}

BeanContextChildSupport::BeanContextChildSupport() {
}

$Class* BeanContextChildSupport::load$($String* name, bool initialize) {
	$loadClass(BeanContextChildSupport, name, initialize, &_BeanContextChildSupport_ClassInfo_, allocate$BeanContextChildSupport);
	return class$;
}

$Class* BeanContextChildSupport::class$ = nullptr;

		} // beancontext
	} // beans
} // java