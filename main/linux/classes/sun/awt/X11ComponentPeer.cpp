#include <sun/awt/X11ComponentPeer.h>

#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _X11ComponentPeer_MethodInfo_[] = {
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getContentWindow", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWindow", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _X11ComponentPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11ComponentPeer",
	nullptr,
	nullptr,
	nullptr,
	_X11ComponentPeer_MethodInfo_
};

$Object* allocate$X11ComponentPeer($Class* clazz) {
	return $of($alloc(X11ComponentPeer));
}

$Class* X11ComponentPeer::load$($String* name, bool initialize) {
	$loadClass(X11ComponentPeer, name, initialize, &_X11ComponentPeer_ClassInfo_, allocate$X11ComponentPeer);
	return class$;
}

$Class* X11ComponentPeer::class$ = nullptr;

	} // awt
} // sun