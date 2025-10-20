#include <sun/java2d/d3d/D3DScreenUpdateManager.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/ScreenUpdateManager.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <sun/java2d/windows/WindowsFlags.h>
#include <jcpp.h>

#undef MIN_WIN_SIZE
#undef NORM_PRIORITY

using $ComponentArray = $Array<::java::awt::Component>;
using $D3DSurfaceData$D3DWindowSurfaceDataArray = $Array<::sun::java2d::d3d::D3DSurfaceData$D3DWindowSurfaceData>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $ScreenUpdateManager = ::sun::java2d::ScreenUpdateManager;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DGraphicsConfig = ::sun::java2d::d3d::D3DGraphicsConfig;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DSurfaceData$D3DWindowSurfaceData = ::sun::java2d::d3d::D3DSurfaceData$D3DWindowSurfaceData;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;
using $WindowsFlags = ::sun::java2d::windows::WindowsFlags;

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DScreenUpdateManager$$Lambda$lambda$new$1 : public $PrivilegedAction {
	$class(D3DScreenUpdateManager$$Lambda$lambda$new$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(D3DScreenUpdateManager* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$new$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<D3DScreenUpdateManager$$Lambda$lambda$new$1>());
	}
	D3DScreenUpdateManager* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo D3DScreenUpdateManager$$Lambda$lambda$new$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(D3DScreenUpdateManager$$Lambda$lambda$new$1, inst$)},
	{}
};
$MethodInfo D3DScreenUpdateManager$$Lambda$lambda$new$1::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/d3d/D3DScreenUpdateManager;)V", nullptr, $PUBLIC, $method(static_cast<void(D3DScreenUpdateManager$$Lambda$lambda$new$1::*)(D3DScreenUpdateManager*)>(&D3DScreenUpdateManager$$Lambda$lambda$new$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo D3DScreenUpdateManager$$Lambda$lambda$new$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.d3d.D3DScreenUpdateManager$$Lambda$lambda$new$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* D3DScreenUpdateManager$$Lambda$lambda$new$1::load$($String* name, bool initialize) {
	$loadClass(D3DScreenUpdateManager$$Lambda$lambda$new$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* D3DScreenUpdateManager$$Lambda$lambda$new$1::class$ = nullptr;

class D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1 : public $PrivilegedAction {
	$class(D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(D3DScreenUpdateManager* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$startUpdateThread$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1>());
	}
	D3DScreenUpdateManager* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1, inst$)},
	{}
};
$MethodInfo D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/d3d/D3DScreenUpdateManager;)V", nullptr, $PUBLIC, $method(static_cast<void(D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1::*)(D3DScreenUpdateManager*)>(&D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.d3d.D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1::load$($String* name, bool initialize) {
	$loadClass(D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1::class$ = nullptr;

class D3DScreenUpdateManager$$Lambda$lambda$new$0$2 : public $Runnable {
	$class(D3DScreenUpdateManager$$Lambda$lambda$new$0$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(D3DScreenUpdateManager* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<D3DScreenUpdateManager$$Lambda$lambda$new$0$2>());
	}
	D3DScreenUpdateManager* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo D3DScreenUpdateManager$$Lambda$lambda$new$0$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(D3DScreenUpdateManager$$Lambda$lambda$new$0$2, inst$)},
	{}
};
$MethodInfo D3DScreenUpdateManager$$Lambda$lambda$new$0$2::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/d3d/D3DScreenUpdateManager;)V", nullptr, $PUBLIC, $method(static_cast<void(D3DScreenUpdateManager$$Lambda$lambda$new$0$2::*)(D3DScreenUpdateManager*)>(&D3DScreenUpdateManager$$Lambda$lambda$new$0$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo D3DScreenUpdateManager$$Lambda$lambda$new$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.d3d.D3DScreenUpdateManager$$Lambda$lambda$new$0$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* D3DScreenUpdateManager$$Lambda$lambda$new$0$2::load$($String* name, bool initialize) {
	$loadClass(D3DScreenUpdateManager$$Lambda$lambda$new$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* D3DScreenUpdateManager$$Lambda$lambda$new$0$2::class$ = nullptr;

$FieldInfo _D3DScreenUpdateManager_FieldInfo_[] = {
	{"MIN_WIN_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(D3DScreenUpdateManager, MIN_WIN_SIZE)},
	{"done", "Z", nullptr, $PRIVATE | $VOLATILE, $field(D3DScreenUpdateManager, done)},
	{"screenUpdater", "Ljava/lang/Thread;", nullptr, $PRIVATE | $VOLATILE, $field(D3DScreenUpdateManager, screenUpdater)},
	{"needsUpdateNow", "Z", nullptr, $PRIVATE, $field(D3DScreenUpdateManager, needsUpdateNow)},
	{"runLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(D3DScreenUpdateManager, runLock)},
	{"d3dwSurfaces", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData;>;", $PRIVATE, $field(D3DScreenUpdateManager, d3dwSurfaces)},
	{"gdiSurfaces", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lsun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData;Lsun/java2d/windows/GDIWindowSurfaceData;>;", $PRIVATE, $field(D3DScreenUpdateManager, gdiSurfaces)},
	{}
};

$MethodInfo _D3DScreenUpdateManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(D3DScreenUpdateManager::*)()>(&D3DScreenUpdateManager::init$))},
	{"canUseD3DOnScreen", "(Lsun/awt/windows/WComponentPeer;Lsun/awt/Win32GraphicsConfig;I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($WComponentPeer*,$Win32GraphicsConfig*,int32_t)>(&D3DScreenUpdateManager::canUseD3DOnScreen))},
	{"createGraphics", "(Lsun/java2d/SurfaceData;Lsun/awt/windows/WComponentPeer;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Font;)Ljava/awt/Graphics2D;", nullptr, $PUBLIC},
	{"createScreenSurface", "(Lsun/awt/Win32GraphicsConfig;Lsun/awt/windows/WComponentPeer;IZ)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"dropScreenSurface", "(Lsun/java2d/SurfaceData;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getGdiSurface", "(Lsun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData;)Lsun/java2d/SurfaceData;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$SurfaceData*(D3DScreenUpdateManager::*)($D3DSurfaceData$D3DWindowSurfaceData*)>(&D3DScreenUpdateManager::getGdiSurface))},
	{"getReplacementScreenSurface", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/SurfaceData;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"hasHWChildren", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*)>(&D3DScreenUpdateManager::hasHWChildren))},
	{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(D3DScreenUpdateManager::*)()>(&D3DScreenUpdateManager::lambda$new$0))},
	{"lambda$new$1", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(D3DScreenUpdateManager::*)()>(&D3DScreenUpdateManager::lambda$new$1))},
	{"lambda$startUpdateThread$2", "()Ljava/lang/Thread;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Thread*(D3DScreenUpdateManager::*)()>(&D3DScreenUpdateManager::lambda$startUpdateThread$2))},
	{"removeGdiSurface", "(Lsun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData;)V", nullptr, $PRIVATE, $method(static_cast<void(D3DScreenUpdateManager::*)($D3DSurfaceData$D3DWindowSurfaceData*)>(&D3DScreenUpdateManager::removeGdiSurface))},
	{"repaintPeerTarget", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $PRIVATE, $method(static_cast<void(D3DScreenUpdateManager::*)($WComponentPeer*)>(&D3DScreenUpdateManager::repaintPeerTarget))},
	{"run", "()V", nullptr, $PUBLIC},
	{"runUpdateNow", "()V", nullptr, $PUBLIC},
	{"startUpdateThread", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(D3DScreenUpdateManager::*)()>(&D3DScreenUpdateManager::startUpdateThread))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trackScreenSurface", "(Lsun/java2d/SurfaceData;)V", nullptr, $PRIVATE, $method(static_cast<void(D3DScreenUpdateManager::*)($SurfaceData*)>(&D3DScreenUpdateManager::trackScreenSurface))},
	{"validate", "(Lsun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData;)Z", nullptr, $PRIVATE, $method(static_cast<bool(D3DScreenUpdateManager::*)($D3DSurfaceData$D3DWindowSurfaceData*)>(&D3DScreenUpdateManager::validate))},
	{"wakeUpUpdateThread", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DScreenUpdateManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.d3d.D3DScreenUpdateManager",
	"sun.java2d.ScreenUpdateManager",
	"java.lang.Runnable",
	_D3DScreenUpdateManager_FieldInfo_,
	_D3DScreenUpdateManager_MethodInfo_
};

$Object* allocate$D3DScreenUpdateManager($Class* clazz) {
	return $of($alloc(D3DScreenUpdateManager));
}

int32_t D3DScreenUpdateManager::hashCode() {
	 return this->$ScreenUpdateManager::hashCode();
}

bool D3DScreenUpdateManager::equals(Object$* arg0) {
	 return this->$ScreenUpdateManager::equals(arg0);
}

$Object* D3DScreenUpdateManager::clone() {
	 return this->$ScreenUpdateManager::clone();
}

$String* D3DScreenUpdateManager::toString() {
	 return this->$ScreenUpdateManager::toString();
}

void D3DScreenUpdateManager::finalize() {
	this->$ScreenUpdateManager::finalize();
}

void D3DScreenUpdateManager::init$() {
	$beforeCallerSensitive();
	$ScreenUpdateManager::init$();
	$set(this, runLock, $new($Object));
	this->done = false;
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(D3DScreenUpdateManager$$Lambda$lambda$new$1, this)));
}

