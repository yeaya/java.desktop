#include <java/beans/beancontext/BeanContextSupport.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/beans/Beans.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyVetoException.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/Visibility.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextChild.h>
#include <java/beans/beancontext/BeanContextChildSupport.h>
#include <java/beans/beancontext/BeanContextMembershipEvent.h>
#include <java/beans/beancontext/BeanContextMembershipListener.h>
#include <java/beans/beancontext/BeanContextProxy.h>
#include <java/beans/beancontext/BeanContextSupport$1.h>
#include <java/beans/beancontext/BeanContextSupport$2.h>
#include <java/beans/beancontext/BeanContextSupport$BCSChild.h>
#include <java/beans/beancontext/BeanContextSupport$BCSIterator.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalStateException.h>
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
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Beans = ::java::beans::Beans;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $Visibility = ::java::beans::Visibility;
using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextChild = ::java::beans::beancontext::BeanContextChild;
using $BeanContextChildSupport = ::java::beans::beancontext::BeanContextChildSupport;
using $BeanContextMembershipEvent = ::java::beans::beancontext::BeanContextMembershipEvent;
using $BeanContextMembershipListener = ::java::beans::beancontext::BeanContextMembershipListener;
using $BeanContextProxy = ::java::beans::beancontext::BeanContextProxy;
using $BeanContextSupport$1 = ::java::beans::beancontext::BeanContextSupport$1;
using $BeanContextSupport$2 = ::java::beans::beancontext::BeanContextSupport$2;
using $BeanContextSupport$BCSChild = ::java::beans::beancontext::BeanContextSupport$BCSChild;
using $BeanContextSupport$BCSIterator = ::java::beans::beancontext::BeanContextSupport$BCSIterator;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
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

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextSupport, serialVersionUID)},
	{"children", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Object;Ljava/beans/beancontext/BeanContextSupport$BCSChild;>;", $PROTECTED | $TRANSIENT, $field(BeanContextSupport, children)},
	{"serializable", "I", nullptr, $PRIVATE, $field(BeanContextSupport, serializable)},
	{"bcmListeners", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/beans/beancontext/BeanContextMembershipListener;>;", $PROTECTED | $TRANSIENT, $field(BeanContextSupport, bcmListeners)},
	{"locale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(BeanContextSupport, locale)},
	{"okToUseGui", "Z", nullptr, $PROTECTED, $field(BeanContextSupport, okToUseGui$)},
	{"designTime", "Z", nullptr, $PROTECTED, $field(BeanContextSupport, designTime)},
	{"childPCL", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $TRANSIENT, $field(BeanContextSupport, childPCL)},
	{"childVCL", "Ljava/beans/VetoableChangeListener;", nullptr, $PRIVATE | $TRANSIENT, $field(BeanContextSupport, childVCL)},
	{"serializing", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(BeanContextSupport, serializing)},
	{}
};

$MethodInfo _BeanContextSupport_MethodInfo_[] = {
	{"*addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"*addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getBeanContext", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/beans/beancontext/BeanContext;Ljava/util/Locale;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextSupport::*)($BeanContext*,$Locale*,bool,bool)>(&BeanContextSupport::init$))},
	{"<init>", "(Ljava/beans/beancontext/BeanContext;Ljava/util/Locale;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextSupport::*)($BeanContext*,$Locale*,bool)>(&BeanContextSupport::init$))},
	{"<init>", "(Ljava/beans/beancontext/BeanContext;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextSupport::*)($BeanContext*,$Locale*)>(&BeanContextSupport::init$))},
	{"<init>", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextSupport::*)($BeanContext*)>(&BeanContextSupport::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BeanContextSupport::*)()>(&BeanContextSupport::init$))},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"addBeanContextMembershipListener", "(Ljava/beans/beancontext/BeanContextMembershipListener;)V", nullptr, $PUBLIC},
	{"avoidingGui", "()Z", nullptr, $PUBLIC},
	{"bcsChildren", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/beans/beancontext/BeanContextSupport$BCSChild;>;", $PROTECTED},
	{"bcsPreDeserializationHook", "(Ljava/io/ObjectInputStream;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"bcsPreSerializationHook", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"childDeserializedHook", "(Ljava/lang/Object;Ljava/beans/beancontext/BeanContextSupport$BCSChild;)V", nullptr, $PROTECTED},
	{"childJustAddedHook", "(Ljava/lang/Object;Ljava/beans/beancontext/BeanContextSupport$BCSChild;)V", nullptr, $PROTECTED},
	{"childJustRemovedHook", "(Ljava/lang/Object;Ljava/beans/beancontext/BeanContextSupport$BCSChild;)V", nullptr, $PROTECTED},
	{"classEquals", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PROTECTED | $STATIC | $FINAL, $method(static_cast<bool(*)($Class*,$Class*)>(&BeanContextSupport::classEquals))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"copyChildren", "()[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$ObjectArray*(BeanContextSupport::*)()>(&BeanContextSupport::copyChildren))},
	{"createBCSChild", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/beans/beancontext/BeanContextSupport$BCSChild;", nullptr, $PROTECTED},
	{"deserialize", "(Ljava/io/ObjectInputStream;Ljava/util/Collection;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(BeanContextSupport::*)($ObjectInputStream*,$Collection*)>(&BeanContextSupport::deserialize)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"dontUseGui", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"fireChildrenAdded", "(Ljava/beans/beancontext/BeanContextMembershipEvent;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(BeanContextSupport::*)($BeanContextMembershipEvent*)>(&BeanContextSupport::fireChildrenAdded))},
	{"fireChildrenRemoved", "(Ljava/beans/beancontext/BeanContextMembershipEvent;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(BeanContextSupport::*)($BeanContextMembershipEvent*)>(&BeanContextSupport::fireChildrenRemoved))},
	{"getBeanContextPeer", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC},
	{"getChildBeanContextChild", "(Ljava/lang/Object;)Ljava/beans/beancontext/BeanContextChild;", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$BeanContextChild*(*)(Object$*)>(&BeanContextSupport::getChildBeanContextChild))},
	{"getChildBeanContextMembershipListener", "(Ljava/lang/Object;)Ljava/beans/beancontext/BeanContextMembershipListener;", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$BeanContextMembershipListener*(*)(Object$*)>(&BeanContextSupport::getChildBeanContextMembershipListener))},
	{"getChildPropertyChangeListener", "(Ljava/lang/Object;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$PropertyChangeListener*(*)(Object$*)>(&BeanContextSupport::getChildPropertyChangeListener))},
	{"getChildSerializable", "(Ljava/lang/Object;)Ljava/io/Serializable;", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$Serializable*(*)(Object$*)>(&BeanContextSupport::getChildSerializable))},
	{"getChildVetoableChangeListener", "(Ljava/lang/Object;)Ljava/beans/VetoableChangeListener;", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$VetoableChangeListener*(*)(Object$*)>(&BeanContextSupport::getChildVetoableChangeListener))},
	{"getChildVisibility", "(Ljava/lang/Object;)Ljava/beans/Visibility;", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$Visibility*(*)(Object$*)>(&BeanContextSupport::getChildVisibility))},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getResource", "(Ljava/lang/String;Ljava/beans/beancontext/BeanContextChild;)Ljava/net/URL;", nullptr, $PUBLIC},
	{"getResourceAsStream", "(Ljava/lang/String;Ljava/beans/beancontext/BeanContextChild;)Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"initialize", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"instantiateChild", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"isDesignTime", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isSerializing", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/Object;>;", $PUBLIC},
	{"needsGui", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"okToUseGui", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"readChildren", "(Ljava/io/ObjectInputStream;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(BeanContextSupport::*)($ObjectInputStream*)>(&BeanContextSupport::readChildren)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(BeanContextSupport::*)($ObjectInputStream*)>(&BeanContextSupport::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;Z)Z", nullptr, $PROTECTED},
	{"removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"removeBeanContextMembershipListener", "(Ljava/beans/beancontext/BeanContextMembershipListener;)V", nullptr, $PUBLIC},
	{"*removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"*removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"serialize", "(Ljava/io/ObjectOutputStream;Ljava/util/Collection;)V", "(Ljava/io/ObjectOutputStream;Ljava/util/Collection<*>;)V", $PROTECTED | $FINAL, $method(static_cast<void(BeanContextSupport::*)($ObjectOutputStream*,$Collection*)>(&BeanContextSupport::serialize)), "java.io.IOException"},
	{"*setBeanContext", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setDesignTime", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.beans.PropertyVetoException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validatePendingAdd", "(Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{"validatePendingRemove", "(Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{"vetoableChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{"writeChildren", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(BeanContextSupport::*)($ObjectOutputStream*)>(&BeanContextSupport::writeChildren)), "java.io.IOException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(BeanContextSupport::*)($ObjectOutputStream*)>(&BeanContextSupport::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _BeanContextSupport_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextSupport$BCSChild", "java.beans.beancontext.BeanContextSupport", "BCSChild", $PROTECTED},
	{"java.beans.beancontext.BeanContextSupport$BCSIterator", "java.beans.beancontext.BeanContextSupport", "BCSIterator", $PROTECTED | $STATIC | $FINAL},
	{"java.beans.beancontext.BeanContextSupport$2", nullptr, nullptr, 0},
	{"java.beans.beancontext.BeanContextSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BeanContextSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextSupport",
	"java.beans.beancontext.BeanContextChildSupport",
	"java.beans.beancontext.BeanContext,java.beans.PropertyChangeListener,java.beans.VetoableChangeListener",
	_BeanContextSupport_FieldInfo_,
	_BeanContextSupport_MethodInfo_,
	nullptr,
	nullptr,
	_BeanContextSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextSupport$BCSChild,java.beans.beancontext.BeanContextSupport$BCSIterator,java.beans.beancontext.BeanContextSupport$2,java.beans.beancontext.BeanContextSupport$1"
};

$Object* allocate$BeanContextSupport($Class* clazz) {
	return $of($alloc(BeanContextSupport));
}

void BeanContextSupport::setBeanContext($BeanContext* bc) {
	this->$BeanContextChildSupport::setBeanContext(bc);
}

$BeanContext* BeanContextSupport::getBeanContext() {
	 return this->$BeanContextChildSupport::getBeanContext();
}

void BeanContextSupport::addPropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	this->$BeanContextChildSupport::addPropertyChangeListener(name, pcl);
}

void BeanContextSupport::removePropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	this->$BeanContextChildSupport::removePropertyChangeListener(name, pcl);
}

void BeanContextSupport::addVetoableChangeListener($String* name, $VetoableChangeListener* vcl) {
	this->$BeanContextChildSupport::addVetoableChangeListener(name, vcl);
}

void BeanContextSupport::removeVetoableChangeListener($String* name, $VetoableChangeListener* vcl) {
	this->$BeanContextChildSupport::removeVetoableChangeListener(name, vcl);
}

int32_t BeanContextSupport::hashCode() {
	 return this->$BeanContextChildSupport::hashCode();
}

bool BeanContextSupport::equals(Object$* arg0) {
	 return this->$BeanContextChildSupport::equals(arg0);
}

$Object* BeanContextSupport::clone() {
	 return this->$BeanContextChildSupport::clone();
}

$String* BeanContextSupport::toString() {
	 return this->$BeanContextChildSupport::toString();
}

void BeanContextSupport::finalize() {
	this->$BeanContextChildSupport::finalize();
}

void BeanContextSupport::init$($BeanContext* peer, $Locale* lcle, bool dTime, bool visible) {
	$BeanContextChildSupport::init$(peer);
	this->serializable = 0;
	$set(this, locale, lcle != nullptr ? lcle : $Locale::getDefault());
	this->designTime = dTime;
	this->okToUseGui$ = visible;
	initialize();
}

void BeanContextSupport::init$($BeanContext* peer, $Locale* lcle, bool dtime) {
	BeanContextSupport::init$(peer, lcle, dtime, true);
}

void BeanContextSupport::init$($BeanContext* peer, $Locale* lcle) {
	BeanContextSupport::init$(peer, lcle, false, true);
}

void BeanContextSupport::init$($BeanContext* peer) {
	BeanContextSupport::init$(peer, nullptr, false, true);
}

void BeanContextSupport::init$() {
	BeanContextSupport::init$(nullptr, nullptr, false, true);
}

$BeanContext* BeanContextSupport::getBeanContextPeer() {
	return $cast($BeanContext, getBeanContextChildPeer());
}

$Object* BeanContextSupport::instantiateChild($String* beanName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($BeanContext, bc, getBeanContextPeer());
	return $of($Beans::instantiate($($nc($of(bc))->getClass()->getClassLoader()), beanName, bc));
}

int32_t BeanContextSupport::size() {
	$synchronized(this->children) {
		return $nc(this->children)->size();
	}
}

bool BeanContextSupport::isEmpty() {
	$synchronized(this->children) {
		return $nc(this->children)->isEmpty();
	}
}

bool BeanContextSupport::contains(Object$* o) {
	$synchronized(this->children) {
		return $nc(this->children)->containsKey(o);
	}
}

bool BeanContextSupport::containsKey(Object$* o) {
	$synchronized(this->children) {
		return $nc(this->children)->containsKey(o);
	}
}

$Iterator* BeanContextSupport::iterator() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->children) {
		return $new($BeanContextSupport$BCSIterator, $($nc($($nc(this->children)->keySet()))->iterator()));
	}
}

$ObjectArray* BeanContextSupport::toArray() {
	$synchronized(this->children) {
		return $nc($($nc(this->children)->keySet()))->toArray();
	}
}

$ObjectArray* BeanContextSupport::toArray($ObjectArray* arry) {
	$synchronized(this->children) {
		return $nc($($nc(this->children)->keySet()))->toArray(arry);
	}
}

$BeanContextSupport$BCSChild* BeanContextSupport::createBCSChild(Object$* targetChild, Object$* peer) {
	return $new($BeanContextSupport$BCSChild, this, targetChild, peer);
}

bool BeanContextSupport::add(Object$* targetChild) {
	$useLocalCurrentObjectStackCache();
	if (targetChild == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	if ($nc(this->children)->containsKey(targetChild)) {
		return false;
	}
	$init($BeanContext);
	$synchronized($BeanContext::globalHierarchyLock) {
		if ($nc(this->children)->containsKey(targetChild)) {
			return false;
		}
		if (!validatePendingAdd(targetChild)) {
			$throwNew($IllegalStateException);
		}
		$var($BeanContextChild, cbcc, getChildBeanContextChild(targetChild));
		$var($BeanContextChild, bccp, nullptr);
		$synchronized(targetChild) {
			if ($instanceOf($BeanContextProxy, targetChild)) {
				$assign(bccp, $nc(($cast($BeanContextProxy, targetChild)))->getBeanContextProxy());
				if (bccp == nullptr) {
					$throwNew($NullPointerException, "BeanContextPeer.getBeanContextProxy()"_s);
				}
			}
			$var($BeanContextSupport$BCSChild, bcsc, createBCSChild(targetChild, bccp));
			$var($BeanContextSupport$BCSChild, pbcsc, nullptr);
			$synchronized(this->children) {
				$nc(this->children)->put(targetChild, bcsc);
				if (bccp != nullptr) {
					$nc(this->children)->put(bccp, $assign(pbcsc, createBCSChild(bccp, targetChild)));
				}
			}
			if (cbcc != nullptr) {
				$synchronized(cbcc) {
					try {
						cbcc->setBeanContext($(getBeanContextPeer()));
					} catch ($PropertyVetoException& pve) {
						$synchronized(this->children) {
							$nc(this->children)->remove(targetChild);
							if (bccp != nullptr) {
								$nc(this->children)->remove(bccp);
							}
						}
						$throwNew($IllegalStateException);
					}
					cbcc->addPropertyChangeListener("beanContext"_s, this->childPCL);
					cbcc->addVetoableChangeListener("beanContext"_s, this->childVCL);
				}
			}
			$var($Visibility, v, getChildVisibility(targetChild));
			if (v != nullptr) {
				if (this->okToUseGui$) {
					v->okToUseGui();
				} else {
					v->dontUseGui();
				}
			}
			if (getChildSerializable(targetChild) != nullptr) {
				++this->serializable;
			}
			childJustAddedHook(targetChild, bcsc);
			if (bccp != nullptr) {
				$assign(v, getChildVisibility(bccp));
				if (v != nullptr) {
					if (this->okToUseGui$) {
						v->okToUseGui();
					} else {
						v->dontUseGui();
					}
				}
				if (getChildSerializable(bccp) != nullptr) {
					++this->serializable;
				}
				childJustAddedHook(bccp, pbcsc);
			}
		}
		fireChildrenAdded($$new($BeanContextMembershipEvent, $(getBeanContextPeer()), bccp == nullptr ? $$new($ObjectArray, {targetChild}) : $$new($ObjectArray, {
			targetChild,
			$of(bccp)
		})));
	}
	return true;
}

bool BeanContextSupport::remove(Object$* targetChild) {
	return remove(targetChild, true);
}

bool BeanContextSupport::remove(Object$* targetChild, bool callChildSetBC) {
	$useLocalCurrentObjectStackCache();
	if (targetChild == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	$init($BeanContext);
	$synchronized($BeanContext::globalHierarchyLock) {
		if (!containsKey(targetChild)) {
			return false;
		}
		if (!validatePendingRemove(targetChild)) {
			$throwNew($IllegalStateException);
		}
		$var($BeanContextSupport$BCSChild, bcsc, $cast($BeanContextSupport$BCSChild, $nc(this->children)->get(targetChild)));
		$var($BeanContextSupport$BCSChild, pbcsc, nullptr);
		$var($Object, peer, nullptr);
		$synchronized(targetChild) {
			if (callChildSetBC) {
				$var($BeanContextChild, cbcc, getChildBeanContextChild(targetChild));
				if (cbcc != nullptr) {
					$synchronized(cbcc) {
						cbcc->removePropertyChangeListener("beanContext"_s, this->childPCL);
						cbcc->removeVetoableChangeListener("beanContext"_s, this->childVCL);
						try {
							cbcc->setBeanContext(nullptr);
						} catch ($PropertyVetoException& pve1) {
							cbcc->addPropertyChangeListener("beanContext"_s, this->childPCL);
							cbcc->addVetoableChangeListener("beanContext"_s, this->childVCL);
							$throwNew($IllegalStateException);
						}
					}
				}
			}
			$synchronized(this->children) {
				$nc(this->children)->remove(targetChild);
				if ($nc(bcsc)->isProxyPeer()) {
					$assign(pbcsc, $cast($BeanContextSupport$BCSChild, $nc(this->children)->get($assign(peer, bcsc->getProxyPeer()))));
					$nc(this->children)->remove(peer);
				}
			}
			if (getChildSerializable(targetChild) != nullptr) {
				--this->serializable;
			}
			childJustRemovedHook(targetChild, bcsc);
			if (peer != nullptr) {
				if (getChildSerializable(peer) != nullptr) {
					--this->serializable;
				}
				childJustRemovedHook(peer, pbcsc);
			}
		}
		fireChildrenRemoved($$new($BeanContextMembershipEvent, $(getBeanContextPeer()), peer == nullptr ? $$new($ObjectArray, {targetChild}) : $$new($ObjectArray, {
			targetChild,
			peer
		})));
	}
	return true;
}

bool BeanContextSupport::containsAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->children) {
		{
			$var($Iterator, i$, $nc(c)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, o, i$->next());
				if (!contains(o)) {
					return false;
				}
			}
		}
		return true;
	}
}

bool BeanContextSupport::addAll($Collection* c) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool BeanContextSupport::removeAll($Collection* c) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool BeanContextSupport::retainAll($Collection* c) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void BeanContextSupport::clear() {
	$throwNew($UnsupportedOperationException);
}

void BeanContextSupport::addBeanContextMembershipListener($BeanContextMembershipListener* bcml) {
	if (bcml == nullptr) {
		$throwNew($NullPointerException, "listener"_s);
	}
	$synchronized(this->bcmListeners) {
		if ($nc(this->bcmListeners)->contains(bcml)) {
			return;
		} else {
			$nc(this->bcmListeners)->add(bcml);
		}
	}
}

void BeanContextSupport::removeBeanContextMembershipListener($BeanContextMembershipListener* bcml) {
	if (bcml == nullptr) {
		$throwNew($NullPointerException, "listener"_s);
	}
	$synchronized(this->bcmListeners) {
		if (!$nc(this->bcmListeners)->contains(bcml)) {
			return;
		} else {
			$nc(this->bcmListeners)->remove($of(bcml));
		}
	}
}

$InputStream* BeanContextSupport::getResourceAsStream($String* name, $BeanContextChild* bcc) {
	$beforeCallerSensitive();
	if (name == nullptr) {
		$throwNew($NullPointerException, "name"_s);
	}
	if (bcc == nullptr) {
		$throwNew($NullPointerException, "bcc"_s);
	}
	if (containsKey(bcc)) {
		$var($ClassLoader, cl, $nc($of(bcc))->getClass()->getClassLoader());
		return cl != nullptr ? $nc(cl)->getResourceAsStream(name) : $ClassLoader::getSystemResourceAsStream(name);
	} else {
		$throwNew($IllegalArgumentException, "Not a valid child"_s);
	}
}

$URL* BeanContextSupport::getResource($String* name, $BeanContextChild* bcc) {
	$beforeCallerSensitive();
	if (name == nullptr) {
		$throwNew($NullPointerException, "name"_s);
	}
	if (bcc == nullptr) {
		$throwNew($NullPointerException, "bcc"_s);
	}
	if (containsKey(bcc)) {
		$var($ClassLoader, cl, $nc($of(bcc))->getClass()->getClassLoader());
		return cl != nullptr ? $nc(cl)->getResource(name) : $ClassLoader::getSystemResource(name);
	} else {
		$throwNew($IllegalArgumentException, "Not a valid child"_s);
	}
}

void BeanContextSupport::setDesignTime(bool dTime) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->designTime != dTime) {
			this->designTime = dTime;
			$var($String, var$0, "designMode"_s);
			$var($Object, var$1, $of($Boolean::valueOf(!dTime)));
			firePropertyChange(var$0, var$1, $($Boolean::valueOf(dTime)));
		}
	}
}

bool BeanContextSupport::isDesignTime() {
	$synchronized(this) {
		return this->designTime;
	}
}

void BeanContextSupport::setLocale($Locale* newLocale) {
	$synchronized(this) {
		if ((this->locale != nullptr && !$nc(this->locale)->equals(newLocale)) && newLocale != nullptr) {
			$var($Locale, old, this->locale);
			fireVetoableChange("locale"_s, old, newLocale);
			$set(this, locale, newLocale);
			firePropertyChange("locale"_s, old, newLocale);
		}
	}
}

$Locale* BeanContextSupport::getLocale() {
	$synchronized(this) {
		return this->locale;
	}
}

bool BeanContextSupport::needsGui() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($BeanContext, bc, getBeanContextPeer());
		if (!$equals(bc, this)) {
			if ($instanceOf($Visibility, bc)) {
				return $nc((static_cast<$Visibility*>(bc)))->needsGui();
			}
			if ($instanceOf($Container, bc) || $instanceOf($Component, bc)) {
				return true;
			}
		}
		$synchronized(this->children) {
			{
				$var($Iterator, i, $nc($($nc(this->children)->keySet()))->iterator());
				for (; $nc(i)->hasNext();) {
					$var($Object, c, i->next());
					try {
						return $nc(($cast($Visibility, c)))->needsGui();
					} catch ($ClassCastException& cce) {
					}
					if ($instanceOf($Container, c) || $instanceOf($Component, c)) {
						return true;
					}
				}
			}
		}
		return false;
	}
}

