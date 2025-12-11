#include <sun/awt/X11/XDropTargetRegistry$EmbeddedDropSiteEntry.h>

#include <java/awt/Point.h>
#include <java/lang/AssertionError.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDropTargetRegistry.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDropTargetRegistry$EmbeddedDropSiteEntry_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDropTargetRegistry$EmbeddedDropSiteEntry, $assertionsDisabled)},
	{"root", "J", nullptr, $PRIVATE | $FINAL, $field(XDropTargetRegistry$EmbeddedDropSiteEntry, root)},
	{"event_mask", "J", nullptr, $PRIVATE | $FINAL, $field(XDropTargetRegistry$EmbeddedDropSiteEntry, event_mask)},
	{"supportedProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/awt/X11/XDropTargetProtocol;>;", $PRIVATE, $field(XDropTargetRegistry$EmbeddedDropSiteEntry, supportedProtocols)},
	{"nonXEmbedClientSites", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/Long;>;", $PRIVATE | $FINAL, $field(XDropTargetRegistry$EmbeddedDropSiteEntry, nonXEmbedClientSites)},
	{"sites", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Long;>;", $PRIVATE | $FINAL, $field(XDropTargetRegistry$EmbeddedDropSiteEntry, sites)},
	{}
};

$MethodInfo _XDropTargetRegistry$EmbeddedDropSiteEntry_MethodInfo_[] = {
	{"<init>", "(JJLjava/util/List;)V", "(JJLjava/util/List<Lsun/awt/X11/XDropTargetProtocol;>;)V", $PUBLIC, $method(static_cast<void(XDropTargetRegistry$EmbeddedDropSiteEntry::*)(int64_t,int64_t,$List*)>(&XDropTargetRegistry$EmbeddedDropSiteEntry::init$))},
	{"addSite", "(JZ)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(XDropTargetRegistry$EmbeddedDropSiteEntry::*)(int64_t,bool)>(&XDropTargetRegistry$EmbeddedDropSiteEntry::addSite))},
	{"getEventMask", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(XDropTargetRegistry$EmbeddedDropSiteEntry::*)()>(&XDropTargetRegistry$EmbeddedDropSiteEntry::getEventMask))},
	{"getRoot", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(XDropTargetRegistry$EmbeddedDropSiteEntry::*)()>(&XDropTargetRegistry$EmbeddedDropSiteEntry::getRoot))},
	{"getSite", "(II)J", nullptr, $PUBLIC, $method(static_cast<int64_t(XDropTargetRegistry$EmbeddedDropSiteEntry::*)(int32_t,int32_t)>(&XDropTargetRegistry$EmbeddedDropSiteEntry::getSite))},
	{"getSites", "()[J", nullptr, $PUBLIC, $method(static_cast<$longs*(XDropTargetRegistry$EmbeddedDropSiteEntry::*)()>(&XDropTargetRegistry$EmbeddedDropSiteEntry::getSites))},
	{"getSupportedProtocols", "()Ljava/util/List;", "()Ljava/util/List<Lsun/awt/X11/XDropTargetProtocol;>;", $PUBLIC, $method(static_cast<$List*(XDropTargetRegistry$EmbeddedDropSiteEntry::*)()>(&XDropTargetRegistry$EmbeddedDropSiteEntry::getSupportedProtocols))},
	{"hasNonXEmbedClientSites", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(XDropTargetRegistry$EmbeddedDropSiteEntry::*)()>(&XDropTargetRegistry$EmbeddedDropSiteEntry::hasNonXEmbedClientSites))},
	{"hasSites", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(XDropTargetRegistry$EmbeddedDropSiteEntry::*)()>(&XDropTargetRegistry$EmbeddedDropSiteEntry::hasSites))},
	{"removeSite", "(J)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(XDropTargetRegistry$EmbeddedDropSiteEntry::*)(int64_t)>(&XDropTargetRegistry$EmbeddedDropSiteEntry::removeSite))},
	{"setSupportedProtocols", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/awt/X11/XDropTargetProtocol;>;)V", $PUBLIC, $method(static_cast<void(XDropTargetRegistry$EmbeddedDropSiteEntry::*)($List*)>(&XDropTargetRegistry$EmbeddedDropSiteEntry::setSupportedProtocols))},
	{}
};

$InnerClassInfo _XDropTargetRegistry$EmbeddedDropSiteEntry_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDropTargetRegistry$EmbeddedDropSiteEntry", "sun.awt.X11.XDropTargetRegistry", "EmbeddedDropSiteEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XDropTargetRegistry$EmbeddedDropSiteEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XDropTargetRegistry$EmbeddedDropSiteEntry",
	"java.lang.Object",
	nullptr,
	_XDropTargetRegistry$EmbeddedDropSiteEntry_FieldInfo_,
	_XDropTargetRegistry$EmbeddedDropSiteEntry_MethodInfo_,
	nullptr,
	nullptr,
	_XDropTargetRegistry$EmbeddedDropSiteEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XDropTargetRegistry"
};

$Object* allocate$XDropTargetRegistry$EmbeddedDropSiteEntry($Class* clazz) {
	return $of($alloc(XDropTargetRegistry$EmbeddedDropSiteEntry));
}

bool XDropTargetRegistry$EmbeddedDropSiteEntry::$assertionsDisabled = false;