$SurfaceData* D3DScreenUpdateManager::createScreenSurface($Win32GraphicsConfig* gc, $WComponentPeer* peer, int32_t bbNum, bool isResize) {
	$useLocalCurrentObjectStackCache();
	if (this->done || !($instanceOf($D3DGraphicsConfig, gc))) {
		return $ScreenUpdateManager::createScreenSurface(gc, peer, bbNum, isResize);
	}
	$var($SurfaceData, sd, nullptr);
	if (canUseD3DOnScreen(peer, gc, bbNum)) {
		try {
			$assign(sd, $D3DSurfaceData::createData(peer));
		} catch ($InvalidPipeException&) {
			$var($InvalidPipeException, ipe, $catch());
			$assign(sd, nullptr);
		}
	}
	if (sd == nullptr) {
		$assign(sd, $GDIWindowSurfaceData::createData(peer));
	}
	if (isResize) {
		repaintPeerTarget(peer);
	}
	return sd;
}

bool D3DScreenUpdateManager::canUseD3DOnScreen($WComponentPeer* peer, $Win32GraphicsConfig* gc, int32_t bbNum) {
	$init(D3DScreenUpdateManager);
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($D3DGraphicsConfig, gc))) {
		return false;
	}
	$var($D3DGraphicsConfig, d3dgc, $cast($D3DGraphicsConfig, gc));
	$var($D3DGraphicsDevice, d3dgd, $nc(d3dgc)->getD3DDevice());
	$var($String, peerName, $nc($of(peer))->getClass()->getName());
	$var($Rectangle, r, peer->getBounds());
	$var($Component, target, $cast($Component, peer->getTarget()));
	$var($Window, fsw, $nc(d3dgd)->getFullScreenWindow());
	bool var$3 = $WindowsFlags::isD3DOnScreenEnabled();
	bool var$2 = var$3 && d3dgd->isD3DEnabledOnDevice();
	bool var$1 = var$2 && peer->isAccelCapable() && ($nc(r)->width > D3DScreenUpdateManager::MIN_WIN_SIZE || $nc(r)->height > D3DScreenUpdateManager::MIN_WIN_SIZE) && bbNum == 0;
	bool var$0 = var$1 && (fsw == nullptr || ($equals(fsw, target) && !hasHWChildren(target)));
	if (var$0) {
		bool var$8 = $nc(peerName)->equals("sun.awt.windows.WCanvasPeer"_s);
		bool var$7 = var$8 || $nc(peerName)->equals("sun.awt.windows.WDialogPeer"_s);
		bool var$6 = var$7 || $nc(peerName)->equals("sun.awt.windows.WPanelPeer"_s);
		bool var$5 = var$6 || $nc(peerName)->equals("sun.awt.windows.WWindowPeer"_s);
		bool var$4 = var$5 || $nc(peerName)->equals("sun.awt.windows.WFramePeer"_s);
		var$0 = (var$4 || $nc(peerName)->equals("sun.awt.windows.WEmbeddedFramePeer"_s));
	}
	return var$0;
}

