#include <java/awt/dnd/DropTarget.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Point.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/SystemFlavorMap.h>
#include <java/awt/dnd/Autoscroll.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DropTarget$DropTargetAutoScroller.h>
#include <java/awt/dnd/DropTargetContext.h>
#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetDropEvent.h>
#include <java/awt/dnd/DropTargetEvent.h>
#include <java/awt/dnd/DropTargetListener.h>
#include <java/awt/dnd/SerializationTester.h>
#include <java/awt/dnd/peer/DropTargetPeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/TooManyListenersException.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef ACTION_COPY_OR_MOVE
#undef ACTION_NONE
#undef ACTION_REFERENCE

using $Component = ::java::awt::Component;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Point = ::java::awt::Point;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $SystemFlavorMap = ::java::awt::datatransfer::SystemFlavorMap;
using $Autoscroll = ::java::awt::dnd::Autoscroll;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DropTarget$DropTargetAutoScroller = ::java::awt::dnd::DropTarget$DropTargetAutoScroller;
using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetDropEvent = ::java::awt::dnd::DropTargetDropEvent;
using $DropTargetEvent = ::java::awt::dnd::DropTargetEvent;
using $DropTargetListener = ::java::awt::dnd::DropTargetListener;
using $SerializationTester = ::java::awt::dnd::SerializationTester;
using $DropTargetPeer = ::java::awt::dnd::peer::DropTargetPeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TooManyListenersException = ::java::util::TooManyListenersException;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DropTarget_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DropTarget, serialVersionUID)},
	{"dropTargetContext", "Ljava/awt/dnd/DropTargetContext;", nullptr, $PRIVATE, $field(DropTarget, dropTargetContext)},
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(DropTarget, component)},
	{"componentPeer", "Ljava/awt/peer/ComponentPeer;", nullptr, $PRIVATE | $TRANSIENT, $field(DropTarget, componentPeer)},
	{"nativePeer", "Ljava/awt/dnd/peer/DropTargetPeer;", nullptr, $PRIVATE | $TRANSIENT, $field(DropTarget, nativePeer)},
	{"actions", "I", nullptr, 0, $field(DropTarget, actions)},
	{"active", "Z", nullptr, 0, $field(DropTarget, active)},
	{"autoScroller", "Ljava/awt/dnd/DropTarget$DropTargetAutoScroller;", nullptr, $PRIVATE | $TRANSIENT, $field(DropTarget, autoScroller)},
	{"dtListener", "Ljava/awt/dnd/DropTargetListener;", nullptr, $PRIVATE | $TRANSIENT, $field(DropTarget, dtListener)},
	{"flavorMap", "Ljava/awt/datatransfer/FlavorMap;", nullptr, $PRIVATE | $TRANSIENT, $field(DropTarget, flavorMap)},
	{"isDraggingInside", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(DropTarget, isDraggingInside)},
	{}
};

