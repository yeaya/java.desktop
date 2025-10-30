#include <java/awt/dnd/DragSource.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/SystemFlavorMap.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDEventMulticaster.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/dnd/DragSourceListener.h>
#include <java/awt/dnd/DragSourceMotionListener.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/awt/dnd/MouseDragGestureRecognizer.h>
#include <java/awt/dnd/SerializationTester.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/EventListener.h>
#include <sun/awt/AWTAccessor$DragSourceContextAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <sun/security/action/GetIntegerAction.h>
#include <jcpp.h>

using $DragSourceListenerArray = $Array<::java::awt::dnd::DragSourceListener>;
using $DragSourceMotionListenerArray = $Array<::java::awt::dnd::DragSourceMotionListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $SystemFlavorMap = ::java::awt::datatransfer::SystemFlavorMap;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDEventMulticaster = ::java::awt::dnd::DnDEventMulticaster;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $DragSourceListener = ::java::awt::dnd::DragSourceListener;
using $DragSourceMotionListener = ::java::awt::dnd::DragSourceMotionListener;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $MouseDragGestureRecognizer = ::java::awt::dnd::MouseDragGestureRecognizer;
using $SerializationTester = ::java::awt::dnd::SerializationTester;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $EventListener = ::java::util::EventListener;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$DragSourceContextAccessor = ::sun::awt::AWTAccessor$DragSourceContextAccessor;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;
using $GetIntegerAction = ::sun::security::action::GetIntegerAction;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DragSource_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DragSource, serialVersionUID)},
	{"DefaultCopyDrop", "Ljava/awt/Cursor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DragSource, DefaultCopyDrop)},
	{"DefaultMoveDrop", "Ljava/awt/Cursor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DragSource, DefaultMoveDrop)},
	{"DefaultLinkDrop", "Ljava/awt/Cursor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DragSource, DefaultLinkDrop)},
	{"DefaultCopyNoDrop", "Ljava/awt/Cursor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DragSource, DefaultCopyNoDrop)},
	{"DefaultMoveNoDrop", "Ljava/awt/Cursor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DragSource, DefaultMoveNoDrop)},
	{"DefaultLinkNoDrop", "Ljava/awt/Cursor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DragSource, DefaultLinkNoDrop)},
	{"dflt", "Ljava/awt/dnd/DragSource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DragSource, dflt)},
	{"dragSourceListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DragSource, dragSourceListenerK)},
	{"dragSourceMotionListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DragSource, dragSourceMotionListenerK)},
	{"flavorMap", "Ljava/awt/datatransfer/FlavorMap;", nullptr, $PRIVATE | $TRANSIENT, $field(DragSource, flavorMap)},
	{"listener", "Ljava/awt/dnd/DragSourceListener;", nullptr, $PRIVATE | $TRANSIENT, $field(DragSource, listener)},
	{"motionListener", "Ljava/awt/dnd/DragSourceMotionListener;", nullptr, $PRIVATE | $TRANSIENT, $field(DragSource, motionListener)},
	{}
};

$MethodInfo _DragSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DragSource::*)()>(&DragSource::init$)), "java.awt.HeadlessException"},
	{"addDragSourceListener", "(Ljava/awt/dnd/DragSourceListener;)V", nullptr, $PUBLIC},
	{"addDragSourceMotionListener", "(Ljava/awt/dnd/DragSourceMotionListener;)V", nullptr, $PUBLIC},
	{"createDefaultDragGestureRecognizer", "(Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", nullptr, $PUBLIC},
	{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC},
	{"createDragSourceContext", "(Ljava/awt/dnd/DragGestureEvent;Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;Ljava/awt/datatransfer/Transferable;Ljava/awt/dnd/DragSourceListener;)Ljava/awt/dnd/DragSourceContext;", nullptr, $PROTECTED},
	{"getDefaultDragSource", "()Ljava/awt/dnd/DragSource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DragSource*(*)()>(&DragSource::getDefaultDragSource))},
	{"getDragSourceListeners", "()[Ljava/awt/dnd/DragSourceListener;", nullptr, $PUBLIC},
	{"getDragSourceMotionListeners", "()[Ljava/awt/dnd/DragSourceMotionListener;", nullptr, $PUBLIC},
	{"getDragThreshold", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DragSource::getDragThreshold))},
	{"getFlavorMap", "()Ljava/awt/datatransfer/FlavorMap;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"isDragImageSupported", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&DragSource::isDragImageSupported))},
	{"load", "(Ljava/lang/String;)Ljava/awt/Cursor;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Cursor*(*)($String*)>(&DragSource::load))},
	{"processDragDropEnd", "(Ljava/awt/dnd/DragSourceDropEvent;)V", nullptr, 0},
	{"processDragEnter", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, 0},
	{"processDragExit", "(Ljava/awt/dnd/DragSourceEvent;)V", nullptr, 0},
	{"processDragMouseMoved", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, 0},
	{"processDragOver", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, 0},
	{"processDropActionChanged", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, 0},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DragSource::*)($ObjectInputStream*)>(&DragSource::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeDragSourceListener", "(Ljava/awt/dnd/DragSourceListener;)V", nullptr, $PUBLIC},
	{"removeDragSourceMotionListener", "(Ljava/awt/dnd/DragSourceMotionListener;)V", nullptr, $PUBLIC},
	{"startDrag", "(Ljava/awt/dnd/DragGestureEvent;Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;Ljava/awt/datatransfer/Transferable;Ljava/awt/dnd/DragSourceListener;Ljava/awt/datatransfer/FlavorMap;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"startDrag", "(Ljava/awt/dnd/DragGestureEvent;Ljava/awt/Cursor;Ljava/awt/datatransfer/Transferable;Ljava/awt/dnd/DragSourceListener;Ljava/awt/datatransfer/FlavorMap;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"startDrag", "(Ljava/awt/dnd/DragGestureEvent;Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;Ljava/awt/datatransfer/Transferable;Ljava/awt/dnd/DragSourceListener;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"startDrag", "(Ljava/awt/dnd/DragGestureEvent;Ljava/awt/Cursor;Ljava/awt/datatransfer/Transferable;Ljava/awt/dnd/DragSourceListener;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DragSource::*)($ObjectOutputStream*)>(&DragSource::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _DragSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DragSource",
	"java.lang.Object",
	"java.io.Serializable",
	_DragSource_FieldInfo_,
	_DragSource_MethodInfo_
};

$Object* allocate$DragSource($Class* clazz) {
	return $of($alloc(DragSource));
}

$Cursor* DragSource::DefaultCopyDrop = nullptr;
$Cursor* DragSource::DefaultMoveDrop = nullptr;
$Cursor* DragSource::DefaultLinkDrop = nullptr;
$Cursor* DragSource::DefaultCopyNoDrop = nullptr;
$Cursor* DragSource::DefaultMoveNoDrop = nullptr;
$Cursor* DragSource::DefaultLinkNoDrop = nullptr;
DragSource* DragSource::dflt = nullptr;
$String* DragSource::dragSourceListenerK = nullptr;
$String* DragSource::dragSourceMotionListenerK = nullptr;

$Cursor* DragSource::load($String* name) {
	$init(DragSource);
	$useLocalCurrentObjectStackCache();
	if ($GraphicsEnvironment::isHeadless()) {
		return nullptr;
	}
	try {
		return $cast($Cursor, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty(name));
	} catch ($Exception& e) {
		e->printStackTrace();
		$throwNew($RuntimeException, $$str({"failed to load system cursor: "_s, name, " : "_s, $(e->getMessage())}));
	}
	$shouldNotReachHere();
}

DragSource* DragSource::getDefaultDragSource() {
	$init(DragSource);
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	} else {
		return DragSource::dflt;
	}
}

bool DragSource::isDragImageSupported() {
	$init(DragSource);
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, t, $Toolkit::getDefaultToolkit());
	$var($Boolean, supported, nullptr);
	try {
		$assign(supported, $cast($Boolean, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("DnD.isDragImageSupported"_s)));
		return $nc(supported)->booleanValue();
	} catch ($Exception& e) {
		return false;
	}
	$shouldNotReachHere();
}

void DragSource::init$() {
	$set(this, flavorMap, $SystemFlavorMap::getDefaultFlavorMap());
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
}

void DragSource::startDrag($DragGestureEvent* trigger, $Cursor* dragCursor, $Image* dragImage, $Point* imageOffset, $Transferable* transferable, $DragSourceListener* dsl, $FlavorMap* flavorMap) {
	$useLocalCurrentObjectStackCache();
	$SunDragSourceContextPeer::setDragDropInProgress(true);
	try {
		if (flavorMap != nullptr) {
			$set(this, flavorMap, flavorMap);
		}
		$var($DragSourceContext, dsc, createDragSourceContext(trigger, dragCursor, dragImage, imageOffset, transferable, dsl));
		if (dsc == nullptr) {
			$throwNew($InvalidDnDOperationException);
		}
		$var($AWTAccessor$DragSourceContextAccessor, acc, $AWTAccessor::getDragSourceContextAccessor());
		$nc($($nc(acc)->getPeer(dsc)))->startDrag(dsc, $($nc(dsc)->getCursor()), dragImage, imageOffset);
	} catch ($RuntimeException& e) {
		$SunDragSourceContextPeer::setDragDropInProgress(false);
		$throw(e);
	}
}

void DragSource::startDrag($DragGestureEvent* trigger, $Cursor* dragCursor, $Transferable* transferable, $DragSourceListener* dsl, $FlavorMap* flavorMap) {
	startDrag(trigger, dragCursor, nullptr, nullptr, transferable, dsl, flavorMap);
}

void DragSource::startDrag($DragGestureEvent* trigger, $Cursor* dragCursor, $Image* dragImage, $Point* dragOffset, $Transferable* transferable, $DragSourceListener* dsl) {
	startDrag(trigger, dragCursor, dragImage, dragOffset, transferable, dsl, nullptr);
}

void DragSource::startDrag($DragGestureEvent* trigger, $Cursor* dragCursor, $Transferable* transferable, $DragSourceListener* dsl) {
	startDrag(trigger, dragCursor, nullptr, nullptr, transferable, dsl, nullptr);
}

$DragSourceContext* DragSource::createDragSourceContext($DragGestureEvent* dgl, $Cursor* dragCursor, $Image* dragImage, $Point* imageOffset, $Transferable* t, $DragSourceListener* dsl) {
	return $new($DragSourceContext, dgl, dragCursor, dragImage, imageOffset, t, dsl);
}

$FlavorMap* DragSource::getFlavorMap() {
	return this->flavorMap;
}

$DragGestureRecognizer* DragSource::createDragGestureRecognizer($Class* recognizerAbstractClass, $Component* c, int32_t actions, $DragGestureListener* dgl) {
	return $nc($($Toolkit::getDefaultToolkit()))->createDragGestureRecognizer(recognizerAbstractClass, this, c, actions, dgl);
}

$DragGestureRecognizer* DragSource::createDefaultDragGestureRecognizer($Component* c, int32_t actions, $DragGestureListener* dgl) {
	$load($MouseDragGestureRecognizer);
	return $nc($($Toolkit::getDefaultToolkit()))->createDragGestureRecognizer($MouseDragGestureRecognizer::class$, this, c, actions, dgl);
}

void DragSource::addDragSourceListener($DragSourceListener* dsl) {
	if (dsl != nullptr) {
		$synchronized(this) {
			$set(this, listener, $DnDEventMulticaster::add(this->listener, dsl));
		}
	}
}

void DragSource::removeDragSourceListener($DragSourceListener* dsl) {
	if (dsl != nullptr) {
		$synchronized(this) {
			$set(this, listener, $DnDEventMulticaster::remove(this->listener, dsl));
		}
	}
}

$DragSourceListenerArray* DragSource::getDragSourceListeners() {
	$load($DragSourceListener);
	return $fcast($DragSourceListenerArray, getListeners($DragSourceListener::class$));
}

void DragSource::addDragSourceMotionListener($DragSourceMotionListener* dsml) {
	if (dsml != nullptr) {
		$synchronized(this) {
			$set(this, motionListener, $DnDEventMulticaster::add(this->motionListener, dsml));
		}
	}
}

void DragSource::removeDragSourceMotionListener($DragSourceMotionListener* dsml) {
	if (dsml != nullptr) {
		$synchronized(this) {
			$set(this, motionListener, $DnDEventMulticaster::remove(this->motionListener, dsml));
		}
	}
}

$DragSourceMotionListenerArray* DragSource::getDragSourceMotionListeners() {
	$load($DragSourceMotionListener);
	return $fcast($DragSourceMotionListenerArray, getListeners($DragSourceMotionListener::class$));
}

$EventListenerArray* DragSource::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($DragSourceListener);
	if (listenerType == $DragSourceListener::class$) {
		$assign(l, this->listener);
	} else {
		$load($DragSourceMotionListener);
		if (listenerType == $DragSourceMotionListener::class$) {
			$assign(l, this->motionListener);
		}
	}
	return $DnDEventMulticaster::getListeners(l, listenerType);
}

void DragSource::processDragEnter($DragSourceDragEvent* dsde) {
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dragEnter(dsde);
	}
}

void DragSource::processDragOver($DragSourceDragEvent* dsde) {
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dragOver(dsde);
	}
}

void DragSource::processDropActionChanged($DragSourceDragEvent* dsde) {
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dropActionChanged(dsde);
	}
}

void DragSource::processDragExit($DragSourceEvent* dse) {
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dragExit(dse);
	}
}

void DragSource::processDragDropEnd($DragSourceDropEvent* dsde) {
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dragDropEnd(dsde);
	}
}

