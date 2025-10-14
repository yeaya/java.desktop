#include <java/awt/dnd/MouseDragGestureRecognizer.h>

#include <java/awt/Component.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ACTION_NONE

using $Component = ::java::awt::Component;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _MouseDragGestureRecognizer_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MouseDragGestureRecognizer, serialVersionUID)},
	{}
};

$MethodInfo _MouseDragGestureRecognizer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)V", nullptr, $PROTECTED, $method(static_cast<void(MouseDragGestureRecognizer::*)($DragSource*,$Component*,int32_t,$DragGestureListener*)>(&MouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;I)V", nullptr, $PROTECTED, $method(static_cast<void(MouseDragGestureRecognizer::*)($DragSource*,$Component*,int32_t)>(&MouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;)V", nullptr, $PROTECTED, $method(static_cast<void(MouseDragGestureRecognizer::*)($DragSource*,$Component*)>(&MouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;)V", nullptr, $PROTECTED, $method(static_cast<void(MouseDragGestureRecognizer::*)($DragSource*)>(&MouseDragGestureRecognizer::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"registerListeners", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unregisterListeners", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MouseDragGestureRecognizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.dnd.MouseDragGestureRecognizer",
	"java.awt.dnd.DragGestureRecognizer",
	"java.awt.event.MouseListener,java.awt.event.MouseMotionListener",
	_MouseDragGestureRecognizer_FieldInfo_,
	_MouseDragGestureRecognizer_MethodInfo_
};

$Object* allocate$MouseDragGestureRecognizer($Class* clazz) {
	return $of($alloc(MouseDragGestureRecognizer));
}

int32_t MouseDragGestureRecognizer::hashCode() {
	 return this->$DragGestureRecognizer::hashCode();
}

bool MouseDragGestureRecognizer::equals(Object$* arg0) {
	 return this->$DragGestureRecognizer::equals(arg0);
}

$Object* MouseDragGestureRecognizer::clone() {
	 return this->$DragGestureRecognizer::clone();
}

$String* MouseDragGestureRecognizer::toString() {
	 return this->$DragGestureRecognizer::toString();
}

void MouseDragGestureRecognizer::finalize() {
	this->$DragGestureRecognizer::finalize();
}

void MouseDragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t act, $DragGestureListener* dgl) {
	$DragGestureRecognizer::init$(ds, c, act, dgl);
}

void MouseDragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t act) {
	MouseDragGestureRecognizer::init$(ds, c, act, nullptr);
}

void MouseDragGestureRecognizer::init$($DragSource* ds, $Component* c) {
	MouseDragGestureRecognizer::init$(ds, c, $DnDConstants::ACTION_NONE);
}

void MouseDragGestureRecognizer::init$($DragSource* ds) {
	MouseDragGestureRecognizer::init$(ds, nullptr);
}

void MouseDragGestureRecognizer::registerListeners() {
	$nc(this->component)->addMouseListener(this);
	$nc(this->component)->addMouseMotionListener(this);
}

void MouseDragGestureRecognizer::unregisterListeners() {
	$nc(this->component)->removeMouseListener(this);
	$nc(this->component)->removeMouseMotionListener(this);
}

void MouseDragGestureRecognizer::mouseClicked($MouseEvent* e) {
}

void MouseDragGestureRecognizer::mousePressed($MouseEvent* e) {
}

void MouseDragGestureRecognizer::mouseReleased($MouseEvent* e) {
}

void MouseDragGestureRecognizer::mouseEntered($MouseEvent* e) {
}

void MouseDragGestureRecognizer::mouseExited($MouseEvent* e) {
}

void MouseDragGestureRecognizer::mouseDragged($MouseEvent* e) {
}

void MouseDragGestureRecognizer::mouseMoved($MouseEvent* e) {
}

MouseDragGestureRecognizer::MouseDragGestureRecognizer() {
}

$Class* MouseDragGestureRecognizer::load$($String* name, bool initialize) {
	$loadClass(MouseDragGestureRecognizer, name, initialize, &_MouseDragGestureRecognizer_ClassInfo_, allocate$MouseDragGestureRecognizer);
	return class$;
}

$Class* MouseDragGestureRecognizer::class$ = nullptr;

		} // dnd
	} // awt
} // java