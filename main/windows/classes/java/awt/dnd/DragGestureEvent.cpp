#include <java/awt/dnd/DragGestureEvent.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/DragSourceListener.h>
#include <java/awt/dnd/SerializationTester.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/EventObject.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef ACTION_LINK
#undef ACTION_MOVE

using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $DragSourceListener = ::java::awt::dnd::DragSourceListener;
using $SerializationTester = ::java::awt::dnd::SerializationTester;
using $InputEvent = ::java::awt::event::InputEvent;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $EventObject = ::java::util::EventObject;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DragGestureEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DragGestureEvent, serialVersionUID)},
	{"events", "Ljava/util/List;", nullptr, $PRIVATE | $TRANSIENT, $field(DragGestureEvent, events)},
	{"dragSource", "Ljava/awt/dnd/DragSource;", nullptr, $PRIVATE, $field(DragGestureEvent, dragSource)},
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(DragGestureEvent, component)},
	{"origin", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(DragGestureEvent, origin)},
	{"action", "I", nullptr, $PRIVATE, $field(DragGestureEvent, action)},
	{}
};

$MethodInfo _DragGestureEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragGestureRecognizer;ILjava/awt/Point;Ljava/util/List;)V", "(Ljava/awt/dnd/DragGestureRecognizer;ILjava/awt/Point;Ljava/util/List<+Ljava/awt/event/InputEvent;>;)V", $PUBLIC, $method(static_cast<void(DragGestureEvent::*)($DragGestureRecognizer*,int32_t,$Point*,$List*)>(&DragGestureEvent::init$))},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getDragAction", "()I", nullptr, $PUBLIC},
	{"getDragOrigin", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getDragSource", "()Ljava/awt/dnd/DragSource;", nullptr, $PUBLIC},
	{"getSourceAsDragGestureRecognizer", "()Ljava/awt/dnd/DragGestureRecognizer;", nullptr, $PUBLIC},
	{"getTriggerEvent", "()Ljava/awt/event/InputEvent;", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/awt/event/InputEvent;>;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DragGestureEvent::*)($ObjectInputStream*)>(&DragGestureEvent::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"startDrag", "(Ljava/awt/Cursor;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"startDrag", "(Ljava/awt/Cursor;Ljava/awt/datatransfer/Transferable;Ljava/awt/dnd/DragSourceListener;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"startDrag", "(Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;Ljava/awt/datatransfer/Transferable;Ljava/awt/dnd/DragSourceListener;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DragGestureEvent::*)($ObjectOutputStream*)>(&DragGestureEvent::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _DragGestureEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DragGestureEvent",
	"java.util.EventObject",
	nullptr,
	_DragGestureEvent_FieldInfo_,
	_DragGestureEvent_MethodInfo_
};

$Object* allocate$DragGestureEvent($Class* clazz) {
	return $of($alloc(DragGestureEvent));
}

void DragGestureEvent::init$($DragGestureRecognizer* dgr, int32_t act, $Point* ori, $List* evs) {
	$EventObject::init$(dgr);
	if (($assignField(this, component, $nc(dgr)->getComponent())) == nullptr) {
		$throwNew($IllegalArgumentException, "null component"_s);
	}
	if (($assignField(this, dragSource, $nc(dgr)->getDragSource())) == nullptr) {
		$throwNew($IllegalArgumentException, "null DragSource"_s);
	}
	if (evs == nullptr || $nc(evs)->isEmpty()) {
		$throwNew($IllegalArgumentException, "null or empty list of events"_s);
	}
	if (act != $DnDConstants::ACTION_COPY && act != $DnDConstants::ACTION_MOVE && act != $DnDConstants::ACTION_LINK) {
		$throwNew($IllegalArgumentException, "bad action"_s);
	}
	if (ori == nullptr) {
		$throwNew($IllegalArgumentException, "null origin"_s);
	}
	$set(this, events, evs);
	this->action = act;
	$set(this, origin, ori);
}

$DragGestureRecognizer* DragGestureEvent::getSourceAsDragGestureRecognizer() {
	return $cast($DragGestureRecognizer, getSource());
}

$Component* DragGestureEvent::getComponent() {
	return this->component;
}

$DragSource* DragGestureEvent::getDragSource() {
	return this->dragSource;
}

$Point* DragGestureEvent::getDragOrigin() {
	return this->origin;
}

$Iterator* DragGestureEvent::iterator() {
	return $nc(this->events)->iterator();
}

$ObjectArray* DragGestureEvent::toArray() {
	return $nc(this->events)->toArray();
}

$ObjectArray* DragGestureEvent::toArray($ObjectArray* array) {
	return $nc(this->events)->toArray(array);
}

int32_t DragGestureEvent::getDragAction() {
	return this->action;
}

$InputEvent* DragGestureEvent::getTriggerEvent() {
	return $nc($(getSourceAsDragGestureRecognizer()))->getTriggerEvent();
}

void DragGestureEvent::startDrag($Cursor* dragCursor, $Transferable* transferable) {
	$nc(this->dragSource)->startDrag(this, dragCursor, transferable, nullptr);
}

void DragGestureEvent::startDrag($Cursor* dragCursor, $Transferable* transferable, $DragSourceListener* dsl) {
	$nc(this->dragSource)->startDrag(this, dragCursor, transferable, dsl);
}

void DragGestureEvent::startDrag($Cursor* dragCursor, $Image* dragImage, $Point* imageOffset, $Transferable* transferable, $DragSourceListener* dsl) {
	$nc(this->dragSource)->startDrag(this, dragCursor, dragImage, imageOffset, transferable, dsl);
}

void DragGestureEvent::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeObject($SerializationTester::test(this->events) ? $of(this->events) : ($Object*)nullptr);
}

void DragGestureEvent::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$var($DragSource, newDragSource, $cast($DragSource, $nc(f)->get("dragSource"_s, ($Object*)nullptr)));
	if (newDragSource == nullptr) {
		$throwNew($InvalidObjectException, "null DragSource"_s);
	}
	$set(this, dragSource, newDragSource);
	$var($Component, newComponent, $cast($Component, f->get("component"_s, ($Object*)nullptr)));
	if (newComponent == nullptr) {
		$throwNew($InvalidObjectException, "null component"_s);
	}
	$set(this, component, newComponent);
	$var($Point, newOrigin, $cast($Point, f->get("origin"_s, ($Object*)nullptr)));
	if (newOrigin == nullptr) {
		$throwNew($InvalidObjectException, "null origin"_s);
	}
	$set(this, origin, newOrigin);
	int32_t newAction = f->get("action"_s, 0);
	if (newAction != $DnDConstants::ACTION_COPY && newAction != $DnDConstants::ACTION_MOVE && newAction != $DnDConstants::ACTION_LINK) {
		$throwNew($InvalidObjectException, "bad action"_s);
	}
	this->action = newAction;
	$var($List, newEvents, nullptr);
	try {
		$assign(newEvents, $cast($List, f->get("events"_s, ($Object*)nullptr)));
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		$assign(newEvents, $cast($List, s->readObject()));
	}
	if (newEvents != nullptr && newEvents->isEmpty()) {
		$throwNew($InvalidObjectException, "empty list of events"_s);
	} else if (newEvents == nullptr) {
		$assign(newEvents, $Collections::emptyList());
	}
	$set(this, events, newEvents);
}

DragGestureEvent::DragGestureEvent() {
}

$Class* DragGestureEvent::load$($String* name, bool initialize) {
	$loadClass(DragGestureEvent, name, initialize, &_DragGestureEvent_ClassInfo_, allocate$DragGestureEvent);
	return class$;
}

$Class* DragGestureEvent::class$ = nullptr;

		} // dnd
	} // awt
} // java