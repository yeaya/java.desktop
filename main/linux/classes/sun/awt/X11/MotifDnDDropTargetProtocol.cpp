#include <sun/awt/X11/MotifDnDDropTargetProtocol.h>

#include <java/awt/Point.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/MotifDnDConstants$Swapper.h>
#include <sun/awt/X11/MotifDnDConstants.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDragAndDropProtocols.h>
#include <sun/awt/X11/XDropTargetEventProcessor.h>
#include <sun/awt/X11/XDropTargetProtocol$EmbedderRegistryEntry.h>
#include <sun/awt/X11/XDropTargetProtocol.h>
#include <sun/awt/X11/XDropTargetProtocolListener.h>
#include <sun/awt/X11/XDropTargetRegistry.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$VerifyChangePropertyHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XException.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

#undef ACTION_NONE
#undef DRAG_MOTION
#undef DROP_MESSAGE
#undef DROP_SITE_ENTER
#undef DROP_SITE_LEAVE
#undef DROP_START
#undef ENTER_MESSAGE
#undef LEAVE_MESSAGE
#undef MOTIF_DND_ACTIONS_MASK
#undef MOTIF_DND_ACTIONS_SHIFT
#undef MOTIF_DND_ACTION_MASK
#undef MOTIF_DND_ACTION_SHIFT
#undef MOTIF_DND_PROTOCOL_VERSION
#undef MOTIF_DND_STATUS_MASK
#undef MOTIF_DND_STATUS_SHIFT
#undef MOTIF_DYNAMIC_STYLE
#undef MOTIF_INITIATOR_INFO_SIZE
#undef MOTIF_INVALID_DROP_SITE
#undef MOTIF_MESSAGE_FROM_INITIATOR
#undef MOTIF_MESSAGE_FROM_RECEIVER
#undef MOTIF_MESSAGE_REASON_MASK
#undef MOTIF_MESSAGE_SENDER_MASK
#undef MOTIF_RECEIVER_INFO_SIZE
#undef MOTIF_VALID_DROP_SITE
#undef MOTION_MESSAGE
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_RELEASED
#undef OPERATION_CHANGED
#undef TOP_LEVEL_ENTER
#undef TOP_LEVEL_LEAVE
#undef UNKNOWN_MESSAGE
#undef XA_MOTIF_ATOM_0
#undef XA_MOTIF_DRAG_AND_DROP_MESSAGE
#undef XA_MOTIF_DRAG_INITIATOR_INFO
#undef XA_MOTIF_DRAG_RECEIVER_INFO

using $Point = ::java::awt::Point;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $MotifDnDConstants = ::sun::awt::X11::MotifDnDConstants;
using $MotifDnDConstants$Swapper = ::sun::awt::X11::MotifDnDConstants$Swapper;
using $Native = ::sun::awt::X11::Native;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDragAndDropProtocols = ::sun::awt::X11::XDragAndDropProtocols;
using $XDropTargetEventProcessor = ::sun::awt::X11::XDropTargetEventProcessor;
using $XDropTargetProtocol = ::sun::awt::X11::XDropTargetProtocol;
using $XDropTargetProtocol$EmbedderRegistryEntry = ::sun::awt::X11::XDropTargetProtocol$EmbedderRegistryEntry;
using $XDropTargetProtocolListener = ::sun::awt::X11::XDropTargetProtocolListener;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$VerifyChangePropertyHandler = ::sun::awt::X11::XErrorHandler$VerifyChangePropertyHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XException = ::sun::awt::X11::XException;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XSelection = ::sun::awt::X11::XSelection;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _MotifDnDDropTargetProtocol_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MotifDnDDropTargetProtocol, $assertionsDisabled)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifDnDDropTargetProtocol, unsafe)},
	{"sourceWindow", "J", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, sourceWindow)},
	{"sourceWindowMask", "J", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, sourceWindowMask)},
	{"sourceProtocolVersion", "I", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, sourceProtocolVersion)},
	{"sourceActions", "I", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, sourceActions)},
	{"sourceFormats", "[J", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, sourceFormats)},
	{"sourceAtom", "J", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, sourceAtom)},
	{"userAction", "I", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, userAction)},
	{"sourceX", "I", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, sourceX)},
	{"sourceY", "I", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, sourceY)},
	{"targetXWindow", "Lsun/awt/X11/XWindow;", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, targetXWindow)},
	{"topLevelLeavePostponed", "Z", nullptr, $PRIVATE, $field(MotifDnDDropTargetProtocol, topLevelLeavePostponed)},
	{}
};

