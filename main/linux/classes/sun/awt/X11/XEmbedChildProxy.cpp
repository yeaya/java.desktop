#include <sun/awt/X11/XEmbedChildProxy.h>

#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XEmbedChildProxyPeer.h>
#include <sun/awt/X11/XEmbeddingContainer.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Toolkit = ::java::awt::Toolkit;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $XEmbeddingContainer = ::sun::awt::X11::XEmbeddingContainer;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedChildProxy_FieldInfo_[] = {
	{"handle", "J", nullptr, 0, $field(XEmbedChildProxy, handle)},
	{"container", "Lsun/awt/X11/XEmbeddingContainer;", nullptr, 0, $field(XEmbedChildProxy, container)},
	{}
};

$MethodInfo _XEmbedChildProxy_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbeddingContainer;J)V", nullptr, $PUBLIC, $method(static_cast<void(XEmbedChildProxy::*)($XEmbeddingContainer*,int64_t)>(&XEmbedChildProxy::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"getEmbeddingContainer", "()Lsun/awt/X11/XEmbeddingContainer;", nullptr, 0},
	{"getHandle", "()J", nullptr, 0},
	{}
};

$ClassInfo _XEmbedChildProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XEmbedChildProxy",
	"java.awt.Component",
	nullptr,
	_XEmbedChildProxy_FieldInfo_,
	_XEmbedChildProxy_MethodInfo_
};

$Object* allocate$XEmbedChildProxy($Class* clazz) {
	return $of($alloc(XEmbedChildProxy));
}

void XEmbedChildProxy::init$($XEmbeddingContainer* container, int64_t handle) {
	$Component::init$();
	this->handle = handle;
	$set(this, container, container);
}

void XEmbedChildProxy::addNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		if ($nc($($AWTAccessor::getComponentAccessor()))->getPeer(this) == nullptr) {
			$nc($($AWTAccessor::getComponentAccessor()))->setPeer(this, $($nc(($cast($XToolkit, $($Toolkit::getDefaultToolkit()))))->createEmbedProxy(this)));
		}
		$Component::addNotify();
	}
}

$XEmbeddingContainer* XEmbedChildProxy::getEmbeddingContainer() {
	return this->container;
}

int64_t XEmbedChildProxy::getHandle() {
	return this->handle;
}

XEmbedChildProxy::XEmbedChildProxy() {
}

$Class* XEmbedChildProxy::load$($String* name, bool initialize) {
	$loadClass(XEmbedChildProxy, name, initialize, &_XEmbedChildProxy_ClassInfo_, allocate$XEmbedChildProxy);
	return class$;
}

$Class* XEmbedChildProxy::class$ = nullptr;

		} // X11
	} // awt
} // sun