void BeanContextSupport::dontUseGui() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->okToUseGui$) {
			this->okToUseGui$ = false;
			$synchronized(this->children) {
				{
					$var($Iterator, i, $nc($($nc(this->children)->keySet()))->iterator());
					for (; $nc(i)->hasNext();) {
						$var($Visibility, v, getChildVisibility($(i->next())));
						if (v != nullptr) {
							v->dontUseGui();
						}
					}
				}
			}
		}
	}
}

void BeanContextSupport::okToUseGui() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!this->okToUseGui$) {
			this->okToUseGui$ = true;
			$synchronized(this->children) {
				{
					$var($Iterator, i, $nc($($nc(this->children)->keySet()))->iterator());
					for (; $nc(i)->hasNext();) {
						$var($Visibility, v, getChildVisibility($(i->next())));
						if (v != nullptr) {
							v->okToUseGui();
						}
					}
				}
			}
		}
	}
}

bool BeanContextSupport::avoidingGui() {
	return !this->okToUseGui$ && needsGui();
}

bool BeanContextSupport::isSerializing() {
	return this->serializing;
}

$Iterator* BeanContextSupport::bcsChildren() {
	$synchronized(this->children) {
		return $nc($($nc(this->children)->values()))->iterator();
	}
}

void BeanContextSupport::bcsPreSerializationHook($ObjectOutputStream* oos) {
}

