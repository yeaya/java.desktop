#include <javax/swing/event/EventListenerList.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef NULL_ARRAY

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $EventListener = ::java::util::EventListener;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _EventListenerList_FieldInfo_[] = {
	{"NULL_ARRAY", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EventListenerList, NULL_ARRAY)},
	{"listenerList", "[Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $TRANSIENT, $field(EventListenerList, listenerList)},
	{}
};

$MethodInfo _EventListenerList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EventListenerList::*)()>(&EventListenerList::init$))},
	{"add", "(Ljava/lang/Class;Ljava/util/EventListener;)V", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;TT;)V", $PUBLIC | $SYNCHRONIZED},
	{"getListenerCount", "()I", nullptr, $PUBLIC},
	{"getListenerCount", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC},
	{"getListenerCount", "([Ljava/lang/Object;Ljava/lang/Class;)I", "([Ljava/lang/Object;Ljava/lang/Class<*>;)I", $PRIVATE, $method(static_cast<int32_t(EventListenerList::*)($ObjectArray*,$Class*)>(&EventListenerList::getListenerCount))},
	{"getListenerList", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(EventListenerList::*)($ObjectInputStream*)>(&EventListenerList::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(Ljava/lang/Class;Ljava/util/EventListener;)V", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;TT;)V", $PUBLIC | $SYNCHRONIZED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(EventListenerList::*)($ObjectOutputStream*)>(&EventListenerList::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _EventListenerList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.EventListenerList",
	"java.lang.Object",
	"java.io.Serializable",
	_EventListenerList_FieldInfo_,
	_EventListenerList_MethodInfo_
};

$Object* allocate$EventListenerList($Class* clazz) {
	return $of($alloc(EventListenerList));
}

$ObjectArray* EventListenerList::NULL_ARRAY = nullptr;

void EventListenerList::init$() {
	$set(this, listenerList, EventListenerList::NULL_ARRAY);
}

$ObjectArray* EventListenerList::getListenerList() {
	return this->listenerList;
}

$EventListenerArray* EventListenerList::getListeners($Class* t) {
	$var($ObjectArray, lList, this->listenerList);
	int32_t n = getListenerCount(lList, t);
	$var($EventListenerArray, result, $cast($EventListenerArray, $1Array::newInstance(t, n)));
	int32_t j = 0;
	for (int32_t i = $nc(lList)->length - 2; i >= 0; i -= 2) {
		if ($equals(lList->get(i), t)) {
			$var($EventListener, tmp, $cast($EventListener, lList->get(i + 1)));
			result->set(j++, tmp);
		}
	}
	return result;
}

int32_t EventListenerList::getListenerCount() {
	return $nc(this->listenerList)->length / 2;
}

int32_t EventListenerList::getListenerCount($Class* t) {
	$var($ObjectArray, lList, this->listenerList);
	return getListenerCount(lList, t);
}

int32_t EventListenerList::getListenerCount($ObjectArray* list, $Class* t) {
	int32_t count = 0;
	for (int32_t i = 0; i < $nc(list)->length; i += 2) {
		if (t == $cast($Class, list->get(i))) {
			++count;
		}
	}
	return count;
}

void EventListenerList::add($Class* t, $EventListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		if (!$nc(t)->isInstance(l)) {
			$throwNew($IllegalArgumentException, $$str({"Listener "_s, l, " is not of type "_s, t}));
		}
		if (this->listenerList == EventListenerList::NULL_ARRAY) {
			$set(this, listenerList, $new($ObjectArray, {
				$of(t),
				$of(l)
			}));
		} else {
			int32_t i = $nc(this->listenerList)->length;
			$var($ObjectArray, tmp, $new($ObjectArray, i + 2));
			$System::arraycopy(this->listenerList, 0, tmp, 0, i);
			tmp->set(i, t);
			tmp->set(i + 1, l);
			$set(this, listenerList, tmp);
		}
	}
}

void EventListenerList::remove($Class* t, $EventListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		if (!$nc(t)->isInstance(l)) {
			$throwNew($IllegalArgumentException, $$str({"Listener "_s, l, " is not of type "_s, t}));
		}
		int32_t index = -1;
		for (int32_t i = $nc(this->listenerList)->length - 2; i >= 0; i -= 2) {
			if (($equals($nc(this->listenerList)->get(i), t)) && ($nc($of($nc(this->listenerList)->get(i + 1)))->equals(l) == true)) {
				index = i;
				break;
			}
		}
		if (index != -1) {
			$var($ObjectArray, tmp, $new($ObjectArray, $nc(this->listenerList)->length - 2));
			$System::arraycopy(this->listenerList, 0, tmp, 0, index);
			if (index < tmp->length) {
				$System::arraycopy(this->listenerList, index + 2, tmp, index, tmp->length - index);
			}
			$set(this, listenerList, (tmp->length == 0) ? EventListenerList::NULL_ARRAY : tmp);
		}
	}
}

void EventListenerList::writeObject($ObjectOutputStream* s) {
	$var($ObjectArray, lList, this->listenerList);
	$nc(s)->defaultWriteObject();
	for (int32_t i = 0; i < $nc(lList)->length; i += 2) {
		$Class* t = $cast($Class, lList->get(i));
		$var($EventListener, l, $cast($EventListener, lList->get(i + 1)));
		if ((l != nullptr) && ($instanceOf($Serializable, l))) {
			s->writeObject($($nc(t)->getName()));
			s->writeObject(l);
		}
	}
	s->writeObject(nullptr);
}

void EventListenerList::readObject($ObjectInputStream* s) {
	$beforeCallerSensitive();
	$set(this, listenerList, EventListenerList::NULL_ARRAY);
	$nc(s)->defaultReadObject();
	$var($Object, listenerTypeOrNull, nullptr);
	while (nullptr != ($assign(listenerTypeOrNull, s->readObject()))) {
		$var($ClassLoader, cl, $($Thread::currentThread())->getContextClassLoader());
		$var($EventListener, l, $cast($EventListener, s->readObject()));
		$var($String, name, $cast($String, listenerTypeOrNull));
		$ReflectUtil::checkPackageAccess(name);
		$Class* tmp = $Class::forName(name, true, cl);
		add(tmp, l);
	}
}

$String* EventListenerList::toString() {
	$var($ObjectArray, lList, this->listenerList);
	$var($String, s, "EventListenerList: "_s);
	$plusAssign(s, $$str({$$str($nc(lList)->length / 2), " listeners: "_s}));
	for (int32_t i = 0; i <= lList->length - 2; i += 2) {
		$plusAssign(s, $$str({" type "_s, $($nc(($cast($Class, lList->get(i))))->getName())}));
		$plusAssign(s, $$str({" listener "_s, lList->get(i + 1)}));
	}
	return s;
}

void clinit$EventListenerList($Class* class$) {
	$assignStatic(EventListenerList::NULL_ARRAY, $new($ObjectArray, 0));
}

EventListenerList::EventListenerList() {
}

$Class* EventListenerList::load$($String* name, bool initialize) {
	$loadClass(EventListenerList, name, initialize, &_EventListenerList_ClassInfo_, clinit$EventListenerList, allocate$EventListenerList);
	return class$;
}

$Class* EventListenerList::class$ = nullptr;

		} // event
	} // swing
} // javax