$MethodInfo _MotifDnDDropTargetProtocol_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XDropTargetProtocolListener;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifDnDDropTargetProtocol::*)($XDropTargetProtocolListener*)>(&MotifDnDDropTargetProtocol::init$))},
	{"cleanup", "()V", nullptr, $PUBLIC},
	{"createInstance", "(Lsun/awt/X11/XDropTargetProtocolListener;)Lsun/awt/X11/XDropTargetProtocol;", nullptr, $STATIC, $method(static_cast<$XDropTargetProtocol*(*)($XDropTargetProtocolListener*)>(&MotifDnDDropTargetProtocol::createInstance))},
	{"forwardEventToEmbedded", "(JJI)Z", nullptr, $PUBLIC},
	{"getData", "(JJ)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.io.IOException"},
	{"getMessageType", "(Lsun/awt/X11/XClientMessageEvent;)I", nullptr, $PUBLIC},
	{"getProtocolName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSourceWindow", "()J", nullptr, $PUBLIC | $FINAL},
	{"isDragOverComponent", "()Z", nullptr, $PUBLIC},
	{"isProtocolSupported", "(J)Z", nullptr, $PUBLIC},
	{"isXEmbedSupported", "()Z", nullptr, $PUBLIC},
	{"notifyProtocolListener", "(Lsun/awt/X11/XWindow;IIIILsun/awt/X11/XClientMessageEvent;I)V", nullptr, $PRIVATE, $method(static_cast<void(MotifDnDDropTargetProtocol::*)($XWindow*,int32_t,int32_t,int32_t,int32_t,$XClientMessageEvent*,int32_t)>(&MotifDnDDropTargetProtocol::notifyProtocolListener))},
	{"processClientMessageImpl", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PROTECTED},
	{"processDragMotion", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MotifDnDDropTargetProtocol::*)($XClientMessageEvent*)>(&MotifDnDDropTargetProtocol::processDragMotion))},
	{"processDropStart", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MotifDnDDropTargetProtocol::*)($XClientMessageEvent*)>(&MotifDnDDropTargetProtocol::processDropStart))},
	{"processTopLevelEnter", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MotifDnDDropTargetProtocol::*)($XClientMessageEvent*)>(&MotifDnDDropTargetProtocol::processTopLevelEnter))},
	{"processTopLevelLeave", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MotifDnDDropTargetProtocol::*)($XClientMessageEvent*)>(&MotifDnDDropTargetProtocol::processTopLevelLeave))},
	{"registerDropTarget", "(J)V", nullptr, $PUBLIC},
	{"registerEmbeddedDropSite", "(J)V", nullptr, $PUBLIC},
	{"registerEmbedderDropSite", "(J)V", nullptr, $PUBLIC},
	{"sendDropDone", "(JZI)Z", nullptr, $PUBLIC},
	{"sendEnterMessageToToplevel", "(JLsun/awt/X11/XClientMessageEvent;)V", nullptr, $PROTECTED},
	{"sendLeaveMessageToToplevel", "(JLsun/awt/X11/XClientMessageEvent;)V", nullptr, $PROTECTED},
	{"sendResponse", "(JII)Z", nullptr, $PUBLIC},
	{"unregisterDropTarget", "(J)V", nullptr, $PUBLIC},
	{"unregisterEmbedderDropSite", "(J)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MotifDnDDropTargetProtocol_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.MotifDnDDropTargetProtocol",
	"sun.awt.X11.XDropTargetProtocol",
	nullptr,
	_MotifDnDDropTargetProtocol_FieldInfo_,
	_MotifDnDDropTargetProtocol_MethodInfo_
};

$Object* allocate$MotifDnDDropTargetProtocol($Class* clazz) {
	return $of($alloc(MotifDnDDropTargetProtocol));
}

bool MotifDnDDropTargetProtocol::$assertionsDisabled = false;
$Unsafe* MotifDnDDropTargetProtocol::unsafe = nullptr;

void MotifDnDDropTargetProtocol::init$($XDropTargetProtocolListener* listener) {
	$XDropTargetProtocol::init$(listener);
	this->sourceWindow = 0;
	this->sourceWindowMask = 0;
	this->sourceProtocolVersion = 0;
	this->sourceActions = $DnDConstants::ACTION_NONE;
	$set(this, sourceFormats, nullptr);
	this->sourceAtom = 0;
	this->userAction = $DnDConstants::ACTION_NONE;
	this->sourceX = 0;
	this->sourceY = 0;
	$set(this, targetXWindow, nullptr);
	this->topLevelLeavePostponed = false;
}

$XDropTargetProtocol* MotifDnDDropTargetProtocol::createInstance($XDropTargetProtocolListener* listener) {
	$init(MotifDnDDropTargetProtocol);
	return $new(MotifDnDDropTargetProtocol, listener);
}

$String* MotifDnDDropTargetProtocol::getProtocolName() {
	$init($XDragAndDropProtocols);
	return $XDragAndDropProtocols::MotifDnD;
}