void BeanContextSupport::bcsPreDeserializationHook($ObjectInputStream* ois) {
}

void BeanContextSupport::childDeserializedHook(Object$* child, $BeanContextSupport$BCSChild* bcsc) {
	$synchronized(this->children) {
		$nc(this->children)->put(child, bcsc);
	}
}

void BeanContextSupport::serialize($ObjectOutputStream* oos, $Collection* coll) {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	$var($ObjectArray, objects, $nc(coll)->toArray());
	for (int32_t i = 0; i < $nc(objects)->length; ++i) {
		if ($instanceOf($Serializable, objects->get(i))) {
			++count;
		} else {
			objects->set(i, nullptr);
		}
	}
	$nc(oos)->writeInt(count);
	for (int32_t i = 0; count > 0; ++i) {
		$var($Object0, o, $nc(objects)->get(i));
		if (o != nullptr) {
			oos->writeObject(o);
			--count;
		}
	}
}

void BeanContextSupport::deserialize($ObjectInputStream* ois, $Collection* coll) {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	count = $nc(ois)->readInt();
	while (count-- > 0) {
		$nc(coll)->add($(ois->readObject()));
	}
}

void BeanContextSupport::writeChildren($ObjectOutputStream* oos) {
	$useLocalCurrentObjectStackCache();
	if (this->serializable <= 0) {
		return;
	}
	bool prev = this->serializing;
	this->serializing = true;
	int32_t count = 0;
	$synchronized(this->children) {
		$var($Iterator, i, $nc($($nc(this->children)->entrySet()))->iterator());
		while ($nc(i)->hasNext() && count < this->serializable) {
			$var($Map$Entry, entry, $cast($Map$Entry, i->next()));
			if ($instanceOf($Serializable, $($nc(entry)->getKey()))) {
				try {
					$nc(oos)->writeObject($(entry->getKey()));
					oos->writeObject($(entry->getValue()));
				} catch ($IOException& ioe) {
					this->serializing = prev;
					$throw(ioe);
				}
				++count;
			}
		}
	}
	this->serializing = prev;
	if (count != this->serializable) {
		$throwNew($IOException, "wrote different number of children than expected"_s);
	}
}