$Graphics2D* D3DScreenUpdateManager::createGraphics($SurfaceData* sd$renamed, $WComponentPeer* peer, $Color* fgColor, $Color* bgColor, $Font* font) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, sd, sd$renamed);
	if (!this->done && $instanceOf($D3DSurfaceData$D3DWindowSurfaceData, sd)) {
		$var($D3DSurfaceData$D3DWindowSurfaceData, d3dw, $cast($D3DSurfaceData$D3DWindowSurfaceData, sd));
		bool var$0 = !$nc(d3dw)->isSurfaceLost();
		if (var$0 || validate(d3dw)) {
			trackScreenSurface(d3dw);
			return $new($SunGraphics2D, sd, fgColor, bgColor, font);
		}
		$assign(sd, getGdiSurface(d3dw));
	}
	return $ScreenUpdateManager::createGraphics(sd, peer, fgColor, bgColor, font);
}

void D3DScreenUpdateManager::repaintPeerTarget($WComponentPeer* peer) {
	$useLocalCurrentObjectStackCache();
	$var($Component, target, $cast($Component, $nc(peer)->getTarget()));
	$var($Rectangle, bounds, $nc($($AWTAccessor::getComponentAccessor()))->getBounds(target));
	peer->handlePaint(0, 0, $nc(bounds)->width, bounds->height);
}

void D3DScreenUpdateManager::trackScreenSurface($SurfaceData* sd) {
	if (!this->done && $instanceOf($D3DSurfaceData$D3DWindowSurfaceData, sd)) {
		$synchronized(this) {
			if (this->d3dwSurfaces == nullptr) {
				$set(this, d3dwSurfaces, $new($ArrayList));
			}
			$var($D3DSurfaceData$D3DWindowSurfaceData, d3dw, $cast($D3DSurfaceData$D3DWindowSurfaceData, sd));
			if (!$nc(this->d3dwSurfaces)->contains(d3dw)) {
				$nc(this->d3dwSurfaces)->add(d3dw);
			}
		}
		startUpdateThread();
	}
}

void D3DScreenUpdateManager::dropScreenSurface($SurfaceData* sd) {
	$synchronized(this) {
		if (this->d3dwSurfaces != nullptr && $instanceOf($D3DSurfaceData$D3DWindowSurfaceData, sd)) {
			$var($D3DSurfaceData$D3DWindowSurfaceData, d3dw, $cast($D3DSurfaceData$D3DWindowSurfaceData, sd));
			removeGdiSurface(d3dw);
			$nc(this->d3dwSurfaces)->remove($of(d3dw));
		}
	}
}

$SurfaceData* D3DScreenUpdateManager::getReplacementScreenSurface($WComponentPeer* peer, $SurfaceData* sd) {
	$var($SurfaceData, newSurface, $ScreenUpdateManager::getReplacementScreenSurface(peer, sd));
	trackScreenSurface(newSurface);
	return newSurface;
}

