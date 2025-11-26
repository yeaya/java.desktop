#include <sun/awt/X11/XMSelection.h>

#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDestroyWindowEvent.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XMSelection$1.h>
#include <sun/awt/X11/XMSelection$2.h>
#include <sun/awt/X11/XMSelection$3.h>
#include <sun/awt/X11/XMSelectionListener.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef XA_MANAGER

using $XAtomArray = $Array<::sun::awt::X11::XAtom>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XAtom = ::sun::awt::X11::XAtom;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDestroyWindowEvent = ::sun::awt::X11::XDestroyWindowEvent;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XMSelection$1 = ::sun::awt::X11::XMSelection$1;
using $XMSelection$2 = ::sun::awt::X11::XMSelection$2;
using $XMSelection$3 = ::sun::awt::X11::XMSelection$3;
using $XMSelectionListener = ::sun::awt::X11::XMSelectionListener;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMSelection_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XMSelection, log)},
	{"selectionName", "Ljava/lang/String;", nullptr, 0, $field(XMSelection, selectionName)},
	{"listeners", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/X11/XMSelectionListener;>;", 0, $field(XMSelection, listeners)},
	{"atoms", "[Lsun/awt/X11/XAtom;", nullptr, 0, $field(XMSelection, atoms)},
	{"owners", "[J", nullptr, 0, $field(XMSelection, owners)},
	{"eventMask", "J", nullptr, 0, $field(XMSelection, eventMask)},
	{"numScreens", "I", nullptr, $STATIC, $staticField(XMSelection, numScreens)},
	{"XA_MANAGER", "Lsun/awt/X11/XAtom;", nullptr, $STATIC, $staticField(XMSelection, XA_MANAGER)},
	{"selectionMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Long;Lsun/awt/X11/XMSelection;>;", $STATIC, $staticField(XMSelection, selectionMap)},
	{}
};