void BeanContextSupport::writeObject($ObjectOutputStream* oos) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		this->serializing = true;
		$init($BeanContext);
		$synchronized($BeanContext::globalHierarchyLock) {
			{
				$var($Throwable, var$0, nullptr);
				try {
					$nc(oos)->defaultWriteObject();
					bcsPreSerializationHook(oos);
					if (this->serializable > 0 && $of(this)->equals($(getBeanContextPeer()))) {
						writeChildren(oos);
					}
					serialize(oos, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->bcmListeners))));
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					this->serializing = false;
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void BeanContextSupport::readChildren($ObjectInputStream* ois) {
	$useLocalCurrentObjectStackCache();
	int32_t count = this->serializable;
	while (count-- > 0) {
		$var($Object, child, $nc(ois)->readObject());
		$var($BeanContextSupport$BCSChild, bscc, $cast($BeanContextSupport$BCSChild, ois->readObject()));
		$synchronized(child) {
			$var($BeanContextChild, bcc, nullptr);
			try {
				$assign(bcc, $cast($BeanContextChild, child));
			} catch ($ClassCastException& cce) {
			}
			if (bcc != nullptr) {
				try {
					bcc->setBeanContext($(getBeanContextPeer()));
					bcc->addPropertyChangeListener("beanContext"_s, this->childPCL);
					bcc->addVetoableChangeListener("beanContext"_s, this->childVCL);
				} catch ($PropertyVetoException& pve) {
					continue;
				}
			}
			childDeserializedHook(child, bscc);
		}
	}
}