void MotifDnDDropTargetProtocol::registerDropTarget(int64_t window) {
	if (!MotifDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$MotifDnDConstants::writeDragReceiverInfoStruct(window);
}

void MotifDnDDropTargetProtocol::unregisterDropTarget(int64_t window) {
	if (!MotifDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$init($MotifDnDConstants);
	$nc($MotifDnDConstants::XA_MOTIF_ATOM_0)->DeleteProperty(window);
}

void MotifDnDDropTargetProtocol::registerEmbedderDropSite(int64_t embedder) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	bool overriden = false;
	int32_t version = 0;
	int64_t proxy = 0;
	int64_t newProxy = $XDropTargetRegistry::getDnDProxyWindow();
	int32_t status = 0;
	int64_t data = 0;
	int32_t dataSize = $MotifDnDConstants::MOTIF_RECEIVER_INFO_SIZE;
	$init($MotifDnDConstants);
	$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, embedder, $MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO, (int64_t)0, (int64_t)0x0000FFFF, false, $XConstants::AnyPropertyType));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			status = wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			bool var$4 = status == $XConstants::Success && wpg->getData() != 0;
			bool var$3 = var$4 && wpg->getActualType() != 0;
			bool var$2 = var$3 && wpg->getActualFormat() == 8;
			if (var$2 && wpg->getNumberOfItems() >= $MotifDnDConstants::MOTIF_RECEIVER_INFO_SIZE) {
				overriden = true;
				data = wpg->getData();
				dataSize = wpg->getNumberOfItems();
				int8_t byteOrderByte = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data);
				{
					int32_t tproxy = $nc(MotifDnDDropTargetProtocol::unsafe)->getInt(data + 4);
					if (byteOrderByte != $MotifDnDConstants::getByteOrderByte()) {
						tproxy = $MotifDnDConstants$Swapper::swap(tproxy);
					}
					proxy = tproxy;
				}
				if (proxy == newProxy) {
					return$1 = true;
					goto $finally;
				}
				{
					int32_t tproxy = (int32_t)newProxy;
					if (byteOrderByte != $MotifDnDConstants::getByteOrderByte()) {
						tproxy = $MotifDnDConstants$Swapper::swap(tproxy);
					}
					$nc(MotifDnDDropTargetProtocol::unsafe)->putInt(data + 4, tproxy);
				}
			} else {
				data = $nc(MotifDnDDropTargetProtocol::unsafe)->allocateMemory(dataSize);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putByte(data, $MotifDnDConstants::getByteOrderByte());
				$nc(MotifDnDDropTargetProtocol::unsafe)->putByte(data + 1, $MotifDnDConstants::MOTIF_DND_PROTOCOL_VERSION);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putByte(data + 2, (int8_t)$MotifDnDConstants::MOTIF_DYNAMIC_STYLE);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putByte(data + 3, (int8_t)0);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putInt(data + 4, (int32_t)newProxy);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putShort(data + 8, (int16_t)0);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putShort(data + 10, (int16_t)0);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putInt(data + 12, dataSize);
			}
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			int64_t var$5 = $XToolkit::getDisplay();
			int64_t var$6 = embedder;
			int64_t var$7 = $nc($MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO)->getAtom();
			$XlibWrapper::XChangeProperty(var$5, var$6, var$7, $nc($MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO)->getAtom(), 8, $XConstants::PropModeReplace, data, dataSize);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				$throwNew($XException, "Cannot write Motif receiver info property"_s);
			}
		} catch ($Throwable& var$8) {
			$assign(var$0, var$8);
		} $finally: {
			if (!overriden) {
				$nc(MotifDnDDropTargetProtocol::unsafe)->freeMemory(data);
				data = 0;
			}
			wpg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	putEmbedderRegistryEntry(embedder, overriden, version, proxy);
}

void MotifDnDDropTargetProtocol::unregisterEmbedderDropSite(int64_t embedder) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$var($XDropTargetProtocol$EmbedderRegistryEntry, entry, getEmbedderRegistryEntry(embedder));
	if (entry == nullptr) {
		return;
	}
	if ($nc(entry)->isOverriden()) {
		int32_t status = 0;
		$init($MotifDnDConstants);
		$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, embedder, $MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO, (int64_t)0, (int64_t)0x0000FFFF, false, $XConstants::AnyPropertyType));
		{
			$var($Throwable, var$0, nullptr);
			try {
				status = wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				bool var$3 = status == $XConstants::Success && wpg->getData() != 0;
				bool var$2 = var$3 && wpg->getActualType() != 0;
				bool var$1 = var$2 && wpg->getActualFormat() == 8;
				if (var$1 && wpg->getNumberOfItems() >= $MotifDnDConstants::MOTIF_RECEIVER_INFO_SIZE) {
					int32_t dataSize = $MotifDnDConstants::MOTIF_RECEIVER_INFO_SIZE;
					int64_t data = wpg->getData();
					int8_t byteOrderByte = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data);
					int32_t tproxy = (int32_t)entry->getProxy();
					if ($MotifDnDConstants::getByteOrderByte() != byteOrderByte) {
						tproxy = $MotifDnDConstants$Swapper::swap(tproxy);
					}
					$nc(MotifDnDDropTargetProtocol::unsafe)->putInt(data + 4, tproxy);
					$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
					int64_t var$4 = $XToolkit::getDisplay();
					int64_t var$5 = embedder;
					int64_t var$6 = $nc($MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO)->getAtom();
					$XlibWrapper::XChangeProperty(var$4, var$5, var$6, $nc($MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO)->getAtom(), 8, $XConstants::PropModeReplace, data, dataSize);
					$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
					if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
						$throwNew($XException, "Cannot write Motif receiver info property"_s);
					}
				}
			} catch ($Throwable& var$7) {
				$assign(var$0, var$7);
			} /*finally*/ {
				wpg->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$init($MotifDnDConstants);
		$nc($MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO)->DeleteProperty(embedder);
	}
}

