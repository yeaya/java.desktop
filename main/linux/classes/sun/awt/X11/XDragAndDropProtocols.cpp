#include <sun/awt/X11/XDragAndDropProtocols.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/X11/MotifDnDDragSourceProtocol.h>
#include <sun/awt/X11/MotifDnDDropTargetProtocol.h>
#include <sun/awt/X11/XDnDDragSourceProtocol.h>
#include <sun/awt/X11/XDnDDropTargetProtocol.h>
#include <sun/awt/X11/XDragSourceContextPeer.h>
#include <sun/awt/X11/XDragSourceProtocol.h>
#include <sun/awt/X11/XDragSourceProtocolListener.h>
#include <sun/awt/X11/XDropTargetContextPeer.h>
#include <sun/awt/X11/XDropTargetProtocol.h>
#include <sun/awt/X11/XDropTargetProtocolListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $MotifDnDDragSourceProtocol = ::sun::awt::X11::MotifDnDDragSourceProtocol;
using $MotifDnDDropTargetProtocol = ::sun::awt::X11::MotifDnDDropTargetProtocol;
using $XDnDDragSourceProtocol = ::sun::awt::X11::XDnDDragSourceProtocol;
using $XDnDDropTargetProtocol = ::sun::awt::X11::XDnDDropTargetProtocol;
using $XDragSourceContextPeer = ::sun::awt::X11::XDragSourceContextPeer;
using $XDragSourceProtocol = ::sun::awt::X11::XDragSourceProtocol;
using $XDragSourceProtocolListener = ::sun::awt::X11::XDragSourceProtocolListener;
using $XDropTargetContextPeer = ::sun::awt::X11::XDropTargetContextPeer;
using $XDropTargetProtocol = ::sun::awt::X11::XDropTargetProtocol;
using $XDropTargetProtocolListener = ::sun::awt::X11::XDropTargetProtocolListener;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDragAndDropProtocols_FieldInfo_[] = {
	{"dragProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/awt/X11/XDragSourceProtocol;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XDragAndDropProtocols, dragProtocols)},
	{"dropProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/awt/X11/XDropTargetProtocol;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XDragAndDropProtocols, dropProtocols)},
	{"XDnD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XDragAndDropProtocols, XDnD)},
	{"MotifDnD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XDragAndDropProtocols, MotifDnD)},
	{}
};

$MethodInfo _XDragAndDropProtocols_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XDragAndDropProtocols::*)()>(&XDragAndDropProtocols::init$))},
	{"getDragSourceProtocol", "(Ljava/lang/String;)Lsun/awt/X11/XDragSourceProtocol;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XDragSourceProtocol*(*)($String*)>(&XDragAndDropProtocols::getDragSourceProtocol))},
	{"getDragSourceProtocols", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lsun/awt/X11/XDragSourceProtocol;>;", $STATIC, $method(static_cast<$Iterator*(*)()>(&XDragAndDropProtocols::getDragSourceProtocols))},
	{"getDropTargetProtocol", "(Ljava/lang/String;)Lsun/awt/X11/XDropTargetProtocol;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XDropTargetProtocol*(*)($String*)>(&XDragAndDropProtocols::getDropTargetProtocol))},
	{"getDropTargetProtocols", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lsun/awt/X11/XDropTargetProtocol;>;", $STATIC, $method(static_cast<$Iterator*(*)()>(&XDragAndDropProtocols::getDropTargetProtocols))},
	{}
};

$ClassInfo _XDragAndDropProtocols_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XDragAndDropProtocols",
	"java.lang.Object",
	nullptr,
	_XDragAndDropProtocols_FieldInfo_,
	_XDragAndDropProtocols_MethodInfo_
};

$Object* allocate$XDragAndDropProtocols($Class* clazz) {
	return $of($alloc(XDragAndDropProtocols));
}

$List* XDragAndDropProtocols::dragProtocols = nullptr;
$List* XDragAndDropProtocols::dropProtocols = nullptr;
$String* XDragAndDropProtocols::XDnD = nullptr;
$String* XDragAndDropProtocols::MotifDnD = nullptr;

void XDragAndDropProtocols::init$() {
}

$Iterator* XDragAndDropProtocols::getDragSourceProtocols() {
	$init(XDragAndDropProtocols);
	return $nc(XDragAndDropProtocols::dragProtocols)->iterator();
}

$Iterator* XDragAndDropProtocols::getDropTargetProtocols() {
	$init(XDragAndDropProtocols);
	return $nc(XDragAndDropProtocols::dropProtocols)->iterator();
}

$XDragSourceProtocol* XDragAndDropProtocols::getDragSourceProtocol($String* name) {
	$init(XDragAndDropProtocols);
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		return nullptr;
	}
	$var($Iterator, dragProtocols, XDragAndDropProtocols::getDragSourceProtocols());
	while ($nc(dragProtocols)->hasNext()) {
		$var($XDragSourceProtocol, dragProtocol, $cast($XDragSourceProtocol, dragProtocols->next()));
		if ($nc($($nc(dragProtocol)->getProtocolName()))->equals(name)) {
			return dragProtocol;
		}
	}
	return nullptr;
}

$XDropTargetProtocol* XDragAndDropProtocols::getDropTargetProtocol($String* name) {
	$init(XDragAndDropProtocols);
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		return nullptr;
	}
	$var($Iterator, dropProtocols, XDragAndDropProtocols::getDropTargetProtocols());
	while ($nc(dropProtocols)->hasNext()) {
		$var($XDropTargetProtocol, dropProtocol, $cast($XDropTargetProtocol, dropProtocols->next()));
		if ($nc($($nc(dropProtocol)->getProtocolName()))->equals(name)) {
			return dropProtocol;
		}
	}
	return nullptr;
}

void clinit$XDragAndDropProtocols($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XDragAndDropProtocols::XDnD, "XDnD"_s);
	$assignStatic(XDragAndDropProtocols::MotifDnD, "MotifDnD"_s);
	{
		$var($XDragSourceProtocolListener, dragSourceProtocolListener, $XDragSourceContextPeer::getXDragSourceProtocolListener());
		$var($XDropTargetProtocolListener, dropTargetProtocolListener, $XDropTargetContextPeer::getXDropTargetProtocolListener());
		$var($List, tDragSourceProtocols, $new($ArrayList));
		$var($XDragSourceProtocol, xdndDragSourceProtocol, $XDnDDragSourceProtocol::createInstance(dragSourceProtocolListener));
		tDragSourceProtocols->add(xdndDragSourceProtocol);
		$var($XDragSourceProtocol, motifdndDragSourceProtocol, $MotifDnDDragSourceProtocol::createInstance(dragSourceProtocolListener));
		tDragSourceProtocols->add(motifdndDragSourceProtocol);
		$var($List, tDropTargetProtocols, $new($ArrayList));
		$var($XDropTargetProtocol, xdndDropTargetProtocol, $XDnDDropTargetProtocol::createInstance(dropTargetProtocolListener));
		tDropTargetProtocols->add(xdndDropTargetProtocol);
		$var($XDropTargetProtocol, motifdndDropTargetProtocol, $MotifDnDDropTargetProtocol::createInstance(dropTargetProtocolListener));
		tDropTargetProtocols->add(motifdndDropTargetProtocol);
		$assignStatic(XDragAndDropProtocols::dragProtocols, $Collections::unmodifiableList(tDragSourceProtocols));
		$assignStatic(XDragAndDropProtocols::dropProtocols, $Collections::unmodifiableList(tDropTargetProtocols));
	}
}

XDragAndDropProtocols::XDragAndDropProtocols() {
}

$Class* XDragAndDropProtocols::load$($String* name, bool initialize) {
	$loadClass(XDragAndDropProtocols, name, initialize, &_XDragAndDropProtocols_ClassInfo_, clinit$XDragAndDropProtocols, allocate$XDragAndDropProtocols);
	return class$;
}

$Class* XDragAndDropProtocols::class$ = nullptr;

		} // X11
	} // awt
} // sun