$MethodInfo _DropTarget_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;ILjava/awt/dnd/DropTargetListener;ZLjava/awt/datatransfer/FlavorMap;)V", nullptr, $PUBLIC, $method(static_cast<void(DropTarget::*)($Component*,int32_t,$DropTargetListener*,bool,$FlavorMap*)>(&DropTarget::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/awt/Component;ILjava/awt/dnd/DropTargetListener;Z)V", nullptr, $PUBLIC, $method(static_cast<void(DropTarget::*)($Component*,int32_t,$DropTargetListener*,bool)>(&DropTarget::init$)), "java.awt.HeadlessException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DropTarget::*)()>(&DropTarget::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/awt/Component;Ljava/awt/dnd/DropTargetListener;)V", nullptr, $PUBLIC, $method(static_cast<void(DropTarget::*)($Component*,$DropTargetListener*)>(&DropTarget::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/awt/Component;ILjava/awt/dnd/DropTargetListener;)V", nullptr, $PUBLIC, $method(static_cast<void(DropTarget::*)($Component*,int32_t,$DropTargetListener*)>(&DropTarget::init$)), "java.awt.HeadlessException"},
	{"addDropTargetListener", "(Ljava/awt/dnd/DropTargetListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.util.TooManyListenersException"},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"clearAutoscroll", "()V", nullptr, $PROTECTED},
	{"createDropTargetAutoScroller", "(Ljava/awt/Component;Ljava/awt/Point;)Ljava/awt/dnd/DropTarget$DropTargetAutoScroller;", nullptr, $PROTECTED},
	{"createDropTargetContext", "()Ljava/awt/dnd/DropTargetContext;", nullptr, $PROTECTED},
	{"doSetDefaultActions", "(I)V", nullptr, 0},
	{"dragEnter", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"dragExit", "(Ljava/awt/dnd/DropTargetEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"dragOver", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drop", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"dropActionChanged", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDefaultActions", "()I", nullptr, $PUBLIC},
	{"getDropTargetContext", "()Ljava/awt/dnd/DropTargetContext;", nullptr, $PUBLIC},
	{"getFlavorMap", "()Ljava/awt/datatransfer/FlavorMap;", nullptr, $PUBLIC},
	{"initializeAutoscrolling", "(Ljava/awt/Point;)V", nullptr, $PROTECTED},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DropTarget::*)($ObjectInputStream*)>(&DropTarget::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeDropTargetListener", "(Ljava/awt/dnd/DropTargetListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setActive", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setDefaultActions", "(I)V", nullptr, $PUBLIC},
	{"setFlavorMap", "(Ljava/awt/datatransfer/FlavorMap;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAutoscroll", "(Ljava/awt/Point;)V", nullptr, $PROTECTED},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DropTarget::*)($ObjectOutputStream*)>(&DropTarget::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DropTarget_InnerClassesInfo_[] = {
	{"java.awt.dnd.DropTarget$DropTargetAutoScroller", "java.awt.dnd.DropTarget", "DropTargetAutoScroller", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _DropTarget_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DropTarget",
	"java.lang.Object",
	"java.awt.dnd.DropTargetListener,java.io.Serializable",
	_DropTarget_FieldInfo_,
	_DropTarget_MethodInfo_,
	nullptr,
	nullptr,
	_DropTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.dnd.DropTarget$DropTargetAutoScroller"
};

$Object* allocate$DropTarget($Class* clazz) {
	return $of($alloc(DropTarget));
}

int32_t DropTarget::hashCode() {
	 return this->$DropTargetListener::hashCode();
}

bool DropTarget::equals(Object$* arg0) {
	 return this->$DropTargetListener::equals(arg0);
}

$Object* DropTarget::clone() {
	 return this->$DropTargetListener::clone();
}

$String* DropTarget::toString() {
	 return this->$DropTargetListener::toString();
}

void DropTarget::finalize() {
	this->$DropTargetListener::finalize();
}

void DropTarget::init$($Component* c, int32_t ops, $DropTargetListener* dtl, bool act, $FlavorMap* fm) {
	$set(this, dropTargetContext, createDropTargetContext());
	this->actions = $DnDConstants::ACTION_COPY_OR_MOVE;
	this->active = true;
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$set(this, component, c);
	setDefaultActions(ops);
	if (dtl != nullptr) {
		try {
			addDropTargetListener(dtl);
		} catch ($TooManyListenersException& tmle) {
		}
	}
	if (c != nullptr) {
		c->setDropTarget(this);
		setActive(act);
	}
	if (fm != nullptr) {
		$set(this, flavorMap, fm);
	} else {
		$set(this, flavorMap, $SystemFlavorMap::getDefaultFlavorMap());
	}
}

void DropTarget::init$($Component* c, int32_t ops, $DropTargetListener* dtl, bool act) {
	DropTarget::init$(c, ops, dtl, act, nullptr);
}

void DropTarget::init$() {
	DropTarget::init$(nullptr, $DnDConstants::ACTION_COPY_OR_MOVE, nullptr, true, nullptr);
}

void DropTarget::init$($Component* c, $DropTargetListener* dtl) {
	DropTarget::init$(c, $DnDConstants::ACTION_COPY_OR_MOVE, dtl, true, nullptr);
}

void DropTarget::init$($Component* c, int32_t ops, $DropTargetListener* dtl) {
	DropTarget::init$(c, ops, dtl, true);
}

void DropTarget::setComponent($Component* c) {
	$synchronized(this) {
		if (this->component == c || this->component != nullptr && $nc($of(this->component))->equals(c)) {
			return;
		}
		$var($Component, old, this->component);
		if (old != nullptr) {
			clearAutoscroll();
			$set(this, component, nullptr);
			removeNotify();
			old->setDropTarget(nullptr);
		}
		if (($set(this, component, c)) != nullptr) {
			try {
				$nc(c)->setDropTarget(this);
			} catch ($Exception& e) {
				if (old != nullptr) {
					old->setDropTarget(this);
					addNotify();
				}
			}
		}
	}
}

$Component* DropTarget::getComponent() {
	$synchronized(this) {
		return this->component;
	}
}

void DropTarget::setDefaultActions(int32_t ops) {
	$nc($(getDropTargetContext()))->setTargetActions((int32_t)(ops & (uint32_t)($DnDConstants::ACTION_COPY_OR_MOVE | $DnDConstants::ACTION_REFERENCE)));
}

void DropTarget::doSetDefaultActions(int32_t ops) {
	this->actions = ops;
}

int32_t DropTarget::getDefaultActions() {
	return this->actions;
}

void DropTarget::setActive(bool isActive) {
	$synchronized(this) {
		if (isActive != this->active) {
			this->active = isActive;
		}
		if (!this->active) {
			clearAutoscroll();
		}
	}
}

bool DropTarget::isActive() {
	return this->active;
}

void DropTarget::addDropTargetListener($DropTargetListener* dtl) {
	$synchronized(this) {
		if (dtl == nullptr) {
			return;
		}
		if (equals(dtl)) {
			$throwNew($IllegalArgumentException, "DropTarget may not be its own Listener"_s);
		}
		if (this->dtListener == nullptr) {
			$set(this, dtListener, dtl);
		} else {
			$throwNew($TooManyListenersException);
		}
	}
}

void DropTarget::removeDropTargetListener($DropTargetListener* dtl) {
	$synchronized(this) {
		if (dtl != nullptr && this->dtListener != nullptr) {
			if ($nc($of(this->dtListener))->equals(dtl)) {
				$set(this, dtListener, nullptr);
			} else {
				$throwNew($IllegalArgumentException, "listener mismatch"_s);
			}
		}
	}
}

void DropTarget::dragEnter($DropTargetDragEvent* dtde) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		this->isDraggingInside = true;
		if (!this->active) {
			return;
		}
		if (this->dtListener != nullptr) {
			$nc(this->dtListener)->dragEnter(dtde);
		} else {
			$nc($($nc(dtde)->getDropTargetContext()))->setTargetActions($DnDConstants::ACTION_NONE);
		}
		initializeAutoscrolling($($nc(dtde)->getLocation()));
	}
}