void MotifDnDDropTargetProtocol::registerEmbeddedDropSite(int64_t embedded) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	bool overriden = false;
	int32_t version = 0;
	int64_t proxy = 0;
	int32_t status = 0;
	$init($MotifDnDConstants);
	$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, embedded, $MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO, (int64_t)0, (int64_t)0x0000FFFF, false, $XConstants::AnyPropertyType));
	{
		$var($Throwable, var$0, nullptr);
		try {
			status = wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			bool var$3 = status == $XConstants::Success && wpg->getData() != 0;
			bool var$2 = var$3 && wpg->getActualType() != 0;
			bool var$1 = var$2 && wpg->getActualFormat() == 8;
			if (var$1 && wpg->getNumberOfItems() >= $MotifDnDConstants::MOTIF_RECEIVER_INFO_SIZE) {
				overriden = true;
				int64_t data = wpg->getData();
				int8_t byteOrderByte = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data);
				{
					int32_t tproxy = $nc(MotifDnDDropTargetProtocol::unsafe)->getInt(data + 4);
					if (byteOrderByte != $MotifDnDConstants::getByteOrderByte()) {
						tproxy = $MotifDnDConstants$Swapper::swap(tproxy);
					}
					proxy = tproxy;
				}
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			wpg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	putEmbedderRegistryEntry(embedded, overriden, version, proxy);
}

bool MotifDnDDropTargetProtocol::isProtocolSupported(int64_t window) {
	$useLocalCurrentObjectStackCache();
	$init($MotifDnDConstants);
	$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, window, $MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO, (int64_t)0, (int64_t)0x0000FFFF, false, $XConstants::AnyPropertyType));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			int32_t status = wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			bool var$5 = status == $XConstants::Success && wpg->getData() != 0;
			bool var$4 = var$5 && wpg->getActualType() != 0;
			bool var$3 = var$4 && wpg->getActualFormat() == 8;
			if (var$3 && wpg->getNumberOfItems() >= $MotifDnDConstants::MOTIF_RECEIVER_INFO_SIZE) {
				var$2 = true;
				return$1 = true;
				goto $finally;
			} else {
				var$2 = false;
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

bool MotifDnDDropTargetProtocol::processTopLevelEnter($XClientMessageEvent* xclient) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (this->targetXWindow != nullptr || this->sourceWindow != 0) {
		return false;
	}
	bool var$0 = !($instanceOf($XWindow, $($XToolkit::windowToXWindow($nc(xclient)->get_window()))));
	if (var$0 && getEmbedderRegistryEntry($nc(xclient)->get_window()) == nullptr) {
		return false;
	}
	int64_t source_win = 0;
	int64_t source_win_mask = 0;
	int32_t protocol_version = 0;
	int64_t property_atom = 0;
	$var($longs, formats, nullptr);
	{
		int64_t data = $nc(xclient)->get_data();
		int8_t eventByteOrder = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data + 1);
		source_win = $MotifDnDConstants$Swapper::getInt(data + 8, eventByteOrder);
		property_atom = $MotifDnDConstants$Swapper::getInt(data + 12, eventByteOrder);
	}
	{
		int64_t var$1 = source_win;
		$var($XAtom, var$2, $XAtom::get(property_atom));
		$init($MotifDnDConstants);
		$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, var$1, var$2, (int64_t)0, (int64_t)0x0000FFFF, false, $nc($MotifDnDConstants::XA_MOTIF_DRAG_INITIATOR_INFO)->getAtom()));
		{
			$var($Throwable, var$3, nullptr);
			bool var$5 = false;
			bool return$4 = false;
			try {
				int32_t status = wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				bool var$8 = status == $XConstants::Success && wpg->getData() != 0;
				if (var$8) {
					int64_t var$9 = wpg->getActualType();
					var$8 = var$9 == $nc($MotifDnDConstants::XA_MOTIF_DRAG_INITIATOR_INFO)->getAtom();
				}
				bool var$7 = var$8;
				bool var$6 = var$7 && wpg->getActualFormat() == 8;
				if (var$6 && wpg->getNumberOfItems() == $MotifDnDConstants::MOTIF_INITIATOR_INFO_SIZE) {
					int64_t data = wpg->getData();
					int8_t propertyByteOrder = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data);
					protocol_version = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data + 1);
					if (protocol_version != $MotifDnDConstants::MOTIF_DND_PROTOCOL_VERSION) {
						var$5 = false;
						return$4 = true;
						goto $finally;
					}
					int32_t index = $MotifDnDConstants$Swapper::getShort(data + 2, propertyByteOrder);
					$assign(formats, $MotifDnDConstants::getTargetListForIndex(index));
				} else {
					$assign(formats, $new($longs, 0));
				}
			} catch ($Throwable& var$10) {
				$assign(var$3, var$10);
			} $finally: {
				wpg->dispose();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
			if (return$4) {
				return var$5;
			}
		}
	}
	$var($XWindowAttributes, wattr, $new($XWindowAttributes));
	{
		$var($Throwable, var$11, nullptr);
		try {
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			int32_t status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), source_win, wattr->pData);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if ((status == 0) || (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success))) {
				$throwNew($XException, "XGetWindowAttributes failed"_s);
			}
			source_win_mask = wattr->get_your_event_mask();
		} catch ($Throwable& var$12) {
			$assign(var$11, var$12);
		} /*finally*/ {
			wattr->dispose();
		}
		if (var$11 != nullptr) {
			$throw(var$11);
		}
	}
	$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
	$XlibWrapper::XSelectInput($XToolkit::getDisplay(), source_win, source_win_mask | $XConstants::StructureNotifyMask);
	$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
	if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
		$throwNew($XException, "XSelectInput failed"_s);
	}
	this->sourceWindow = source_win;
	this->sourceWindowMask = source_win_mask;
	this->sourceProtocolVersion = protocol_version;
	this->sourceActions = $DnDConstants::ACTION_NONE;
	$set(this, sourceFormats, formats);
	this->sourceAtom = property_atom;
	return true;
}

