#include <sun/awt/X11/XEmbedCanvasPeer$XEmbedDropTarget.h>

#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/DropTargetListener.h>
#include <java/util/TooManyListenersException.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <jcpp.h>

using $DropTarget = ::java::awt::dnd::DropTarget;
using $DropTargetListener = ::java::awt::dnd::DropTargetListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TooManyListenersException = ::java::util::TooManyListenersException;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XEmbedCanvasPeer$XEmbedDropTarget_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XEmbedCanvasPeer$XEmbedDropTarget::*)()>(&XEmbedCanvasPeer$XEmbedDropTarget::init$))},
	{"addDropTargetListener", "(Ljava/awt/dnd/DropTargetListener;)V", nullptr, $PUBLIC, nullptr, "java.util.TooManyListenersException"},
	{}
};

$InnerClassInfo _XEmbedCanvasPeer$XEmbedDropTarget_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$XEmbedDropTarget", "sun.awt.X11.XEmbedCanvasPeer", "XEmbedDropTarget", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XEmbedCanvasPeer$XEmbedDropTarget_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$XEmbedDropTarget",
	"java.awt.dnd.DropTarget",
	nullptr,
	nullptr,
	_XEmbedCanvasPeer$XEmbedDropTarget_MethodInfo_,
	nullptr,
	nullptr,
	_XEmbedCanvasPeer$XEmbedDropTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$XEmbedDropTarget($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$XEmbedDropTarget));
}

void XEmbedCanvasPeer$XEmbedDropTarget::init$() {
	$DropTarget::init$();
}

void XEmbedCanvasPeer$XEmbedDropTarget::addDropTargetListener($DropTargetListener* dtl) {
	$throwNew($TooManyListenersException);
}

XEmbedCanvasPeer$XEmbedDropTarget::XEmbedCanvasPeer$XEmbedDropTarget() {
}

$Class* XEmbedCanvasPeer$XEmbedDropTarget::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$XEmbedDropTarget, name, initialize, &_XEmbedCanvasPeer$XEmbedDropTarget_ClassInfo_, allocate$XEmbedCanvasPeer$XEmbedDropTarget);
	return class$;
}

$Class* XEmbedCanvasPeer$XEmbedDropTarget::class$ = nullptr;

		} // X11
	} // awt
} // sun