void XDropTargetRegistry$EmbeddedDropSiteEntry::init$(int64_t root, int64_t event_mask, $List* supportedProtocols) {
	$set(this, nonXEmbedClientSites, $new($HashSet));
	$set(this, sites, $new($ArrayList));
	if (supportedProtocols == nullptr) {
		$throwNew($NullPointerException, "Null supportedProtocols"_s);
	}
	this->root = root;
	this->event_mask = event_mask;
	$set(this, supportedProtocols, supportedProtocols);
}

int64_t XDropTargetRegistry$EmbeddedDropSiteEntry::getRoot() {
	return this->root;
}

int64_t XDropTargetRegistry$EmbeddedDropSiteEntry::getEventMask() {
	return this->event_mask;
}

bool XDropTargetRegistry$EmbeddedDropSiteEntry::hasNonXEmbedClientSites() {
	return !$nc(this->nonXEmbedClientSites)->isEmpty();
}

void XDropTargetRegistry$EmbeddedDropSiteEntry::addSite(int64_t window, bool isXEmbedClient) {
	$synchronized(this) {
		$var($Long, lWindow, $Long::valueOf(window));
		if (!$nc(this->sites)->contains(lWindow)) {
			$nc(this->sites)->add(lWindow);
		}
		if (!isXEmbedClient) {
			$nc(this->nonXEmbedClientSites)->add(lWindow);
		}
	}
}

void XDropTargetRegistry$EmbeddedDropSiteEntry::removeSite(int64_t window) {
	$synchronized(this) {
		$var($Long, lWindow, $Long::valueOf(window));
		$nc(this->sites)->remove($of(lWindow));
		$nc(this->nonXEmbedClientSites)->remove(lWindow);
	}
}

void XDropTargetRegistry$EmbeddedDropSiteEntry::setSupportedProtocols($List* list) {
	$set(this, supportedProtocols, list);
}

$List* XDropTargetRegistry$EmbeddedDropSiteEntry::getSupportedProtocols() {
	return this->supportedProtocols;
}

bool XDropTargetRegistry$EmbeddedDropSiteEntry::hasSites() {
	return !$nc(this->sites)->isEmpty();
}

$longs* XDropTargetRegistry$EmbeddedDropSiteEntry::getSites() {
	$useLocalCurrentObjectStackCache();
	$var($longs, ret, $new($longs, $nc(this->sites)->size()));
	$var($Iterator, iter, $nc(this->sites)->iterator());
	int32_t index = 0;
	while ($nc(iter)->hasNext()) {
		$var($Long, l, $cast($Long, iter->next()));
		ret->set(index++, $nc(l)->longValue());
	}
	return ret;
}

int64_t XDropTargetRegistry$EmbeddedDropSiteEntry::getSite(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	if (!XDropTargetRegistry$EmbeddedDropSiteEntry::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$var($Iterator, iter, $nc(this->sites)->iterator());
	while ($nc(iter)->hasNext()) {
		$var($Long, l, $cast($Long, iter->next()));
		int64_t window = $nc(l)->longValue();
		$var($Point, p, $XBaseWindow::toOtherWindow(getRoot(), window, x, y));
		if (p == nullptr) {
			continue;
		}
		int32_t dest_x = $nc(p)->x;
		int32_t dest_y = p->y;
		if (dest_x >= 0 && dest_y >= 0) {
			$var($XWindowAttributes, wattr, $new($XWindowAttributes));
			{
				$var($Throwable, var$0, nullptr);
				int64_t var$2 = 0;
				bool return$1 = false;
				bool continue$3 = false;
				try {
					$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
					int32_t status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), window, wattr->pData);
					$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
					if ((status == 0) || (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success))) {
						// continue;
						continue$3 = true;
						goto $finally;
					}
					bool var$5 = wattr->get_map_state() != $XConstants::IsUnmapped;
					bool var$4 = var$5 && dest_x < wattr->get_width();
					if (var$4 && dest_y < wattr->get_height()) {
						var$2 = window;
						return$1 = true;
						goto $finally;
					}
				} catch ($Throwable& var$6) {
					$assign(var$0, var$6);
				} $finally: {
					wattr->dispose();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$3) {
					continue;
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	}
	return 0;
}

void clinit$XDropTargetRegistry$EmbeddedDropSiteEntry($Class* class$) {
	$load($XDropTargetRegistry);
	XDropTargetRegistry$EmbeddedDropSiteEntry::$assertionsDisabled = !$XDropTargetRegistry::class$->desiredAssertionStatus();
}

XDropTargetRegistry$EmbeddedDropSiteEntry::XDropTargetRegistry$EmbeddedDropSiteEntry() {
}

$Class* XDropTargetRegistry$EmbeddedDropSiteEntry::load$($String* name, bool initialize) {
	$loadClass(XDropTargetRegistry$EmbeddedDropSiteEntry, name, initialize, &_XDropTargetRegistry$EmbeddedDropSiteEntry_ClassInfo_, clinit$XDropTargetRegistry$EmbeddedDropSiteEntry, allocate$XDropTargetRegistry$EmbeddedDropSiteEntry);
	return class$;
}

$Class* XDropTargetRegistry$EmbeddedDropSiteEntry::class$ = nullptr;

		} // X11
	} // awt
} // sun