bool MotifDnDDropTargetProtocol::processDragMotion($XClientMessageEvent* xclient) {
	$useLocalCurrentObjectStackCache();
	int64_t data = $nc(xclient)->get_data();
	int8_t eventByteOrder = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data + 1);
	int8_t eventReason = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_REASON_MASK));
	int32_t x = 0;
	int32_t y = 0;
	int16_t flags = $MotifDnDConstants$Swapper::getShort(data + 2, eventByteOrder);
	int32_t motif_action = $sr((int32_t)(flags & (uint32_t)$MotifDnDConstants::MOTIF_DND_ACTION_MASK), $MotifDnDConstants::MOTIF_DND_ACTION_SHIFT);
	int32_t motif_actions = $sr((int32_t)(flags & (uint32_t)$MotifDnDConstants::MOTIF_DND_ACTIONS_MASK), $MotifDnDConstants::MOTIF_DND_ACTIONS_SHIFT);
	int32_t java_action = $MotifDnDConstants::getJavaActionsForMotifActions(motif_action);
	int32_t java_actions = $MotifDnDConstants::getJavaActionsForMotifActions(motif_actions);
	{
		int32_t win = (int32_t)this->sourceWindow;
		if (eventByteOrder != $MotifDnDConstants::getByteOrderByte()) {
			win = $MotifDnDConstants$Swapper::swap(win);
		}
		$nc(MotifDnDDropTargetProtocol::unsafe)->putInt(data + 12, win);
	}
	$var($XWindow, xwindow, nullptr);
	{
		$var($XBaseWindow, xbasewindow, $XToolkit::windowToXWindow(xclient->get_window()));
		if ($instanceOf($XWindow, xbasewindow)) {
			$assign(xwindow, $cast($XWindow, xbasewindow));
		}
	}
	if (eventReason == $MotifDnDConstants::OPERATION_CHANGED) {
		x = this->sourceX;
		y = this->sourceY;
		if (xwindow == nullptr) {
			$assign(xwindow, this->targetXWindow);
		}
	} else {
		x = $MotifDnDConstants$Swapper::getShort(data + 8, eventByteOrder);
		y = $MotifDnDConstants$Swapper::getShort(data + 10, eventByteOrder);
		if (xwindow == nullptr) {
			int64_t receiver = $nc($($XDropTargetRegistry::getRegistry()))->getEmbeddedDropSite(xclient->get_window(), x, y);
			if (receiver != 0) {
				$var($XBaseWindow, xbasewindow, $XToolkit::windowToXWindow(receiver));
				if ($instanceOf($XWindow, xbasewindow)) {
					$assign(xwindow, $cast($XWindow, xbasewindow));
				}
			}
		}
		if (xwindow != nullptr) {
			$var($Point, p, xwindow->toLocal(x, y));
			x = $nc(p)->x;
			y = p->y;
		}
	}
	if (xwindow == nullptr) {
		if (this->targetXWindow != nullptr) {
			notifyProtocolListener(this->targetXWindow, x, y, $DnDConstants::ACTION_NONE, java_actions, xclient, $MouseEvent::MOUSE_EXITED);
		}
	} else {
		int32_t java_event_id = 0;
		if (this->targetXWindow == nullptr) {
			java_event_id = $MouseEvent::MOUSE_ENTERED;
		} else {
			java_event_id = $MouseEvent::MOUSE_DRAGGED;
		}
		notifyProtocolListener(xwindow, x, y, java_action, java_actions, xclient, java_event_id);
	}
	this->sourceActions = java_actions;
	this->userAction = java_action;
	this->sourceX = x;
	this->sourceY = y;
	$set(this, targetXWindow, xwindow);
	return true;
}

