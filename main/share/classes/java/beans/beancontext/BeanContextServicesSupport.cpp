#include <java/beans/beancontext/BeanContextServicesSupport.h>

#include <java/beans/PropertyChangeListener.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextChild.h>
#include <java/beans/beancontext/BeanContextChildSupport.h>
#include <java/beans/beancontext/BeanContextMembershipListener.h>
#include <java/beans/beancontext/BeanContextServiceAvailableEvent.h>
#include <java/beans/beancontext/BeanContextServiceProvider.h>
#include <java/beans/beancontext/BeanContextServiceRevokedEvent.h>
#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>
#include <java/beans/beancontext/BeanContextServices.h>
#include <java/beans/beancontext/BeanContextServicesListener.h>
#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild.h>
#include <java/beans/beancontext/BeanContextServicesSupport$BCSSProxyServiceProvider.h>
#include <java/beans/beancontext/BeanContextServicesSupport$BCSSServiceProvider.h>
#include <java/beans/beancontext/BeanContextSupport$BCSChild.h>
#include <java/beans/beancontext/BeanContextSupport$BCSIterator.h>
#include <java/beans/beancontext/BeanContextSupport.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URL.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/TooManyListenersException.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextChild = ::java::beans::beancontext::BeanContextChild;
using $BeanContextMembershipListener = ::java::beans::beancontext::BeanContextMembershipListener;
using $BeanContextServiceAvailableEvent = ::java::beans::beancontext::BeanContextServiceAvailableEvent;
using $BeanContextServiceProvider = ::java::beans::beancontext::BeanContextServiceProvider;
using $BeanContextServiceRevokedEvent = ::java::beans::beancontext::BeanContextServiceRevokedEvent;
using $BeanContextServiceRevokedListener = ::java::beans::beancontext::BeanContextServiceRevokedListener;
using $BeanContextServices = ::java::beans::beancontext::BeanContextServices;
using $BeanContextServicesListener = ::java::beans::beancontext::BeanContextServicesListener;
using $BeanContextServicesSupport$BCSSChild = ::java::beans::beancontext::BeanContextServicesSupport$BCSSChild;
using $BeanContextServicesSupport$BCSSProxyServiceProvider = ::java::beans::beancontext::BeanContextServicesSupport$BCSSProxyServiceProvider;
using $BeanContextServicesSupport$BCSSServiceProvider = ::java::beans::beancontext::BeanContextServicesSupport$BCSSServiceProvider;
using $BeanContextSupport = ::java::beans::beancontext::BeanContextSupport;
using $BeanContextSupport$BCSChild = ::java::beans::beancontext::BeanContextSupport$BCSChild;
using $BeanContextSupport$BCSIterator = ::java::beans::beancontext::BeanContextSupport$BCSIterator;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URL = ::java::net::URL;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $TooManyListenersException = ::java::util::TooManyListenersException;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextServicesSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextServicesSupport, serialVersionUID)},
	{"services", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServicesSupport$BCSSServiceProvider;>;", $PROTECTED | $TRANSIENT, $field(BeanContextServicesSupport, services)},
	{"serializable", "I", nullptr, $PROTECTED | $TRANSIENT, $field(BeanContextServicesSupport, serializable)},
	{"proxy", "Ljava/beans/beancontext/BeanContextServicesSupport$BCSSProxyServiceProvider;", nullptr, $PROTECTED | $TRANSIENT, $field(BeanContextServicesSupport, proxy)},
	{"bcsListeners", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/beans/beancontext/BeanContextServicesListener;>;", $PROTECTED | $TRANSIENT, $field(BeanContextServicesSupport, bcsListeners)},
	{}
};

$MethodInfo _BeanContextServicesSupport_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*addBeanContextMembershipListener", "(Ljava/beans/beancontext/BeanContextMembershipListener;)V", nullptr, $PUBLIC},
	{"*addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"*addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"*avoidingGui", "()Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*dontUseGui", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getBeanContext", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*getResource", "(Ljava/lang/String;Ljava/beans/beancontext/BeanContextChild;)Ljava/net/URL;", nullptr, $PUBLIC},
	{"*getResourceAsStream", "(Ljava/lang/String;Ljava/beans/beancontext/BeanContextChild;)Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/beans/beancontext/BeanContextServices;Ljava/util/Locale;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextServicesSupport::*)($BeanContextServices*,$Locale*,bool,bool)>(&BeanContextServicesSupport::init$))},
	{"<init>", "(Ljava/beans/beancontext/BeanContextServices;Ljava/util/Locale;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextServicesSupport::*)($BeanContextServices*,$Locale*,bool)>(&BeanContextServicesSupport::init$))},
	{"<init>", "(Ljava/beans/beancontext/BeanContextServices;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextServicesSupport::*)($BeanContextServices*,$Locale*)>(&BeanContextServicesSupport::init$))},
	{"<init>", "(Ljava/beans/beancontext/BeanContextServices;)V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextServicesSupport::*)($BeanContextServices*)>(&BeanContextServicesSupport::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextServicesSupport::*)()>(&BeanContextServicesSupport::init$))},
	{"addBeanContextServicesListener", "(Ljava/beans/beancontext/BeanContextServicesListener;)V", nullptr, $PUBLIC},
	{"addService", "(Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;)Z", "(Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;)Z", $PUBLIC},
	{"addService", "(Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;Z)Z", "(Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;Z)Z", $PROTECTED},
	{"bcsPreDeserializationHook", "(Ljava/io/ObjectInputStream;)V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"bcsPreSerializationHook", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"childJustRemovedHook", "(Ljava/lang/Object;Ljava/beans/beancontext/BeanContextSupport$BCSChild;)V", nullptr, $PROTECTED},
	{"createBCSChild", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/beans/beancontext/BeanContextSupport$BCSChild;", nullptr, $PROTECTED},
	{"createBCSSServiceProvider", "(Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;)Ljava/beans/beancontext/BeanContextServicesSupport$BCSSServiceProvider;", "(Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;)Ljava/beans/beancontext/BeanContextServicesSupport$BCSSServiceProvider;", $PROTECTED},
	{"fireServiceAdded", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PROTECTED | $FINAL, $method(static_cast<void(BeanContextServicesSupport::*)($Class*)>(&BeanContextServicesSupport::fireServiceAdded))},
	{"fireServiceAdded", "(Ljava/beans/beancontext/BeanContextServiceAvailableEvent;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(BeanContextServicesSupport::*)($BeanContextServiceAvailableEvent*)>(&BeanContextServicesSupport::fireServiceAdded))},
	{"fireServiceRevoked", "(Ljava/beans/beancontext/BeanContextServiceRevokedEvent;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(BeanContextServicesSupport::*)($BeanContextServiceRevokedEvent*)>(&BeanContextServicesSupport::fireServiceRevoked))},
	{"fireServiceRevoked", "(Ljava/lang/Class;Z)V", "(Ljava/lang/Class<*>;Z)V", $PROTECTED | $FINAL, $method(static_cast<void(BeanContextServicesSupport::*)($Class*,bool)>(&BeanContextServicesSupport::fireServiceRevoked))},
	{"getBeanContextServicesPeer", "()Ljava/beans/beancontext/BeanContextServices;", nullptr, $PUBLIC},
	{"getChildBeanContextServicesListener", "(Ljava/lang/Object;)Ljava/beans/beancontext/BeanContextServicesListener;", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$BeanContextServicesListener*(*)(Object$*)>(&BeanContextServicesSupport::getChildBeanContextServicesListener))},
	{"getCurrentServiceClasses", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/Object;>;", $PUBLIC},
	{"getCurrentServiceSelectors", "(Ljava/lang/Class;)Ljava/util/Iterator;", "(Ljava/lang/Class<*>;)Ljava/util/Iterator<*>;", $PUBLIC},
	{"getService", "(Ljava/beans/beancontext/BeanContextChild;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServiceRevokedListener;)Ljava/lang/Object;", "(Ljava/beans/beancontext/BeanContextChild;Ljava/lang/Object;Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServiceRevokedListener;)Ljava/lang/Object;", $PUBLIC, nullptr, "java.util.TooManyListenersException"},
	{"hasService", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $SYNCHRONIZED},
	{"initialize", "()V", nullptr, $PUBLIC},
	{"initializeBeanContextResources", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"*instantiateChild", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isDesignTime", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"*needsGui", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*okToUseGui", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(BeanContextServicesSupport::*)($ObjectInputStream*)>(&BeanContextServicesSupport::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"releaseBeanContextResources", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"releaseService", "(Ljava/beans/beancontext/BeanContextChild;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeBeanContextMembershipListener", "(Ljava/beans/beancontext/BeanContextMembershipListener;)V", nullptr, $PUBLIC},
	{"removeBeanContextServicesListener", "(Ljava/beans/beancontext/BeanContextServicesListener;)V", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"*removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"revokeService", "(Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;Z)V", "(Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;Z)V", $PUBLIC},
	{"serviceAvailable", "(Ljava/beans/beancontext/BeanContextServiceAvailableEvent;)V", nullptr, $PUBLIC},
	{"serviceRevoked", "(Ljava/beans/beancontext/BeanContextServiceRevokedEvent;)V", nullptr, $PUBLIC},
	{"*setBeanContext", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setDesignTime", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(BeanContextServicesSupport::*)($ObjectOutputStream*)>(&BeanContextServicesSupport::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _BeanContextServicesSupport_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSProxyServiceProvider", "java.beans.beancontext.BeanContextServicesSupport", "BCSSProxyServiceProvider", $PROTECTED},
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSServiceProvider", "java.beans.beancontext.BeanContextServicesSupport", "BCSSServiceProvider", $PROTECTED | $STATIC},
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSChild", "java.beans.beancontext.BeanContextServicesSupport", "BCSSChild", $PROTECTED},
	{}
};

$ClassInfo _BeanContextServicesSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextServicesSupport",
	"java.beans.beancontext.BeanContextSupport",
	"java.beans.beancontext.BeanContextServices",
	_BeanContextServicesSupport_FieldInfo_,
	_BeanContextServicesSupport_MethodInfo_,
	nullptr,
	nullptr,
	_BeanContextServicesSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextServicesSupport$BCSSProxyServiceProvider,java.beans.beancontext.BeanContextServicesSupport$BCSSServiceProvider,java.beans.beancontext.BeanContextServicesSupport$BCSSChild,java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceRef,java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef"
};

$Object* allocate$BeanContextServicesSupport($Class* clazz) {
	return $of($alloc(BeanContextServicesSupport));
}

$Object* BeanContextServicesSupport::instantiateChild($String* beanName) {
	 return this->$BeanContextSupport::instantiateChild(beanName);
}

int32_t BeanContextServicesSupport::size() {
	 return this->$BeanContextSupport::size();
}

bool BeanContextServicesSupport::isEmpty() {
	 return this->$BeanContextSupport::isEmpty();
}

bool BeanContextServicesSupport::contains(Object$* o) {
	 return this->$BeanContextSupport::contains(o);
}

$Iterator* BeanContextServicesSupport::iterator() {
	 return this->$BeanContextSupport::iterator();
}

$ObjectArray* BeanContextServicesSupport::toArray() {
	 return this->$BeanContextSupport::toArray();
}

$ObjectArray* BeanContextServicesSupport::toArray($ObjectArray* arry) {
	 return this->$BeanContextSupport::toArray(arry);
}

bool BeanContextServicesSupport::add(Object$* targetChild) {
	 return this->$BeanContextSupport::add(targetChild);
}

bool BeanContextServicesSupport::remove(Object$* targetChild) {
	 return this->$BeanContextSupport::remove(targetChild);
}

bool BeanContextServicesSupport::containsAll($Collection* c) {
	 return this->$BeanContextSupport::containsAll(c);
}

bool BeanContextServicesSupport::addAll($Collection* c) {
	 return this->$BeanContextSupport::addAll(c);
}

bool BeanContextServicesSupport::removeAll($Collection* c) {
	 return this->$BeanContextSupport::removeAll(c);
}

bool BeanContextServicesSupport::retainAll($Collection* c) {
	 return this->$BeanContextSupport::retainAll(c);
}

void BeanContextServicesSupport::clear() {
	this->$BeanContextSupport::clear();
}

void BeanContextServicesSupport::addBeanContextMembershipListener($BeanContextMembershipListener* bcml) {
	this->$BeanContextSupport::addBeanContextMembershipListener(bcml);
}

void BeanContextServicesSupport::removeBeanContextMembershipListener($BeanContextMembershipListener* bcml) {
	this->$BeanContextSupport::removeBeanContextMembershipListener(bcml);
}

$InputStream* BeanContextServicesSupport::getResourceAsStream($String* name, $BeanContextChild* bcc) {
	 return this->$BeanContextSupport::getResourceAsStream(name, bcc);
}

$URL* BeanContextServicesSupport::getResource($String* name, $BeanContextChild* bcc) {
	 return this->$BeanContextSupport::getResource(name, bcc);
}

void BeanContextServicesSupport::setDesignTime(bool dTime) {
	this->$BeanContextSupport::setDesignTime(dTime);
}

bool BeanContextServicesSupport::isDesignTime() {
	 return this->$BeanContextSupport::isDesignTime();
}

bool BeanContextServicesSupport::needsGui() {
	 return this->$BeanContextSupport::needsGui();
}

void BeanContextServicesSupport::dontUseGui() {
	this->$BeanContextSupport::dontUseGui();
}

void BeanContextServicesSupport::okToUseGui() {
	this->$BeanContextSupport::okToUseGui();
}

bool BeanContextServicesSupport::avoidingGui() {
	 return this->$BeanContextSupport::avoidingGui();
}

void BeanContextServicesSupport::setBeanContext($BeanContext* bc) {
	this->$BeanContextSupport::setBeanContext(bc);
}

$BeanContext* BeanContextServicesSupport::getBeanContext() {
	 return this->$BeanContextSupport::getBeanContext();
}

void BeanContextServicesSupport::addPropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	this->$BeanContextSupport::addPropertyChangeListener(name, pcl);
}

void BeanContextServicesSupport::removePropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	this->$BeanContextSupport::removePropertyChangeListener(name, pcl);
}

void BeanContextServicesSupport::addVetoableChangeListener($String* name, $VetoableChangeListener* vcl) {
	this->$BeanContextSupport::addVetoableChangeListener(name, vcl);
}

void BeanContextServicesSupport::removeVetoableChangeListener($String* name, $VetoableChangeListener* vcl) {
	this->$BeanContextSupport::removeVetoableChangeListener(name, vcl);
}

int32_t BeanContextServicesSupport::hashCode() {
	 return this->$BeanContextSupport::hashCode();
}

bool BeanContextServicesSupport::equals(Object$* arg0) {
	 return this->$BeanContextSupport::equals(arg0);
}

$Object* BeanContextServicesSupport::clone() {
	 return this->$BeanContextSupport::clone();
}

$String* BeanContextServicesSupport::toString() {
	 return this->$BeanContextSupport::toString();
}

void BeanContextServicesSupport::finalize() {
	this->$BeanContextSupport::finalize();
}

$ObjectArray* BeanContextServicesSupport::toArray($IntFunction* arg0) {
	 return this->$BeanContextSupport::toArray(arg0);
}

bool BeanContextServicesSupport::removeIf($Predicate* arg0) {
	 return this->$BeanContextSupport::removeIf(arg0);
}

$Spliterator* BeanContextServicesSupport::spliterator() {
	 return this->$BeanContextSupport::spliterator();
}

$Stream* BeanContextServicesSupport::stream() {
	 return this->$BeanContextSupport::stream();
}

$Stream* BeanContextServicesSupport::parallelStream() {
	 return this->$BeanContextSupport::parallelStream();
}

void BeanContextServicesSupport::forEach($Consumer* arg0) {
	this->$BeanContextSupport::forEach(arg0);
}

void BeanContextServicesSupport::init$($BeanContextServices* peer, $Locale* lcle, bool dTime, bool visible) {
	$BeanContextSupport::init$(peer, lcle, dTime, visible);
	this->serializable = 0;
}

void BeanContextServicesSupport::init$($BeanContextServices* peer, $Locale* lcle, bool dtime) {
	BeanContextServicesSupport::init$(peer, lcle, dtime, true);
}

void BeanContextServicesSupport::init$($BeanContextServices* peer, $Locale* lcle) {
	BeanContextServicesSupport::init$(peer, lcle, false, true);
}

void BeanContextServicesSupport::init$($BeanContextServices* peer) {
	BeanContextServicesSupport::init$(peer, nullptr, false, true);
}

void BeanContextServicesSupport::init$() {
	BeanContextServicesSupport::init$(nullptr, nullptr, false, true);
}

void BeanContextServicesSupport::initialize() {
	$BeanContextSupport::initialize();
	$set(this, services, $new($HashMap, this->serializable + 1));
	$set(this, bcsListeners, $new($ArrayList, 1));
}

$BeanContextServices* BeanContextServicesSupport::getBeanContextServicesPeer() {
	return $cast($BeanContextServices, getBeanContextChildPeer());
}

$BeanContextSupport$BCSChild* BeanContextServicesSupport::createBCSChild(Object$* targetChild, Object$* peer) {
	return $new($BeanContextServicesSupport$BCSSChild, this, targetChild, peer);
}

$BeanContextServicesSupport$BCSSServiceProvider* BeanContextServicesSupport::createBCSSServiceProvider($Class* sc, $BeanContextServiceProvider* bcsp) {
	return $new($BeanContextServicesSupport$BCSSServiceProvider, sc, bcsp);
}

void BeanContextServicesSupport::addBeanContextServicesListener($BeanContextServicesListener* bcsl) {
	if (bcsl == nullptr) {
		$throwNew($NullPointerException, "bcsl"_s);
	}
	$synchronized(this->bcsListeners) {
		if ($nc(this->bcsListeners)->contains(bcsl)) {
			return;
		} else {
			$nc(this->bcsListeners)->add(bcsl);
		}
	}
}

void BeanContextServicesSupport::removeBeanContextServicesListener($BeanContextServicesListener* bcsl) {
	if (bcsl == nullptr) {
		$throwNew($NullPointerException, "bcsl"_s);
	}
	$synchronized(this->bcsListeners) {
		if (!$nc(this->bcsListeners)->contains(bcsl)) {
			return;
		} else {
			$nc(this->bcsListeners)->remove($of(bcsl));
		}
	}
}

bool BeanContextServicesSupport::addService($Class* serviceClass, $BeanContextServiceProvider* bcsp) {
	return addService(serviceClass, bcsp, true);
}

bool BeanContextServicesSupport::addService($Class* serviceClass, $BeanContextServiceProvider* bcsp, bool fireEvent) {
	$useLocalCurrentObjectStackCache();
	if (serviceClass == nullptr) {
		$throwNew($NullPointerException, "serviceClass"_s);
	}
	if (bcsp == nullptr) {
		$throwNew($NullPointerException, "bcsp"_s);
	}
	$init($BeanContext);
	$synchronized($BeanContext::globalHierarchyLock) {
		if ($nc(this->services)->containsKey(serviceClass)) {
			return false;
		} else {
			$nc(this->services)->put(serviceClass, $(createBCSSServiceProvider(serviceClass, bcsp)));
			if ($instanceOf($Serializable, bcsp)) {
				++this->serializable;
			}
			if (!fireEvent) {
				return true;
			}
			$var($BeanContextServiceAvailableEvent, bcssae, $new($BeanContextServiceAvailableEvent, $(getBeanContextServicesPeer()), serviceClass));
			fireServiceAdded(bcssae);
			$synchronized(this->children) {
				{
					$var($Iterator, i$, $nc($($nc(this->children)->keySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, c, i$->next());
						{
							if ($instanceOf($BeanContextServices, c)) {
								$nc(($cast($BeanContextServicesListener, c)))->serviceAvailable(bcssae);
							}
						}
					}
				}
			}
			return true;
		}
	}
}

void BeanContextServicesSupport::revokeService($Class* serviceClass, $BeanContextServiceProvider* bcsp, bool revokeCurrentServicesNow) {
	$useLocalCurrentObjectStackCache();
	if (serviceClass == nullptr) {
		$throwNew($NullPointerException, "serviceClass"_s);
	}
	if (bcsp == nullptr) {
		$throwNew($NullPointerException, "bcsp"_s);
	}
	$init($BeanContext);
	$synchronized($BeanContext::globalHierarchyLock) {
		if (!$nc(this->services)->containsKey(serviceClass)) {
			return;
		}
		$var($BeanContextServicesSupport$BCSSServiceProvider, bcsssp, $cast($BeanContextServicesSupport$BCSSServiceProvider, $nc(this->services)->get(serviceClass)));
		if (!$nc($of($($nc(bcsssp)->getServiceProvider())))->equals(bcsp)) {
			$throwNew($IllegalArgumentException, "service provider mismatch"_s);
		}
		$nc(this->services)->remove(serviceClass);
		if ($instanceOf($Serializable, bcsp)) {
			--this->serializable;
		}
		$var($Iterator, i, bcsChildren());
		while ($nc(i)->hasNext()) {
			$nc(($cast($BeanContextServicesSupport$BCSSChild, $(i->next()))))->revokeService(serviceClass, false, revokeCurrentServicesNow);
		}
		fireServiceRevoked(serviceClass, revokeCurrentServicesNow);
	}
}

bool BeanContextServicesSupport::hasService($Class* serviceClass) {
	$synchronized(this) {
		if (serviceClass == nullptr) {
			$throwNew($NullPointerException, "serviceClass"_s);
		}
		$init($BeanContext);
		$synchronized($BeanContext::globalHierarchyLock) {
			if ($nc(this->services)->containsKey(serviceClass)) {
				return true;
			}
			$var($BeanContextServices, bcs, nullptr);
			try {
				$assign(bcs, $cast($BeanContextServices, getBeanContext()));
			} catch ($ClassCastException& cce) {
				return false;
			}
			return bcs == nullptr ? false : $nc(bcs)->hasService(serviceClass);
		}
	}
}

$Object* BeanContextServicesSupport::getService($BeanContextChild* child, Object$* requestor, $Class* serviceClass, Object$* serviceSelector, $BeanContextServiceRevokedListener* bcsrl) {
	$useLocalCurrentObjectStackCache();
	if (child == nullptr) {
		$throwNew($NullPointerException, "child"_s);
	}
	if (serviceClass == nullptr) {
		$throwNew($NullPointerException, "serviceClass"_s);
	}
	if (requestor == nullptr) {
		$throwNew($NullPointerException, "requestor"_s);
	}
	if (bcsrl == nullptr) {
		$throwNew($NullPointerException, "bcsrl"_s);
	}
	$var($Object, service, nullptr);
	$var($BeanContextServicesSupport$BCSSChild, bcsc, nullptr);
	$var($BeanContextServices, bcssp, getBeanContextServicesPeer());
	$init($BeanContext);
	$synchronized($BeanContext::globalHierarchyLock) {
		$synchronized(this->children) {
			$assign(bcsc, $cast($BeanContextServicesSupport$BCSSChild, $nc(this->children)->get(child)));
		}
		if (bcsc == nullptr) {
			$throwNew($IllegalArgumentException, "not a child of this context"_s);
		}
		$var($BeanContextServicesSupport$BCSSServiceProvider, bcsssp, $cast($BeanContextServicesSupport$BCSSServiceProvider, $nc(this->services)->get(serviceClass)));
		if (bcsssp != nullptr) {
			$var($BeanContextServiceProvider, bcsp, bcsssp->getServiceProvider());
			$assign(service, $nc(bcsp)->getService(bcssp, requestor, serviceClass, serviceSelector));
			if (service != nullptr) {
				try {
					$nc(bcsc)->usingService(requestor, service, serviceClass, bcsp, false, bcsrl);
				} catch ($TooManyListenersException& tmle) {
					bcsp->releaseService(bcssp, requestor, service);
					$throw(tmle);
				} catch ($UnsupportedOperationException& uope) {
					bcsp->releaseService(bcssp, requestor, service);
					$throw(uope);
				}
				return $of(service);
			}
		}
		if (this->proxy != nullptr) {
			$assign(service, $nc(this->proxy)->getService(bcssp, requestor, serviceClass, serviceSelector));
			if (service != nullptr) {
				try {
					$nc(bcsc)->usingService(requestor, service, serviceClass, this->proxy, true, bcsrl);
				} catch ($TooManyListenersException& tmle) {
					$nc(this->proxy)->releaseService(bcssp, requestor, service);
					$throw(tmle);
				} catch ($UnsupportedOperationException& uope) {
					$nc(this->proxy)->releaseService(bcssp, requestor, service);
					$throw(uope);
				}
				return $of(service);
			}
		}
	}
	return $of(nullptr);
}

void BeanContextServicesSupport::releaseService($BeanContextChild* child, Object$* requestor, Object$* service) {
	if (child == nullptr) {
		$throwNew($NullPointerException, "child"_s);
	}
	if (requestor == nullptr) {
		$throwNew($NullPointerException, "requestor"_s);
	}
	if (service == nullptr) {
		$throwNew($NullPointerException, "service"_s);
	}
	$var($BeanContextServicesSupport$BCSSChild, bcsc, nullptr);
	$init($BeanContext);
	$synchronized($BeanContext::globalHierarchyLock) {
		$synchronized(this->children) {
			$assign(bcsc, $cast($BeanContextServicesSupport$BCSSChild, $nc(this->children)->get(child)));
		}
		if (bcsc != nullptr) {
			bcsc->releaseService(requestor, service);
		} else {
			$throwNew($IllegalArgumentException, "child actual is not a child of this BeanContext"_s);
		}
	}
}

$Iterator* BeanContextServicesSupport::getCurrentServiceClasses() {
	$useLocalCurrentObjectStackCache();
	return $new($BeanContextSupport$BCSIterator, $($nc($($nc(this->services)->keySet()))->iterator()));
}

$Iterator* BeanContextServicesSupport::getCurrentServiceSelectors($Class* serviceClass) {
	$useLocalCurrentObjectStackCache();
	$var($BeanContextServicesSupport$BCSSServiceProvider, bcsssp, $cast($BeanContextServicesSupport$BCSSServiceProvider, $nc(this->services)->get(serviceClass)));
	return bcsssp != nullptr ? static_cast<$Iterator*>($new($BeanContextSupport$BCSIterator, $($nc($($nc(bcsssp)->getServiceProvider()))->getCurrentServiceSelectors($(getBeanContextServicesPeer()), serviceClass)))) : ($Iterator*)nullptr;
}

void BeanContextServicesSupport::serviceAvailable($BeanContextServiceAvailableEvent* bcssae) {
	$useLocalCurrentObjectStackCache();
	$init($BeanContext);
	$synchronized($BeanContext::globalHierarchyLock) {
		if ($nc(this->services)->containsKey($nc(bcssae)->getServiceClass())) {
			return;
		}
		fireServiceAdded(bcssae);
		$var($Iterator, i, nullptr);
		$synchronized(this->children) {
			$assign(i, $nc($($nc(this->children)->keySet()))->iterator());
		}
		while ($nc(i)->hasNext()) {
			$var($Object, c, i->next());
			if ($instanceOf($BeanContextServices, c)) {
				$nc(($cast($BeanContextServicesListener, c)))->serviceAvailable(bcssae);
			}
		}
	}
}

void BeanContextServicesSupport::serviceRevoked($BeanContextServiceRevokedEvent* bcssre) {
	$useLocalCurrentObjectStackCache();
	$init($BeanContext);
	$synchronized($BeanContext::globalHierarchyLock) {
		if ($nc(this->services)->containsKey($nc(bcssre)->getServiceClass())) {
			return;
		}
		fireServiceRevoked(bcssre);
		$var($Iterator, i, nullptr);
		$synchronized(this->children) {
			$assign(i, $nc($($nc(this->children)->keySet()))->iterator());
		}
		while ($nc(i)->hasNext()) {
			$var($Object, c, i->next());
			if ($instanceOf($BeanContextServices, c)) {
				$nc(($cast($BeanContextServicesListener, c)))->serviceRevoked(bcssre);
			}
		}
	}
}

$BeanContextServicesListener* BeanContextServicesSupport::getChildBeanContextServicesListener(Object$* child) {
	$init(BeanContextServicesSupport);
	try {
		return $cast($BeanContextServicesListener, child);
	} catch ($ClassCastException& cce) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void BeanContextServicesSupport::childJustRemovedHook(Object$* child, $BeanContextSupport$BCSChild* bcsc) {
	$var($BeanContextServicesSupport$BCSSChild, bcssc, $cast($BeanContextServicesSupport$BCSSChild, bcsc));
	$nc(bcssc)->cleanupReferences();
}

void BeanContextServicesSupport::releaseBeanContextResources() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ObjectArray, bcssc, nullptr);
		$BeanContextSupport::releaseBeanContextResources();
		$synchronized(this->children) {
			if ($nc(this->children)->isEmpty()) {
				return;
			}
			$assign(bcssc, $nc($($nc(this->children)->values()))->toArray());
		}
		for (int32_t i = 0; i < $nc(bcssc)->length; ++i) {
			$nc(($cast($BeanContextServicesSupport$BCSSChild, bcssc->get(i))))->revokeAllDelegatedServicesNow();
		}
		$set(this, proxy, nullptr);
	}
}

void BeanContextServicesSupport::initializeBeanContextResources() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$BeanContextSupport::initializeBeanContextResources();
		$var($BeanContext, nbc, getBeanContext());
		if (nbc == nullptr) {
			return;
		}
		try {
			$var($BeanContextServices, bcs, $cast($BeanContextServices, nbc));
			$set(this, proxy, $new($BeanContextServicesSupport$BCSSProxyServiceProvider, this, bcs));
		} catch ($ClassCastException& cce) {
		}
	}
}

void BeanContextServicesSupport::fireServiceAdded($Class* serviceClass) {
	$useLocalCurrentObjectStackCache();
	$var($BeanContextServiceAvailableEvent, bcssae, $new($BeanContextServiceAvailableEvent, $(getBeanContextServicesPeer()), serviceClass));
	fireServiceAdded(bcssae);
}

void BeanContextServicesSupport::fireServiceAdded($BeanContextServiceAvailableEvent* bcssae) {
	$var($ObjectArray, copy, nullptr);
	$synchronized(this->bcsListeners) {
		$assign(copy, $nc(this->bcsListeners)->toArray());
	}
	for (int32_t i = 0; i < $nc(copy)->length; ++i) {
		$nc(($cast($BeanContextServicesListener, copy->get(i))))->serviceAvailable(bcssae);
	}
}

void BeanContextServicesSupport::fireServiceRevoked($BeanContextServiceRevokedEvent* bcsre) {
	$var($ObjectArray, copy, nullptr);
	$synchronized(this->bcsListeners) {
		$assign(copy, $nc(this->bcsListeners)->toArray());
	}
	for (int32_t i = 0; i < $nc(copy)->length; ++i) {
		$nc(($cast($BeanContextServiceRevokedListener, copy->get(i))))->serviceRevoked(bcsre);
	}
}

void BeanContextServicesSupport::fireServiceRevoked($Class* serviceClass, bool revokeNow) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, copy, nullptr);
	$var($BeanContextServiceRevokedEvent, bcsre, $new($BeanContextServiceRevokedEvent, $(getBeanContextServicesPeer()), serviceClass, revokeNow));
	$synchronized(this->bcsListeners) {
		$assign(copy, $nc(this->bcsListeners)->toArray());
	}
	for (int32_t i = 0; i < $nc(copy)->length; ++i) {
		$nc(($cast($BeanContextServicesListener, copy->get(i))))->serviceRevoked(bcsre);
	}
}

void BeanContextServicesSupport::bcsPreSerializationHook($ObjectOutputStream* oos) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$nc(oos)->writeInt(this->serializable);
		if (this->serializable <= 0) {
			return;
		}
		int32_t count = 0;
		$var($Iterator, i, $nc($($nc(this->services)->entrySet()))->iterator());
		while ($nc(i)->hasNext() && count < this->serializable) {
			$var($Map$Entry, entry, $cast($Map$Entry, i->next()));
			$var($BeanContextServicesSupport$BCSSServiceProvider, bcsp, nullptr);
			try {
				$assign(bcsp, $cast($BeanContextServicesSupport$BCSSServiceProvider, $nc(entry)->getValue()));
			} catch ($ClassCastException& cce) {
				continue;
			}
			if ($instanceOf($Serializable, $($nc(bcsp)->getServiceProvider()))) {
				oos->writeObject($($nc(entry)->getKey()));
				oos->writeObject(bcsp);
				++count;
			}
		}
		if (count != this->serializable) {
			$throwNew($IOException, "wrote different number of service providers than expected"_s);
		}
	}
}