void D3DScreenUpdateManager::removeGdiSurface($D3DSurfaceData$D3DWindowSurfaceData* d3dw) {
	if (this->gdiSurfaces != nullptr) {
		$var($GDIWindowSurfaceData, gdisd, $cast($GDIWindowSurfaceData, $nc(this->gdiSurfaces)->get(d3dw)));
		if (gdisd != nullptr) {
			gdisd->invalidate();
			$nc(this->gdiSurfaces)->remove(d3dw);
		}
	}
}

void D3DScreenUpdateManager::startUpdateThread() {
	$synchronized(this) {
		$beforeCallerSensitive();
		if (this->screenUpdater == nullptr) {
			$set(this, screenUpdater, $cast($Thread, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1, this)))));
			$nc(this->screenUpdater)->start();
		} else {
			wakeUpUpdateThread();
		}
	}
}

void D3DScreenUpdateManager::wakeUpUpdateThread() {
	$synchronized(this->runLock) {
		$nc($of(this->runLock))->notifyAll();
	}
}

void D3DScreenUpdateManager::runUpdateNow() {
	$synchronized(this) {
		if (this->done || this->screenUpdater == nullptr || this->d3dwSurfaces == nullptr || $nc(this->d3dwSurfaces)->size() == 0) {
			return;
		}
	}
	$synchronized(this->runLock) {
		this->needsUpdateNow = true;
		$nc($of(this->runLock))->notifyAll();
		while (this->needsUpdateNow) {
			try {
				$nc($of(this->runLock))->wait();
			} catch ($InterruptedException&) {
				$catch();
			}
		}
	}
}

void D3DScreenUpdateManager::run() {
	$useLocalCurrentObjectStackCache();
	while (!this->done) {
		$synchronized(this->runLock) {
			int64_t timeout = $nc(this->d3dwSurfaces)->size() > 0 ? 100 : 0;
			if (!this->needsUpdateNow) {
				try {
					$nc($of(this->runLock))->wait(timeout);
				} catch ($InterruptedException&) {
					$catch();
				}
			}
		}
		$var($D3DSurfaceData$D3DWindowSurfaceDataArray, surfaces, $new($D3DSurfaceData$D3DWindowSurfaceDataArray, 0));
		$synchronized(this) {
			$assign(surfaces, $fcast($D3DSurfaceData$D3DWindowSurfaceDataArray, $nc(this->d3dwSurfaces)->toArray(surfaces)));
		}
		{
			$var($D3DSurfaceData$D3DWindowSurfaceDataArray, arr$, surfaces);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($D3DSurfaceData$D3DWindowSurfaceData, sd, arr$->get(i$));
				{
					bool var$0 = $nc(sd)->isValid();
					if (var$0) {
						bool var$1 = sd->isDirty();
						var$0 = (var$1 || sd->isSurfaceLost());
					}
					if (var$0) {
						if (!$nc(sd)->isSurfaceLost()) {
							$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
							$nc(rq)->lock();
							{
								$var($Throwable, var$2, nullptr);
								try {
									$var($Rectangle, r, sd->getBounds());
									$D3DSurfaceData::swapBuffers(sd, 0, 0, $nc(r)->width, r->height);
									sd->markClean();
								} catch ($Throwable&) {
									$assign(var$2, $catch());
								} /*finally*/ {
									rq->unlock();
								}
								if (var$2 != nullptr) {
									$throw(var$2);
								}
							}
						} else if (!validate(sd)) {
							$nc($(sd->getPeer()))->replaceSurfaceDataLater();
						}
					}
				}
			}
		}
		$synchronized(this->runLock) {
			this->needsUpdateNow = false;
			$nc($of(this->runLock))->notifyAll();
		}
	}
}