bool MotifDnDDropTargetProtocol::processTopLevelLeave($XClientMessageEvent* xclient) {
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	int64_t data = $nc(xclient)->get_data();
	int8_t eventByteOrder = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data + 1);
	int64_t source_win = $MotifDnDConstants$Swapper::getInt(data + 8, eventByteOrder);
	if (source_win != this->sourceWindow) {
		return false;
	}
	this->topLevelLeavePostponed = true;
	{
		int64_t proxy = 0;
		if (getEmbedderRegistryEntry(xclient->get_window()) != nullptr) {
			proxy = $XDropTargetRegistry::getDnDProxyWindow();
		} else {
			proxy = xclient->get_window();
		}
		$var($XClientMessageEvent, dummy, $new($XClientMessageEvent));
		{
			$var($Throwable, var$0, nullptr);
			try {
				dummy->set_type($XConstants::ClientMessage);
				dummy->set_window(xclient->get_window());
				dummy->set_format(32);
				dummy->set_message_type(0);
				dummy->set_data(0, 0);
				dummy->set_data(1, 0);
				dummy->set_data(2, 0);
				dummy->set_data(3, 0);
				dummy->set_data(4, 0);
				$XlibWrapper::XSendEvent($XToolkit::getDisplay(), proxy, false, $XConstants::NoEventMask, dummy->pData);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				dummy->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return true;
}

bool MotifDnDDropTargetProtocol::processDropStart($XClientMessageEvent* xclient) {
	$useLocalCurrentObjectStackCache();
	int64_t data = $nc(xclient)->get_data();
	int8_t eventByteOrder = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data + 1);
	int64_t source_win = $MotifDnDConstants$Swapper::getInt(data + 16, eventByteOrder);
	if (source_win != this->sourceWindow) {
		return false;
	}
	int64_t property_atom = $MotifDnDConstants$Swapper::getInt(data + 12, eventByteOrder);
	int16_t flags = $MotifDnDConstants$Swapper::getShort(data + 2, eventByteOrder);
	int32_t motif_action = $sr((int32_t)(flags & (uint32_t)$MotifDnDConstants::MOTIF_DND_ACTION_MASK), $MotifDnDConstants::MOTIF_DND_ACTION_SHIFT);
	int32_t motif_actions = $sr((int32_t)(flags & (uint32_t)$MotifDnDConstants::MOTIF_DND_ACTIONS_MASK), $MotifDnDConstants::MOTIF_DND_ACTIONS_SHIFT);
	int32_t java_action = $MotifDnDConstants::getJavaActionsForMotifActions(motif_action);
	int32_t java_actions = $MotifDnDConstants::getJavaActionsForMotifActions(motif_actions);
	int32_t x = $MotifDnDConstants$Swapper::getShort(data + 8, eventByteOrder);
	int32_t y = $MotifDnDConstants$Swapper::getShort(data + 10, eventByteOrder);
	$var($XWindow, xwindow, nullptr);
	{
		$var($XBaseWindow, xbasewindow, $XToolkit::windowToXWindow(xclient->get_window()));
		if ($instanceOf($XWindow, xbasewindow)) {
			$assign(xwindow, $cast($XWindow, xbasewindow));
		}
	}
	if (xwindow == nullptr) {
		int64_t receiver = $nc($($XDropTargetRegistry::getRegistry()))->getEmbeddedDropSite(xclient->get_window(), x, y);
		if (receiver != 0) {
			$var($XBaseWindow, xbasewindow, $XToolkit::windowToXWindow(receiver));
			if ($instanceOf($XWindow, xbasewindow)) {
				$assign(xwindow, $cast($XWindow, xbasewindow));
			}
		}
	}
	if (xwindow != nullptr) {
		$var($Point, p, xwindow->toLocal(x, y));
		x = $nc(p)->x;
		y = p->y;
	}
	if (xwindow != nullptr) {
		notifyProtocolListener(xwindow, x, y, java_action, java_actions, xclient, $MouseEvent::MOUSE_RELEASED);
	} else if (this->targetXWindow != nullptr) {
		notifyProtocolListener(this->targetXWindow, x, y, $DnDConstants::ACTION_NONE, java_actions, xclient, $MouseEvent::MOUSE_EXITED);
	}
	return true;
}

int32_t MotifDnDDropTargetProtocol::getMessageType($XClientMessageEvent* xclient) {
	int64_t var$0 = $nc(xclient)->get_message_type();
	$init($MotifDnDConstants);
	if (var$0 != $nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom()) {
		return $XDropTargetProtocol::UNKNOWN_MESSAGE;
	}
	int64_t data = $nc(xclient)->get_data();
	int8_t reason = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_REASON_MASK));
	switch (reason) {
	case $MotifDnDConstants::TOP_LEVEL_ENTER:
		{
			return $XDropTargetProtocol::ENTER_MESSAGE;
		}
	case $MotifDnDConstants::DRAG_MOTION:
		{}
	case $MotifDnDConstants::OPERATION_CHANGED:
		{
			return $XDropTargetProtocol::MOTION_MESSAGE;
		}
	case $MotifDnDConstants::TOP_LEVEL_LEAVE:
		{
			return $XDropTargetProtocol::LEAVE_MESSAGE;
		}
	case $MotifDnDConstants::DROP_START:
		{
			return $XDropTargetProtocol::DROP_MESSAGE;
		}
	default:
		{
			return $XDropTargetProtocol::UNKNOWN_MESSAGE;
		}
	}
}

bool MotifDnDDropTargetProtocol::processClientMessageImpl($XClientMessageEvent* xclient) {
	int64_t var$0 = $nc(xclient)->get_message_type();
	$init($MotifDnDConstants);
	if (var$0 != $nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom()) {
		if (this->topLevelLeavePostponed) {
			this->topLevelLeavePostponed = false;
			cleanup();
		}
		return false;
	}
	int64_t data = $nc(xclient)->get_data();
	int8_t reason = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_REASON_MASK));
	int8_t origin = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_SENDER_MASK));
	if (this->topLevelLeavePostponed) {
		this->topLevelLeavePostponed = false;
		if (reason != $MotifDnDConstants::DROP_START) {
			cleanup();
		}
	}
	if (origin != $MotifDnDConstants::MOTIF_MESSAGE_FROM_INITIATOR) {
		return false;
	}
	switch (reason) {
	case $MotifDnDConstants::TOP_LEVEL_ENTER:
		{
			return processTopLevelEnter(xclient);
		}
	case $MotifDnDConstants::DRAG_MOTION:
		{}
	case $MotifDnDConstants::OPERATION_CHANGED:
		{
			return processDragMotion(xclient);
		}
	case $MotifDnDConstants::TOP_LEVEL_LEAVE:
		{
			return processTopLevelLeave(xclient);
		}
	case $MotifDnDConstants::DROP_START:
		{
			return processDropStart(xclient);
		}
	default:
		{
			return false;
		}
	}
}

void MotifDnDDropTargetProtocol::sendEnterMessageToToplevel(int64_t win, $XClientMessageEvent* xclient) {
	$throwNew($Error, "UNIMPLEMENTED"_s);
}

void MotifDnDDropTargetProtocol::sendLeaveMessageToToplevel(int64_t win, $XClientMessageEvent* xclient) {
	$throwNew($Error, "UNIMPLEMENTED"_s);
}

bool MotifDnDDropTargetProtocol::forwardEventToEmbedded(int64_t embedded, int64_t ctxt, int32_t eventID) {
	return false;
}

bool MotifDnDDropTargetProtocol::isXEmbedSupported() {
	return false;
}