$MethodInfo _XMSelection_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMSelection::*)($String*)>(&XMSelection::init$))},
	{"<init>", "(Ljava/lang/String;J)V", nullptr, $PUBLIC, $method(static_cast<void(XMSelection::*)($String*,int64_t)>(&XMSelection::init$))},
	{"addSelectionListener", "(Lsun/awt/X11/XMSelectionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"dispatchOwnerChangedEvent", "(Lsun/awt/X11/XEvent;IJJJ)V", nullptr, $SYNCHRONIZED},
	{"dispatchOwnerDeath", "(Lsun/awt/X11/XDestroyWindowEvent;I)V", nullptr, $SYNCHRONIZED},
	{"dispatchSelectionChanged", "(Lsun/awt/X11/XPropertyEvent;I)V", nullptr, $SYNCHRONIZED},
	{"dispatchSelectionEvent", "(Lsun/awt/X11/XEvent;I)V", nullptr, 0},
	{"getAtom", "(I)Lsun/awt/X11/XAtom;", nullptr, $SYNCHRONIZED},
	{"getInstance", "(J)Lsun/awt/X11/XMSelection;", nullptr, $STATIC, $method(static_cast<XMSelection*(*)(int64_t)>(&XMSelection::getInstance))},
	{"getListeners", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lsun/awt/X11/XMSelectionListener;>;", $SYNCHRONIZED},
	{"getName", "()Ljava/lang/String;", nullptr, $SYNCHRONIZED},
	{"getNumberOfScreens", "()I", nullptr, $PUBLIC},
	{"getOwner", "(I)J", nullptr, $SYNCHRONIZED},
	{"initScreen", "(JI)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t)>(&XMSelection::initScreen))},
	{"processClientMessage", "(Lsun/awt/X11/XEvent;I)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XEvent*,int32_t)>(&XMSelection::processClientMessage))},
	{"processRootEvent", "(Lsun/awt/X11/XEvent;I)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XEvent*,int32_t)>(&XMSelection::processRootEvent))},
	{"removeSelectionListener", "(Lsun/awt/X11/XMSelectionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"resetOwner", "(JI)V", nullptr, 0},
	{"select", "(J)V", nullptr, 0},
	{"selectPerScreen", "(IJ)V", nullptr, 0},
	{"setAtom", "(Lsun/awt/X11/XAtom;I)V", nullptr, $SYNCHRONIZED},
	{"setOwner", "(JI)V", nullptr, $SYNCHRONIZED},
	{}
};

$InnerClassInfo _XMSelection_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMSelection$3", nullptr, nullptr, 0},
	{"sun.awt.X11.XMSelection$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XMSelection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMSelection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XMSelection",
	"java.lang.Object",
	nullptr,
	_XMSelection_FieldInfo_,
	_XMSelection_MethodInfo_,
	nullptr,
	nullptr,
	_XMSelection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XMSelection$3,sun.awt.X11.XMSelection$2,sun.awt.X11.XMSelection$1"
};

$Object* allocate$XMSelection($Class* clazz) {
	return $of($alloc(XMSelection));
}

$PlatformLogger* XMSelection::log = nullptr;
int32_t XMSelection::numScreens = 0;
$XAtom* XMSelection::XA_MANAGER = nullptr;
$HashMap* XMSelection::selectionMap = nullptr;

void XMSelection::initScreen(int64_t display, int32_t screen) {
	$init(XMSelection);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t root = $XlibWrapper::RootWindow(display, screen);
			$var($XWindowAttributes, wattr, $new($XWindowAttributes));
			{
				$var($Throwable, var$1, nullptr);
				try {
					$XlibWrapper::XGetWindowAttributes(display, root, wattr->pData);
					$XlibWrapper::XSelectInput(display, root, $XConstants::StructureNotifyMask | wattr->get_your_event_mask());
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					wattr->dispose();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			$XToolkit::addEventDispatcher(root, $$new($XMSelection$1, screen));
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

int32_t XMSelection::getNumberOfScreens() {
	return XMSelection::numScreens;
}

void XMSelection::select(int64_t extra_mask) {
	this->eventMask = extra_mask;
	for (int32_t screen = 0; screen < XMSelection::numScreens; ++screen) {
		selectPerScreen(screen, extra_mask);
	}
}

void XMSelection::resetOwner(int64_t owner, int32_t screen) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t display = $XToolkit::getDisplay();
			$synchronized(this) {
				setOwner(owner, screen);
				$init($PlatformLogger$Level);
				if ($nc(XMSelection::log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(XMSelection::log)->fine($$str({"New Selection Owner for screen "_s, $$str(screen), " = "_s, $$str(owner)}));
				}
				$XlibWrapper::XSelectInput(display, owner, $XConstants::StructureNotifyMask | this->eventMask);
				$XToolkit::addEventDispatcher(owner, $$new($XMSelection$2, this, screen));
			}
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

void XMSelection::selectPerScreen(int32_t screen, int64_t extra_mask) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						int64_t display = $XToolkit::getDisplay();
						$init($PlatformLogger$Level);
						if ($nc(XMSelection::log)->isLoggable($PlatformLogger$Level::FINE)) {
							$nc(XMSelection::log)->fine("Grabbing XServer"_s);
						}
						$XlibWrapper::XGrabServer(display);
						$synchronized(this) {
							$var($String, selection_name, $str({$(getName()), "_S"_s, $$str(screen)}));
							if ($nc(XMSelection::log)->isLoggable($PlatformLogger$Level::FINE)) {
								$nc(XMSelection::log)->fine($$str({"Screen = "_s, $$str(screen), " selection name = "_s, selection_name}));
							}
							$var($XAtom, atom, $XAtom::get(selection_name));
							$nc(XMSelection::selectionMap)->put($($Long::valueOf($nc(atom)->getAtom())), this);
							setAtom(atom, screen);
							int64_t owner = $XlibWrapper::XGetSelectionOwner(display, $nc(atom)->getAtom());
							if (owner != 0) {
								setOwner(owner, screen);
								if ($nc(XMSelection::log)->isLoggable($PlatformLogger$Level::FINE)) {
									$nc(XMSelection::log)->fine($$str({"Selection Owner for screen "_s, $$str(screen), " = "_s, $$str(owner)}));
								}
								$XlibWrapper::XSelectInput(display, owner, $XConstants::StructureNotifyMask | extra_mask);
								$XToolkit::addEventDispatcher(owner, $$new($XMSelection$3, this, screen));
							}
						}
					} catch ($Exception& e) {
						e->printStackTrace();
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$init($PlatformLogger$Level);
					if ($nc(XMSelection::log)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(XMSelection::log)->fine("UnGrabbing XServer"_s);
					}
					$XlibWrapper::XUngrabServer($XToolkit::getDisplay());
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
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

bool XMSelection::processClientMessage($XEvent* xev, int32_t screen) {
	$init(XMSelection);
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, xce, $nc(xev)->get_xclient());
	int64_t var$0 = $nc(xce)->get_message_type();
	if (var$0 == $nc(XMSelection::XA_MANAGER)->getAtom()) {
		$init($PlatformLogger$Level);
		if ($nc(XMSelection::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XMSelection::log)->fine($$str({"client messags = "_s, xce}));
		}
		int64_t timestamp = (int64_t)(xce->get_data(0) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
		int64_t atom = xce->get_data(1);
		int64_t owner = xce->get_data(2);
		int64_t data = xce->get_data(3);
		$var(XMSelection, sel, getInstance(atom));
		if (sel != nullptr) {
			sel->resetOwner(owner, screen);
			sel->dispatchOwnerChangedEvent(xev, screen, owner, data, timestamp);
		}
	}
	return false;
}

bool XMSelection::processRootEvent($XEvent* xev, int32_t screen) {
	$init(XMSelection);
	switch ($nc(xev)->get_type()) {
	case $XConstants::ClientMessage:
		{
			{
				return processClientMessage(xev, screen);
			}
		}
	}
	return false;
}

XMSelection* XMSelection::getInstance(int64_t selection) {
	$init(XMSelection);
	return $cast(XMSelection, $nc(XMSelection::selectionMap)->get($($Long::valueOf(selection))));
}

void XMSelection::init$($String* selname) {
	XMSelection::init$(selname, $XConstants::PropertyChangeMask);
}

void XMSelection::init$($String* selname, int64_t extraMask) {
	$synchronized(this) {
		$set(this, selectionName, selname);
		$set(this, atoms, $new($XAtomArray, getNumberOfScreens()));
		$set(this, owners, $new($longs, getNumberOfScreens()));
	}
	select(extraMask);
}

void XMSelection::addSelectionListener($XMSelectionListener* listener) {
	$synchronized(this) {
		if (this->listeners == nullptr) {
			$set(this, listeners, $new($Vector));
		}
		$nc(this->listeners)->add(listener);
	}
}

void XMSelection::removeSelectionListener($XMSelectionListener* listener) {
	$synchronized(this) {
		if (this->listeners != nullptr) {
			$nc(this->listeners)->remove($of(listener));
		}
	}
}

$Collection* XMSelection::getListeners() {
	$synchronized(this) {
		return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->listeners)));
	}
}

$XAtom* XMSelection::getAtom(int32_t screen) {
	$synchronized(this) {
		if (this->atoms != nullptr) {
			return $nc(this->atoms)->get(screen);
		}
		return nullptr;
	}
}

void XMSelection::setAtom($XAtom* a, int32_t screen) {
	$synchronized(this) {
		if (this->atoms != nullptr) {
			$nc(this->atoms)->set(screen, a);
		}
	}
}

int64_t XMSelection::getOwner(int32_t screen) {
	$synchronized(this) {
		if (this->owners != nullptr) {
			return $nc(this->owners)->get(screen);
		}
		return 0;
	}
}

void XMSelection::setOwner(int64_t owner, int32_t screen) {
	$synchronized(this) {
		if (this->owners != nullptr) {
			$nc(this->owners)->set(screen, owner);
		}
	}
}

$String* XMSelection::getName() {
	$synchronized(this) {
		return this->selectionName;
	}
}

void XMSelection::dispatchSelectionChanged($XPropertyEvent* ev, int32_t screen) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($PlatformLogger$Level);
		if ($nc(XMSelection::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XMSelection::log)->fine($$str({"Selection Changed : Screen = "_s, $$str(screen), "Event ="_s, ev}));
		}
		if (this->listeners != nullptr) {
			$var($Iterator, iter, $nc(this->listeners)->iterator());
			while ($nc(iter)->hasNext()) {
				$var($XMSelectionListener, disp, $cast($XMSelectionListener, iter->next()));
				$nc(disp)->selectionChanged(screen, this, $nc(ev)->get_window(), ev);
			}
		}
	}
}

void XMSelection::dispatchOwnerDeath($XDestroyWindowEvent* de, int32_t screen) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($PlatformLogger$Level);
		if ($nc(XMSelection::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XMSelection::log)->fine($$str({"Owner dead : Screen = "_s, $$str(screen), "Event ="_s, de}));
		}
		if (this->listeners != nullptr) {
			$var($Iterator, iter, $nc(this->listeners)->iterator());
			while ($nc(iter)->hasNext()) {
				$var($XMSelectionListener, disp, $cast($XMSelectionListener, iter->next()));
				$nc(disp)->ownerDeath(screen, this, $nc(de)->get_window());
			}
		}
	}
}

void XMSelection::dispatchSelectionEvent($XEvent* xev, int32_t screen) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XMSelection::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XMSelection::log)->fine($$str({"Event ="_s, xev}));
	}
	if ($nc(xev)->get_type() == $XConstants::DestroyNotify) {
		$var($XDestroyWindowEvent, de, xev->get_xdestroywindow());
		dispatchOwnerDeath(de, screen);
	} else if (xev->get_type() == $XConstants::PropertyNotify) {
		$var($XPropertyEvent, xpe, xev->get_xproperty());
		dispatchSelectionChanged(xpe, screen);
	}
}

