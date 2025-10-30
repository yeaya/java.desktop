#include <sun/java2d/ScreenUpdateManager.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DScreenUpdateManager.h>
#include <sun/java2d/windows/WindowsFlags.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DScreenUpdateManager = ::sun::java2d::d3d::D3DScreenUpdateManager;
using $WindowsFlags = ::sun::java2d::windows::WindowsFlags;

namespace sun {
	namespace java2d {

$FieldInfo _ScreenUpdateManager_FieldInfo_[] = {
	{"theInstance", "Lsun/java2d/ScreenUpdateManager;", nullptr, $PRIVATE | $STATIC, $staticField(ScreenUpdateManager, theInstance)},
	{}
};

$MethodInfo _ScreenUpdateManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ScreenUpdateManager::*)()>(&ScreenUpdateManager::init$))},
	{"createGraphics", "(Lsun/java2d/SurfaceData;Lsun/awt/windows/WComponentPeer;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Font;)Ljava/awt/Graphics2D;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"createScreenSurface", "(Lsun/awt/Win32GraphicsConfig;Lsun/awt/windows/WComponentPeer;IZ)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"dropScreenSurface", "(Lsun/java2d/SurfaceData;)V", nullptr, $PUBLIC},
	{"getInstance", "()Lsun/java2d/ScreenUpdateManager;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<ScreenUpdateManager*(*)()>(&ScreenUpdateManager::getInstance))},
	{"getReplacementScreenSurface", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/SurfaceData;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ScreenUpdateManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.ScreenUpdateManager",
	"java.lang.Object",
	nullptr,
	_ScreenUpdateManager_FieldInfo_,
	_ScreenUpdateManager_MethodInfo_
};

$Object* allocate$ScreenUpdateManager($Class* clazz) {
	return $of($alloc(ScreenUpdateManager));
}

ScreenUpdateManager* ScreenUpdateManager::theInstance = nullptr;

void ScreenUpdateManager::init$() {
}

$Graphics2D* ScreenUpdateManager::createGraphics($SurfaceData* sd, $WComponentPeer* peer, $Color* fgColor, $Color* bgColor, $Font* font) {
	$synchronized(this) {
		return $new($SunGraphics2D, sd, fgColor, bgColor, font);
	}
}

$SurfaceData* ScreenUpdateManager::createScreenSurface($Win32GraphicsConfig* gc, $WComponentPeer* peer, int32_t bbNum, bool isResize) {
	return $nc(gc)->createSurfaceData(peer, bbNum);
}

void ScreenUpdateManager::dropScreenSurface($SurfaceData* sd) {
}

$SurfaceData* ScreenUpdateManager::getReplacementScreenSurface($WComponentPeer* peer, $SurfaceData* oldsd) {
	$var($SurfaceData, surfaceData, $nc(peer)->getSurfaceData());
	if (surfaceData == nullptr || $nc(surfaceData)->isValid()) {
		return surfaceData;
	}
	peer->replaceSurfaceData();
	return peer->getSurfaceData();
}

ScreenUpdateManager* ScreenUpdateManager::getInstance() {
	$load(ScreenUpdateManager);
	$synchronized(class$) {
		$init(ScreenUpdateManager);
		if (ScreenUpdateManager::theInstance == nullptr) {
			if ($WindowsFlags::isD3DEnabled()) {
				$assignStatic(ScreenUpdateManager::theInstance, $new($D3DScreenUpdateManager));
			} else {
				$assignStatic(ScreenUpdateManager::theInstance, $new(ScreenUpdateManager));
			}
		}
		return ScreenUpdateManager::theInstance;
	}
}

ScreenUpdateManager::ScreenUpdateManager() {
}

$Class* ScreenUpdateManager::load$($String* name, bool initialize) {
	$loadClass(ScreenUpdateManager, name, initialize, &_ScreenUpdateManager_ClassInfo_, allocate$ScreenUpdateManager);
	return class$;
}

$Class* ScreenUpdateManager::class$ = nullptr;

	} // java2d
} // sun