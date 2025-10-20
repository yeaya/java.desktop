#include <java/awt/dnd/DragSourceContext.h>

#include <java/awt/AWTError.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/DragSourceContext$1.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/dnd/DragSourceListener.h>
#include <java/awt/dnd/SerializationTester.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/TooManyListenersException.h>
#include <sun/awt/AWTAccessor$DragSourceContextAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef ACTION_COPY_OR_MOVE
#undef ACTION_LINK
#undef ACTION_MOVE
#undef ACTION_NONE
#undef CHANGED
#undef DEFAULT
#undef ENTER
#undef OVER

using $AWTError = ::java::awt::AWTError;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $DragSourceContext$1 = ::java::awt::dnd::DragSourceContext$1;
using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $DragSourceListener = ::java::awt::dnd::DragSourceListener;
using $DragSourceMotionListener = ::java::awt::dnd::DragSourceMotionListener;
using $SerializationTester = ::java::awt::dnd::SerializationTester;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $TooManyListenersException = ::java::util::TooManyListenersException;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$DragSourceContextAccessor = ::sun::awt::AWTAccessor$DragSourceContextAccessor;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {
		namespace dnd {

class DragSourceContext$$Lambda$lambda$static$0 : public $AWTAccessor$DragSourceContextAccessor {
	$class(DragSourceContext$$Lambda$lambda$static$0, $NO_CLASS_INIT, $AWTAccessor$DragSourceContextAccessor)
public:
	void init$() {
	}
	virtual $DragSourceContextPeer* getPeer(DragSourceContext* dsc) override {
		 return DragSourceContext::lambda$static$0(dsc);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DragSourceContext$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DragSourceContext$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DragSourceContext$$Lambda$lambda$static$0::*)()>(&DragSourceContext$$Lambda$lambda$static$0::init$))},
	{"getPeer", "(Ljava/awt/dnd/DragSourceContext;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DragSourceContext$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.dnd.DragSourceContext$$Lambda$lambda$static$0",
	"java.lang.Object",
	"sun.awt.AWTAccessor$DragSourceContextAccessor",
	nullptr,
	methodInfos
};
$Class* DragSourceContext$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(DragSourceContext$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DragSourceContext$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _DragSourceContext_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DragSourceContext, serialVersionUID)},
	{"DEFAULT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DragSourceContext, DEFAULT)},
	{"ENTER", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DragSourceContext, ENTER)},
	{"OVER", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DragSourceContext, OVER)},
	{"CHANGED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DragSourceContext, CHANGED)},
	{"emptyTransferable", "Ljava/awt/datatransfer/Transferable;", nullptr, $PRIVATE | $STATIC, $staticField(DragSourceContext, emptyTransferable)},
	{"peer", "Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(DragSourceContext, peer)},
	{"trigger", "Ljava/awt/dnd/DragGestureEvent;", nullptr, $PRIVATE, $field(DragSourceContext, trigger)},
	{"cursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE, $field(DragSourceContext, cursor)},
	{"transferable", "Ljava/awt/datatransfer/Transferable;", nullptr, $PRIVATE | $TRANSIENT, $field(DragSourceContext, transferable)},
	{"listener", "Ljava/awt/dnd/DragSourceListener;", nullptr, $PRIVATE | $TRANSIENT, $field(DragSourceContext, listener)},
	{"useCustomCursor", "Z", nullptr, $PRIVATE, $field(DragSourceContext, useCustomCursor)},
	{"sourceActions", "I", nullptr, $PRIVATE, $field(DragSourceContext, sourceActions)},
	{}
};

$MethodInfo _DragSourceContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/dnd/DragGestureEvent;Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;Ljava/awt/datatransfer/Transferable;Ljava/awt/dnd/DragSourceListener;)V", nullptr, $PUBLIC, $method(static_cast<void(DragSourceContext::*)($DragGestureEvent*,$Cursor*,$Image*,$Point*,$Transferable*,$DragSourceListener*)>(&DragSourceContext::init$))},
	{"addDragSourceListener", "(Ljava/awt/dnd/DragSourceListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.util.TooManyListenersException"},
	{"dragDropEnd", "(Ljava/awt/dnd/DragSourceDropEvent;)V", nullptr, $PUBLIC},
	{"dragEnter", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dragExit", "(Ljava/awt/dnd/DragSourceEvent;)V", nullptr, $PUBLIC},
	{"dragMouseMoved", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dragOver", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dropActionChanged", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getDragSource", "()Ljava/awt/dnd/DragSource;", nullptr, $PUBLIC},
	{"getSourceActions", "()I", nullptr, $PUBLIC},
	{"getTransferable", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC},
	{"getTrigger", "()Ljava/awt/dnd/DragGestureEvent;", nullptr, $PUBLIC},
	{"lambda$static$0", "(Ljava/awt/dnd/DragSourceContext;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DragSourceContextPeer*(*)(DragSourceContext*)>(&DragSourceContext::lambda$static$0))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DragSourceContext::*)($ObjectInputStream*)>(&DragSourceContext::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeDragSourceListener", "(Ljava/awt/dnd/DragSourceListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setCursorImpl", "(Ljava/awt/Cursor;)V", nullptr, $PRIVATE, $method(static_cast<void(DragSourceContext::*)($Cursor*)>(&DragSourceContext::setCursorImpl))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transferablesFlavorsChanged", "()V", nullptr, $PUBLIC},
	{"updateCurrentCursor", "(III)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DragSourceContext::*)($ObjectOutputStream*)>(&DragSourceContext::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DragSourceContext_InnerClassesInfo_[] = {
	{"java.awt.dnd.DragSourceContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DragSourceContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DragSourceContext",
	"java.lang.Object",
	"java.awt.dnd.DragSourceListener,java.awt.dnd.DragSourceMotionListener,java.io.Serializable",
	_DragSourceContext_FieldInfo_,
	_DragSourceContext_MethodInfo_,
	nullptr,
	nullptr,
	_DragSourceContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.dnd.DragSourceContext$1"
};

$Object* allocate$DragSourceContext($Class* clazz) {
	return $of($alloc(DragSourceContext));
}

int32_t DragSourceContext::hashCode() {
	 return this->$DragSourceListener::hashCode();
}

bool DragSourceContext::equals(Object$* arg0) {
	 return this->$DragSourceListener::equals(arg0);
}

$Object* DragSourceContext::clone() {
	 return this->$DragSourceListener::clone();
}

$String* DragSourceContext::toString() {
	 return this->$DragSourceListener::toString();
}

void DragSourceContext::finalize() {
	this->$DragSourceListener::finalize();
}

$Transferable* DragSourceContext::emptyTransferable = nullptr;

void DragSourceContext::init$($DragGestureEvent* trigger, $Cursor* dragCursor, $Image* dragImage, $Point* offset, $Transferable* t, $DragSourceListener* dsl) {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if (!($instanceOf($ComponentFactory, toolkit))) {
		$throwNew($AWTError, $$str({"Unsupported toolkit: "_s, toolkit}));
	}
	$var($DragSourceContextPeer, dscp, $nc(($cast($ComponentFactory, toolkit)))->createDragSourceContextPeer(trigger));
	if (dscp == nullptr) {
		$throwNew($NullPointerException, "DragSourceContextPeer"_s);
	}
	if (trigger == nullptr) {
		$throwNew($NullPointerException, "Trigger"_s);
	}
	if ($nc(trigger)->getDragSource() == nullptr) {
		$throwNew($IllegalArgumentException, "DragSource"_s);
	}
	if ($nc(trigger)->getComponent() == nullptr) {
		$throwNew($IllegalArgumentException, "Component"_s);
	}
	if ($nc($($nc(trigger)->getSourceAsDragGestureRecognizer()))->getSourceActions() == $DnDConstants::ACTION_NONE) {
		$throwNew($IllegalArgumentException, "source actions"_s);
	}
	if ($nc(trigger)->getDragAction() == $DnDConstants::ACTION_NONE) {
		$throwNew($IllegalArgumentException, "no drag action"_s);
	}
	if (t == nullptr) {
		$throwNew($NullPointerException, "Transferable"_s);
	}
	if (dragImage != nullptr && offset == nullptr) {
		$throwNew($NullPointerException, "offset"_s);
	}
	$set(this, peer, dscp);
	$set(this, trigger, trigger);
	$set(this, cursor, dragCursor);
	$set(this, transferable, t);
	$set(this, listener, dsl);
	this->sourceActions = $nc($($nc(trigger)->getSourceAsDragGestureRecognizer()))->getSourceActions();
	this->useCustomCursor = (dragCursor != nullptr);
	int32_t var$0 = trigger->getDragAction();
	updateCurrentCursor(var$0, getSourceActions(), DragSourceContext::DEFAULT);
}

$DragSource* DragSourceContext::getDragSource() {
	return $nc(this->trigger)->getDragSource();
}

$Component* DragSourceContext::getComponent() {
	return $nc(this->trigger)->getComponent();
}

$DragGestureEvent* DragSourceContext::getTrigger() {
	return this->trigger;
}

int32_t DragSourceContext::getSourceActions() {
	return this->sourceActions;
}

void DragSourceContext::setCursor($Cursor* c) {
	$synchronized(this) {
		this->useCustomCursor = (c != nullptr);
		setCursorImpl(c);
	}
}

$Cursor* DragSourceContext::getCursor() {
	return this->cursor;
}

void DragSourceContext::addDragSourceListener($DragSourceListener* dsl) {
	$synchronized(this) {
		if (dsl == nullptr) {
			return;
		}
		if (equals(dsl)) {
			$throwNew($IllegalArgumentException, "DragSourceContext may not be its own listener"_s);
		}
		if (this->listener != nullptr) {
			$throwNew($TooManyListenersException);
		} else {
			$set(this, listener, dsl);
		}
	}
}

void DragSourceContext::removeDragSourceListener($DragSourceListener* dsl) {
	$synchronized(this) {
		if (this->listener != nullptr && $nc($of(this->listener))->equals(dsl)) {
			$set(this, listener, nullptr);
		} else {
			$throwNew($IllegalArgumentException);
		}
	}
}

void DragSourceContext::transferablesFlavorsChanged() {
	if (this->peer != nullptr) {
		$nc(this->peer)->transferablesFlavorsChanged();
	}
}

void DragSourceContext::dragEnter($DragSourceDragEvent* dsde) {
	$useLocalCurrentObjectStackCache();
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dragEnter(dsde);
	}
	$nc($(getDragSource()))->processDragEnter(dsde);
	int32_t var$0 = getSourceActions();
	updateCurrentCursor(var$0, $nc(dsde)->getTargetActions(), DragSourceContext::ENTER);
}

void DragSourceContext::dragOver($DragSourceDragEvent* dsde) {
	$useLocalCurrentObjectStackCache();
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dragOver(dsde);
	}
	$nc($(getDragSource()))->processDragOver(dsde);
	int32_t var$0 = getSourceActions();
	updateCurrentCursor(var$0, $nc(dsde)->getTargetActions(), DragSourceContext::OVER);
}

void DragSourceContext::dragExit($DragSourceEvent* dse) {
	$useLocalCurrentObjectStackCache();
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dragExit(dse);
	}
	$nc($(getDragSource()))->processDragExit(dse);
	updateCurrentCursor($DnDConstants::ACTION_NONE, $DnDConstants::ACTION_NONE, DragSourceContext::DEFAULT);
}

void DragSourceContext::dropActionChanged($DragSourceDragEvent* dsde) {
	$useLocalCurrentObjectStackCache();
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dropActionChanged(dsde);
	}
	$nc($(getDragSource()))->processDropActionChanged(dsde);
	int32_t var$0 = getSourceActions();
	updateCurrentCursor(var$0, $nc(dsde)->getTargetActions(), DragSourceContext::CHANGED);
}

void DragSourceContext::dragDropEnd($DragSourceDropEvent* dsde) {
	$useLocalCurrentObjectStackCache();
	$var($DragSourceListener, dsl, this->listener);
	if (dsl != nullptr) {
		dsl->dragDropEnd(dsde);
	}
	$nc($(getDragSource()))->processDragDropEnd(dsde);
}

void DragSourceContext::dragMouseMoved($DragSourceDragEvent* dsde) {
	$nc($(getDragSource()))->processDragMouseMoved(dsde);
}

$Transferable* DragSourceContext::getTransferable() {
	return this->transferable;
}

void DragSourceContext::updateCurrentCursor(int32_t sourceAct, int32_t targetAct, int32_t status) {
	$synchronized(this) {
		if (this->useCustomCursor) {
			return;
		}
		$var($Cursor, c, nullptr);
		{
			int32_t ra = 0;
			switch (status) {
			default:
				{
					targetAct = $DnDConstants::ACTION_NONE;
				}
			case DragSourceContext::ENTER:
				{}
			case DragSourceContext::OVER:
				{}
			case DragSourceContext::CHANGED:
				{
					ra = (int32_t)(sourceAct & (uint32_t)targetAct);
					if (ra == $DnDConstants::ACTION_NONE) {
						if (((int32_t)(sourceAct & (uint32_t)$DnDConstants::ACTION_LINK)) == $DnDConstants::ACTION_LINK) {
							$init($DragSource);
							$assign(c, $DragSource::DefaultLinkNoDrop);
						} else if (((int32_t)(sourceAct & (uint32_t)$DnDConstants::ACTION_MOVE)) == $DnDConstants::ACTION_MOVE) {
							$init($DragSource);
							$assign(c, $DragSource::DefaultMoveNoDrop);
						} else {
							$init($DragSource);
							$assign(c, $DragSource::DefaultCopyNoDrop);
						}
					} else if (((int32_t)(ra & (uint32_t)$DnDConstants::ACTION_LINK)) == $DnDConstants::ACTION_LINK) {
						$init($DragSource);
						$assign(c, $DragSource::DefaultLinkDrop);
					} else if (((int32_t)(ra & (uint32_t)$DnDConstants::ACTION_MOVE)) == $DnDConstants::ACTION_MOVE) {
						$init($DragSource);
						$assign(c, $DragSource::DefaultMoveDrop);
					} else {
						$init($DragSource);
						$assign(c, $DragSource::DefaultCopyDrop);
					}
				}
			}
		}
		setCursorImpl(c);
	}
}

void DragSourceContext::setCursorImpl($Cursor* c) {
	if (this->cursor == nullptr || !$nc($of(this->cursor))->equals(c)) {
		$set(this, cursor, c);
		if (this->peer != nullptr) {
			$nc(this->peer)->setCursor(this->cursor);
		}
	}
}

void DragSourceContext::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeObject($SerializationTester::test(this->transferable) ? $of(this->transferable) : ($Object*)nullptr);
	s->writeObject($SerializationTester::test(this->listener) ? $of(this->listener) : ($Object*)nullptr);
}