void XMSelection::dispatchOwnerChangedEvent($XEvent* ev, int32_t screen, int64_t owner, int64_t data, int64_t timestamp) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->listeners != nullptr) {
			$var($Iterator, iter, $nc(this->listeners)->iterator());
			while ($nc(iter)->hasNext()) {
				$var($XMSelectionListener, disp, $cast($XMSelectionListener, iter->next()));
				$nc(disp)->ownerChanged(screen, this, owner, data, timestamp);
			}
		}
	}
}

void clinit$XMSelection($Class* class$) {
	$assignStatic(XMSelection::log, $PlatformLogger::getLogger("sun.awt.X11.XMSelection"_s));
	{
		int64_t display = $XToolkit::getDisplay();
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				XMSelection::numScreens = $XlibWrapper::ScreenCount(display);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		$assignStatic(XMSelection::XA_MANAGER, $XAtom::get("MANAGER"_s));
		for (int32_t screen = 0; screen < XMSelection::numScreens; ++screen) {
			XMSelection::initScreen(display, screen);
		}
		$assignStatic(XMSelection::selectionMap, $new($HashMap));
	}
}

XMSelection::XMSelection() {
}

$Class* XMSelection::load$($String* name, bool initialize) {
	$loadClass(XMSelection, name, initialize, &_XMSelection_ClassInfo_, clinit$XMSelection, allocate$XMSelection);
	return class$;
}

$Class* XMSelection::class$ = nullptr;

		} // X11
	} // awt
} // sun