void BeanContextSupport::readObject($ObjectInputStream* ois) {
	$synchronized(this) {
		$init($BeanContext);
		$synchronized($BeanContext::globalHierarchyLock) {
			$nc(ois)->defaultReadObject();
			initialize();
			bcsPreDeserializationHook(ois);
			if (this->serializable > 0 && $of(this)->equals($(getBeanContextPeer()))) {
				readChildren(ois);
			}
			deserialize(ois, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(($set(this, bcmListeners, $new($ArrayList, 1)))))));
		}
	}
}

void BeanContextSupport::vetoableChange($PropertyChangeEvent* pce) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(pce)->getPropertyName());
	$var($Object, source, pce->getSource());
	$synchronized(this->children) {
		bool var$1 = "beanContext"_s->equals(propertyName);
		bool var$0 = var$1 && containsKey(source);
		if (var$0 && !$nc($of($(getBeanContextPeer())))->equals($(pce->getNewValue()))) {
			if (!validatePendingRemove(source)) {
				$throwNew($PropertyVetoException, "current BeanContext vetoes setBeanContext()"_s, pce);
			} else {
				$nc(($cast($BeanContextSupport$BCSChild, $($nc(this->children)->get(source)))))->setRemovePending(true);
			}
		}
	}
}

void BeanContextSupport::propertyChange($PropertyChangeEvent* pce) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(pce)->getPropertyName());
	$var($Object, source, pce->getSource());
	$synchronized(this->children) {
		bool var$1 = "beanContext"_s->equals(propertyName);
		bool var$0 = var$1 && containsKey(source);
		if (var$0 && $nc(($cast($BeanContextSupport$BCSChild, $($nc(this->children)->get(source)))))->isRemovePending()) {
			$var($BeanContext, bc, getBeanContextPeer());
			bool var$2 = $nc($of(bc))->equals($(pce->getOldValue()));
			if (var$2 && !$of(bc)->equals($(pce->getNewValue()))) {
				remove(source, false);
			} else {
				$nc(($cast($BeanContextSupport$BCSChild, $($nc(this->children)->get(source)))))->setRemovePending(false);
			}
		}
	}
}

