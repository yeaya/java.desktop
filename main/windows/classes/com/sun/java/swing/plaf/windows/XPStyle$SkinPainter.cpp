#include <com/sun/java/swing/plaf/windows/XPStyle$SkinPainter.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/awt/windows/ThemeReader.h>
#include <sun/swing/CachedPainter.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $ThemeReader = ::sun::awt::windows::ThemeReader;
using $CachedPainter = ::sun::swing::CachedPainter;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _XPStyle$SkinPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XPStyle$SkinPainter::*)()>(&XPStyle$SkinPainter::init$))},
	{"createImage", "(Ljava/awt/Component;IILjava/awt/GraphicsConfiguration;[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PROTECTED},
	{"flush", "()V", nullptr, $PUBLIC},
	{"paintToImage", "(Ljava/awt/Component;Ljava/awt/Image;Ljava/awt/Graphics;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XPStyle$SkinPainter_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.XPStyle$SkinPainter", "com.sun.java.swing.plaf.windows.XPStyle", "SkinPainter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XPStyle$SkinPainter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.XPStyle$SkinPainter",
	"sun.swing.CachedPainter",
	nullptr,
	nullptr,
	_XPStyle$SkinPainter_MethodInfo_,
	nullptr,
	nullptr,
	_XPStyle$SkinPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.XPStyle"
};

$Object* allocate$XPStyle$SkinPainter($Class* clazz) {
	return $of($alloc(XPStyle$SkinPainter));
}

void XPStyle$SkinPainter::init$() {
	$CachedPainter::init$(30);
	flush();
}

void XPStyle$SkinPainter::flush() {
	$CachedPainter::flush();
}

void XPStyle$SkinPainter::paintToImage($Component* c$renamed, $Image* image, $Graphics* g, int32_t w, int32_t h, $ObjectArray* args) {
	$var($Component, c, c$renamed);
	$var($XPStyle$Skin, skin, $cast($XPStyle$Skin, $nc(args)->get(0)));
	$TMSchema$Part* part = $nc(skin)->part;
	$TMSchema$State* state = $cast($TMSchema$State, args->get(1));
	if (state == nullptr) {
		state = skin->state;
	}
	if (c == nullptr) {
		$assign(c, skin->component);
	}
	$var($BufferedImage, bi, $cast($BufferedImage, image));
	w = $nc(bi)->getWidth();
	h = bi->getHeight();
	$var($WritableRaster, raster, bi->getRaster());
	$var($DataBufferInt, dbi, $cast($DataBufferInt, $nc(raster)->getDataBuffer()));
	$var($ints, var$0, $SunWritableRaster::stealData(dbi, 0));
	$var($String, var$1, $nc(part)->getControlName(c));
	int32_t var$2 = part->getValue();
	$ThemeReader::paintBackground(var$0, var$1, var$2, $TMSchema$State::getValue(part, state), 0, 0, w, h, w);
	$SunWritableRaster::markDirty(static_cast<$DataBuffer*>(dbi));
}

$Image* XPStyle$SkinPainter::createImage($Component* c, int32_t w, int32_t h, $GraphicsConfiguration* config, $ObjectArray* args) {
	return $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB);
}

XPStyle$SkinPainter::XPStyle$SkinPainter() {
}

$Class* XPStyle$SkinPainter::load$($String* name, bool initialize) {
	$loadClass(XPStyle$SkinPainter, name, initialize, &_XPStyle$SkinPainter_ClassInfo_, allocate$XPStyle$SkinPainter);
	return class$;
}

$Class* XPStyle$SkinPainter::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com