bool D3DScreenUpdateManager::validate($D3DSurfaceData$D3DWindowSurfaceData* sd) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sd)->isSurfaceLost()) {
		try {
			sd->restoreSurface();
			$var($Color, bg, $nc($(sd->getPeer()))->getBackgroundNoSync());
			$var($SunGraphics2D, sg2d, $new($SunGraphics2D, sd, bg, bg, nullptr));
			int32_t var$0 = $nc($(sd->getBounds()))->width;
			sg2d->fillRect(0, 0, var$0, $nc($(sd->getBounds()))->height);
			sg2d->dispose();
			sd->markClean();
			repaintPeerTarget($(sd->getPeer()));
		} catch ($InvalidPipeException&) {
			$var($InvalidPipeException, ipe, $catch());
			return false;
		}
	}
	return true;
}

$SurfaceData* D3DScreenUpdateManager::getGdiSurface($D3DSurfaceData$D3DWindowSurfaceData* d3dw) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->gdiSurfaces == nullptr) {
			$set(this, gdiSurfaces, $new($HashMap));
		}
		$var($GDIWindowSurfaceData, gdisd, $cast($GDIWindowSurfaceData, $nc(this->gdiSurfaces)->get(d3dw)));
		if (gdisd == nullptr) {
			$assign(gdisd, $GDIWindowSurfaceData::createData($($nc(d3dw)->getPeer())));
			$nc(this->gdiSurfaces)->put(d3dw, gdisd);
		}
		return gdisd;
	}
}

bool D3DScreenUpdateManager::hasHWChildren($Component* comp) {
	$init(D3DScreenUpdateManager);
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	if ($instanceOf($Container, comp)) {
		{
			$var($ComponentArray, arr$, $nc(($cast($Container, comp)))->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, c, arr$->get(i$));
				{
					bool var$0 = $instanceOf($WComponentPeer, $($nc(acc)->getPeer(c)));
					if (var$0 || hasHWChildren(c)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

$Thread* D3DScreenUpdateManager::lambda$startUpdateThread$2() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, "D3D Screen Updater"_s);
	$var($Thread, t, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), this, name, 0, false));
	t->setPriority($Thread::NORM_PRIORITY + 2);
	t->setDaemon(true);
	return t;
}

$Void* D3DScreenUpdateManager::lambda$new$1() {
	$useLocalCurrentObjectStackCache();
	$var($Runnable, shutdownRunnable, static_cast<$Runnable*>($new(D3DScreenUpdateManager$$Lambda$lambda$new$0$2, this)));
	$var($Thread, shutdown, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), shutdownRunnable, "ScreenUpdater"_s, 0, false));
	shutdown->setContextClassLoader(nullptr);
	try {
		$nc($($Runtime::getRuntime()))->addShutdownHook(shutdown);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		this->done = true;
	}
	return nullptr;
}

void D3DScreenUpdateManager::lambda$new$0() {
	this->done = true;
	wakeUpUpdateThread();
}

D3DScreenUpdateManager::D3DScreenUpdateManager() {
}

$Class* D3DScreenUpdateManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(D3DScreenUpdateManager$$Lambda$lambda$new$1::classInfo$.name)) {
			return D3DScreenUpdateManager$$Lambda$lambda$new$1::load$(name, initialize);
		}
		if (name->equals(D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1::classInfo$.name)) {
			return D3DScreenUpdateManager$$Lambda$lambda$startUpdateThread$2$1::load$(name, initialize);
		}
		if (name->equals(D3DScreenUpdateManager$$Lambda$lambda$new$0$2::classInfo$.name)) {
			return D3DScreenUpdateManager$$Lambda$lambda$new$0$2::load$(name, initialize);
		}
	}
	$loadClass(D3DScreenUpdateManager, name, initialize, &_D3DScreenUpdateManager_ClassInfo_, allocate$D3DScreenUpdateManager);
	return class$;
}

$Class* D3DScreenUpdateManager::class$ = nullptr;

		} // d3d
	} // java2d
} // sun