void BeanContextServicesSupport::bcsPreDeserializationHook($ObjectInputStream* ois) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		this->serializable = $nc(ois)->readInt();
		int32_t count = this->serializable;
		while (count > 0) {
			$var($Object, var$0, ois->readObject());
			$nc(this->services)->put(var$0, $cast($BeanContextServicesSupport$BCSSServiceProvider, $(ois->readObject())));
			--count;
		}
	}
}

void BeanContextServicesSupport::writeObject($ObjectOutputStream* oos) {
	$synchronized(this) {
		$nc(oos)->defaultWriteObject();
		serialize(oos, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->bcsListeners))));
	}
}

void BeanContextServicesSupport::readObject($ObjectInputStream* ois) {
	$synchronized(this) {
		$nc(ois)->defaultReadObject();
		deserialize(ois, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->bcsListeners))));
	}
}

BeanContextServicesSupport::BeanContextServicesSupport() {
}

$Class* BeanContextServicesSupport::load$($String* name, bool initialize) {
	$loadClass(BeanContextServicesSupport, name, initialize, &_BeanContextServicesSupport_ClassInfo_, allocate$BeanContextServicesSupport);
	return class$;
}

$Class* BeanContextServicesSupport::class$ = nullptr;

		} // beancontext
	} // beans
} // java