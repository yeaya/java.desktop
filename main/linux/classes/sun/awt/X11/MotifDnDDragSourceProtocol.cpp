#include <sun/awt/X11/MotifDnDDragSourceProtocol.h>

#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/lang/AssertionError.h>
#include <java/util/Map.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/MotifDnDConstants$Swapper.h>
#include <sun/awt/X11/MotifDnDConstants.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDragAndDropProtocols.h>
#include <sun/awt/X11/XDragSourceProtocol$TargetWindowInfo.h>
#include <sun/awt/X11/XDragSourceProtocol.h>
#include <sun/awt/X11/XDragSourceProtocolListener.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XException.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XSelectionRequestEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

#undef ACTION_NONE
#undef DRAG_MOTION
#undef DROP_SITE_ENTER
#undef DROP_SITE_LEAVE
#undef DROP_START
#undef MOTIF_DND_ACTIONS_SHIFT
#undef MOTIF_DND_ACTION_MASK
#undef MOTIF_DND_ACTION_SHIFT
#undef MOTIF_DND_STATUS_MASK
#undef MOTIF_DND_STATUS_SHIFT
#undef MOTIF_DYNAMIC_STYLE
#undef MOTIF_MESSAGE_FROM_INITIATOR
#undef MOTIF_MESSAGE_FROM_RECEIVER
#undef MOTIF_MESSAGE_REASON_MASK
#undef MOTIF_MESSAGE_SENDER_MASK
#undef MOTIF_PREFER_DYNAMIC_STYLE
#undef MOTIF_PREFER_PREREGISTER_STYLE
#undef MOTIF_PREFER_RECEIVER_STYLE
#undef MOTIF_RECEIVER_INFO_SIZE
#undef MOTIF_VALID_DROP_SITE
#undef OPERATION_CHANGED
#undef TOP_LEVEL_ENTER
#undef TOP_LEVEL_LEAVE
#undef XA_MOTIF_ATOM_0
#undef XA_MOTIF_DRAG_AND_DROP_MESSAGE
#undef XA_MOTIF_DRAG_RECEIVER_INFO

using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Map = ::java::util::Map;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $MotifDnDConstants = ::sun::awt::X11::MotifDnDConstants;
using $MotifDnDConstants$Swapper = ::sun::awt::X11::MotifDnDConstants$Swapper;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDragAndDropProtocols = ::sun::awt::X11::XDragAndDropProtocols;
using $XDragSourceProtocol = ::sun::awt::X11::XDragSourceProtocol;
using $XDragSourceProtocol$TargetWindowInfo = ::sun::awt::X11::XDragSourceProtocol$TargetWindowInfo;
using $XDragSourceProtocolListener = ::sun::awt::X11::XDragSourceProtocolListener;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XException = ::sun::awt::X11::XException;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XSelection = ::sun::awt::X11::XSelection;
using $XSelectionRequestEvent = ::sun::awt::X11::XSelectionRequestEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _MotifDnDDragSourceProtocol_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MotifDnDDragSourceProtocol, $assertionsDisabled)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifDnDDragSourceProtocol, unsafe)},
	{"targetEnterServerTime", "J", nullptr, $PRIVATE, $field(MotifDnDDragSourceProtocol, targetEnterServerTime)},
	{}
};

$MethodInfo _MotifDnDDragSourceProtocol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11/XDragSourceProtocolListener;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifDnDDragSourceProtocol::*)($XDragSourceProtocolListener*)>(&MotifDnDDragSourceProtocol::init$))},
	{"cleanupTargetInfo", "()V", nullptr, $PUBLIC},
	{"createInstance", "(Lsun/awt/X11/XDragSourceProtocolListener;)Lsun/awt/X11/XDragSourceProtocol;", nullptr, $STATIC, $method(static_cast<$XDragSourceProtocol*(*)($XDragSourceProtocolListener*)>(&MotifDnDDragSourceProtocol::createInstance))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"getProtocolName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTargetWindowInfo", "(J)Lsun/awt/X11/XDragSourceProtocol$TargetWindowInfo;", nullptr, $PUBLIC},
	{"initializeDragImpl", "(ILjava/awt/datatransfer/Transferable;Ljava/util/Map;[J)V", "(ILjava/awt/datatransfer/Transferable;Ljava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;[J)V", $PROTECTED, nullptr, "java.awt.dnd.InvalidDnDOperationException,java.lang.IllegalArgumentException,sun.awt.X11.XException"},
	{"processClientMessage", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PUBLIC},
	{"processProxyModeEvent", "(Lsun/awt/X11/XClientMessageEvent;J)Z", nullptr, $PUBLIC},
	{"sendDropMessage", "(IIIIJ)V", nullptr, $PROTECTED},
	{"sendEnterMessage", "([JIIJ)V", nullptr, $PUBLIC},
	{"sendLeaveMessage", "(J)V", nullptr, $PUBLIC},
	{"sendMoveMessage", "(IIIIJ)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MotifDnDDragSourceProtocol_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.MotifDnDDragSourceProtocol",
	"sun.awt.X11.XDragSourceProtocol",
	"sun.awt.X11.XEventDispatcher",
	_MotifDnDDragSourceProtocol_FieldInfo_,
	_MotifDnDDragSourceProtocol_MethodInfo_
};

