#include <java/awt/dnd/DragGestureRecognizer.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/SerializationTester.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/TooManyListenersException.h>
#include <jcpp.h>

#undef ACTION_COPY_OR_MOVE
#undef ACTION_LINK
#undef ACTION_NONE

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragSource = ::java::awt::dnd::DragSource;
using $SerializationTester = ::java::awt::dnd::SerializationTester;
using $InputEvent = ::java::awt::event::InputEvent;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $TooManyListenersException = ::java::util::TooManyListenersException;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DragGestureRecognizer_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DragGestureRecognizer, serialVersionUID)},
	{"dragSource", "Ljava/awt/dnd/DragSource;", nullptr, $PROTECTED, $field(DragGestureRecognizer, dragSource)},
	{"component", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(DragGestureRecognizer, component)},
	{"dragGestureListener", "Ljava/awt/dnd/DragGestureListener;", nullptr, $PROTECTED | $TRANSIENT, $field(DragGestureRecognizer, dragGestureListener)},
	{"sourceActions", "I", nullptr, $PROTECTED, $field(DragGestureRecognizer, sourceActions)},
	{"events", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/awt/event/InputEvent;>;", $PROTECTED, $field(DragGestureRecognizer, events)},
	{}
};

$MethodInfo _DragGestureRecognizer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)V", nullptr, $PROTECTED, $method(static_cast<void(DragGestureRecognizer::*)($DragSource*,$Component*,int32_t,$DragGestureListener*)>(&DragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;I)V", nullptr, $PROTECTED, $method(static_cast<void(DragGestureRecognizer::*)($DragSource*,$Component*,int32_t)>(&DragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;)V", nullptr, $PROTECTED, $method(static_cast<void(DragGestureRecognizer::*)($DragSource*,$Component*)>(&DragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;)V", nullptr, $PROTECTED, $method(static_cast<void(DragGestureRecognizer::*)($DragSource*)>(&DragGestureRecognizer::init$))},
	{"addDragGestureListener", "(Ljava/awt/dnd/DragGestureListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.util.TooManyListenersException"},
	{"appendEvent", "(Ljava/awt/event/InputEvent;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"fireDragGestureRecognized", "(ILjava/awt/Point;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDragSource", "()Ljava/awt/dnd/DragSource;", nullptr, $PUBLIC},
	{"getSourceActions", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getTriggerEvent", "()Ljava/awt/event/InputEvent;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DragGestureRecognizer::*)($ObjectInputStream*)>(&DragGestureRecognizer::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"registerListeners", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"removeDragGestureListener", "(Ljava/awt/dnd/DragGestureListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"resetRecognizer", "()V", nullptr, $PUBLIC},
	{"setComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setSourceActions", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"unregisterListeners", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DragGestureRecognizer::*)($ObjectOutputStream*)>(&DragGestureRecognizer::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _DragGestureRecognizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.dnd.DragGestureRecognizer",
	"java.lang.Object",
	"java.io.Serializable",
	_DragGestureRecognizer_FieldInfo_,
	_DragGestureRecognizer_MethodInfo_
};

$Object* allocate$DragGestureRecognizer($Class* clazz) {
	return $of($alloc(DragGestureRecognizer));
}

void DragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t sa, $DragGestureListener* dgl) {
	$set(this, events, $new($ArrayList, 1));
	if (ds == nullptr) {
		$throwNew($IllegalArgumentException, "null DragSource"_s);
	}
	$set(this, dragSource, ds);
	$set(this, component, c);
	this->sourceActions = (int32_t)(sa & (uint32_t)($DnDConstants::ACTION_COPY_OR_MOVE | $DnDConstants::ACTION_LINK));
	try {
		if (dgl != nullptr) {
			addDragGestureListener(dgl);
		}
	} catch ($TooManyListenersException& tmle) {
	}
}

void DragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t sa) {
	DragGestureRecognizer::init$(ds, c, sa, nullptr);
}

void DragGestureRecognizer::init$($DragSource* ds, $Component* c) {
	DragGestureRecognizer::init$(ds, c, $DnDConstants::ACTION_NONE);
}

void DragGestureRecognizer::init$($DragSource* ds) {
	DragGestureRecognizer::init$(ds, nullptr);
}

$DragSource* DragGestureRecognizer::getDragSource() {
	return this->dragSource;
}

$Component* DragGestureRecognizer::getComponent() {
	$synchronized(this) {
		return this->component;
	}
}

void DragGestureRecognizer::setComponent($Component* c) {
	$synchronized(this) {
		if (this->component != nullptr && this->dragGestureListener != nullptr) {
			unregisterListeners();
		}
		$set(this, component, c);
		if (this->component != nullptr && this->dragGestureListener != nullptr) {
			registerListeners();
		}
	}
}

int32_t DragGestureRecognizer::getSourceActions() {
	$synchronized(this) {
		return this->sourceActions;
	}
}

void DragGestureRecognizer::setSourceActions(int32_t actions) {
	$synchronized(this) {
		this->sourceActions = (int32_t)(actions & (uint32_t)($DnDConstants::ACTION_COPY_OR_MOVE | $DnDConstants::ACTION_LINK));
	}
}

$InputEvent* DragGestureRecognizer::getTriggerEvent() {
	return $nc(this->events)->isEmpty() ? ($InputEvent*)nullptr : $cast($InputEvent, $nc(this->events)->get(0));
}

void DragGestureRecognizer::resetRecognizer() {
	$nc(this->events)->clear();
}

void DragGestureRecognizer::addDragGestureListener($DragGestureListener* dgl) {
	$synchronized(this) {
		if (this->dragGestureListener != nullptr) {
			$throwNew($TooManyListenersException);
		} else {
			$set(this, dragGestureListener, dgl);
			if (this->component != nullptr) {
				registerListeners();
			}
		}
	}
}

void DragGestureRecognizer::removeDragGestureListener($DragGestureListener* dgl) {
	$synchronized(this) {
		if (this->dragGestureListener == nullptr || !$nc($of(this->dragGestureListener))->equals(dgl)) {
			$throwNew($IllegalArgumentException);
		} else {
			$set(this, dragGestureListener, nullptr);
			if (this->component != nullptr) {
				unregisterListeners();
			}
		}
	}
}

void DragGestureRecognizer::fireDragGestureRecognized(int32_t dragAction, $Point* p) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (this->dragGestureListener != nullptr) {
					$nc(this->dragGestureListener)->dragGestureRecognized($$new($DragGestureEvent, this, dragAction, p, this->events));
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->events)->clear();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void DragGestureRecognizer::appendEvent($InputEvent* awtie) {
	$synchronized(this) {
		$nc(this->events)->add(awtie);
	}
}

void DragGestureRecognizer::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeObject($SerializationTester::test(this->dragGestureListener) ? $of(this->dragGestureListener) : ($Object*)nullptr);
}

void DragGestureRecognizer::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$var($DragSource, newDragSource, $cast($DragSource, $nc(f)->get("dragSource"_s, ($Object*)nullptr)));
	if (newDragSource == nullptr) {
		$throwNew($InvalidObjectException, "null DragSource"_s);
	}
	$set(this, dragSource, newDragSource);
	$set(this, component, $cast($Component, f->get("component"_s, ($Object*)nullptr)));
	this->sourceActions = (int32_t)(f->get("sourceActions"_s, 0) & (uint32_t)($DnDConstants::ACTION_COPY_OR_MOVE | $DnDConstants::ACTION_LINK));
	$set(this, events, $cast($ArrayList, f->get("events"_s, $of($$new($ArrayList, 1)))));
	$set(this, dragGestureListener, $cast($DragGestureListener, s->readObject()));
}

DragGestureRecognizer::DragGestureRecognizer() {
}

$Class* DragGestureRecognizer::load$($String* name, bool initialize) {
	$loadClass(DragGestureRecognizer, name, initialize, &_DragGestureRecognizer_ClassInfo_, allocate$DragGestureRecognizer);
	return class$;
}

$Class* DragGestureRecognizer::class$ = nullptr;

		} // dnd
	} // awt
} // java