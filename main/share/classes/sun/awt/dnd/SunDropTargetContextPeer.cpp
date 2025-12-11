#include <sun/awt/dnd/SunDropTargetContextPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/DropTargetContext.h>
#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetDropEvent.h>
#include <java/awt/dnd/DropTargetEvent.h>
#include <java/awt/dnd/DropTargetListener.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/awt/dnd/peer/DropTargetContextPeer.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Map.h>
#include <sun/awt/AWTAccessor$DropTargetContextAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <sun/awt/dnd/SunDropTargetContextPeer$EventDispatcher.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD_PERMISSION
#undef ACTION_COPY
#undef ACTION_COPY_OR_MOVE
#undef ACTION_LINK
#undef ACTION_MOVE
#undef ACTION_NONE
#undef DISPATCH_SYNC
#undef MOUSE_DRAGGED
#undef MOUSE_DROPPED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef STATUS_ACCEPT
#undef STATUS_NONE
#undef STATUS_REJECT
#undef STATUS_WAIT

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetDropEvent = ::java::awt::dnd::DropTargetDropEvent;
using $DropTargetEvent = ::java::awt::dnd::DropTargetEvent;
using $DropTargetListener = ::java::awt::dnd::DropTargetListener;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $DropTargetContextPeer = ::java::awt::dnd::peer::DropTargetContextPeer;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Map = ::java::util::Map;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$DropTargetContextAccessor = ::sun::awt::AWTAccessor$DropTargetContextAccessor;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $ToolkitThreadBlockedHandler = ::sun::awt::datatransfer::ToolkitThreadBlockedHandler;
using $SunDropTargetContextPeer$EventDispatcher = ::sun::awt::dnd::SunDropTargetContextPeer$EventDispatcher;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace dnd {

$FieldInfo _SunDropTargetContextPeer_FieldInfo_[] = {
	{"DISPATCH_SYNC", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunDropTargetContextPeer, DISPATCH_SYNC)},
	{"currentDT", "Ljava/awt/dnd/DropTarget;", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, currentDT)},
	{"currentDTC", "Ljava/awt/dnd/DropTargetContext;", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, currentDTC)},
	{"currentT", "[J", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, currentT)},
	{"currentA", "I", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, currentA)},
	{"currentSA", "I", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, currentSA)},
	{"currentDA", "I", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, currentDA)},
	{"previousDA", "I", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, previousDA)},
	{"nativeDragContext", "J", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, nativeDragContext)},
	{"local", "Ljava/awt/datatransfer/Transferable;", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, local)},
	{"dragRejected", "Z", nullptr, $PRIVATE, $field(SunDropTargetContextPeer, dragRejected)},
	{"dropStatus", "I", nullptr, $PROTECTED, $field(SunDropTargetContextPeer, dropStatus)},
	{"dropComplete", "Z", nullptr, $PROTECTED, $field(SunDropTargetContextPeer, dropComplete$)},
	{"dropInProcess", "Z", nullptr, 0, $field(SunDropTargetContextPeer, dropInProcess)},
	{"_globalLock", "Ljava/lang/Object;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SunDropTargetContextPeer, _globalLock)},
	{"dndLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunDropTargetContextPeer, dndLog)},
	{"currentJVMLocalSourceTransferable", "Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED | $STATIC, $staticField(SunDropTargetContextPeer, currentJVMLocalSourceTransferable)},
	{"STATUS_NONE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDropTargetContextPeer, STATUS_NONE)},
	{"STATUS_WAIT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDropTargetContextPeer, STATUS_WAIT)},
	{"STATUS_ACCEPT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDropTargetContextPeer, STATUS_ACCEPT)},
	{"STATUS_REJECT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDropTargetContextPeer, STATUS_REJECT)},
	{}
};

$MethodInfo _SunDropTargetContextPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunDropTargetContextPeer::*)()>(&SunDropTargetContextPeer::init$))},
	{"acceptDrag", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"acceptDrop", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"doDropDone", "(ZIZ)V", nullptr, $PROTECTED | $ABSTRACT},
	{"dropComplete", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"eventPosted", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"eventProcessed", "(Lsun/awt/dnd/SunDropTargetEvent;IZ)V", nullptr, $PROTECTED},
	{"getDropTarget", "()Ljava/awt/dnd/DropTarget;", nullptr, $PUBLIC},
	{"getJVMLocalSourceTransferable", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Transferable*(*)()>(&SunDropTargetContextPeer::getJVMLocalSourceTransferable))},
	{"getNativeData", "(J)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getNativeDragContext", "()J", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getTargetActions", "()I", nullptr, $PUBLIC},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException,java.awt.dnd.InvalidDnDOperationException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"getTransferable", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC},
	{"handleDropMessage", "(Ljava/awt/Component;IIII[JJ)V", nullptr, $PRIVATE, $method(static_cast<void(SunDropTargetContextPeer::*)($Component*,int32_t,int32_t,int32_t,int32_t,$longs*,int64_t)>(&SunDropTargetContextPeer::handleDropMessage))},
	{"handleEnterMessage", "(Ljava/awt/Component;IIII[JJ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SunDropTargetContextPeer::*)($Component*,int32_t,int32_t,int32_t,int32_t,$longs*,int64_t)>(&SunDropTargetContextPeer::handleEnterMessage))},
	{"handleExitMessage", "(Ljava/awt/Component;J)V", nullptr, $PRIVATE, $method(static_cast<void(SunDropTargetContextPeer::*)($Component*,int64_t)>(&SunDropTargetContextPeer::handleExitMessage))},
	{"handleMotionMessage", "(Ljava/awt/Component;IIII[JJ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SunDropTargetContextPeer::*)($Component*,int32_t,int32_t,int32_t,int32_t,$longs*,int64_t)>(&SunDropTargetContextPeer::handleMotionMessage))},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{"isTransferableJVMLocal", "()Z", nullptr, $PUBLIC},
	{"mapOperation", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SunDropTargetContextPeer::*)(int32_t)>(&SunDropTargetContextPeer::mapOperation))},
	{"postDropTargetEvent", "(Ljava/awt/Component;IIII[JJIZ)I", nullptr, $PROTECTED},
	{"processDropMessage", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"processEnterMessage", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"processExitMessage", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"processMotionMessage", "(Lsun/awt/dnd/SunDropTargetEvent;Z)V", nullptr, $PROTECTED},
	{"rejectDrag", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"rejectDrop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setCurrentJVMLocalSourceTransferable", "(Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Transferable*)>(&SunDropTargetContextPeer::setCurrentJVMLocalSourceTransferable)), "java.awt.dnd.InvalidDnDOperationException"},
	{"setTargetActions", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SunDropTargetContextPeer_InnerClassesInfo_[] = {
	{"sun.awt.dnd.SunDropTargetContextPeer$EventDispatcher", "sun.awt.dnd.SunDropTargetContextPeer", "EventDispatcher", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _SunDropTargetContextPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.dnd.SunDropTargetContextPeer",
	"java.lang.Object",
	"java.awt.dnd.peer.DropTargetContextPeer,java.awt.datatransfer.Transferable",
	_SunDropTargetContextPeer_FieldInfo_,
	_SunDropTargetContextPeer_MethodInfo_,
	nullptr,
	nullptr,
	_SunDropTargetContextPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.dnd.SunDropTargetContextPeer$EventDispatcher"
};

$Object* allocate$SunDropTargetContextPeer($Class* clazz) {
	return $of($alloc(SunDropTargetContextPeer));
}

int32_t SunDropTargetContextPeer::hashCode() {
	 return this->$DropTargetContextPeer::hashCode();
}

bool SunDropTargetContextPeer::equals(Object$* arg0) {
	 return this->$DropTargetContextPeer::equals(arg0);
}

$Object* SunDropTargetContextPeer::clone() {
	 return this->$DropTargetContextPeer::clone();
}

$String* SunDropTargetContextPeer::toString() {
	 return this->$DropTargetContextPeer::toString();
}

void SunDropTargetContextPeer::finalize() {
	this->$DropTargetContextPeer::finalize();
}

$Object* SunDropTargetContextPeer::_globalLock = nullptr;
$PlatformLogger* SunDropTargetContextPeer::dndLog = nullptr;
$Transferable* SunDropTargetContextPeer::currentJVMLocalSourceTransferable = nullptr;

void SunDropTargetContextPeer::setCurrentJVMLocalSourceTransferable($Transferable* t) {
	$init(SunDropTargetContextPeer);
	$synchronized(SunDropTargetContextPeer::_globalLock) {
		if (t != nullptr && SunDropTargetContextPeer::currentJVMLocalSourceTransferable != nullptr) {
			$throwNew($InvalidDnDOperationException);
		} else {
			$assignStatic(SunDropTargetContextPeer::currentJVMLocalSourceTransferable, t);
		}
	}
}

$Transferable* SunDropTargetContextPeer::getJVMLocalSourceTransferable() {
	$init(SunDropTargetContextPeer);
	return SunDropTargetContextPeer::currentJVMLocalSourceTransferable;
}

void SunDropTargetContextPeer::init$() {
	this->dragRejected = false;
	this->dropStatus = SunDropTargetContextPeer::STATUS_NONE;
	this->dropComplete$ = false;
	this->dropInProcess = false;
}

$DropTarget* SunDropTargetContextPeer::getDropTarget() {
	return this->currentDT;
}

void SunDropTargetContextPeer::setTargetActions(int32_t actions) {
	$synchronized(this) {
		this->currentA = (int32_t)(actions & (uint32_t)($DnDConstants::ACTION_COPY_OR_MOVE | $DnDConstants::ACTION_LINK));
	}
}

int32_t SunDropTargetContextPeer::getTargetActions() {
	return this->currentA;
}

$Transferable* SunDropTargetContextPeer::getTransferable() {
	return this;
}

$DataFlavorArray* SunDropTargetContextPeer::getTransferDataFlavors() {
	$useLocalCurrentObjectStackCache();
	$var($Transferable, localTransferable, this->local);
	if (localTransferable != nullptr) {
		return localTransferable->getTransferDataFlavors();
	} else {
		return $nc($($DataTransferer::getInstance()))->getFlavorsForFormatsAsArray(this->currentT, $($DataTransferer::adaptFlavorMap($($nc(this->currentDT)->getFlavorMap()))));
	}
}

bool SunDropTargetContextPeer::isDataFlavorSupported($DataFlavor* df) {
	$useLocalCurrentObjectStackCache();
	$var($Transferable, localTransferable, this->local);
	if (localTransferable != nullptr) {
		return localTransferable->isDataFlavorSupported(df);
	} else {
		return $nc($($nc($($DataTransferer::getInstance()))->getFlavorsForFormats(this->currentT, $($DataTransferer::adaptFlavorMap($($nc(this->currentDT)->getFlavorMap()))))))->containsKey(df);
	}
}

$Object* SunDropTargetContextPeer::getTransferData($DataFlavor* df) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	try {
		if (!this->dropInProcess && sm != nullptr) {
			$init($AWTPermissions);
			sm->checkPermission($AWTPermissions::ACCESS_CLIPBOARD_PERMISSION);
		}
	} catch ($Exception& e) {
		$var($Thread, currentThread, $Thread::currentThread());
		$nc($(currentThread->getUncaughtExceptionHandler()))->uncaughtException(currentThread, e);
		return $of(nullptr);
	}
	$var($Long, lFormat, nullptr);
	$var($Transferable, localTransferable, this->local);
	if (localTransferable != nullptr) {
		return $of(localTransferable->getTransferData(df));
	}
	if (this->dropStatus != SunDropTargetContextPeer::STATUS_ACCEPT || this->dropComplete$) {
		$throwNew($InvalidDnDOperationException, "No drop current"_s);
	}
	$var($Map, flavorMap, $nc($($DataTransferer::getInstance()))->getFlavorsForFormats(this->currentT, $($DataTransferer::adaptFlavorMap($($nc(this->currentDT)->getFlavorMap())))));
	$assign(lFormat, $cast($Long, $nc(flavorMap)->get(df)));
	if (lFormat == nullptr) {
		$throwNew($UnsupportedFlavorException, df);
	}
	if ($nc(df)->isRepresentationClassRemote() && this->currentDA != $DnDConstants::ACTION_LINK) {
		$throwNew($InvalidDnDOperationException, "only ACTION_LINK is permissable for transfer of java.rmi.Remote objects"_s);
	}
	int64_t format = $nc(lFormat)->longValue();
	$var($Object, ret, getNativeData(format));
	if ($instanceOf($bytes, ret)) {
		try {
			return $of($nc($($DataTransferer::getInstance()))->translateBytes($cast($bytes, ret), df, format, this));
		} catch ($IOException& e) {
			$throwNew($InvalidDnDOperationException, $(e->getMessage()));
		}
	} else if ($instanceOf($InputStream, ret)) {
		try {
			return $of($nc($($DataTransferer::getInstance()))->translateStream($cast($InputStream, ret), df, format, this));
		} catch ($IOException& e) {
			$throwNew($InvalidDnDOperationException, $(e->getMessage()));
		}
	} else {
		$throwNew($IOException, "no native data was transfered"_s);
	}
	$shouldNotReachHere();
}

bool SunDropTargetContextPeer::isTransferableJVMLocal() {
	return this->local != nullptr || getJVMLocalSourceTransferable() != nullptr;
}

int32_t SunDropTargetContextPeer::handleEnterMessage($Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt) {
	return postDropTargetEvent(component, x, y, dropAction, actions, formats, nativeCtxt, $SunDropTargetEvent::MOUSE_ENTERED, SunDropTargetContextPeer::DISPATCH_SYNC);
}

void SunDropTargetContextPeer::processEnterMessage($SunDropTargetEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $cast($Component, $nc(event)->getSource()));
	$var($DropTarget, dt, $nc(c)->getDropTarget());
	$var($Point, hots, event->getPoint());
	$set(this, local, getJVMLocalSourceTransferable());
	$var($AWTAccessor$DropTargetContextAccessor, acc, $AWTAccessor::getDropTargetContextAccessor());
	if (this->currentDTC != nullptr) {
		$nc(acc)->reset(this->currentDTC);
		$set(this, currentDTC, nullptr);
	}
	bool var$0 = c->isShowing() && dt != nullptr;
	if (var$0 && dt->isActive()) {
		$set(this, currentDT, dt);
		$set(this, currentDTC, $nc(this->currentDT)->getDropTargetContext());
		$nc(acc)->setDropTargetContextPeer(this->currentDTC, this);
		this->currentA = dt->getDefaultActions();
		try {
			$nc((static_cast<$DropTargetListener*>(dt)))->dragEnter($$new($DropTargetDragEvent, this->currentDTC, hots, this->currentDA, this->currentSA));
		} catch ($Exception& e) {
			e->printStackTrace();
			this->currentDA = $DnDConstants::ACTION_NONE;
		}
	} else {
		$set(this, currentDT, nullptr);
		$set(this, currentDTC, nullptr);
		this->currentDA = $DnDConstants::ACTION_NONE;
		this->currentSA = $DnDConstants::ACTION_NONE;
		this->currentA = $DnDConstants::ACTION_NONE;
	}
}

void SunDropTargetContextPeer::handleExitMessage($Component* component, int64_t nativeCtxt) {
	postDropTargetEvent(component, 0, 0, $DnDConstants::ACTION_NONE, $DnDConstants::ACTION_NONE, nullptr, nativeCtxt, $SunDropTargetEvent::MOUSE_EXITED, SunDropTargetContextPeer::DISPATCH_SYNC);
}

void SunDropTargetContextPeer::processExitMessage($SunDropTargetEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $cast($Component, $nc(event)->getSource()));
	$var($DropTarget, dt, $nc(c)->getDropTarget());
	$var($DropTargetContext, dtc, nullptr);
	$var($AWTAccessor$DropTargetContextAccessor, acc, $AWTAccessor::getDropTargetContextAccessor());
	if (dt == nullptr) {
		$set(this, currentDT, nullptr);
		$set(this, currentT, nullptr);
		if (this->currentDTC != nullptr) {
			$nc(acc)->reset(this->currentDTC);
		}
		$set(this, currentDTC, nullptr);
		return;
	}
	if (dt != this->currentDT) {
		if (this->currentDTC != nullptr) {
			$nc(acc)->reset(this->currentDTC);
		}
		$set(this, currentDT, dt);
		$set(this, currentDTC, $nc(dt)->getDropTargetContext());
		$nc(acc)->setDropTargetContextPeer(this->currentDTC, this);
	}
	$assign(dtc, this->currentDTC);
	if ($nc(dt)->isActive()) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc((static_cast<$DropTargetListener*>(dt)))->dragExit($$new($DropTargetEvent, dtc));
				} catch ($Exception& e) {
					e->printStackTrace();
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->currentA = $DnDConstants::ACTION_NONE;
				this->currentSA = $DnDConstants::ACTION_NONE;
				this->currentDA = $DnDConstants::ACTION_NONE;
				$set(this, currentDT, nullptr);
				$set(this, currentT, nullptr);
				$nc(acc)->reset(this->currentDTC);
				$set(this, currentDTC, nullptr);
				$set(this, local, nullptr);
				this->dragRejected = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

int32_t SunDropTargetContextPeer::handleMotionMessage($Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt) {
	return postDropTargetEvent(component, x, y, dropAction, actions, formats, nativeCtxt, $SunDropTargetEvent::MOUSE_DRAGGED, SunDropTargetContextPeer::DISPATCH_SYNC);
}

void SunDropTargetContextPeer::processMotionMessage($SunDropTargetEvent* event, bool operationChanged) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $cast($Component, $nc(event)->getSource()));
	$var($Point, hots, event->getPoint());
	int32_t id = event->getID();
	$var($DropTarget, dt, $nc(c)->getDropTarget());
	$var($DropTargetContext, dtc, nullptr);
	$var($AWTAccessor$DropTargetContextAccessor, acc, $AWTAccessor::getDropTargetContextAccessor());
	bool var$0 = c->isShowing() && (dt != nullptr);
	if (var$0 && dt->isActive()) {
		if (this->currentDT != dt) {
			if (this->currentDTC != nullptr) {
				$nc(acc)->reset(this->currentDTC);
			}
			$set(this, currentDT, dt);
			$set(this, currentDTC, nullptr);
		}
		$assign(dtc, $nc(this->currentDT)->getDropTargetContext());
		if (dtc != this->currentDTC) {
			if (this->currentDTC != nullptr) {
				$nc(acc)->reset(this->currentDTC);
			}
			$set(this, currentDTC, dtc);
			$nc(acc)->setDropTargetContextPeer(this->currentDTC, this);
		}
		this->currentA = $nc(this->currentDT)->getDefaultActions();
		try {
			$var($DropTargetDragEvent, dtde, $new($DropTargetDragEvent, dtc, hots, this->currentDA, this->currentSA));
			$var($DropTargetListener, dtl, static_cast<$DropTargetListener*>(dt));
			if (operationChanged) {
				dtl->dropActionChanged(dtde);
			} else {
				dtl->dragOver(dtde);
			}
			if (this->dragRejected) {
				this->currentDA = $DnDConstants::ACTION_NONE;
			}
		} catch ($Exception& e) {
			e->printStackTrace();
			this->currentDA = $DnDConstants::ACTION_NONE;
		}
	} else {
		this->currentDA = $DnDConstants::ACTION_NONE;
	}
}

void SunDropTargetContextPeer::handleDropMessage($Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt) {
	postDropTargetEvent(component, x, y, dropAction, actions, formats, nativeCtxt, $SunDropTargetEvent::MOUSE_DROPPED, !SunDropTargetContextPeer::DISPATCH_SYNC);
}

void SunDropTargetContextPeer::processDropMessage($SunDropTargetEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $cast($Component, $nc(event)->getSource()));
	$var($Point, hots, event->getPoint());
	$var($DropTarget, dt, $nc(c)->getDropTarget());
	this->dropStatus = SunDropTargetContextPeer::STATUS_WAIT;
	this->dropComplete$ = false;
	bool var$0 = c->isShowing() && dt != nullptr;
	if (var$0 && dt->isActive()) {
		$var($DropTargetContext, dtc, dt->getDropTargetContext());
		$set(this, currentDT, dt);
		$var($AWTAccessor$DropTargetContextAccessor, acc, $AWTAccessor::getDropTargetContextAccessor());
		if (this->currentDTC != nullptr) {
			$nc(acc)->reset(this->currentDTC);
		}
		$set(this, currentDTC, dtc);
		$nc(acc)->setDropTargetContextPeer(this->currentDTC, this);
		this->currentA = dt->getDefaultActions();
		$synchronized(SunDropTargetContextPeer::_globalLock) {
			if (($set(this, local, getJVMLocalSourceTransferable())) != nullptr) {
				setCurrentJVMLocalSourceTransferable(nullptr);
			}
		}
		this->dropInProcess = true;
		{
			$var($Throwable, var$1, nullptr);
			try {
				$nc((static_cast<$DropTargetListener*>(dt)))->drop($$new($DropTargetDropEvent, dtc, hots, this->currentDA, this->currentSA, this->local != nullptr));
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				if (this->dropStatus == SunDropTargetContextPeer::STATUS_WAIT) {
					rejectDrop();
				} else if (this->dropComplete$ == false) {
					dropComplete(false);
				}
				this->dropInProcess = false;
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	} else {
		rejectDrop();
	}
}

int32_t SunDropTargetContextPeer::postDropTargetEvent($Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, int32_t eventID, bool dispatchType) {
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(component));
	$var($SunDropTargetContextPeer$EventDispatcher, dispatcher, $new($SunDropTargetContextPeer$EventDispatcher, this, dropAction, actions, formats, nativeCtxt, dispatchType));
	$var($SunDropTargetEvent, event, $new($SunDropTargetEvent, component, eventID, x, y, dispatcher));
	if (dispatchType == SunDropTargetContextPeer::DISPATCH_SYNC) {
		$nc($($nc($($DataTransferer::getInstance()))->getToolkitThreadBlockedHandler()))->lock();
	}
	$SunToolkit::postEvent(appContext, event);
	eventPosted(event);
	if (dispatchType == SunDropTargetContextPeer::DISPATCH_SYNC) {
		while (!dispatcher->isDone()) {
			$nc($($nc($($DataTransferer::getInstance()))->getToolkitThreadBlockedHandler()))->enter();
		}
		$nc($($nc($($DataTransferer::getInstance()))->getToolkitThreadBlockedHandler()))->unlock();
		return dispatcher->getReturnValue();
	} else {
		return 0;
	}
}

void SunDropTargetContextPeer::acceptDrag(int32_t dragOperation) {
	$synchronized(this) {
		if (this->currentDT == nullptr) {
			$throwNew($InvalidDnDOperationException, "No Drag pending"_s);
		}
		this->currentDA = mapOperation(dragOperation);
		if (this->currentDA != $DnDConstants::ACTION_NONE) {
			this->dragRejected = false;
		}
	}
}

void SunDropTargetContextPeer::rejectDrag() {
	$synchronized(this) {
		if (this->currentDT == nullptr) {
			$throwNew($InvalidDnDOperationException, "No Drag pending"_s);
		}
		this->currentDA = $DnDConstants::ACTION_NONE;
		this->dragRejected = true;
	}
}

void SunDropTargetContextPeer::acceptDrop(int32_t dropOperation) {
	$synchronized(this) {
		if (dropOperation == $DnDConstants::ACTION_NONE) {
			$throwNew($IllegalArgumentException, "invalid acceptDrop() action"_s);
		}
		if (this->dropStatus == SunDropTargetContextPeer::STATUS_WAIT || this->dropStatus == SunDropTargetContextPeer::STATUS_ACCEPT) {
			this->currentDA = (this->currentA = mapOperation((int32_t)(dropOperation & (uint32_t)this->currentSA)));
			this->dropStatus = SunDropTargetContextPeer::STATUS_ACCEPT;
			this->dropComplete$ = false;
		} else {
			$throwNew($InvalidDnDOperationException, "invalid acceptDrop()"_s);
		}
	}
}

void SunDropTargetContextPeer::rejectDrop() {
	$synchronized(this) {
		if (this->dropStatus != SunDropTargetContextPeer::STATUS_WAIT) {
			$throwNew($InvalidDnDOperationException, "invalid rejectDrop()"_s);
		}
		this->dropStatus = SunDropTargetContextPeer::STATUS_REJECT;
		this->currentDA = $DnDConstants::ACTION_NONE;
		dropComplete(false);
	}
}

int32_t SunDropTargetContextPeer::mapOperation(int32_t operation) {
	$var($ints, operations, $new($ints, {
		$DnDConstants::ACTION_MOVE,
		$DnDConstants::ACTION_COPY,
		$DnDConstants::ACTION_LINK
	}));
	int32_t ret = $DnDConstants::ACTION_NONE;
	for (int32_t i = 0; i < operations->length; ++i) {
		if (((int32_t)(operation & (uint32_t)operations->get(i))) == operations->get(i)) {
			ret = operations->get(i);
			break;
		}
	}
	return ret;
}

void SunDropTargetContextPeer::dropComplete(bool success) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->dropStatus == SunDropTargetContextPeer::STATUS_NONE) {
			$throwNew($InvalidDnDOperationException, "No Drop pending"_s);
		}
		if (this->currentDTC != nullptr) {
			$nc($($AWTAccessor::getDropTargetContextAccessor()))->reset(this->currentDTC);
		}
		$set(this, currentDT, nullptr);
		$set(this, currentDTC, nullptr);
		$set(this, currentT, nullptr);
		this->currentA = $DnDConstants::ACTION_NONE;
		$synchronized(SunDropTargetContextPeer::_globalLock) {
			$assignStatic(SunDropTargetContextPeer::currentJVMLocalSourceTransferable, nullptr);
		}
		this->dropStatus = SunDropTargetContextPeer::STATUS_NONE;
		this->dropComplete$ = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				doDropDone(success, this->currentDA, this->local != nullptr);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->currentDA = $DnDConstants::ACTION_NONE;
				this->nativeDragContext = 0;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

int64_t SunDropTargetContextPeer::getNativeDragContext() {
	$synchronized(this) {
		return this->nativeDragContext;
	}
}

void SunDropTargetContextPeer::eventPosted($SunDropTargetEvent* e) {
}

void SunDropTargetContextPeer::eventProcessed($SunDropTargetEvent* e, int32_t returnValue, bool dispatcherDone) {
}

void clinit$SunDropTargetContextPeer($Class* class$) {
	$assignStatic(SunDropTargetContextPeer::_globalLock, $new($Object));
	$assignStatic(SunDropTargetContextPeer::dndLog, $PlatformLogger::getLogger("sun.awt.dnd.SunDropTargetContextPeer"_s));
	$assignStatic(SunDropTargetContextPeer::currentJVMLocalSourceTransferable, nullptr);
}

SunDropTargetContextPeer::SunDropTargetContextPeer() {
}

$Class* SunDropTargetContextPeer::load$($String* name, bool initialize) {
	$loadClass(SunDropTargetContextPeer, name, initialize, &_SunDropTargetContextPeer_ClassInfo_, clinit$SunDropTargetContextPeer, allocate$SunDropTargetContextPeer);
	return class$;
}

$Class* SunDropTargetContextPeer::class$ = nullptr;

		} // dnd
	} // awt
} // sun