void DragSource::processDragMouseMoved($DragSourceDragEvent* dsde) {
	$var($DragSourceMotionListener, dsml, this->motionListener);
	if (dsml != nullptr) {
		dsml->dragMouseMoved(dsde);
	}
}

void DragSource::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeObject($SerializationTester::test(this->flavorMap) ? $of(this->flavorMap) : ($Object*)nullptr);
	$DnDEventMulticaster::save(s, DragSource::dragSourceListenerK, this->listener);
	$DnDEventMulticaster::save(s, DragSource::dragSourceMotionListenerK, this->motionListener);
	s->writeObject(nullptr);
}

void DragSource::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$set(this, flavorMap, $cast($FlavorMap, s->readObject()));
	if (this->flavorMap == nullptr) {
		$set(this, flavorMap, $SystemFlavorMap::getDefaultFlavorMap());
	}
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		if (DragSource::dragSourceListenerK == key) {
			addDragSourceListener(($cast($DragSourceListener, $(s->readObject()))));
		} else if (DragSource::dragSourceMotionListenerK == key) {
			addDragSourceMotionListener(($cast($DragSourceMotionListener, $(s->readObject()))));
		} else {
			s->readObject();
		}
	}
}

int32_t DragSource::getDragThreshold() {
	$init(DragSource);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t ts = $nc(($cast($Integer, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetIntegerAction, "awt.dnd.drag.threshold"_s, 0)))))))->intValue();
	if (ts > 0) {
		return ts;
	} else {
		$var($Integer, td, $cast($Integer, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("DnD.gestureMotionThreshold"_s)));
		if (td != nullptr) {
			return td->intValue();
		}
	}
	return 5;
}