bool BeanContextSupport::validatePendingAdd(Object$* targetChild) {
	return true;
}

bool BeanContextSupport::validatePendingRemove(Object$* targetChild) {
	return true;
}

void BeanContextSupport::childJustAddedHook(Object$* child, $BeanContextSupport$BCSChild* bcsc) {
}

void BeanContextSupport::childJustRemovedHook(Object$* child, $BeanContextSupport$BCSChild* bcsc) {
}

$Visibility* BeanContextSupport::getChildVisibility(Object$* child) {
	$init(BeanContextSupport);
	try {
		return $cast($Visibility, child);
	} catch ($ClassCastException& cce) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Serializable* BeanContextSupport::getChildSerializable(Object$* child) {
	$init(BeanContextSupport);
	try {
		return $cast($Serializable, child);
	} catch ($ClassCastException& cce) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$PropertyChangeListener* BeanContextSupport::getChildPropertyChangeListener(Object$* child) {
	$init(BeanContextSupport);
	try {
		return $cast($PropertyChangeListener, child);
	} catch ($ClassCastException& cce) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$VetoableChangeListener* BeanContextSupport::getChildVetoableChangeListener(Object$* child) {
	$init(BeanContextSupport);
	try {
		return $cast($VetoableChangeListener, child);
	} catch ($ClassCastException& cce) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$BeanContextMembershipListener* BeanContextSupport::getChildBeanContextMembershipListener(Object$* child) {
	$init(BeanContextSupport);
	try {
		return $cast($BeanContextMembershipListener, child);
	} catch ($ClassCastException& cce) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$BeanContextChild* BeanContextSupport::getChildBeanContextChild(Object$* child) {
	$init(BeanContextSupport);
	try {
		$var($BeanContextChild, bcc, $cast($BeanContextChild, child));
		if ($instanceOf($BeanContextChild, child) && $instanceOf($BeanContextProxy, child)) {
			$throwNew($IllegalArgumentException, "child cannot implement both BeanContextChild and BeanContextProxy"_s);
		} else {
			return bcc;
		}
	} catch ($ClassCastException& cce) {
		try {
			return $nc(($cast($BeanContextProxy, child)))->getBeanContextProxy();
		} catch ($ClassCastException& cce1) {
			return nullptr;
		}
	}
	$shouldNotReachHere();
}

void BeanContextSupport::fireChildrenAdded($BeanContextMembershipEvent* bcme) {
	$var($ObjectArray, copy, nullptr);
	$synchronized(this->bcmListeners) {
		$assign(copy, $nc(this->bcmListeners)->toArray());
	}
	for (int32_t i = 0; i < $nc(copy)->length; ++i) {
		$nc(($cast($BeanContextMembershipListener, copy->get(i))))->childrenAdded(bcme);
	}
}

void BeanContextSupport::fireChildrenRemoved($BeanContextMembershipEvent* bcme) {
	$var($ObjectArray, copy, nullptr);
	$synchronized(this->bcmListeners) {
		$assign(copy, $nc(this->bcmListeners)->toArray());
	}
	for (int32_t i = 0; i < $nc(copy)->length; ++i) {
		$nc(($cast($BeanContextMembershipListener, copy->get(i))))->childrenRemoved(bcme);
	}
}

void BeanContextSupport::initialize() {
	$synchronized(this) {
		$set(this, children, $new($HashMap, this->serializable + 1));
		$set(this, bcmListeners, $new($ArrayList, 1));
		$set(this, childPCL, $new($BeanContextSupport$1, this));
		$set(this, childVCL, $new($BeanContextSupport$2, this));
	}
}

$ObjectArray* BeanContextSupport::copyChildren() {
	$synchronized(this->children) {
		return $nc($($nc(this->children)->keySet()))->toArray();
	}
}

bool BeanContextSupport::classEquals($Class* first, $Class* second) {
	$init(BeanContextSupport);
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($of(first))->equals(second);
	return var$0 || $nc($($nc(first)->getName()))->equals($($nc(second)->getName()));
}

BeanContextSupport::BeanContextSupport() {
}

$Class* BeanContextSupport::load$($String* name, bool initialize) {
	$loadClass(BeanContextSupport, name, initialize, &_BeanContextSupport_ClassInfo_, allocate$BeanContextSupport);
	return class$;
}

$Class* BeanContextSupport::class$ = nullptr;

		} // beancontext
	} // beans
} // java