$Object* allocate$MotifDnDDragSourceProtocol($Class* clazz) {
	return $of($alloc(MotifDnDDragSourceProtocol));
}

int32_t MotifDnDDragSourceProtocol::hashCode() {
	 return this->$XDragSourceProtocol::hashCode();
}

bool MotifDnDDragSourceProtocol::equals(Object$* arg0) {
	 return this->$XDragSourceProtocol::equals(arg0);
}

$Object* MotifDnDDragSourceProtocol::clone() {
	 return this->$XDragSourceProtocol::clone();
}

$String* MotifDnDDragSourceProtocol::toString() {
	 return this->$XDragSourceProtocol::toString();
}

void MotifDnDDragSourceProtocol::finalize() {
	this->$XDragSourceProtocol::finalize();
}

bool MotifDnDDragSourceProtocol::$assertionsDisabled = false;
$Unsafe* MotifDnDDragSourceProtocol::unsafe = nullptr;

void MotifDnDDragSourceProtocol::init$($XDragSourceProtocolListener* listener) {
	$XDragSourceProtocol::init$(listener);
	this->targetEnterServerTime = $XConstants::CurrentTime;
	$XToolkit::addEventDispatcher($nc($($XWindow::getXAWTRootWindow()))->getWindow(), this);
}

$XDragSourceProtocol* MotifDnDDragSourceProtocol::createInstance($XDragSourceProtocolListener* listener) {
	$init(MotifDnDDragSourceProtocol);
	return $new(MotifDnDDragSourceProtocol, listener);
}

$String* MotifDnDDragSourceProtocol::getProtocolName() {
	$init($XDragAndDropProtocols);
	return $XDragAndDropProtocols::MotifDnD;
}

void MotifDnDDragSourceProtocol::initializeDragImpl(int32_t actions, $Transferable* contents, $Map* formatMap, $longs* formats) {
	int64_t window = $XDragSourceProtocol::getDragSourceWindow();
	try {
		int32_t index = $MotifDnDConstants::getIndexForTargetList(formats);
		$MotifDnDConstants::writeDragInitiatorInfoStruct(window, index);
	} catch ($XException& xe) {
		cleanup();
		$throw(xe);
	} catch ($InvalidDnDOperationException& idoe) {
		cleanup();
		$throw(idoe);
	}
	$init($MotifDnDConstants);
	if (!$nc($MotifDnDConstants::MotifDnDSelection)->setOwner(contents, formatMap, formats, $XConstants::CurrentTime)) {
		cleanup();
		$throwNew($InvalidDnDOperationException, "Cannot acquire selection ownership"_s);
	}
}