void clinit$DragSource($Class* class$) {
	$assignStatic(DragSource::dragSourceListenerK, "dragSourceL"_s);
	$assignStatic(DragSource::dragSourceMotionListenerK, "dragSourceMotionL"_s);
	$assignStatic(DragSource::DefaultCopyDrop, DragSource::load("DnD.Cursor.CopyDrop"_s));
	$assignStatic(DragSource::DefaultMoveDrop, DragSource::load("DnD.Cursor.MoveDrop"_s));
	$assignStatic(DragSource::DefaultLinkDrop, DragSource::load("DnD.Cursor.LinkDrop"_s));
	$assignStatic(DragSource::DefaultCopyNoDrop, DragSource::load("DnD.Cursor.CopyNoDrop"_s));
	$assignStatic(DragSource::DefaultMoveNoDrop, DragSource::load("DnD.Cursor.MoveNoDrop"_s));
	$assignStatic(DragSource::DefaultLinkNoDrop, DragSource::load("DnD.Cursor.LinkNoDrop"_s));
	$assignStatic(DragSource::dflt, ($GraphicsEnvironment::isHeadless()) ? (DragSource*)nullptr : $new(DragSource));
}

DragSource::DragSource() {
}

$Class* DragSource::load$($String* name, bool initialize) {
	$loadClass(DragSource, name, initialize, &_DragSource_ClassInfo_, clinit$DragSource, allocate$DragSource);
	return class$;
}

$Class* DragSource::class$ = nullptr;

		} // dnd
	} // awt
} // java