#include <sun/java2d/pipe/TextPipe.h>

#include <java/awt/font/GlyphVector.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $GlyphVector = ::java::awt::font::GlyphVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _TextPipe_MethodInfo_[] = {
	{"drawChars", "(Lsun/java2d/SunGraphics2D;[CIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawString", "(Lsun/java2d/SunGraphics2D;Ljava/lang/String;DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TextPipe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.TextPipe",
	nullptr,
	nullptr,
	nullptr,
	_TextPipe_MethodInfo_
};

$Object* allocate$TextPipe($Class* clazz) {
	return $of($alloc(TextPipe));
}

$Class* TextPipe::load$($String* name, bool initialize) {
	$loadClass(TextPipe, name, initialize, &_TextPipe_ClassInfo_, allocate$TextPipe);
	return class$;
}

$Class* TextPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun