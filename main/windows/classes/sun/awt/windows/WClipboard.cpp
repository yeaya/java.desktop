#include <sun/awt/windows/WClipboard.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/io/IOException.h>
#include <java/io/NotSerializableException.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/SunClipboard.h>
#include <sun/awt/windows/WClipboard$1.h>
#include <sun/awt/windows/WDataTransferer.h>
#include <jcpp.h>

#undef CF_LOCALE

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorTable = ::java::awt::datatransfer::FlavorTable;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $IOException = ::java::io::IOException;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $SunClipboard = ::sun::awt::datatransfer::SunClipboard;
using $WClipboard$1 = ::sun::awt::windows::WClipboard$1;
using $WDataTransferer = ::sun::awt::windows::WDataTransferer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WClipboard_FieldInfo_[] = {
	{"isClipboardViewerRegistered", "Z", nullptr, $PRIVATE, $field(WClipboard, isClipboardViewerRegistered)},
	{}
};

$MethodInfo _WClipboard_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WClipboard::*)()>(&WClipboard::init$))},
	{"clearNativeContext", "()V", nullptr, $PROTECTED},
	{"closeClipboard", "()V", nullptr, $PUBLIC | $NATIVE},
	{"createLocaleTransferable", "([J)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getClipboardData", "(J)[B", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"getClipboardFormats", "()[J", nullptr, $PROTECTED | $NATIVE},
	{"getID", "()J", nullptr, $PUBLIC},
	{"handleContentsChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(WClipboard::*)()>(&WClipboard::handleContentsChanged))},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WClipboard::init))},
	{"lostSelectionOwnershipImpl", "()V", nullptr, $PRIVATE, $method(static_cast<void(WClipboard::*)()>(&WClipboard::lostSelectionOwnershipImpl))},
	{"openClipboard", "(Lsun/awt/datatransfer/SunClipboard;)V", nullptr, $PUBLIC | $NATIVE, nullptr, "java.lang.IllegalStateException"},
	{"publishClipboardData", "(J[B)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WClipboard::*)(int64_t,$bytes*)>(&WClipboard::publishClipboardData))},
	{"registerClipboardViewer", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WClipboard::*)()>(&WClipboard::registerClipboardViewer))},
	{"registerClipboardViewerChecked", "()V", nullptr, $PROTECTED},
	{"setContentsNative", "(Ljava/awt/datatransfer/Transferable;)V", nullptr, $PROTECTED},
	{"unregisterClipboardViewerChecked", "()V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_closeClipboard 2
#define _METHOD_INDEX_getClipboardData 4
#define _METHOD_INDEX_getClipboardFormats 5
#define _METHOD_INDEX_init 8
#define _METHOD_INDEX_openClipboard 10
#define _METHOD_INDEX_publishClipboardData 11
#define _METHOD_INDEX_registerClipboardViewer 12

$InnerClassInfo _WClipboard_InnerClassesInfo_[] = {
	{"sun.awt.windows.WClipboard$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WClipboard_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WClipboard",
	"sun.awt.datatransfer.SunClipboard",
	nullptr,
	_WClipboard_FieldInfo_,
	_WClipboard_MethodInfo_,
	nullptr,
	nullptr,
	_WClipboard_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WClipboard$1"
};

$Object* allocate$WClipboard($Class* clazz) {
	return $of($alloc(WClipboard));
}

void WClipboard::init$() {
	$SunClipboard::init$("System"_s);
}

int64_t WClipboard::getID() {
	return 0;
}

void WClipboard::setContentsNative($Transferable* contents) {
	$useLocalCurrentObjectStackCache();
	$var($Map, formatMap, $nc($($WDataTransferer::getInstance()))->getFormatsForTransferable(contents, $(getDefaultFlavorTable())));
	openClipboard(this);
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($Iterator, i$, $nc($($nc(formatMap)->keySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Long, format, $cast($Long, i$->next()));
					{
						$var($DataFlavor, flavor, $cast($DataFlavor, formatMap->get(format)));
						try {
							$var($bytes, bytes, $nc($($WDataTransferer::getInstance()))->translateTransferable(contents, flavor, $nc(format)->longValue()));
							publishClipboardData($nc(format)->longValue(), bytes);
						} catch ($IOException& e) {
							$init($DataFlavor);
							if (!($nc(flavor)->isMimeTypeEqual($DataFlavor::javaJVMLocalObjectMimeType) && $instanceOf($NotSerializableException, e))) {
								e->printStackTrace();
							}
						}
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			closeClipboard();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WClipboard::lostSelectionOwnershipImpl() {
	lostOwnershipImpl();
}

void WClipboard::clearNativeContext() {
}

void WClipboard::openClipboard($SunClipboard* newOwner) {
	$prepareNative(WClipboard, openClipboard, void, $SunClipboard* newOwner);
	$invokeNative(WClipboard, openClipboard, newOwner);
	$finishNative();
}

void WClipboard::closeClipboard() {
	$prepareNative(WClipboard, closeClipboard, void);
	$invokeNative(WClipboard, closeClipboard);
	$finishNative();
}

void WClipboard::publishClipboardData(int64_t format, $bytes* bytes) {
	$prepareNative(WClipboard, publishClipboardData, void, int64_t format, $bytes* bytes);
	$invokeNative(WClipboard, publishClipboardData, format, bytes);
	$finishNative();
}

void WClipboard::init() {
	$init(WClipboard);
	$prepareNativeStatic(WClipboard, init, void);
	$invokeNativeStatic(WClipboard, init);
	$finishNativeStatic();
}

$longs* WClipboard::getClipboardFormats() {
	$var($longs, $ret, nullptr);
	$prepareNative(WClipboard, getClipboardFormats, $longs*);
	$assign($ret, $invokeNative(WClipboard, getClipboardFormats));
	$finishNative();
	return $ret;
}

$bytes* WClipboard::getClipboardData(int64_t format) {
	$var($bytes, $ret, nullptr);
	$prepareNative(WClipboard, getClipboardData, $bytes*, int64_t format);
	$assign($ret, $invokeNative(WClipboard, getClipboardData, format));
	$finishNative();
	return $ret;
}

void WClipboard::registerClipboardViewerChecked() {
	if (!this->isClipboardViewerRegistered) {
		registerClipboardViewer();
		this->isClipboardViewerRegistered = true;
	}
}

void WClipboard::registerClipboardViewer() {
	$prepareNative(WClipboard, registerClipboardViewer, void);
	$invokeNative(WClipboard, registerClipboardViewer);
	$finishNative();
}

void WClipboard::unregisterClipboardViewerChecked() {
}

void WClipboard::handleContentsChanged() {
	$useLocalCurrentObjectStackCache();
	if (!areFlavorListenersRegistered()) {
		return;
	}
	$var($longs, formats, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				openClipboard(nullptr);
				$assign(formats, getClipboardFormats());
			} catch ($IllegalStateException& exc) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			closeClipboard();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	checkChange(formats);
}

$Transferable* WClipboard::createLocaleTransferable($longs* formats) {
	$useLocalCurrentObjectStackCache();
	bool found = false;
	for (int32_t i = 0; i < $nc(formats)->length; ++i) {
		if (formats->get(i) == $WDataTransferer::CF_LOCALE) {
			found = true;
			break;
		}
	}
	if (!found) {
		return nullptr;
	}
	$var($bytes, localeData, nullptr);
	try {
		$assign(localeData, getClipboardData($WDataTransferer::CF_LOCALE));
	} catch ($IOException& ioexc) {
		return nullptr;
	}
	$var($bytes, localeDataFinal, localeData);
	return $new($WClipboard$1, this, localeDataFinal);
}

void clinit$WClipboard($Class* class$) {
	{
		WClipboard::init();
	}
}

WClipboard::WClipboard() {
}

$Class* WClipboard::load$($String* name, bool initialize) {
	$loadClass(WClipboard, name, initialize, &_WClipboard_ClassInfo_, clinit$WClipboard, allocate$WClipboard);
	return class$;
}

$Class* WClipboard::class$ = nullptr;

		} // windows
	} // awt
} // sun