void DropTarget::dragOver($DropTargetDragEvent* dtde) {
	$synchronized(this) {
		if (!this->active) {
			return;
		}
		if (this->dtListener != nullptr && this->active) {
			$nc(this->dtListener)->dragOver(dtde);
		}
		updateAutoscroll($($nc(dtde)->getLocation()));
	}
}

void DropTarget::dropActionChanged($DropTargetDragEvent* dtde) {
	$synchronized(this) {
		if (!this->active) {
			return;
		}
		if (this->dtListener != nullptr) {
			$nc(this->dtListener)->dropActionChanged(dtde);
		}
		updateAutoscroll($($nc(dtde)->getLocation()));
	}
}

void DropTarget::dragExit($DropTargetEvent* dte) {
	$synchronized(this) {
		this->isDraggingInside = false;
		if (!this->active) {
			return;
		}
		if (this->dtListener != nullptr && this->active) {
			$nc(this->dtListener)->dragExit(dte);
		}
		clearAutoscroll();
	}
}

void DropTarget::drop($DropTargetDropEvent* dtde) {
	$synchronized(this) {
		this->isDraggingInside = false;
		clearAutoscroll();
		if (this->dtListener != nullptr && this->active) {
			$nc(this->dtListener)->drop(dtde);
		} else {
			$nc(dtde)->rejectDrop();
		}
	}
}

$FlavorMap* DropTarget::getFlavorMap() {
	return this->flavorMap;
}

void DropTarget::setFlavorMap($FlavorMap* fm) {
	$set(this, flavorMap, fm == nullptr ? $SystemFlavorMap::getDefaultFlavorMap() : fm);
}

void DropTarget::addNotify() {
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	$var($ComponentPeer, peer, $nc(acc)->getPeer(this->component));
	if (peer == nullptr || peer == this->componentPeer) {
		return;
	}
	$set(this, componentPeer, peer);
	{
		$var($Component, c, this->component);
		for (; c != nullptr && $instanceOf($LightweightPeer, peer); $assign(c, $nc(c)->getParent())) {
			$assign(peer, acc->getPeer(c));
		}
	}
	if ($instanceOf($DropTargetPeer, peer)) {
		$set(this, nativePeer, $cast($DropTargetPeer, peer));
		$nc(($cast($DropTargetPeer, peer)))->addDropTarget(this);
	} else {
		$set(this, nativePeer, nullptr);
	}
}

void DropTarget::removeNotify() {
	$useLocalCurrentObjectStackCache();
	if (this->nativePeer != nullptr) {
		$nc(this->nativePeer)->removeDropTarget(this);
	}
	$set(this, componentPeer, nullptr);
	$set(this, nativePeer, nullptr);
	$synchronized(this) {
		if (this->isDraggingInside) {
			dragExit($$new($DropTargetEvent, $(getDropTargetContext())));
		}
	}
}

$DropTargetContext* DropTarget::getDropTargetContext() {
	return this->dropTargetContext;
}

$DropTargetContext* DropTarget::createDropTargetContext() {
	return $new($DropTargetContext, this);
}

void DropTarget::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeObject($SerializationTester::test(this->dtListener) ? $of(this->dtListener) : ($Object*)nullptr);
}

void DropTarget::readObject($ObjectInputStream* s) {
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	try {
		$set(this, dropTargetContext, $cast($DropTargetContext, $nc(f)->get("dropTargetContext"_s, ($Object*)nullptr)));
	} catch ($IllegalArgumentException& e) {
	}
	if (this->dropTargetContext == nullptr) {
		$set(this, dropTargetContext, createDropTargetContext());
	}
	$set(this, component, $cast($Component, $nc(f)->get("component"_s, ($Object*)nullptr)));
	this->actions = f->get("actions"_s, $DnDConstants::ACTION_COPY_OR_MOVE);
	this->active = f->get("active"_s, true);
	try {
		$set(this, dtListener, $cast($DropTargetListener, f->get("dtListener"_s, ($Object*)nullptr)));
	} catch ($IllegalArgumentException& e) {
		$set(this, dtListener, $cast($DropTargetListener, s->readObject()));
	}
}

$DropTarget$DropTargetAutoScroller* DropTarget::createDropTargetAutoScroller($Component* c, $Point* p) {
	return $new($DropTarget$DropTargetAutoScroller, c, p);
}

void DropTarget::initializeAutoscrolling($Point* p) {
	if (this->component == nullptr || !($instanceOf($Autoscroll, this->component))) {
		return;
	}
	$set(this, autoScroller, createDropTargetAutoScroller(this->component, p));
}

void DropTarget::updateAutoscroll($Point* dragCursorLocn) {
	if (this->autoScroller != nullptr) {
		$nc(this->autoScroller)->updateLocation(dragCursorLocn);
	}
}

void DropTarget::clearAutoscroll() {
	if (this->autoScroller != nullptr) {
		$nc(this->autoScroller)->stop();
		$set(this, autoScroller, nullptr);
	}
}

DropTarget::DropTarget() {
}

$Class* DropTarget::load$($String* name, bool initialize) {
	$loadClass(DropTarget, name, initialize, &_DropTarget_ClassInfo_, allocate$DropTarget);
	return class$;
}

$Class* DropTarget::class$ = nullptr;

		} // dnd
	} // awt
} // java