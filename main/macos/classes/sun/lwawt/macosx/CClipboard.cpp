#include <sun/lwawt/macosx/CClipboard.h>

#include <java/awt/Toolkit.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/io/IOException.h>
#include <java/io/NotSerializableException.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/SunClipboard.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorTable = ::java::awt::datatransfer::FlavorTable;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $IOException = ::java::io::IOException;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $AppContext = ::sun::awt::AppContext;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $SunClipboard = ::sun::awt::datatransfer::SunClipboard;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CClipboard_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CClipboard::*)($String*)>(&CClipboard::init$))},
	{"checkPasteboardAndNotify", "()V", nullptr, 0, $method(static_cast<void(CClipboard::*)()>(&CClipboard::checkPasteboardAndNotify))},
	{"checkPasteboardWithoutNotification", "()Z", nullptr, $NATIVE, $method(static_cast<bool(CClipboard::*)()>(&CClipboard::checkPasteboardWithoutNotification))},
	{"clearNativeContext", "()V", nullptr, $PROTECTED},
	{"declareTypes", "([JLsun/awt/datatransfer/SunClipboard;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CClipboard::*)($longs*,$SunClipboard*)>(&CClipboard::declareTypes))},
	{"getClipboardData", "(J)[B", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"getClipboardFormats", "()[J", nullptr, $PROTECTED | $NATIVE},
	{"getContents", "(Ljava/lang/Object;)Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getContextContents", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getID", "()J", nullptr, $PUBLIC},
	{"notifyChanged", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&CClipboard::notifyChanged))},
	{"notifyLostOwnership", "()V", nullptr, $PRIVATE, $method(static_cast<void(CClipboard::*)()>(&CClipboard::notifyLostOwnership))},
	{"registerClipboardViewerChecked", "()V", nullptr, $PROTECTED},
	{"setContentsNative", "(Ljava/awt/datatransfer/Transferable;)V", nullptr, $PROTECTED},
	{"setData", "([BJ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CClipboard::*)($bytes*,int64_t)>(&CClipboard::setData))},
	{"unregisterClipboardViewerChecked", "()V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_checkPasteboardWithoutNotification 2
#define _METHOD_INDEX_declareTypes 4
#define _METHOD_INDEX_getClipboardData 5
#define _METHOD_INDEX_getClipboardFormats 6
#define _METHOD_INDEX_setData 14

$ClassInfo _CClipboard_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CClipboard",
	"sun.awt.datatransfer.SunClipboard",
	nullptr,
	nullptr,
	_CClipboard_MethodInfo_
};

$Object* allocate$CClipboard($Class* clazz) {
	return $of($alloc(CClipboard));
}

void CClipboard::init$($String* name) {
	$SunClipboard::init$(name);
}

int64_t CClipboard::getID() {
	return 0;
}

void CClipboard::clearNativeContext() {
}

$Transferable* CClipboard::getContents(Object$* requestor) {
	$synchronized(this) {
		checkPasteboardAndNotify();
		return $SunClipboard::getContents(requestor);
	}
}

$Transferable* CClipboard::getContextContents() {
	$synchronized(this) {
		checkPasteboardAndNotify();
		return $SunClipboard::getContextContents();
	}
}

void CClipboard::setContentsNative($Transferable* contents) {
	$useLocalCurrentObjectStackCache();
	$var($FlavorTable, flavorMap, getDefaultFlavorTable());
	$var($DataTransferer, dataTransferer, $DataTransferer::getInstance());
	$var($longs, formatArray, $nc(dataTransferer)->getFormatsForTransferableAsArray(contents, flavorMap));
	declareTypes(formatArray, this);
	$var($Map, formatMap, dataTransferer->getFormatsForTransferable(contents, flavorMap));
	{
		$var($Iterator, i$, $nc($($nc(formatMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				int64_t format = $nc(($cast($Long, $($nc(entry)->getKey()))))->longValue();
				$var($DataFlavor, flavor, $cast($DataFlavor, entry->getValue()));
				try {
					$var($bytes, bytes, $nc($($DataTransferer::getInstance()))->translateTransferable(contents, flavor, format));
					setData(bytes, format);
				} catch ($IOException& e) {
					$init($DataFlavor);
					if (!($nc(flavor)->isMimeTypeEqual($DataFlavor::javaJVMLocalObjectMimeType) && $instanceOf($NotSerializableException, e))) {
						e->printStackTrace();
					}
				}
			}
		}
	}
	notifyChanged();
}

$longs* CClipboard::getClipboardFormats() {
	$var($longs, $ret, nullptr);
	$prepareNative(CClipboard, getClipboardFormats, $longs*);
	$assign($ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

$bytes* CClipboard::getClipboardData(int64_t format) {
	$var($bytes, $ret, nullptr);
	$prepareNative(CClipboard, getClipboardData, $bytes*, int64_t format);
	$assign($ret, $invokeNativeObject(format));
	$finishNative();
	return $ret;
}

void CClipboard::unregisterClipboardViewerChecked() {
}

void CClipboard::registerClipboardViewerChecked() {
}

void CClipboard::declareTypes($longs* formats, $SunClipboard* newOwner) {
	$prepareNative(CClipboard, declareTypes, void, $longs* formats, $SunClipboard* newOwner);
	$invokeNative(formats, newOwner);
	$finishNative();
}

void CClipboard::setData($bytes* data, int64_t format) {
	$prepareNative(CClipboard, setData, void, $bytes* data, int64_t format);
	$invokeNative(data, format);
	$finishNative();
}

void CClipboard::checkPasteboardAndNotify() {
	if (checkPasteboardWithoutNotification()) {
		notifyChanged();
		lostOwnershipNow(nullptr);
	}
}

bool CClipboard::checkPasteboardWithoutNotification() {
	bool $ret = false;
	$prepareNative(CClipboard, checkPasteboardWithoutNotification, bool);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void CClipboard::notifyLostOwnership() {
	lostOwnershipImpl();
}

void CClipboard::notifyChanged() {
	$init(CClipboard);
	$useLocalCurrentObjectStackCache();
	$var(CClipboard, clipboard, $cast(CClipboard, $nc($($Toolkit::getDefaultToolkit()))->getSystemClipboard()));
	if (!$nc(clipboard)->areFlavorListenersRegistered()) {
		return;
	}
	$nc(clipboard)->checkChange($(clipboard->getClipboardFormats()));
}

CClipboard::CClipboard() {
}

$Class* CClipboard::load$($String* name, bool initialize) {
	$loadClass(CClipboard, name, initialize, &_CClipboard_ClassInfo_, allocate$CClipboard);
	return class$;
}

$Class* CClipboard::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun