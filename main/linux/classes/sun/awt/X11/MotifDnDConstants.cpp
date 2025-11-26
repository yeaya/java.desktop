#include <sun/awt/X11/MotifDnDConstants.h>

#include <java/awt/dnd/DnDConstants.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Arrays.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/MotifDnDConstants$Swapper.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$VerifyChangePropertyHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XException.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XSetWindowAttributes.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef ACTION_LINK
#undef ACTION_MOVE
#undef ACTION_NONE
#undef BIG_ENDIAN
#undef DRAG_DROP_FINISH
#undef DRAG_MOTION
#undef DROP_FINISH
#undef DROP_SITE_ENTER
#undef DROP_SITE_LEAVE
#undef DROP_START
#undef LITTLE_ENDIAN
#undef MOTIF_DND_ACTIONS_MASK
#undef MOTIF_DND_ACTIONS_SHIFT
#undef MOTIF_DND_ACTION_MASK
#undef MOTIF_DND_ACTION_SHIFT
#undef MOTIF_DND_COPY
#undef MOTIF_DND_LINK
#undef MOTIF_DND_MOVE
#undef MOTIF_DND_NOOP
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
#undef MOTIF_NO_DROP_SITE
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
#undef XA_MOTIF_DRAG_INITIATOR_INFO
#undef XA_MOTIF_DRAG_RECEIVER_INFO
#undef XA_MOTIF_DRAG_TARGETS
#undef XA_MOTIF_DRAG_WINDOW
#undef XA_STRING
#undef XA_WINDOW

using $longArray2 = $Array<int64_t, 2>;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;
using $Arrays = ::java::util::Arrays;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $MotifDnDConstants$Swapper = ::sun::awt::X11::MotifDnDConstants$Swapper;
using $Native = ::sun::awt::X11::Native;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XConstants = ::sun::awt::X11::XConstants;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$VerifyChangePropertyHandler = ::sun::awt::X11::XErrorHandler$VerifyChangePropertyHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XException = ::sun::awt::X11::XException;
using $XSelection = ::sun::awt::X11::XSelection;
using $XSetWindowAttributes = ::sun::awt::X11::XSetWindowAttributes;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _MotifDnDConstants_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MotifDnDConstants, $assertionsDisabled)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifDnDConstants, unsafe)},
	{"XA_MOTIF_ATOM_0", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(MotifDnDConstants, XA_MOTIF_ATOM_0)},
	{"XA_MOTIF_DRAG_WINDOW", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(MotifDnDConstants, XA_MOTIF_DRAG_WINDOW)},
	{"XA_MOTIF_DRAG_TARGETS", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(MotifDnDConstants, XA_MOTIF_DRAG_TARGETS)},
	{"XA_MOTIF_DRAG_INITIATOR_INFO", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(MotifDnDConstants, XA_MOTIF_DRAG_INITIATOR_INFO)},
	{"XA_MOTIF_DRAG_RECEIVER_INFO", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(MotifDnDConstants, XA_MOTIF_DRAG_RECEIVER_INFO)},
	{"XA_MOTIF_DRAG_AND_DROP_MESSAGE", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(MotifDnDConstants, XA_MOTIF_DRAG_AND_DROP_MESSAGE)},
	{"XA_XmTRANSFER_SUCCESS", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(MotifDnDConstants, XA_XmTRANSFER_SUCCESS)},
	{"XA_XmTRANSFER_FAILURE", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(MotifDnDConstants, XA_XmTRANSFER_FAILURE)},
	{"MotifDnDSelection", "Lsun/awt/X11/XSelection;", nullptr, $STATIC | $FINAL, $staticField(MotifDnDConstants, MotifDnDSelection)},
	{"MOTIF_DND_PROTOCOL_VERSION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_PROTOCOL_VERSION)},
	{"MOTIF_PREFER_PREREGISTER_STYLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_PREFER_PREREGISTER_STYLE)},
	{"MOTIF_PREFER_DYNAMIC_STYLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_PREFER_DYNAMIC_STYLE)},
	{"MOTIF_DYNAMIC_STYLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DYNAMIC_STYLE)},
	{"MOTIF_PREFER_RECEIVER_STYLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_PREFER_RECEIVER_STYLE)},
	{"MOTIF_INITIATOR_INFO_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_INITIATOR_INFO_SIZE)},
	{"MOTIF_RECEIVER_INFO_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_RECEIVER_INFO_SIZE)},
	{"MOTIF_MESSAGE_REASON_MASK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_MESSAGE_REASON_MASK)},
	{"MOTIF_MESSAGE_SENDER_MASK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_MESSAGE_SENDER_MASK)},
	{"MOTIF_MESSAGE_FROM_RECEIVER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_MESSAGE_FROM_RECEIVER)},
	{"MOTIF_MESSAGE_FROM_INITIATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_MESSAGE_FROM_INITIATOR)},
	{"MOTIF_DND_ACTION_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_ACTION_MASK)},
	{"MOTIF_DND_ACTION_SHIFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_ACTION_SHIFT)},
	{"MOTIF_DND_STATUS_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_STATUS_MASK)},
	{"MOTIF_DND_STATUS_SHIFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_STATUS_SHIFT)},
	{"MOTIF_DND_ACTIONS_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_ACTIONS_MASK)},
	{"MOTIF_DND_ACTIONS_SHIFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_ACTIONS_SHIFT)},
	{"TOP_LEVEL_ENTER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, TOP_LEVEL_ENTER)},
	{"TOP_LEVEL_LEAVE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, TOP_LEVEL_LEAVE)},
	{"DRAG_MOTION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, DRAG_MOTION)},
	{"DROP_SITE_ENTER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, DROP_SITE_ENTER)},
	{"DROP_SITE_LEAVE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, DROP_SITE_LEAVE)},
	{"DROP_START", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, DROP_START)},
	{"DROP_FINISH", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, DROP_FINISH)},
	{"DRAG_DROP_FINISH", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, DRAG_DROP_FINISH)},
	{"OPERATION_CHANGED", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, OPERATION_CHANGED)},
	{"MOTIF_DND_NOOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_NOOP)},
	{"MOTIF_DND_MOVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_MOVE)},
	{"MOTIF_DND_COPY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_COPY)},
	{"MOTIF_DND_LINK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_DND_LINK)},
	{"MOTIF_NO_DROP_SITE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_NO_DROP_SITE)},
	{"MOTIF_INVALID_DROP_SITE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_INVALID_DROP_SITE)},
	{"MOTIF_VALID_DROP_SITE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifDnDConstants, MOTIF_VALID_DROP_SITE)},
	{}
};

$MethodInfo _MotifDnDConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MotifDnDConstants::*)()>(&MotifDnDConstants::init$))},
	{"createMotifWindow", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&MotifDnDConstants::createMotifWindow)), "sun.awt.X11.XException"},
	{"getByteOrderByte", "()B", nullptr, $STATIC, $method(static_cast<int8_t(*)()>(&MotifDnDConstants::getByteOrderByte))},
	{"getIndexForTargetList", "([J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($longs*)>(&MotifDnDConstants::getIndexForTargetList)), "sun.awt.X11.XException"},
	{"getJavaActionsForMotifActions", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&MotifDnDConstants::getJavaActionsForMotifActions))},
	{"getMotifActionsForJavaActions", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&MotifDnDConstants::getMotifActionsForJavaActions))},
	{"getMotifWindow", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&MotifDnDConstants::getMotifWindow)), "sun.awt.X11.XException"},
	{"getTargetListForIndex", "(I)[J", nullptr, $STATIC, $method(static_cast<$longs*(*)(int32_t)>(&MotifDnDConstants::getTargetListForIndex))},
	{"getTargetListTable", "(J)[[J", nullptr, $PRIVATE | $STATIC, $method(static_cast<$longArray2*(*)(int64_t)>(&MotifDnDConstants::getTargetListTable)), "sun.awt.X11.XException"},
	{"putTargetListTable", "(J[[J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int64_t,$longArray2*)>(&MotifDnDConstants::putTargetListTable)), "sun.awt.X11.XException"},
	{"readMotifWindow", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&MotifDnDConstants::readMotifWindow)), "sun.awt.X11.XException"},
	{"writeDragInitiatorInfoStruct", "(JI)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t)>(&MotifDnDConstants::writeDragInitiatorInfoStruct)), "sun.awt.X11.XException"},
	{"writeDragReceiverInfoStruct", "(J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t)>(&MotifDnDConstants::writeDragReceiverInfoStruct)), "sun.awt.X11.XException"},
	{}
};

$InnerClassInfo _MotifDnDConstants_InnerClassesInfo_[] = {
	{"sun.awt.X11.MotifDnDConstants$Swapper", "sun.awt.X11.MotifDnDConstants", "Swapper", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MotifDnDConstants_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.MotifDnDConstants",
	"java.lang.Object",
	nullptr,
	_MotifDnDConstants_FieldInfo_,
	_MotifDnDConstants_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDnDConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.MotifDnDConstants$Swapper"
};

$Object* allocate$MotifDnDConstants($Class* clazz) {
	return $of($alloc(MotifDnDConstants));
}

bool MotifDnDConstants::$assertionsDisabled = false;
$Unsafe* MotifDnDConstants::unsafe = nullptr;
$XAtom* MotifDnDConstants::XA_MOTIF_ATOM_0 = nullptr;
$XAtom* MotifDnDConstants::XA_MOTIF_DRAG_WINDOW = nullptr;
$XAtom* MotifDnDConstants::XA_MOTIF_DRAG_TARGETS = nullptr;
$XAtom* MotifDnDConstants::XA_MOTIF_DRAG_INITIATOR_INFO = nullptr;
$XAtom* MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO = nullptr;
$XAtom* MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE = nullptr;
$XAtom* MotifDnDConstants::XA_XmTRANSFER_SUCCESS = nullptr;
$XAtom* MotifDnDConstants::XA_XmTRANSFER_FAILURE = nullptr;
$XSelection* MotifDnDConstants::MotifDnDSelection = nullptr;

void MotifDnDConstants::init$() {
}

int64_t MotifDnDConstants::readMotifWindow() {
	$init(MotifDnDConstants);
	$useLocalCurrentObjectStackCache();
	int64_t defaultScreenNumber = $XlibWrapper::DefaultScreen($XToolkit::getDisplay());
	int64_t defaultRootWindow = $XlibWrapper::RootWindow($XToolkit::getDisplay(), defaultScreenNumber);
	int64_t motifWindow = 0;
	$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, defaultRootWindow, MotifDnDConstants::XA_MOTIF_DRAG_WINDOW, (int64_t)0, (int64_t)1, false, $XConstants::AnyPropertyType));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t status = wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			bool var$5 = status == $XConstants::Success && wpg->getData() != 0;
			bool var$4 = var$5 && wpg->getActualType() == $XAtom::XA_WINDOW;
			bool var$3 = var$4 && wpg->getActualFormat() == 32;
			if (var$3 && wpg->getNumberOfItems() == 1) {
				int64_t data = wpg->getData();
				motifWindow = $Native::getLong(data);
			}
			var$2 = motifWindow;
			return$1 = true;
			goto $finally;
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

int64_t MotifDnDConstants::createMotifWindow() {
	$init(MotifDnDConstants);
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDConstants::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	int64_t defaultScreenNumber = $XlibWrapper::DefaultScreen($XToolkit::getDisplay());
	int64_t defaultRootWindow = $XlibWrapper::RootWindow($XToolkit::getDisplay(), defaultScreenNumber);
	int64_t motifWindow = 0;
	int64_t displayString = $XlibWrapper::XDisplayString($XToolkit::getDisplay());
	if (displayString == 0) {
		$throwNew($XException, "XDisplayString returns NULL"_s);
	}
	int64_t newDisplay = $XlibWrapper::XOpenDisplay(displayString);
	if (newDisplay == 0) {
		$throwNew($XException, "XOpenDisplay returns NULL"_s);
	}
	$XlibWrapper::XGrabServer(newDisplay);
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			$XlibWrapper::XSetCloseDownMode(newDisplay, $XConstants::RetainPermanent);
			$var($XSetWindowAttributes, xwa, $new($XSetWindowAttributes));
			{
				$var($Throwable, var$3, nullptr);
				int64_t var$5 = 0;
				bool return$4 = false;
				try {
					xwa->set_override_redirect(true);
					xwa->set_event_mask($XConstants::PropertyChangeMask);
					motifWindow = $XlibWrapper::XCreateWindow(newDisplay, defaultRootWindow, -10, -10, 1, 1, 0, 0, $XConstants::InputOnly, $XConstants::CopyFromParent, ($XConstants::CWOverrideRedirect | $XConstants::CWEventMask), xwa->pData);
					if (motifWindow == 0) {
						$throwNew($XException, "XCreateWindow returns NULL"_s);
					}
					$XlibWrapper::XMapWindow(newDisplay, motifWindow);
					int64_t data = $Native::allocateLongArray(1);
					{
						$var($Throwable, var$6, nullptr);
						int64_t var$8 = 0;
						bool return$7 = false;
						try {
							$Native::putLong(data, motifWindow);
							$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
							int64_t var$9 = $XToolkit::getDisplay();
							int64_t var$10 = defaultRootWindow;
							$XlibWrapper::XChangeProperty(var$9, var$10, $nc(MotifDnDConstants::XA_MOTIF_DRAG_WINDOW)->getAtom(), $XAtom::XA_WINDOW, 32, $XConstants::PropModeReplace, data, 1);
							$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
							if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
								$throwNew($XException, "Cannot write motif drag window handle."_s);
							}
							var$8 = motifWindow;
							return$7 = true;
							goto $finally2;
						} catch ($Throwable& var$11) {
							$assign(var$6, var$11);
						} $finally2: {
							$nc(MotifDnDConstants::unsafe)->freeMemory(data);
						}
						if (var$6 != nullptr) {
							$throw(var$6);
						}
						if (return$7) {
							var$5 = var$8;
							return$4 = true;
							goto $finally1;
						}
					}
				} catch ($Throwable& var$12) {
					$assign(var$3, var$12);
				} $finally1: {
					xwa->dispose();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					var$2 = var$5;
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$13) {
			$assign(var$0, var$13);
		} $finally: {
			$XlibWrapper::XUngrabServer(newDisplay);
			$XlibWrapper::XCloseDisplay(newDisplay);
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

int64_t MotifDnDConstants::getMotifWindow() {
	$init(MotifDnDConstants);
	int64_t motifWindow = readMotifWindow();
	if (motifWindow == 0) {
		motifWindow = createMotifWindow();
	}
	return motifWindow;
}

$longArray2* MotifDnDConstants::getTargetListTable(int64_t motifWindow) {
	$init(MotifDnDConstants);
	$useLocalCurrentObjectStackCache();
	$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, motifWindow, MotifDnDConstants::XA_MOTIF_DRAG_TARGETS, (int64_t)0, (int64_t)100000, false, $nc(MotifDnDConstants::XA_MOTIF_DRAG_TARGETS)->getAtom()));
	{
		$var($Throwable, var$0, nullptr);
		$var($longArray2, var$2, nullptr);
		bool return$1 = false;
		try {
			int32_t status = wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			bool var$4 = status != $XConstants::Success;
			if (!var$4) {
				int64_t var$5 = wpg->getActualType();
				var$4 = var$5 != $nc(MotifDnDConstants::XA_MOTIF_DRAG_TARGETS)->getAtom();
			}
			bool var$3 = var$4;
			if (var$3 || wpg->getData() == 0) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			int64_t data = wpg->getData();
			if ($nc(MotifDnDConstants::unsafe)->getByte(data + 1) != MotifDnDConstants::MOTIF_DND_PROTOCOL_VERSION) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			int8_t var$6 = $nc(MotifDnDConstants::unsafe)->getByte(data + 0);
			bool swapNeeded = var$6 != getByteOrderByte();
			int16_t numTargetLists = $nc(MotifDnDConstants::unsafe)->getShort(data + 2);
			if (swapNeeded) {
				numTargetLists = $MotifDnDConstants$Swapper::swap(numTargetLists);
			}
			$var($longArray2, table, $new($longArray2, numTargetLists));
			$var($ByteOrder, byteOrder, $ByteOrder::nativeOrder());
			if (swapNeeded) {
				$assign(byteOrder, (byteOrder == $ByteOrder::LITTLE_ENDIAN) ? $ByteOrder::BIG_ENDIAN : $ByteOrder::LITTLE_ENDIAN);
			}
			int64_t bufptr = data + 8;
			for (int16_t i = (int16_t)0; i < numTargetLists; ++i) {
				int16_t numTargets = $nc(MotifDnDConstants::unsafe)->getShort(bufptr);
				bufptr += 2;
				if (swapNeeded) {
					numTargets = $MotifDnDConstants$Swapper::swap(numTargets);
				}
				table->set(i, $$new($longs, numTargets));
				for (int16_t j = (int16_t)0; j < numTargets; ++j) {
					int32_t target = 0;
					if (byteOrder == $ByteOrder::LITTLE_ENDIAN) {
						for (int32_t idx = 0; idx < 4; ++idx) {
							target |= (int32_t)(($sl((int32_t)$nc(MotifDnDConstants::unsafe)->getByte(bufptr + idx), 8 * idx)) & (uint32_t)($sl(255, 8 * idx)));
						}
					} else {
						for (int32_t idx = 0; idx < 4; ++idx) {
							target |= (int32_t)(($sl((int32_t)$nc(MotifDnDConstants::unsafe)->getByte(bufptr + idx), 8 * (3 - idx))) & (uint32_t)($sl(255, 8 * (3 - idx))));
						}
					}
					$nc(table->get(i))->set(j, target);
					bufptr += 4;
				}
			}
			$assign(var$2, table);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
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

void MotifDnDConstants::putTargetListTable(int64_t motifWindow, $longArray2* table) {
	$init(MotifDnDConstants);
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDConstants::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	int32_t tableSize = 8;
	for (int32_t i = 0; i < $nc(table)->length; ++i) {
		tableSize += $nc(table->get(i))->length * 4 + 2;
	}
	int64_t data = $nc(MotifDnDConstants::unsafe)->allocateMemory(tableSize);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(MotifDnDConstants::unsafe)->putByte(data + 0, getByteOrderByte());
			$nc(MotifDnDConstants::unsafe)->putByte(data + 1, MotifDnDConstants::MOTIF_DND_PROTOCOL_VERSION);
			$nc(MotifDnDConstants::unsafe)->putShort(data + 2, (int16_t)$nc(table)->length);
			$nc(MotifDnDConstants::unsafe)->putInt(data + 4, tableSize);
			int64_t bufptr = data + 8;
			for (int32_t i = 0; i < $nc(table)->length; ++i) {
				$nc(MotifDnDConstants::unsafe)->putShort(bufptr, (int16_t)$nc(table->get(i))->length);
				bufptr += 2;
				for (int32_t j = 0; j < $nc(table->get(i))->length; ++j) {
					int32_t target = (int32_t)$nc(table->get(i))->get(j);
					$init($ByteOrder);
					if ($ByteOrder::nativeOrder() == $ByteOrder::LITTLE_ENDIAN) {
						for (int32_t idx = 0; idx < 4; ++idx) {
							int8_t b = (int8_t)($sr((int32_t)(target & (uint32_t)($sl(255, 8 * idx))), 8 * idx));
							$nc(MotifDnDConstants::unsafe)->putByte(bufptr + idx, b);
						}
					} else {
						for (int32_t idx = 0; idx < 4; ++idx) {
							int8_t b = (int8_t)($sr((int32_t)(target & (uint32_t)($sl(255, 8 * idx))), 8 * idx));
							$nc(MotifDnDConstants::unsafe)->putByte(bufptr + (3 - idx), b);
						}
					}
					bufptr += 4;
				}
			}
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			int64_t var$1 = $XToolkit::getDisplay();
			int64_t var$2 = motifWindow;
			int64_t var$3 = $nc(MotifDnDConstants::XA_MOTIF_DRAG_TARGETS)->getAtom();
			$XlibWrapper::XChangeProperty(var$1, var$2, var$3, $nc(MotifDnDConstants::XA_MOTIF_DRAG_TARGETS)->getAtom(), 8, $XConstants::PropModeReplace, data, tableSize);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				motifWindow = createMotifWindow();
				$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
				int64_t var$4 = $XToolkit::getDisplay();
				int64_t var$5 = motifWindow;
				int64_t var$6 = $nc(MotifDnDConstants::XA_MOTIF_DRAG_TARGETS)->getAtom();
				$XlibWrapper::XChangeProperty(var$4, var$5, var$6, $nc(MotifDnDConstants::XA_MOTIF_DRAG_TARGETS)->getAtom(), 8, $XConstants::PropModeReplace, data, tableSize);
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
				if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
					$throwNew($XException, "Cannot write motif drag targets property."_s);
				}
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} /*finally*/ {
			$nc(MotifDnDConstants::unsafe)->freeMemory(data);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t MotifDnDConstants::getIndexForTargetList($longs* formats$renamed) {
	$init(MotifDnDConstants);
	$useLocalCurrentObjectStackCache();
	$var($longs, formats, formats$renamed);
	if (!MotifDnDConstants::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if ($nc(formats)->length > 0) {
		$assign(formats, $cast($longs, formats->clone()));
		$Arrays::sort(formats);
	}
	int64_t motifWindow = getMotifWindow();
	$XlibWrapper::XGrabServer($XToolkit::getDisplay());
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$var($longArray2, table, getTargetListTable(motifWindow));
			if (table != nullptr) {
				for (int32_t i = 0; i < table->length; ++i) {
					bool equals = true;
					if ($nc(table->get(i))->length == $nc(formats)->length) {
						for (int32_t j = 0; j < $nc(table->get(i))->length; ++j) {
							if ($nc(table->get(i))->get(j) != formats->get(j)) {
								equals = false;
								break;
							}
						}
					} else {
						equals = false;
					}
					if (equals) {
						$XlibWrapper::XUngrabServer($XToolkit::getDisplay());
						var$2 = i;
						return$1 = true;
						goto $finally;
					}
				}
			} else {
				$assign(table, $new($longArray2, 2));
				table->set(0, $$new($longs, {(int64_t)0}));
				table->set(1, $$new($longs, {$XAtom::XA_STRING}));
			}
			$var($longArray2, new_table, $new($longArray2, $nc(table)->length + 1));
			for (int32_t i = 0; i < table->length; ++i) {
				new_table->set(i, table->get(i));
			}
			new_table->set(new_table->length - 1, formats);
			putTargetListTable(motifWindow, new_table);
			var$2 = new_table->length - 1;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$XlibWrapper::XUngrabServer($XToolkit::getDisplay());
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

$longs* MotifDnDConstants::getTargetListForIndex(int32_t index) {
	$init(MotifDnDConstants);
	int64_t motifWindow = getMotifWindow();
	$var($longArray2, table, getTargetListTable(motifWindow));
	if (index < 0 || index >= $nc(table)->length) {
		return $new($longs, 0);
	} else {
		return table->get(index);
	}
}

int8_t MotifDnDConstants::getByteOrderByte() {
	$init(MotifDnDConstants);
	$init($ByteOrder);
	return $ByteOrder::nativeOrder() == $ByteOrder::LITTLE_ENDIAN ? (int8_t)108 : (int8_t)66;
}

void MotifDnDConstants::writeDragInitiatorInfoStruct(int64_t window, int32_t index) {
	$init(MotifDnDConstants);
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDConstants::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	int64_t structData = $nc(MotifDnDConstants::unsafe)->allocateMemory(MotifDnDConstants::MOTIF_INITIATOR_INFO_SIZE);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(MotifDnDConstants::unsafe)->putByte(structData, getByteOrderByte());
			$nc(MotifDnDConstants::unsafe)->putByte(structData + 1, MotifDnDConstants::MOTIF_DND_PROTOCOL_VERSION);
			$nc(MotifDnDConstants::unsafe)->putShort(structData + 2, (int16_t)index);
			$nc(MotifDnDConstants::unsafe)->putInt(structData + 4, (int32_t)$nc(MotifDnDConstants::XA_MOTIF_ATOM_0)->getAtom());
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			int64_t var$1 = $XToolkit::getDisplay();
			int64_t var$2 = window;
			int64_t var$3 = $nc(MotifDnDConstants::XA_MOTIF_ATOM_0)->getAtom();
			$XlibWrapper::XChangeProperty(var$1, var$2, var$3, $nc(MotifDnDConstants::XA_MOTIF_DRAG_INITIATOR_INFO)->getAtom(), 8, $XConstants::PropModeReplace, structData, MotifDnDConstants::MOTIF_INITIATOR_INFO_SIZE);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				$throwNew($XException, "Cannot write drag initiator info"_s);
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			$nc(MotifDnDConstants::unsafe)->freeMemory(structData);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MotifDnDConstants::writeDragReceiverInfoStruct(int64_t window) {
	$init(MotifDnDConstants);
	$useLocalCurrentObjectStackCache();
	if (!MotifDnDConstants::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	int32_t dataSize = MotifDnDConstants::MOTIF_RECEIVER_INFO_SIZE;
	int64_t data = $nc(MotifDnDConstants::unsafe)->allocateMemory(dataSize);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(MotifDnDConstants::unsafe)->putByte(data, MotifDnDConstants::getByteOrderByte());
			$nc(MotifDnDConstants::unsafe)->putByte(data + 1, MotifDnDConstants::MOTIF_DND_PROTOCOL_VERSION);
			$nc(MotifDnDConstants::unsafe)->putByte(data + 2, (int8_t)MotifDnDConstants::MOTIF_DYNAMIC_STYLE);
			$nc(MotifDnDConstants::unsafe)->putByte(data + 3, (int8_t)0);
			$nc(MotifDnDConstants::unsafe)->putInt(data + 4, (int32_t)window);
			$nc(MotifDnDConstants::unsafe)->putShort(data + 8, (int16_t)0);
			$nc(MotifDnDConstants::unsafe)->putShort(data + 10, (int16_t)0);
			$nc(MotifDnDConstants::unsafe)->putInt(data + 12, dataSize);
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			int64_t var$1 = $XToolkit::getDisplay();
			int64_t var$2 = window;
			int64_t var$3 = $nc(MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO)->getAtom();
			$XlibWrapper::XChangeProperty(var$1, var$2, var$3, $nc(MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO)->getAtom(), 8, $XConstants::PropModeReplace, data, dataSize);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				$throwNew($XException, "Cannot write Motif receiver info property"_s);
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			$nc(MotifDnDConstants::unsafe)->freeMemory(data);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t MotifDnDConstants::getMotifActionsForJavaActions(int32_t javaActions) {
	$init(MotifDnDConstants);
	int32_t motifActions = MotifDnDConstants::MOTIF_DND_NOOP;
	if (((int32_t)(javaActions & (uint32_t)$DnDConstants::ACTION_MOVE)) != 0) {
		motifActions |= MotifDnDConstants::MOTIF_DND_MOVE;
	}
	if (((int32_t)(javaActions & (uint32_t)$DnDConstants::ACTION_COPY)) != 0) {
		motifActions |= MotifDnDConstants::MOTIF_DND_COPY;
	}
	if (((int32_t)(javaActions & (uint32_t)$DnDConstants::ACTION_LINK)) != 0) {
		motifActions |= MotifDnDConstants::MOTIF_DND_LINK;
	}
	return motifActions;
}

int32_t MotifDnDConstants::getJavaActionsForMotifActions(int32_t motifActions) {
	$init(MotifDnDConstants);
	int32_t javaActions = $DnDConstants::ACTION_NONE;
	if (((int32_t)(motifActions & (uint32_t)MotifDnDConstants::MOTIF_DND_MOVE)) != 0) {
		javaActions |= $DnDConstants::ACTION_MOVE;
	}
	if (((int32_t)(motifActions & (uint32_t)MotifDnDConstants::MOTIF_DND_COPY)) != 0) {
		javaActions |= $DnDConstants::ACTION_COPY;
	}
	if (((int32_t)(motifActions & (uint32_t)MotifDnDConstants::MOTIF_DND_LINK)) != 0) {
		javaActions |= $DnDConstants::ACTION_LINK;
	}
	return javaActions;
}

void clinit$MotifDnDConstants($Class* class$) {
	MotifDnDConstants::$assertionsDisabled = !MotifDnDConstants::class$->desiredAssertionStatus();
	$init($XlibWrapper);
	$assignStatic(MotifDnDConstants::unsafe, $XlibWrapper::unsafe);
	$assignStatic(MotifDnDConstants::XA_MOTIF_ATOM_0, $XAtom::get("_MOTIF_ATOM_0"_s));
	$assignStatic(MotifDnDConstants::XA_MOTIF_DRAG_WINDOW, $XAtom::get("_MOTIF_DRAG_WINDOW"_s));
	$assignStatic(MotifDnDConstants::XA_MOTIF_DRAG_TARGETS, $XAtom::get("_MOTIF_DRAG_TARGETS"_s));
	$assignStatic(MotifDnDConstants::XA_MOTIF_DRAG_INITIATOR_INFO, $XAtom::get("_MOTIF_DRAG_INITIATOR_INFO"_s));
	$assignStatic(MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO, $XAtom::get("_MOTIF_DRAG_RECEIVER_INFO"_s));
	$assignStatic(MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE, $XAtom::get("_MOTIF_DRAG_AND_DROP_MESSAGE"_s));
	$assignStatic(MotifDnDConstants::XA_XmTRANSFER_SUCCESS, $XAtom::get("XmTRANSFER_SUCCESS"_s));
	$assignStatic(MotifDnDConstants::XA_XmTRANSFER_FAILURE, $XAtom::get("XmTRANSFER_FAILURE"_s));
	$assignStatic(MotifDnDConstants::MotifDnDSelection, $new($XSelection, MotifDnDConstants::XA_MOTIF_ATOM_0));
}

MotifDnDConstants::MotifDnDConstants() {
}

$Class* MotifDnDConstants::load$($String* name, bool initialize) {
	$loadClass(MotifDnDConstants, name, initialize, &_MotifDnDConstants_ClassInfo_, clinit$MotifDnDConstants, allocate$MotifDnDConstants);
	return class$;
}

$Class* MotifDnDConstants::class$ = nullptr;

		} // X11
	} // awt
} // sun