void DragSourceContext::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$var($DragGestureEvent, newTrigger, $cast($DragGestureEvent, $nc(f)->get("trigger"_s, ($Object*)nullptr)));
	if (newTrigger == nullptr) {
		$throwNew($InvalidObjectException, "Null trigger"_s);
	}
	if ($nc(newTrigger)->getDragSource() == nullptr) {
		$throwNew($InvalidObjectException, "Null DragSource"_s);
	}
	if ($nc(newTrigger)->getComponent() == nullptr) {
		$throwNew($InvalidObjectException, "Null trigger component"_s);
	}
	int32_t newSourceActions = (int32_t)(f->get("sourceActions"_s, 0) & (uint32_t)($DnDConstants::ACTION_COPY_OR_MOVE | $DnDConstants::ACTION_LINK));
	if (newSourceActions == $DnDConstants::ACTION_NONE) {
		$throwNew($InvalidObjectException, "Invalid source actions"_s);
	}
	int32_t triggerActions = $nc(newTrigger)->getDragAction();
	if (triggerActions != $DnDConstants::ACTION_COPY && triggerActions != $DnDConstants::ACTION_MOVE && triggerActions != $DnDConstants::ACTION_LINK) {
		$throwNew($InvalidObjectException, "No drag action"_s);
	}
	$set(this, trigger, newTrigger);
	$set(this, cursor, $cast($Cursor, f->get("cursor"_s, ($Object*)nullptr)));
	this->useCustomCursor = f->get("useCustomCursor"_s, false);
	this->sourceActions = newSourceActions;
	$set(this, transferable, $cast($Transferable, s->readObject()));
	$set(this, listener, $cast($DragSourceListener, s->readObject()));
	if (this->transferable == nullptr) {
		if (DragSourceContext::emptyTransferable == nullptr) {
			$assignStatic(DragSourceContext::emptyTransferable, $new($DragSourceContext$1, this));
		}
		$set(this, transferable, DragSourceContext::emptyTransferable);
	}
}

$DragSourceContextPeer* DragSourceContext::lambda$static$0(DragSourceContext* dsc) {
	$init(DragSourceContext);
	return $nc(dsc)->peer;
}

void clinit$DragSourceContext($Class* class$) {
	{
		$AWTAccessor::setDragSourceContextAccessor(static_cast<$AWTAccessor$DragSourceContextAccessor*>($$new(DragSourceContext$$Lambda$lambda$static$0)));
	}
}

DragSourceContext::DragSourceContext() {
}

$Class* DragSourceContext::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DragSourceContext$$Lambda$lambda$static$0::classInfo$.name)) {
			return DragSourceContext$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(DragSourceContext, name, initialize, &_DragSourceContext_ClassInfo_, clinit$DragSourceContext, allocate$DragSourceContext);
	return class$;
}

$Class* DragSourceContext::class$ = nullptr;

		} // dnd
	} // awt
} // java