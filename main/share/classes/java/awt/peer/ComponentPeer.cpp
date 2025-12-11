#include <java/awt/peer/ComponentPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ContainerPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef DEFAULT_OPERATION
#undef NO_EMBEDDED_CHECK
#undef RESET_OPERATION
#undef SET_BOUNDS
#undef SET_CLIENT_SIZE
#undef SET_LOCATION
#undef SET_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$FieldInfo _ComponentPeer_FieldInfo_[] = {
	{"SET_LOCATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, SET_LOCATION)},
	{"SET_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, SET_SIZE)},
	{"SET_BOUNDS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, SET_BOUNDS)},
	{"SET_CLIENT_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, SET_CLIENT_SIZE)},
	{"RESET_OPERATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, RESET_OPERATION)},
	{"NO_EMBEDDED_CHECK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, NO_EMBEDDED_CHECK)},
	{"DEFAULT_OPERATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, DEFAULT_OPERATION)},
	{}
};

$MethodInfo _ComponentPeer_MethodInfo_[] = {
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"canDetermineObscurity", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.AWTException"},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $ABSTRACT},
	{"destroyBuffers", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isFocusable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isObscured", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isReparentSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"layout", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ComponentPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ComponentPeer",
	nullptr,
	nullptr,
	_ComponentPeer_FieldInfo_,
	_ComponentPeer_MethodInfo_
};

$Object* allocate$ComponentPeer($Class* clazz) {
	return $of($alloc(ComponentPeer));
}

$Class* ComponentPeer::load$($String* name, bool initialize) {
	$loadClass(ComponentPeer, name, initialize, &_ComponentPeer_ClassInfo_, allocate$ComponentPeer);
	return class$;
}

$Class* ComponentPeer::class$ = nullptr;

		} // peer
	} // awt
} // java