#include <javax/swing/BufferStrategyPaintManager$BufferInfo.h>

#include <com/sun/java/swing/SwingUtilities3.h>
#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <javax/swing/BufferStrategyPaintManager.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SubRegionShowable.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef COPIED
#undef FINER
#undef LOGGER
#undef VSYNC_ON

using $SwingUtilities3 = ::com::sun::java::swing::SwingUtilities3;
using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Window = ::java::awt::Window;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ArrayList = ::java::util::ArrayList;
using $BufferStrategyPaintManager = ::javax::swing::BufferStrategyPaintManager;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SubRegionShowable = ::sun::awt::SubRegionShowable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $ExtendedBufferCapabilities = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities;
using $ExtendedBufferCapabilities$VSyncType = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace javax {
	namespace swing {

$FieldInfo _BufferStrategyPaintManager$BufferInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/BufferStrategyPaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(BufferStrategyPaintManager$BufferInfo, this$0)},
	{"weakBS", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/BufferStrategy;>;", $PRIVATE, $field(BufferStrategyPaintManager$BufferInfo, weakBS)},
	{"root", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Container;>;", $PRIVATE, $field(BufferStrategyPaintManager$BufferInfo, root)},
	{"inSync", "Z", nullptr, $PRIVATE, $field(BufferStrategyPaintManager$BufferInfo, inSync)},
	{"contentsLostDuringExpose", "Z", nullptr, $PRIVATE, $field(BufferStrategyPaintManager$BufferInfo, contentsLostDuringExpose)},
	{"paintAllOnExpose", "Z", nullptr, $PRIVATE, $field(BufferStrategyPaintManager$BufferInfo, paintAllOnExpose)},
	{}
};

$MethodInfo _BufferStrategyPaintManager$BufferInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/BufferStrategyPaintManager;Ljava/awt/Container;)V", nullptr, $PUBLIC, $method(static_cast<void(BufferStrategyPaintManager$BufferInfo::*)($BufferStrategyPaintManager*,$Container*)>(&BufferStrategyPaintManager$BufferInfo::init$))},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"createBufferStrategy", "()Ljava/awt/image/BufferStrategy;", nullptr, $PRIVATE, $method(static_cast<$BufferStrategy*(BufferStrategyPaintManager$BufferInfo::*)()>(&BufferStrategyPaintManager$BufferInfo::createBufferStrategy))},
	{"createBufferStrategy", "(Ljava/awt/Container;Z)Ljava/awt/image/BufferStrategy;", nullptr, $PRIVATE, $method(static_cast<$BufferStrategy*(BufferStrategyPaintManager$BufferInfo::*)($Container*,bool)>(&BufferStrategyPaintManager$BufferInfo::createBufferStrategy))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getBufferStrategy", "(Z)Ljava/awt/image/BufferStrategy;", nullptr, $PUBLIC},
	{"getContentsLostDuringExpose", "()Z", nullptr, $PUBLIC},
	{"getPaintAllOnExpose", "()Z", nullptr, $PUBLIC},
	{"getRoot", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"hasBufferStrategyChanged", "()Z", nullptr, $PUBLIC},
	{"isInSync", "()Z", nullptr, $PUBLIC},
	{"setContentsLostDuringExpose", "(Z)V", nullptr, $PUBLIC},
	{"setInSync", "(Z)V", nullptr, $PUBLIC},
	{"setPaintAllOnExpose", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BufferStrategyPaintManager$BufferInfo_InnerClassesInfo_[] = {
	{"javax.swing.BufferStrategyPaintManager$BufferInfo", "javax.swing.BufferStrategyPaintManager", "BufferInfo", $PRIVATE},
	{}
};

$ClassInfo _BufferStrategyPaintManager$BufferInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.BufferStrategyPaintManager$BufferInfo",
	"java.awt.event.ComponentAdapter",
	"java.awt.event.WindowListener",
	_BufferStrategyPaintManager$BufferInfo_FieldInfo_,
	_BufferStrategyPaintManager$BufferInfo_MethodInfo_,
	nullptr,
	nullptr,
	_BufferStrategyPaintManager$BufferInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.BufferStrategyPaintManager"
};

$Object* allocate$BufferStrategyPaintManager$BufferInfo($Class* clazz) {
	return $of($alloc(BufferStrategyPaintManager$BufferInfo));
}

int32_t BufferStrategyPaintManager$BufferInfo::hashCode() {
	 return this->$ComponentAdapter::hashCode();
}

bool BufferStrategyPaintManager$BufferInfo::equals(Object$* arg0) {
	 return this->$ComponentAdapter::equals(arg0);
}

$Object* BufferStrategyPaintManager$BufferInfo::clone() {
	 return this->$ComponentAdapter::clone();
}

$String* BufferStrategyPaintManager$BufferInfo::toString() {
	 return this->$ComponentAdapter::toString();
}

void BufferStrategyPaintManager$BufferInfo::finalize() {
	this->$ComponentAdapter::finalize();
}

void BufferStrategyPaintManager$BufferInfo::init$($BufferStrategyPaintManager* this$0, $Container* root) {
	$set(this, this$0, this$0);
	$ComponentAdapter::init$();
	$set(this, root, $new($WeakReference, root));
	$nc(root)->addComponentListener(this);
	if ($instanceOf($Window, root)) {
		$nc(($cast($Window, root)))->addWindowListener(this);
	}
}

void BufferStrategyPaintManager$BufferInfo::setPaintAllOnExpose(bool paintAllOnExpose) {
	this->paintAllOnExpose = paintAllOnExpose;
}

bool BufferStrategyPaintManager$BufferInfo::getPaintAllOnExpose() {
	return this->paintAllOnExpose;
}

void BufferStrategyPaintManager$BufferInfo::setContentsLostDuringExpose(bool value) {
	this->contentsLostDuringExpose = value;
}

bool BufferStrategyPaintManager$BufferInfo::getContentsLostDuringExpose() {
	return this->contentsLostDuringExpose;
}

void BufferStrategyPaintManager$BufferInfo::setInSync(bool inSync) {
	this->inSync = inSync;
}

bool BufferStrategyPaintManager$BufferInfo::isInSync() {
	return this->inSync;
}

$Container* BufferStrategyPaintManager$BufferInfo::getRoot() {
	return (this->root == nullptr) ? ($Container*)nullptr : $cast($Container, $nc(this->root)->get());
}

$BufferStrategy* BufferStrategyPaintManager$BufferInfo::getBufferStrategy(bool create) {
	$var($BufferStrategy, bs, (this->weakBS == nullptr) ? ($BufferStrategy*)nullptr : $cast($BufferStrategy, $nc(this->weakBS)->get()));
	if (bs == nullptr && create) {
		$assign(bs, createBufferStrategy());
		if (bs != nullptr) {
			$set(this, weakBS, $new($WeakReference, bs));
		}
		$init($BufferStrategyPaintManager);
		$init($PlatformLogger$Level);
		if ($nc($BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc($BufferStrategyPaintManager::LOGGER)->finer($$str({"getBufferStrategy: created bs: "_s, bs}));
		}
	}
	return bs;
}

bool BufferStrategyPaintManager$BufferInfo::hasBufferStrategyChanged() {
	$var($Container, root, getRoot());
	if (root != nullptr) {
		$var($BufferStrategy, ourBS, nullptr);
		$var($BufferStrategy, componentBS, nullptr);
		$assign(ourBS, getBufferStrategy(false));
		if ($instanceOf($Window, root)) {
			$assign(componentBS, $nc(($cast($Window, root)))->getBufferStrategy());
		} else {
			$assign(componentBS, $nc($($AWTAccessor::getComponentAccessor()))->getBufferStrategy(root));
		}
		if (componentBS != ourBS) {
			if (ourBS != nullptr) {
				ourBS->dispose();
			}
			$set(this, weakBS, nullptr);
			return true;
		}
	}
	return false;
}

$BufferStrategy* BufferStrategyPaintManager$BufferInfo::createBufferStrategy() {
	$var($Container, root, getRoot());
	if (root == nullptr) {
		return nullptr;
	}
	$var($BufferStrategy, bs, nullptr);
	if ($SwingUtilities3::isVsyncRequested(root)) {
		$assign(bs, createBufferStrategy(root, true));
		$init($BufferStrategyPaintManager);
		$init($PlatformLogger$Level);
		if ($nc($BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc($BufferStrategyPaintManager::LOGGER)->finer("createBufferStrategy: using vsynced strategy"_s);
		}
	}
	if (bs == nullptr) {
		$assign(bs, createBufferStrategy(root, false));
	}
	if (!($instanceOf($SubRegionShowable, bs))) {
		$assign(bs, nullptr);
	}
	return bs;
}

$BufferStrategy* BufferStrategyPaintManager$BufferInfo::createBufferStrategy($Container* root, bool isVsynced) {
	$var($BufferCapabilities, caps, nullptr);
	if (isVsynced) {
		$var($ImageCapabilities, var$0, $new($ImageCapabilities, true));
		$init($BufferCapabilities$FlipContents);
		$init($ExtendedBufferCapabilities$VSyncType);
		$assign(caps, $new($ExtendedBufferCapabilities, var$0, $$new($ImageCapabilities, true), $BufferCapabilities$FlipContents::COPIED, $ExtendedBufferCapabilities$VSyncType::VSYNC_ON));
	} else {
		$var($ImageCapabilities, var$1, $new($ImageCapabilities, true));
		$assign(caps, $new($BufferCapabilities, var$1, $$new($ImageCapabilities, true), nullptr));
	}
	$var($BufferStrategy, bs, nullptr);
	if ($SunToolkit::isInstanceOf($of(root), "java.applet.Applet"_s)) {
		try {
			$var($AWTAccessor$ComponentAccessor, componentAccessor, $AWTAccessor::getComponentAccessor());
			$nc(componentAccessor)->createBufferStrategy(root, 2, caps);
			$assign(bs, componentAccessor->getBufferStrategy(root));
		} catch ($AWTException&) {
			$var($AWTException, e, $catch());
			$init($BufferStrategyPaintManager);
			$init($PlatformLogger$Level);
			if ($nc($BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc($BufferStrategyPaintManager::LOGGER)->finer("createBufferStratety failed"_s, static_cast<$Throwable*>(e));
			}
		}
	} else {
		try {
			$nc(($cast($Window, root)))->createBufferStrategy(2, caps);
			$assign(bs, ($cast($Window, root))->getBufferStrategy());
		} catch ($AWTException&) {
			$var($AWTException, e, $catch());
			$init($BufferStrategyPaintManager);
			$init($PlatformLogger$Level);
			if ($nc($BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc($BufferStrategyPaintManager::LOGGER)->finer("createBufferStratety failed"_s, static_cast<$Throwable*>(e));
			}
		}
	}
	return bs;
}

void BufferStrategyPaintManager$BufferInfo::dispose() {
	$var($Container, root, getRoot());
	$init($BufferStrategyPaintManager);
	$init($PlatformLogger$Level);
	if ($nc($BufferStrategyPaintManager::LOGGER)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc($BufferStrategyPaintManager::LOGGER)->finer($$str({"disposed BufferInfo for: "_s, root}));
	}
	if (root != nullptr) {
		root->removeComponentListener(this);
		if ($instanceOf($Window, root)) {
			$nc(($cast($Window, root)))->removeWindowListener(this);
		}
		$var($BufferStrategy, bs, getBufferStrategy(false));
		if (bs != nullptr) {
			bs->dispose();
		}
	}
	$set(this, root, nullptr);
	$set(this, weakBS, nullptr);
}

void BufferStrategyPaintManager$BufferInfo::componentHidden($ComponentEvent* e) {
	$var($Container, root, getRoot());
	if (root != nullptr && root->isVisible()) {
		root->repaint();
	} else {
		setPaintAllOnExpose(true);
	}
}

void BufferStrategyPaintManager$BufferInfo::windowIconified($WindowEvent* e) {
	setPaintAllOnExpose(true);
}

void BufferStrategyPaintManager$BufferInfo::windowClosed($WindowEvent* e) {
	$synchronized(this->this$0) {
		while (this->this$0->showing) {
			try {
				$of(this->this$0)->wait();
			} catch ($InterruptedException&) {
				$catch();
			}
		}
		$nc(this->this$0->bufferInfos)->remove($of(this));
	}
	dispose();
}

void BufferStrategyPaintManager$BufferInfo::windowOpened($WindowEvent* e) {
}

void BufferStrategyPaintManager$BufferInfo::windowClosing($WindowEvent* e) {
}

void BufferStrategyPaintManager$BufferInfo::windowDeiconified($WindowEvent* e) {
}

void BufferStrategyPaintManager$BufferInfo::windowActivated($WindowEvent* e) {
}

void BufferStrategyPaintManager$BufferInfo::windowDeactivated($WindowEvent* e) {
}

BufferStrategyPaintManager$BufferInfo::BufferStrategyPaintManager$BufferInfo() {
}

$Class* BufferStrategyPaintManager$BufferInfo::load$($String* name, bool initialize) {
	$loadClass(BufferStrategyPaintManager$BufferInfo, name, initialize, &_BufferStrategyPaintManager$BufferInfo_ClassInfo_, allocate$BufferStrategyPaintManager$BufferInfo);
	return class$;
}

$Class* BufferStrategyPaintManager$BufferInfo::class$ = nullptr;

	} // swing
} // javax