bool MotifDnDDropTargetProtocol::sendResponse(int64_t ctxt, int32_t eventID, int32_t action) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, xclient, $new($XClientMessageEvent, ctxt));
	int64_t var$0 = xclient->get_message_type();
	$init($MotifDnDConstants);
	if (var$0 != $nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom()) {
		return false;
	}
	int64_t data = xclient->get_data();
	int8_t reason = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_REASON_MASK));
	int8_t origin = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_SENDER_MASK));
	int8_t eventByteOrder = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data + 1);
	int8_t response_reason = (int8_t)0;
	if (origin != $MotifDnDConstants::MOTIF_MESSAGE_FROM_INITIATOR) {
		return false;
	}
	switch (reason) {
	case $MotifDnDConstants::TOP_LEVEL_ENTER:
		{}
	case $MotifDnDConstants::TOP_LEVEL_LEAVE:
		{
			return false;
		}
	case $MotifDnDConstants::DRAG_MOTION:
		{
			switch (eventID) {
			case $MouseEvent::MOUSE_ENTERED:
				{
					response_reason = $MotifDnDConstants::DROP_SITE_ENTER;
					break;
				}
			case $MouseEvent::MOUSE_DRAGGED:
				{
					response_reason = $MotifDnDConstants::DRAG_MOTION;
					break;
				}
			case $MouseEvent::MOUSE_EXITED:
				{
					response_reason = $MotifDnDConstants::DROP_SITE_LEAVE;
					break;
				}
			}
			break;
		}
	case $MotifDnDConstants::OPERATION_CHANGED:
		{}
	case $MotifDnDConstants::DROP_START:
		{
			response_reason = reason;
			break;
		}
	default:
		{
			if (!MotifDnDDropTargetProtocol::$assertionsDisabled) {
				$throwNew($AssertionError);
			}
		}
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$1, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window($MotifDnDConstants$Swapper::getInt(data + 12, eventByteOrder));
			msg->set_format(8);
			msg->set_message_type($nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom());
			int64_t responseData = msg->get_data();
			$nc(MotifDnDDropTargetProtocol::unsafe)->putByte(responseData, (int8_t)(response_reason | $MotifDnDConstants::MOTIF_MESSAGE_FROM_RECEIVER));
			$nc(MotifDnDDropTargetProtocol::unsafe)->putByte(responseData + 1, $MotifDnDConstants::getByteOrderByte());
			int32_t response_flags = 0;
			if (response_reason != $MotifDnDConstants::DROP_SITE_LEAVE) {
				int16_t flags = $MotifDnDConstants$Swapper::getShort(data + 2, eventByteOrder);
				int8_t dropSiteStatus = (action == $DnDConstants::ACTION_NONE) ? $MotifDnDConstants::MOTIF_INVALID_DROP_SITE : $MotifDnDConstants::MOTIF_VALID_DROP_SITE;
				response_flags = (int32_t)(((int32_t)(flags & (uint32_t)~$MotifDnDConstants::MOTIF_DND_ACTION_MASK)) & (uint32_t)~$MotifDnDConstants::MOTIF_DND_STATUS_MASK);
				response_flags |= $sl($MotifDnDConstants::getMotifActionsForJavaActions(action), $MotifDnDConstants::MOTIF_DND_ACTION_SHIFT);
				response_flags |= $sl((int32_t)dropSiteStatus, $MotifDnDConstants::MOTIF_DND_STATUS_SHIFT);
			} else {
				response_flags = 0;
			}
			$nc(MotifDnDDropTargetProtocol::unsafe)->putShort(responseData + 2, (int16_t)response_flags);
			int32_t time = $MotifDnDConstants$Swapper::getInt(data + 4, eventByteOrder);
			$nc(MotifDnDDropTargetProtocol::unsafe)->putInt(responseData + 4, time);
			if (response_reason != $MotifDnDConstants::DROP_SITE_LEAVE) {
				int16_t x = $MotifDnDConstants$Swapper::getShort(data + 8, eventByteOrder);
				int16_t y = $MotifDnDConstants$Swapper::getShort(data + 10, eventByteOrder);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putShort(responseData + 8, x);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putShort(responseData + 10, y);
			} else {
				$nc(MotifDnDDropTargetProtocol::unsafe)->putShort(responseData + 8, (int16_t)0);
				$nc(MotifDnDDropTargetProtocol::unsafe)->putShort(responseData + 10, (int16_t)0);
			}
			$XToolkit::awtLock();
			{
				$var($Throwable, var$2, nullptr);
				try {
					int64_t var$3 = $XToolkit::getDisplay();
					$XlibWrapper::XSendEvent(var$3, msg->get_window(), false, $XConstants::NoEventMask, msg->pData);
				} catch ($Throwable& var$4) {
					$assign(var$2, var$4);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$1, var$5);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	return true;
}

$Object* MotifDnDDropTargetProtocol::getData(int64_t ctxt, int64_t format) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, xclient, $new($XClientMessageEvent, ctxt));
	int64_t var$0 = xclient->get_message_type();
	$init($MotifDnDConstants);
	if (var$0 != $nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom()) {
		$throwNew($IllegalArgumentException);
	}
	int64_t data = xclient->get_data();
	int8_t reason = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_REASON_MASK));
	int8_t origin = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_SENDER_MASK));
	int8_t eventByteOrder = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data + 1);
	if (origin != $MotifDnDConstants::MOTIF_MESSAGE_FROM_INITIATOR) {
		$throwNew($IOException, "Cannot get data: corrupted context"_s);
	}
	int64_t selatom = 0;
	switch (reason) {
	case $MotifDnDConstants::DRAG_MOTION:
		{}
	case $MotifDnDConstants::OPERATION_CHANGED:
		{
			selatom = this->sourceAtom;
			break;
		}
	case $MotifDnDConstants::DROP_START:
		{
			selatom = $MotifDnDConstants$Swapper::getInt(data + 12, eventByteOrder);
			break;
		}
	default:
		{
			$throwNew($IOException, "Cannot get data: invalid message reason"_s);
		}
	}
	if (selatom == 0) {
		$throwNew($IOException, "Cannot get data: drag source property atom unavailable"_s);
	}
	int64_t time_stamp = (int64_t)($MotifDnDConstants$Swapper::getInt(data + 4, eventByteOrder) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	$var($XAtom, selectionAtom, $XAtom::get(selatom));
	$var($XSelection, selection, $XSelection::getSelection(selectionAtom));
	if (selection == nullptr) {
		$assign(selection, $new($XSelection, selectionAtom));
	}
	return $of($nc(selection)->getData(format, time_stamp));
}

bool MotifDnDDropTargetProtocol::sendDropDone(int64_t ctxt, bool success, int32_t dropAction) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, xclient, $new($XClientMessageEvent, ctxt));
	int64_t var$0 = xclient->get_message_type();
	$init($MotifDnDConstants);
	if (var$0 != $nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom()) {
		return false;
	}
	int64_t data = xclient->get_data();
	int8_t reason = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_REASON_MASK));
	int8_t origin = (int8_t)((int32_t)($nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data) & (uint32_t)(int32_t)$MotifDnDConstants::MOTIF_MESSAGE_SENDER_MASK));
	int8_t eventByteOrder = $nc(MotifDnDDropTargetProtocol::unsafe)->getByte(data + 1);
	if (origin != $MotifDnDConstants::MOTIF_MESSAGE_FROM_INITIATOR) {
		return false;
	}
	if (reason != $MotifDnDConstants::DROP_START) {
		return false;
	}
	int64_t time_stamp = (int64_t)($MotifDnDConstants$Swapper::getInt(data + 4, eventByteOrder) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	int64_t sel_atom = $MotifDnDConstants$Swapper::getInt(data + 12, eventByteOrder);
	int64_t status_atom = 0;
	if (success) {
		status_atom = $nc($MotifDnDConstants::XA_XmTRANSFER_SUCCESS)->getAtom();
	} else {
		status_atom = $nc($MotifDnDConstants::XA_XmTRANSFER_FAILURE)->getAtom();
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$1, nullptr);
		try {
			int64_t var$2 = $XToolkit::getDisplay();
			int64_t var$3 = sel_atom;
			int64_t var$4 = status_atom;
			int64_t var$5 = $nc($MotifDnDConstants::XA_MOTIF_ATOM_0)->getAtom();
			$XlibWrapper::XConvertSelection(var$2, var$3, var$4, var$5, $nc($($XWindow::getXAWTRootWindow()))->getWindow(), time_stamp);
			$XlibWrapper::XFlush($XToolkit::getDisplay());
		} catch ($Throwable& var$6) {
			$assign(var$1, var$6);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	$set(this, targetXWindow, nullptr);
	cleanup();
	return true;
}

int64_t MotifDnDDropTargetProtocol::getSourceWindow() {
	return this->sourceWindow;
}

void MotifDnDDropTargetProtocol::cleanup() {
	$useLocalCurrentObjectStackCache();
	$XDropTargetEventProcessor::reset();
	if (this->targetXWindow != nullptr) {
		notifyProtocolListener(this->targetXWindow, 0, 0, $DnDConstants::ACTION_NONE, this->sourceActions, nullptr, $MouseEvent::MOUSE_EXITED);
	}
	if (this->sourceWindow != 0) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				$XlibWrapper::XSelectInput($XToolkit::getDisplay(), this->sourceWindow, this->sourceWindowMask);
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	this->sourceWindow = 0;
	this->sourceWindowMask = 0;
	this->sourceProtocolVersion = 0;
	this->sourceActions = $DnDConstants::ACTION_NONE;
	$set(this, sourceFormats, nullptr);
	this->sourceAtom = 0;
	this->userAction = $DnDConstants::ACTION_NONE;
	this->sourceX = 0;
	this->sourceY = 0;
	$set(this, targetXWindow, nullptr);
	this->topLevelLeavePostponed = false;
}

bool MotifDnDDropTargetProtocol::isDragOverComponent() {
	return this->targetXWindow != nullptr;
}

void MotifDnDDropTargetProtocol::notifyProtocolListener($XWindow* xwindow, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $XClientMessageEvent* xclient, int32_t eventID) {
	int64_t nativeCtxt = 0;
	if (xclient != nullptr) {
		int32_t size = $XClientMessageEvent::getSize();
		nativeCtxt = $nc(MotifDnDDropTargetProtocol::unsafe)->allocateMemory(size + 4 * $Native::getLongSize());
		$nc(MotifDnDDropTargetProtocol::unsafe)->copyMemory(xclient->pData, nativeCtxt, size);
	}
	$nc($(getProtocolListener()))->handleDropTargetNotification(xwindow, x, y, dropAction, actions, this->sourceFormats, nativeCtxt, eventID);
}

void clinit$MotifDnDDropTargetProtocol($Class* class$) {
	MotifDnDDropTargetProtocol::$assertionsDisabled = !MotifDnDDropTargetProtocol::class$->desiredAssertionStatus();
	$init($XlibWrapper);
	$assignStatic(MotifDnDDropTargetProtocol::unsafe, $XlibWrapper::unsafe);
}

MotifDnDDropTargetProtocol::MotifDnDDropTargetProtocol() {
}

$Class* MotifDnDDropTargetProtocol::load$($String* name, bool initialize) {
	$loadClass(MotifDnDDropTargetProtocol, name, initialize, &_MotifDnDDropTargetProtocol_ClassInfo_, clinit$MotifDnDDropTargetProtocol, allocate$MotifDnDDropTargetProtocol);
	return class$;
}

$Class* MotifDnDDropTargetProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun