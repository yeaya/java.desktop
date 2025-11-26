#include <sun/awt/X11/XSelection.h>

#include <java/awt/datatransfer/Transferable.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/OwnershipListener.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDataTransferer.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XSelection$IncrementalDataProvider.h>
#include <sun/awt/X11/XSelection$IncrementalTransferHandler.h>
#include <sun/awt/X11/XSelection$SelectionEventHandler.h>
#include <sun/awt/X11/XSelectionEvent.h>
#include <sun/awt/X11/XSelectionRequestEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <jcpp.h>

#undef INCR_ATOM
#undef MAX_LENGTH
#undef MAX_PROPERTY_SIZE
#undef MAX_VALUE
#undef MULTIPLE_ATOM
#undef TARGETS_ATOM
#undef XA_ATOM

using $Transferable = ::java::awt::datatransfer::Transferable;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $Native = ::sun::awt::X11::Native;
using $OwnershipListener = ::sun::awt::X11::OwnershipListener;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDataTransferer = ::sun::awt::X11::XDataTransferer;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XSelection$IncrementalDataProvider = ::sun::awt::X11::XSelection$IncrementalDataProvider;
using $XSelection$IncrementalTransferHandler = ::sun::awt::X11::XSelection$IncrementalTransferHandler;
using $XSelection$SelectionEventHandler = ::sun::awt::X11::XSelection$SelectionEventHandler;
using $XSelectionEvent = ::sun::awt::X11::XSelectionEvent;
using $XSelectionRequestEvent = ::sun::awt::X11::XSelectionRequestEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XSelection_FieldInfo_[] = {
	{"table", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Lsun/awt/X11/XAtom;Lsun/awt/X11/XSelection;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XSelection, table)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSelection, lock)},
	{"selectionPropertyAtom", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSelection, selectionPropertyAtom)},
	{"MAX_LENGTH", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSelection, MAX_LENGTH)},
	{"MAX_PROPERTY_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSelection, MAX_PROPERTY_SIZE)},
	{"incrementalTransferHandler", "Lsun/awt/X11/XEventDispatcher;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSelection, incrementalTransferHandler)},
	{"propertyGetter", "Lsun/awt/X11/WindowPropertyGetter;", nullptr, $PRIVATE | $STATIC, $staticField(XSelection, propertyGetter)},
	{"selectionAtom", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $FINAL, $field(XSelection, selectionAtom)},
	{"contents", "Ljava/awt/datatransfer/Transferable;", nullptr, $PRIVATE, $field(XSelection, contents)},
	{"formatMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;", $PRIVATE, $field(XSelection, formatMap)},
	{"formats", "[J", nullptr, $PRIVATE, $field(XSelection, formats)},
	{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE, $field(XSelection, appContext)},
	{"lastRequestServerTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(XSelection, lastRequestServerTime)},
	{"ownershipTime", "J", nullptr, $PRIVATE, $field(XSelection, ownershipTime)},
	{"isOwner", "Z", nullptr, $PRIVATE, $field(XSelection, isOwner$)},
	{"ownershipListener", "Lsun/awt/X11/OwnershipListener;", nullptr, $PRIVATE, $field(XSelection, ownershipListener)},
	{"stateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(XSelection, stateLock)},
	{}
};

$MethodInfo _XSelection_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XAtom;)V", nullptr, 0, $method(static_cast<void(XSelection::*)($XAtom*)>(&XSelection::init$))},
	{"convertAndStore", "(JJJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(XSelection::*)(int64_t,int64_t,int64_t)>(&XSelection::convertAndStore))},
	{"fireOwnershipChanges", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(XSelection::*)(bool)>(&XSelection::fireOwnershipChanges))},
	{"getData", "(JJ)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(XSelection::*)(int64_t,int64_t)>(&XSelection::getData)), "java.io.IOException"},
	{"getFormats", "(Lsun/awt/X11/WindowPropertyGetter;)[J", nullptr, $STATIC, $method(static_cast<$longs*(*)($WindowPropertyGetter*)>(&XSelection::getFormats))},
	{"getSelection", "(Lsun/awt/X11/XAtom;)Lsun/awt/X11/XSelection;", nullptr, $STATIC, $method(static_cast<XSelection*(*)($XAtom*)>(&XSelection::getSelection))},
	{"getSelectionAtom", "()Lsun/awt/X11/XAtom;", nullptr, $PUBLIC, $method(static_cast<$XAtom*(XSelection::*)()>(&XSelection::getSelectionAtom))},
	{"getTargets", "(J)[J", nullptr, $PUBLIC, $method(static_cast<$longs*(XSelection::*)(int64_t)>(&XSelection::getTargets))},
	{"handleMultipleRequest", "(JJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(XSelection::*)(int64_t,int64_t)>(&XSelection::handleMultipleRequest))},
	{"handleSelectionRequest", "(Lsun/awt/X11/XSelectionRequestEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XSelection::*)($XSelectionRequestEvent*)>(&XSelection::handleSelectionRequest))},
	{"handleTargetsRequest", "(JJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(XSelection::*)(int64_t,int64_t)>(&XSelection::handleTargetsRequest)), "java.lang.IllegalStateException"},
	{"isOwner", "()Z", nullptr, 0, $method(static_cast<bool(XSelection::*)()>(&XSelection::isOwner))},
	{"lostOwnership", "()V", nullptr, $PRIVATE, $method(static_cast<void(XSelection::*)()>(&XSelection::lostOwnership))},
	{"registerOwershipListener", "(Lsun/awt/X11/OwnershipListener;)V", nullptr, 0, $method(static_cast<void(XSelection::*)($OwnershipListener*)>(&XSelection::registerOwershipListener))},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(XSelection::*)()>(&XSelection::reset))},
	{"setOwner", "(Ljava/awt/datatransfer/Transferable;Ljava/util/Map;[JJ)Z", "(Ljava/awt/datatransfer/Transferable;Ljava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;[JJ)Z", $SYNCHRONIZED, $method(static_cast<bool(XSelection::*)($Transferable*,$Map*,$longs*,int64_t)>(&XSelection::setOwner))},
	{"setOwnerProp", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(XSelection::*)(bool)>(&XSelection::setOwnerProp))},
	{"unregisterOwnershipListener", "()V", nullptr, 0, $method(static_cast<void(XSelection::*)()>(&XSelection::unregisterOwnershipListener))},
	{"validateDataGetter", "(Lsun/awt/X11/WindowPropertyGetter;)V", nullptr, $PRIVATE, $method(static_cast<void(XSelection::*)($WindowPropertyGetter*)>(&XSelection::validateDataGetter)), "java.io.IOException"},
	{"waitForSelectionNotify", "(Lsun/awt/X11/WindowPropertyGetter;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($WindowPropertyGetter*)>(&XSelection::waitForSelectionNotify)), "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _XSelection_InnerClassesInfo_[] = {
	{"sun.awt.X11.XSelection$IncrementalTransferHandler", "sun.awt.X11.XSelection", "IncrementalTransferHandler", $PRIVATE | $STATIC},
	{"sun.awt.X11.XSelection$IncrementalDataProvider", "sun.awt.X11.XSelection", "IncrementalDataProvider", $PRIVATE | $STATIC},
	{"sun.awt.X11.XSelection$SelectionEventHandler", "sun.awt.X11.XSelection", "SelectionEventHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XSelection_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XSelection",
	"java.lang.Object",
	nullptr,
	_XSelection_FieldInfo_,
	_XSelection_MethodInfo_,
	nullptr,
	nullptr,
	_XSelection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XSelection$IncrementalTransferHandler,sun.awt.X11.XSelection$IncrementalDataProvider,sun.awt.X11.XSelection$SelectionEventHandler"
};

$Object* allocate$XSelection($Class* clazz) {
	return $of($alloc(XSelection));
}

$Hashtable* XSelection::table = nullptr;
$Object* XSelection::lock = nullptr;
$XAtom* XSelection::selectionPropertyAtom = nullptr;
int32_t XSelection::MAX_PROPERTY_SIZE = 0;
$XEventDispatcher* XSelection::incrementalTransferHandler = nullptr;
$WindowPropertyGetter* XSelection::propertyGetter = nullptr;
int64_t XSelection::lastRequestServerTime = 0;

XSelection* XSelection::getSelection($XAtom* atom) {
	$init(XSelection);
	return $cast(XSelection, $nc(XSelection::table)->get(atom));
}

void XSelection::init$($XAtom* atom) {
	$set(this, contents, nullptr);
	$set(this, formatMap, nullptr);
	$set(this, formats, nullptr);
	$set(this, appContext, nullptr);
	this->ownershipTime = 0;
	$set(this, ownershipListener, nullptr);
	$set(this, stateLock, $new($Object));
	if (atom == nullptr) {
		$throwNew($NullPointerException, "Null atom"_s);
	}
	$set(this, selectionAtom, atom);
	$nc(XSelection::table)->put(this->selectionAtom, this);
}

$XAtom* XSelection::getSelectionAtom() {
	return this->selectionAtom;
}

bool XSelection::setOwner($Transferable* contents, $Map* formatMap, $longs* formats, int64_t time) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int64_t owner = $nc($($XWindow::getXAWTRootWindow()))->getWindow();
		int64_t selection = $nc(this->selectionAtom)->getAtom();
		if (time == $XConstants::CurrentTime) {
			time = $XToolkit::getCurrentServerTime();
		}
		$set(this, contents, contents);
		$set(this, formatMap, formatMap);
		$set(this, formats, formats);
		$set(this, appContext, $AppContext::getAppContext());
		this->ownershipTime = time;
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				$XlibWrapper::XSetSelectionOwner($XToolkit::getDisplay(), selection, owner, time);
				if ($XlibWrapper::XGetSelectionOwner($XToolkit::getDisplay(), selection) != owner) {
					reset();
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
				setOwnerProp(true);
				var$2 = true;
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

void XSelection::waitForSelectionNotify($WindowPropertyGetter* dataGetter) {
	$init(XSelection);
	$useLocalCurrentObjectStackCache();
	int64_t startTime = $System::currentTimeMillis();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool var$1 = false;
			do {
				$nc($($DataTransferer::getInstance()))->processDataConversionRequests();
				$XToolkit::awtLockWait(250);
				var$1 = XSelection::propertyGetter == dataGetter;
				if (var$1) {
					int64_t var$2 = $System::currentTimeMillis();
					var$1 = var$2 < startTime + $UNIXToolkit::getDatatransferTimeout();
				}
			} while (var$1);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$longs* XSelection::getTargets(int64_t time) {
	$useLocalCurrentObjectStackCache();
	if ($XToolkit::isToolkitThread()) {
		$throwNew($Error, "UNIMPLEMENTED"_s);
	}
	$var($longs, targets, nullptr);
	$synchronized(XSelection::lock) {
		$var($WindowPropertyGetter, targetsGetter, $new($WindowPropertyGetter, $nc($($XWindow::getXAWTRootWindow()))->getWindow(), XSelection::selectionPropertyAtom, (int64_t)0, XSelection::MAX_LENGTH, true, $XConstants::AnyPropertyType));
		{
			$var($Throwable, var$0, nullptr);
			$var($longs, var$2, nullptr);
			bool return$1 = false;
			try {
				$XToolkit::awtLock();
				{
					$var($Throwable, var$3, nullptr);
					$var($longs, var$5, nullptr);
					bool return$4 = false;
					try {
						$assignStatic(XSelection::propertyGetter, targetsGetter);
						XSelection::lastRequestServerTime = time;
						int64_t var$6 = $XToolkit::getDisplay();
						int64_t var$7 = $nc($(getSelectionAtom()))->getAtom();
						$init($XDataTransferer);
						int64_t var$8 = $nc($XDataTransferer::TARGETS_ATOM)->getAtom();
						int64_t var$9 = $nc(XSelection::selectionPropertyAtom)->getAtom();
						$XlibWrapper::XConvertSelection(var$6, var$7, var$8, var$9, $nc($($XWindow::getXAWTRootWindow()))->getWindow(), time);
						{
							$var($Throwable, var$10, nullptr);
							$var($longs, var$12, nullptr);
							bool return$11 = false;
							try {
								try {
									waitForSelectionNotify(targetsGetter);
								} catch ($InterruptedException& ie) {
									$assign(var$12, $new($longs, 0));
									return$11 = true;
									goto $finally2;
								}
							} catch ($Throwable& var$13) {
								$assign(var$10, var$13);
							} $finally2: {
								$assignStatic(XSelection::propertyGetter, nullptr);
							}
							if (var$10 != nullptr) {
								$throw(var$10);
							}
							if (return$11) {
								$assign(var$5, var$12);
								return$4 = true;
								goto $finally1;
							}
						}
					} catch ($Throwable& var$14) {
						$assign(var$3, var$14);
					} $finally1: {
						$XToolkit::awtUnlock();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
					if (return$4) {
						$assign(var$2, var$5);
						return$1 = true;
						goto $finally;
					}
				}
				$assign(targets, getFormats(targetsGetter));
			} catch ($Throwable& var$15) {
				$assign(var$0, var$15);
			} $finally: {
				targetsGetter->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	return targets;
}

$longs* XSelection::getFormats($WindowPropertyGetter* targetsGetter) {
	$init(XSelection);
	$var($longs, formats, nullptr);
	bool var$2 = $nc(targetsGetter)->isExecuted();
	bool var$1 = var$2 && !targetsGetter->isDisposed();
	if (var$1) {
		bool var$3 = targetsGetter->getActualType() == $XAtom::XA_ATOM;
		if (!var$3) {
			int64_t var$4 = $nc(targetsGetter)->getActualType();
			$init($XDataTransferer);
			var$3 = var$4 == $nc($XDataTransferer::TARGETS_ATOM)->getAtom();
		}
		var$1 = (var$3);
	}
	bool var$0 = var$1;
	if (var$0 && targetsGetter->getActualFormat() == 32) {
		int32_t count = targetsGetter->getNumberOfItems();
		if (count > 0) {
			int64_t atoms = targetsGetter->getData();
			$assign(formats, $new($longs, count));
			for (int32_t index = 0; index < count; ++index) {
				formats->set(index, $Native::getLong(atoms + index * $XAtom::getAtomSize()));
			}
		}
	}
	return formats != nullptr ? formats : $new($longs, 0);
}

$bytes* XSelection::getData(int64_t format, int64_t time) {
	$useLocalCurrentObjectStackCache();
	if ($XToolkit::isToolkitThread()) {
		$throwNew($Error, "UNIMPLEMENTED"_s);
	}
	$var($bytes, data, nullptr);
	$synchronized(XSelection::lock) {
		$var($WindowPropertyGetter, dataGetter, $new($WindowPropertyGetter, $nc($($XWindow::getXAWTRootWindow()))->getWindow(), XSelection::selectionPropertyAtom, (int64_t)0, XSelection::MAX_LENGTH, false, $XConstants::AnyPropertyType));
		{
			$var($Throwable, var$0, nullptr);
			$var($bytes, var$2, nullptr);
			bool return$1 = false;
			try {
				$XToolkit::awtLock();
				{
					$var($Throwable, var$3, nullptr);
					$var($bytes, var$5, nullptr);
					bool return$4 = false;
					try {
						$assignStatic(XSelection::propertyGetter, dataGetter);
						XSelection::lastRequestServerTime = time;
						int64_t var$6 = $XToolkit::getDisplay();
						int64_t var$7 = $nc($(getSelectionAtom()))->getAtom();
						int64_t var$8 = format;
						int64_t var$9 = $nc(XSelection::selectionPropertyAtom)->getAtom();
						$XlibWrapper::XConvertSelection(var$6, var$7, var$8, var$9, $nc($($XWindow::getXAWTRootWindow()))->getWindow(), time);
						{
							$var($Throwable, var$10, nullptr);
							$var($bytes, var$12, nullptr);
							bool return$11 = false;
							try {
								try {
									waitForSelectionNotify(dataGetter);
								} catch ($InterruptedException& ie) {
									$assign(var$12, $new($bytes, 0));
									return$11 = true;
									goto $finally2;
								}
							} catch ($Throwable& var$13) {
								$assign(var$10, var$13);
							} $finally2: {
								$assignStatic(XSelection::propertyGetter, nullptr);
							}
							if (var$10 != nullptr) {
								$throw(var$10);
							}
							if (return$11) {
								$assign(var$5, var$12);
								return$4 = true;
								goto $finally1;
							}
						}
					} catch ($Throwable& var$14) {
						$assign(var$3, var$14);
					} $finally1: {
						$XToolkit::awtUnlock();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
					if (return$4) {
						$assign(var$2, var$5);
						return$1 = true;
						goto $finally;
					}
				}
				validateDataGetter(dataGetter);
				int64_t var$15 = dataGetter->getActualType();
				$init($XDataTransferer);
				if (var$15 == $nc($XDataTransferer::INCR_ATOM)->getAtom()) {
					if (dataGetter->getActualFormat() != 32) {
						$throwNew($IOException, $$str({"Unsupported INCR format: "_s, $$str(dataGetter->getActualFormat())}));
					}
					int32_t count = dataGetter->getNumberOfItems();
					if (count <= 0) {
						$throwNew($IOException, "INCR data is missed."_s);
					}
					int64_t ptr = dataGetter->getData();
					int32_t len = 0;
					{
						int64_t longLength = $Native::getLong(ptr, count - 1);
						if (longLength <= 0) {
							$assign(var$2, $new($bytes, 0));
							return$1 = true;
							goto $finally;
						}
						if (longLength > $Integer::MAX_VALUE) {
							$throwNew($IOException, $$str({"Can\'t handle large data block: "_s, $$str(longLength), " bytes"_s}));
						}
						len = (int32_t)longLength;
					}
					dataGetter->dispose();
					$var($ByteArrayOutputStream, dataStream, $new($ByteArrayOutputStream, len));
					while (true) {
						$var($WindowPropertyGetter, incrDataGetter, $new($WindowPropertyGetter, $nc($($XWindow::getXAWTRootWindow()))->getWindow(), XSelection::selectionPropertyAtom, (int64_t)0, XSelection::MAX_LENGTH, false, $XConstants::AnyPropertyType));
						{
							$var($Throwable, var$16, nullptr);
							bool break$17 = false;
							bool break$18 = false;
							try {
								$XToolkit::awtLock();
								$XToolkit::addEventDispatcher($nc($($XWindow::getXAWTRootWindow()))->getWindow(), XSelection::incrementalTransferHandler);
								$assignStatic(XSelection::propertyGetter, incrDataGetter);
								{
									$var($Throwable, var$19, nullptr);
									bool break$20 = false;
									try {
										try {
											int64_t var$21 = $XToolkit::getDisplay();
											int64_t var$22 = $nc($($XWindow::getXAWTRootWindow()))->getWindow();
											$XlibWrapper::XDeleteProperty(var$21, var$22, $nc(XSelection::selectionPropertyAtom)->getAtom());
											waitForSelectionNotify(incrDataGetter);
										} catch ($InterruptedException& ie) {
											// break;
											break$20 = true;
											goto $finally4;
										}
									} catch ($Throwable& var$23) {
										$assign(var$19, var$23);
									} $finally4: {
										$assignStatic(XSelection::propertyGetter, nullptr);
										$XToolkit::removeEventDispatcher($nc($($XWindow::getXAWTRootWindow()))->getWindow(), XSelection::incrementalTransferHandler);
										$XToolkit::awtUnlock();
									}
									if (var$19 != nullptr) {
										$throw(var$19);
									}
									if (break$20) {
										break;
									}
								}
								validateDataGetter(incrDataGetter);
								if (incrDataGetter->getActualFormat() != 8) {
									$throwNew($IOException, $$str({"Unsupported data format: "_s, $$str(incrDataGetter->getActualFormat())}));
								}
								count = incrDataGetter->getNumberOfItems();
								if (count == 0) {
									// break;
									break$18 = true;
									goto $finally3;
								}
								if (count > 0) {
									ptr = incrDataGetter->getData();
									for (int32_t index = 0; index < count; ++index) {
										dataStream->write((int32_t)$Native::getByte(ptr + index));
									}
								}
								$assign(data, dataStream->toByteArray());
							} catch ($Throwable& var$24) {
								$assign(var$16, var$24);
							} $finally3: {
								incrDataGetter->dispose();
							}
							if (var$16 != nullptr) {
								$throw(var$16);
							}
							if (break$17) {
								break;
							}
							if (break$18) {
								break;
							}
						}
					}
				} else {
					$XToolkit::awtLock();
					{
						$var($Throwable, var$25, nullptr);
						try {
							int64_t var$26 = $XToolkit::getDisplay();
							int64_t var$27 = $nc($($XWindow::getXAWTRootWindow()))->getWindow();
							$XlibWrapper::XDeleteProperty(var$26, var$27, $nc(XSelection::selectionPropertyAtom)->getAtom());
						} catch ($Throwable& var$28) {
							$assign(var$25, var$28);
						} /*finally*/ {
							$XToolkit::awtUnlock();
						}
						if (var$25 != nullptr) {
							$throw(var$25);
						}
					}
					if (dataGetter->getActualFormat() != 8) {
						$throwNew($IOException, $$str({"Unsupported data format: "_s, $$str(dataGetter->getActualFormat())}));
					}
					int32_t count = dataGetter->getNumberOfItems();
					if (count > 0) {
						$assign(data, $new($bytes, count));
						int64_t ptr = dataGetter->getData();
						for (int32_t index = 0; index < count; ++index) {
							data->set(index, $Native::getByte(ptr + index));
						}
					}
				}
			} catch ($Throwable& var$29) {
				$assign(var$0, var$29);
			} $finally: {
				dataGetter->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	return data != nullptr ? data : $new($bytes, 0);
}

void XSelection::validateDataGetter($WindowPropertyGetter* propertyGetter) {
	if ($nc(propertyGetter)->isDisposed()) {
		$throwNew($IOException, "Owner failed to convert data"_s);
	}
	if (!$nc(propertyGetter)->isExecuted()) {
		$throwNew($IOException, "Owner timed out"_s);
	}
}

bool XSelection::isOwner() {
	return this->isOwner$;
}

void XSelection::setOwnerProp(bool f) {
	this->isOwner$ = f;
	fireOwnershipChanges(this->isOwner$);
}

void XSelection::lostOwnership() {
	setOwnerProp(false);
}

void XSelection::reset() {
	$synchronized(this) {
		$set(this, contents, nullptr);
		$set(this, formatMap, nullptr);
		$set(this, formats, nullptr);
		$set(this, appContext, nullptr);
		this->ownershipTime = 0;
	}
}

bool XSelection::convertAndStore(int64_t requestor, int64_t format, int64_t property) {
	$useLocalCurrentObjectStackCache();
	int32_t dataFormat = 8;
	$var($bytes, byteData, nullptr);
	int64_t nativeDataPtr = 0;
	int32_t count = 0;
	try {
		$SunToolkit::insertTargetMapping(this, this->appContext);
		$assign(byteData, $nc($($DataTransferer::getInstance()))->convertData(this, this->contents, format, this->formatMap, $XToolkit::isToolkitThread()));
	} catch ($IOException& ioe) {
		return false;
	}
	if (byteData == nullptr) {
		return false;
	}
	count = $nc(byteData)->length;
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (count > 0) {
				if (count <= XSelection::MAX_PROPERTY_SIZE) {
					nativeDataPtr = $Native::toData(byteData);
				} else {
					$new($XSelection$IncrementalDataProvider, requestor, property, format, 8, byteData);
					$init($XlibWrapper);
					nativeDataPtr = $nc($XlibWrapper::unsafe)->allocateMemory($XAtom::getAtomSize());
					$Native::putLong(nativeDataPtr, (int64_t)count);
					$init($XDataTransferer);
					format = $nc($XDataTransferer::INCR_ATOM)->getAtom();
					dataFormat = 32;
					count = 1;
				}
			}
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					$XlibWrapper::XChangeProperty($XToolkit::getDisplay(), requestor, property, format, dataFormat, $XConstants::PropModeReplace, nativeDataPtr, count);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			if (nativeDataPtr != 0) {
				$init($XlibWrapper);
				$nc($XlibWrapper::unsafe)->freeMemory(nativeDataPtr);
				nativeDataPtr = 0;
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return true;
}

void XSelection::handleSelectionRequest($XSelectionRequestEvent* xsre) {
	$useLocalCurrentObjectStackCache();
	int64_t property = $nc(xsre)->get_property();
	int64_t requestor = xsre->get_requestor();
	int64_t requestTime = xsre->get_time();
	int64_t format = xsre->get_target();
	bool conversionSucceeded = false;
	if (this->ownershipTime != 0 && (requestTime == $XConstants::CurrentTime || requestTime >= this->ownershipTime)) {
		$init($XDataTransferer);
		if (format == $nc($XDataTransferer::MULTIPLE_ATOM)->getAtom()) {
			conversionSucceeded = handleMultipleRequest(requestor, property);
		} else {
			if (property == $XConstants::None) {
				property = format;
			}
			if (format == $nc($XDataTransferer::TARGETS_ATOM)->getAtom()) {
				conversionSucceeded = handleTargetsRequest(property, requestor);
			} else {
				conversionSucceeded = convertAndStore(requestor, format, property);
			}
		}
	}
	if (!conversionSucceeded) {
		property = $XConstants::None;
	}
	$var($XSelectionEvent, xse, $new($XSelectionEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			xse->set_type($XConstants::SelectionNotify);
			xse->set_send_event(true);
			xse->set_requestor(requestor);
			xse->set_selection($nc(this->selectionAtom)->getAtom());
			xse->set_target(format);
			xse->set_property(property);
			xse->set_time(requestTime);
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					$XlibWrapper::XSendEvent($XToolkit::getDisplay(), requestor, false, $XConstants::NoEventMask, xse->pData);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			xse->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XSelection::handleMultipleRequest(int64_t requestor, int64_t property) {
	$useLocalCurrentObjectStackCache();
	if ($XConstants::None == property) {
		return false;
	}
	bool conversionSucceeded = false;
	$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, requestor, $($XAtom::get(property)), (int64_t)0, XSelection::MAX_LENGTH, false, $XConstants::AnyPropertyType));
	{
		$var($Throwable, var$0, nullptr);
		try {
			wpg->execute();
			bool var$1 = wpg->getActualFormat() == 32;
			if (var$1 && (wpg->getNumberOfItems() % 2) == 0) {
				int64_t count = wpg->getNumberOfItems() / 2;
				int64_t pairsPtr = wpg->getData();
				bool writeBack = false;
				for (int32_t i = 0; i < count; ++i) {
					int64_t target = $Native::getLong(pairsPtr, 2 * i);
					int64_t prop = $Native::getLong(pairsPtr, 2 * i + 1);
					if (!convertAndStore(requestor, target, prop)) {
						$Native::putLong(pairsPtr, 2 * i, 0);
						writeBack = true;
					}
				}
				if (writeBack) {
					$XToolkit::awtLock();
					{
						$var($Throwable, var$2, nullptr);
						try {
							int64_t var$3 = $XToolkit::getDisplay();
							int64_t var$4 = requestor;
							int64_t var$5 = property;
							int64_t var$6 = wpg->getActualType();
							int32_t var$7 = wpg->getActualFormat();
							int64_t var$8 = wpg->getData();
							$XlibWrapper::XChangeProperty(var$3, var$4, var$5, var$6, var$7, $XConstants::PropModeReplace, var$8, wpg->getNumberOfItems());
						} catch ($Throwable& var$9) {
							$assign(var$2, var$9);
						} /*finally*/ {
							$XToolkit::awtUnlock();
						}
						if (var$2 != nullptr) {
							$throw(var$2);
						}
					}
				}
				conversionSucceeded = true;
			}
		} catch ($Throwable& var$10) {
			$assign(var$0, var$10);
		} /*finally*/ {
			wpg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return conversionSucceeded;
}

bool XSelection::handleTargetsRequest(int64_t property, int64_t requestor) {
	$useLocalCurrentObjectStackCache();
	bool conversionSucceeded = false;
	$var($longs, formatsLocal, this->formats);
	if (formatsLocal == nullptr) {
		$throwNew($IllegalStateException, "Not an owner."_s);
	}
	int64_t nativeDataPtr = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t count = $nc(formatsLocal)->length;
			int32_t dataFormat = 32;
			if (count > 0) {
				nativeDataPtr = $Native::allocateLongArray(count);
				$Native::put(nativeDataPtr, formatsLocal);
			}
			conversionSucceeded = true;
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					$XlibWrapper::XChangeProperty($XToolkit::getDisplay(), requestor, property, $XAtom::XA_ATOM, dataFormat, $XConstants::PropModeReplace, nativeDataPtr, count);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			if (nativeDataPtr != 0) {
				$init($XlibWrapper);
				$nc($XlibWrapper::unsafe)->freeMemory(nativeDataPtr);
				nativeDataPtr = 0;
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return conversionSucceeded;
}

void XSelection::fireOwnershipChanges(bool isOwner) {
	$var($OwnershipListener, l, nullptr);
	$synchronized(this->stateLock) {
		$assign(l, this->ownershipListener);
	}
	if (nullptr != l) {
		l->ownershipChanged(isOwner);
	}
}

void XSelection::registerOwershipListener($OwnershipListener* l) {
	$synchronized(this->stateLock) {
		$set(this, ownershipListener, l);
	}
}

void XSelection::unregisterOwnershipListener() {
	$synchronized(this->stateLock) {
		$set(this, ownershipListener, nullptr);
	}
}

void clinit$XSelection($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XSelection::table, $new($Hashtable));
	$assignStatic(XSelection::lock, $new($Object));
	$assignStatic(XSelection::selectionPropertyAtom, $XAtom::get("XAWT_SELECTION"_s));
	{
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				XSelection::MAX_PROPERTY_SIZE = (int32_t)($XlibWrapper::XMaxRequestSize($XToolkit::getDisplay()) * 4 - 100);
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
	$assignStatic(XSelection::incrementalTransferHandler, $new($XSelection$IncrementalTransferHandler));
	$assignStatic(XSelection::propertyGetter, nullptr);
	{
		int64_t var$2 = $nc($($XWindow::getXAWTRootWindow()))->getWindow();
		$XToolkit::addEventDispatcher(var$2, $$new($XSelection$SelectionEventHandler));
	}
}

XSelection::XSelection() {
}

$Class* XSelection::load$($String* name, bool initialize) {
	$loadClass(XSelection, name, initialize, &_XSelection_ClassInfo_, clinit$XSelection, allocate$XSelection);
	return class$;
}

$Class* XSelection::class$ = nullptr;

		} // X11
	} // awt
} // sun