bool MotifDnDDragSourceProtocol::processClientMessage($XClientMessageEvent* xclient) {
	int64_t var$0 = $nc(xclient)->get_message_type();
	$init($MotifDnDConstants);
	if (var$0 != $nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom()) {
		return false;
	}
	int64_t data = $nc(xclient)->get_data();
	int8_t reason = (int8_t)((int32_t)($nc(MotifDnDDragSourceProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_REASON_MASK));
	int8_t origin = (int8_t)((int32_t)($nc(MotifDnDDragSourceProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_SENDER_MASK));
	int8_t byteOrder = $nc(MotifDnDDragSourceProtocol::unsafe)->getByte(data + 1);
	bool swapNeeded = byteOrder != $MotifDnDConstants::getByteOrderByte();
	int32_t action = $DnDConstants::ACTION_NONE;
	int32_t x = 0;
	int32_t y = 0;
	if (origin != $MotifDnDConstants::MOTIF_MESSAGE_FROM_RECEIVER) {
		return false;
	}
	switch (reason) {
	case $MotifDnDConstants::DROP_SITE_ENTER:
		{}
	case $MotifDnDConstants::DROP_SITE_LEAVE:
		{}
	case $MotifDnDConstants::DRAG_MOTION:
		{}
	case $MotifDnDConstants::OPERATION_CHANGED:
		{
			break;
		}
	default:
		{
			return false;
		}
	}
	int32_t t = $nc(MotifDnDDragSourceProtocol::unsafe)->getInt(data + 4);
	if (swapNeeded) {
		t = $MotifDnDConstants$Swapper::swap(t);
	}
	int64_t time = (int64_t)(t & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	if (this->targetEnterServerTime == $XConstants::CurrentTime || time < this->targetEnterServerTime) {
		return true;
	}
	if (reason != $MotifDnDConstants::DROP_SITE_LEAVE) {
		int16_t flags = $nc(MotifDnDDragSourceProtocol::unsafe)->getShort(data + 2);
		if (swapNeeded) {
			flags = $MotifDnDConstants$Swapper::swap(flags);
		}
		int8_t status = (int8_t)($sr((int32_t)(flags & (uint32_t)$MotifDnDConstants::MOTIF_DND_STATUS_MASK), $MotifDnDConstants::MOTIF_DND_STATUS_SHIFT));
		int8_t motif_action = (int8_t)($sr((int32_t)(flags & (uint32_t)$MotifDnDConstants::MOTIF_DND_ACTION_MASK), $MotifDnDConstants::MOTIF_DND_ACTION_SHIFT));
		if (status == $MotifDnDConstants::MOTIF_VALID_DROP_SITE) {
			action = $MotifDnDConstants::getJavaActionsForMotifActions(motif_action);
		} else {
			action = $DnDConstants::ACTION_NONE;
		}
		int16_t tx = $nc(MotifDnDDragSourceProtocol::unsafe)->getShort(data + 8);
		int16_t ty = $nc(MotifDnDDragSourceProtocol::unsafe)->getShort(data + 10);
		if (swapNeeded) {
			tx = $MotifDnDConstants$Swapper::swap(tx);
			ty = $MotifDnDConstants$Swapper::swap(ty);
		}
		x = tx;
		y = ty;
	}
	$nc($(getProtocolListener()))->handleDragReply(action, x, y);
	return true;
}

$XDragSourceProtocol$TargetWindowInfo* MotifDnDDragSourceProtocol::getTargetWindowInfo(int64_t window) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$init($MotifDnDConstants);
	$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, window, $MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO, (int64_t)0, (int64_t)0x0000FFFF, false, $XConstants::AnyPropertyType));
	{
		$var($Throwable, var$0, nullptr);
		$var($XDragSourceProtocol$TargetWindowInfo, var$2, nullptr);
		bool return$1 = false;
		try {
			int32_t status = wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			bool var$5 = status == $XConstants::Success && wpg->getData() != 0;
			bool var$4 = var$5 && wpg->getActualType() != 0;
			bool var$3 = var$4 && wpg->getActualFormat() == 8;
			if (var$3 && wpg->getNumberOfItems() >= $MotifDnDConstants::MOTIF_RECEIVER_INFO_SIZE) {
				int64_t data = wpg->getData();
				int8_t byteOrderByte = $nc(MotifDnDDragSourceProtocol::unsafe)->getByte(data);
				int8_t dragProtocolStyle = $nc(MotifDnDDragSourceProtocol::unsafe)->getByte(data + 2);
				{
					int32_t proxy = 0;
					int32_t protocolVersion = 0;
					switch (dragProtocolStyle) {
					case $MotifDnDConstants::MOTIF_PREFER_PREREGISTER_STYLE:
						{}
					case $MotifDnDConstants::MOTIF_PREFER_DYNAMIC_STYLE:
						{}
					case $MotifDnDConstants::MOTIF_DYNAMIC_STYLE:
						{}
					case $MotifDnDConstants::MOTIF_PREFER_RECEIVER_STYLE:
						{
							proxy = $nc(MotifDnDDragSourceProtocol::unsafe)->getInt(data + 4);
							if (byteOrderByte != $MotifDnDConstants::getByteOrderByte()) {
								proxy = $MotifDnDConstants$Swapper::swap(proxy);
							}
							protocolVersion = $nc(MotifDnDDragSourceProtocol::unsafe)->getByte(data + 1);
							$assign(var$2, $new($XDragSourceProtocol$TargetWindowInfo, proxy, protocolVersion));
							return$1 = true;
							goto $finally;
						}
					default:
						{
							$assign(var$2, nullptr);
							return$1 = true;
							goto $finally;
						}
					}
				}
			} else {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} $finally: {
			wpg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void MotifDnDDragSourceProtocol::sendEnterMessage($longs* formats, int32_t sourceAction, int32_t sourceActions, int64_t time) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !(getTargetWindow() != 0)) {
		$throwNew($AssertionError);
	}
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !(formats != nullptr)) {
		$throwNew($AssertionError);
	}
	this->targetEnterServerTime = time;
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(getTargetWindow());
			msg->set_format(8);
			$init($MotifDnDConstants);
			msg->set_message_type($nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom());
			int64_t data = msg->get_data();
			int32_t var$1 = ($sl($MotifDnDConstants::getMotifActionsForJavaActions(sourceAction), $MotifDnDConstants::MOTIF_DND_ACTION_SHIFT));
			int32_t flags = var$1 | ($sl($MotifDnDConstants::getMotifActionsForJavaActions(sourceActions), $MotifDnDConstants::MOTIF_DND_ACTIONS_SHIFT));
			$nc(MotifDnDDragSourceProtocol::unsafe)->putByte(data, (int8_t)($MotifDnDConstants::TOP_LEVEL_ENTER | $MotifDnDConstants::MOTIF_MESSAGE_FROM_INITIATOR));
			$nc(MotifDnDDragSourceProtocol::unsafe)->putByte(data + 1, $MotifDnDConstants::getByteOrderByte());
			$nc(MotifDnDDragSourceProtocol::unsafe)->putShort(data + 2, (int16_t)flags);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putInt(data + 4, (int32_t)time);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putInt(data + 8, (int32_t)$XDragSourceProtocol::getDragSourceWindow());
			$nc(MotifDnDDragSourceProtocol::unsafe)->putInt(data + 12, (int32_t)$nc($MotifDnDConstants::XA_MOTIF_ATOM_0)->getAtom());
			int64_t var$2 = $XToolkit::getDisplay();
			$XlibWrapper::XSendEvent(var$2, getTargetProxyWindow(), false, $XConstants::NoEventMask, msg->pData);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MotifDnDDragSourceProtocol::sendMoveMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !(getTargetWindow() != 0)) {
		$throwNew($AssertionError);
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(getTargetWindow());
			msg->set_format(8);
			$init($MotifDnDConstants);
			msg->set_message_type($nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom());
			int64_t data = msg->get_data();
			int32_t var$1 = ($sl($MotifDnDConstants::getMotifActionsForJavaActions(sourceAction), $MotifDnDConstants::MOTIF_DND_ACTION_SHIFT));
			int32_t flags = var$1 | ($sl($MotifDnDConstants::getMotifActionsForJavaActions(sourceActions), $MotifDnDConstants::MOTIF_DND_ACTIONS_SHIFT));
			$nc(MotifDnDDragSourceProtocol::unsafe)->putByte(data, (int8_t)($MotifDnDConstants::DRAG_MOTION | $MotifDnDConstants::MOTIF_MESSAGE_FROM_INITIATOR));
			$nc(MotifDnDDragSourceProtocol::unsafe)->putByte(data + 1, $MotifDnDConstants::getByteOrderByte());
			$nc(MotifDnDDragSourceProtocol::unsafe)->putShort(data + 2, (int16_t)flags);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putInt(data + 4, (int32_t)time);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putShort(data + 8, (int16_t)xRoot);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putShort(data + 10, (int16_t)yRoot);
			int64_t var$2 = $XToolkit::getDisplay();
			$XlibWrapper::XSendEvent(var$2, getTargetProxyWindow(), false, $XConstants::NoEventMask, msg->pData);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MotifDnDDragSourceProtocol::sendLeaveMessage(int64_t time) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !(getTargetWindow() != 0)) {
		$throwNew($AssertionError);
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(getTargetWindow());
			msg->set_format(8);
			$init($MotifDnDConstants);
			msg->set_message_type($nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom());
			int64_t data = msg->get_data();
			$nc(MotifDnDDragSourceProtocol::unsafe)->putByte(data, (int8_t)($MotifDnDConstants::TOP_LEVEL_LEAVE | $MotifDnDConstants::MOTIF_MESSAGE_FROM_INITIATOR));
			$nc(MotifDnDDragSourceProtocol::unsafe)->putByte(data + 1, $MotifDnDConstants::getByteOrderByte());
			$nc(MotifDnDDragSourceProtocol::unsafe)->putShort(data + 2, (int16_t)0);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putInt(data + 4, (int32_t)time);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putInt(data + 8, (int32_t)$XDragSourceProtocol::getDragSourceWindow());
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSendEvent(var$1, getTargetProxyWindow(), false, $XConstants::NoEventMask, msg->pData);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MotifDnDDragSourceProtocol::sendDropMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (!MotifDnDDragSourceProtocol::$assertionsDisabled && !(getTargetWindow() != 0)) {
		$throwNew($AssertionError);
	}
	sendLeaveMessage(time);
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(getTargetWindow());
			msg->set_format(8);
			$init($MotifDnDConstants);
			msg->set_message_type($nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom());
			int64_t data = msg->get_data();
			int32_t var$1 = ($sl($MotifDnDConstants::getMotifActionsForJavaActions(sourceAction), $MotifDnDConstants::MOTIF_DND_ACTION_SHIFT));
			int32_t flags = var$1 | ($sl($MotifDnDConstants::getMotifActionsForJavaActions(sourceActions), $MotifDnDConstants::MOTIF_DND_ACTIONS_SHIFT));
			$nc(MotifDnDDragSourceProtocol::unsafe)->putByte(data, (int8_t)($MotifDnDConstants::DROP_START | $MotifDnDConstants::MOTIF_MESSAGE_FROM_INITIATOR));
			$nc(MotifDnDDragSourceProtocol::unsafe)->putByte(data + 1, $MotifDnDConstants::getByteOrderByte());
			$nc(MotifDnDDragSourceProtocol::unsafe)->putShort(data + 2, (int16_t)flags);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putInt(data + 4, (int32_t)time);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putShort(data + 8, (int16_t)xRoot);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putShort(data + 10, (int16_t)yRoot);
			$nc(MotifDnDDragSourceProtocol::unsafe)->putInt(data + 12, (int32_t)$nc($MotifDnDConstants::XA_MOTIF_ATOM_0)->getAtom());
			$nc(MotifDnDDragSourceProtocol::unsafe)->putInt(data + 16, (int32_t)$XDragSourceProtocol::getDragSourceWindow());
			int64_t var$2 = $XToolkit::getDisplay();
			$XlibWrapper::XSendEvent(var$2, getTargetProxyWindow(), false, $XConstants::NoEventMask, msg->pData);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool MotifDnDDragSourceProtocol::processProxyModeEvent($XClientMessageEvent* xclient, int64_t sourceWindow) {
	return false;
}

void MotifDnDDragSourceProtocol::cleanupTargetInfo() {
	$XDragSourceProtocol::cleanupTargetInfo();
	this->targetEnterServerTime = $XConstants::CurrentTime;
}

void MotifDnDDragSourceProtocol::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	{
		$var($XSelectionRequestEvent, xsre, nullptr)
		int64_t atom = 0;
		switch ($nc(ev)->get_type()) {
		case $XConstants::SelectionRequest:
			{
				$assign(xsre, ev->get_xselectionrequest());
				atom = $nc(xsre)->get_selection();
				$init($MotifDnDConstants);
				if (atom == $nc($MotifDnDConstants::XA_MOTIF_ATOM_0)->getAtom()) {
					int64_t target = xsre->get_target();
					if (target == $nc($MotifDnDConstants::XA_XmTRANSFER_SUCCESS)->getAtom()) {
						$nc($(getProtocolListener()))->handleDragFinished(true);
					} else {
						if (target == $nc($MotifDnDConstants::XA_XmTRANSFER_FAILURE)->getAtom()) {
							$nc($(getProtocolListener()))->handleDragFinished(false);
						}
					}
				}
				break;
			}
		}
	}
}

void clinit$MotifDnDDragSourceProtocol($Class* class$) {
	MotifDnDDragSourceProtocol::$assertionsDisabled = !MotifDnDDragSourceProtocol::class$->desiredAssertionStatus();
	$init($XlibWrapper);
	$assignStatic(MotifDnDDragSourceProtocol::unsafe, $XlibWrapper::unsafe);
}

MotifDnDDragSourceProtocol::MotifDnDDragSourceProtocol() {
}

$Class* MotifDnDDragSourceProtocol::load$($String* name, bool initialize) {
	$loadClass(MotifDnDDragSourceProtocol, name, initialize, &_MotifDnDDragSourceProtocol_ClassInfo_, clinit$MotifDnDDragSourceProtocol, allocate$MotifDnDDragSourceProtocol);
	return class$;
}

$Class* MotifDnDDragSourceProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun