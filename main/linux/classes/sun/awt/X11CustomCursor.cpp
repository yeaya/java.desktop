#include <sun/awt/X11CustomCursor.h>

#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/util/Arrays.h>
#include <sun/awt/CustomCursor.h>
#include <sun/awt/X11CustomCursor$1CCount.h>
#include <jcpp.h>

using $X11CustomCursor$1CCountArray = $Array<::sun::awt::X11CustomCursor$1CCount>;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $CustomCursor = ::sun::awt::CustomCursor;
using $X11CustomCursor$1CCount = ::sun::awt::X11CustomCursor$1CCount;

namespace sun {
	namespace awt {

$MethodInfo _X11CustomCursor_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(X11CustomCursor::*)($Image*,$Point*,$String*)>(&X11CustomCursor::init$)), "java.lang.IndexOutOfBoundsException"},
	{"createCursor", "([B[BIIIIII)V", nullptr, $PROTECTED | $ABSTRACT},
	{"createNativeCursor", "(Ljava/awt/Image;[IIIII)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _X11CustomCursor_InnerClassesInfo_[] = {
	{"sun.awt.X11CustomCursor$1CCount", nullptr, "CCount", 0},
	{}
};

$ClassInfo _X11CustomCursor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.X11CustomCursor",
	"sun.awt.CustomCursor",
	nullptr,
	nullptr,
	_X11CustomCursor_MethodInfo_,
	nullptr,
	nullptr,
	_X11CustomCursor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11CustomCursor$1CCount"
};

$Object* allocate$X11CustomCursor($Class* clazz) {
	return $of($alloc(X11CustomCursor));
}

void X11CustomCursor::init$($Image* cursor, $Point* hotSpot, $String* name) {
	$CustomCursor::init$(cursor, hotSpot, name);
}

void X11CustomCursor::createNativeCursor($Image* im, $ints* pixels, int32_t width, int32_t height, int32_t xHotSpot, int32_t yHotSpot) {
	$useLocalCurrentObjectStackCache();
	{
	}
	$var($ints, tmp, $new($ints, $nc(pixels)->length));
	for (int32_t i = 0; i < pixels->length; ++i) {
		if (((int32_t)(pixels->get(i) & (uint32_t)(int32_t)0xFF000000)) == 0) {
			tmp->set(i, -1);
		} else {
			tmp->set(i, (int32_t)(pixels->get(i) & (uint32_t)0x00FFFFFF));
		}
	}
	$Arrays::sort(tmp);
	int32_t fc = 0;
	int32_t bc = 0x00FFFFFF;
	$var($X11CustomCursor$1CCountArray, cols, $new($X11CustomCursor$1CCountArray, pixels->length));
	int32_t is = 0;
	int32_t numColors = 0;
	while (is < pixels->length) {
		if (tmp->get(is) != -1) {
			cols->set(numColors++, $$new($X11CustomCursor$1CCount, this, tmp->get(is), 1));
			break;
		}
		++is;
	}
	for (int32_t i = is + 1; i < pixels->length; ++i) {
		if (tmp->get(i) != $nc(cols->get(numColors - 1))->color) {
			cols->set(numColors++, $$new($X11CustomCursor$1CCount, this, tmp->get(i), 1));
		} else {
			++$nc(cols->get(numColors - 1))->count;
		}
	}
	$Arrays::sort(cols, 0, numColors);
	if (numColors > 0) {
		fc = $nc(cols->get(0))->color;
	}
	int32_t fcr = (int32_t)((fc >> 16) & (uint32_t)255);
	int32_t fcg = (int32_t)((fc >> 8) & (uint32_t)255);
	int32_t fcb = (int32_t)((fc >> 0) & (uint32_t)255);
	int32_t rdis = 0;
	int32_t gdis = 0;
	int32_t bdis = 0;
	for (int32_t j = 1; j < numColors; ++j) {
		int32_t rr = (int32_t)(($nc(cols->get(j))->color >> 16) & (uint32_t)255);
		int32_t gg = (int32_t)(($nc(cols->get(j))->color >> 8) & (uint32_t)255);
		int32_t bb = (int32_t)(($nc(cols->get(j))->color >> 0) & (uint32_t)255);
		rdis = rdis + $nc(cols->get(j))->count * rr;
		gdis = gdis + $nc(cols->get(j))->count * gg;
		bdis = bdis + $nc(cols->get(j))->count * bb;
	}
	int32_t rest = pixels->length - ((numColors > 0) ? $nc(cols->get(0))->count : 0);
	if (rest > 0) {
		rdis = $div(rdis, rest) - fcr;
		gdis = $div(gdis, rest) - fcg;
		bdis = $div(bdis, rest) - fcb;
	}
	rdis = (rdis * rdis + gdis * gdis + bdis * bdis) / 2;
	for (int32_t j = 1; j < numColors; ++j) {
		int32_t rr = (int32_t)(($nc(cols->get(j))->color >> 16) & (uint32_t)255);
		int32_t gg = (int32_t)(($nc(cols->get(j))->color >> 8) & (uint32_t)255);
		int32_t bb = (int32_t)(($nc(cols->get(j))->color >> 0) & (uint32_t)255);
		if ((rr - fcr) * (rr - fcr) + (gg - fcg) * (gg - fcg) + (bb - fcb) * (bb - fcb) >= rdis) {
			bc = $nc(cols->get(j))->color;
			break;
		}
	}
	int32_t bcr = (int32_t)((bc >> 16) & (uint32_t)255);
	int32_t bcg = (int32_t)((bc >> 8) & (uint32_t)255);
	int32_t bcb = (int32_t)((bc >> 0) & (uint32_t)255);
	int32_t wNByte = (width + 7) / 8;
	int32_t tNByte = wNByte * height;
	$var($bytes, xorMask, $new($bytes, tNByte));
	$var($bytes, andMask, $new($bytes, tNByte));
	for (int32_t i = 0; i < width; ++i) {
		int32_t omask = $sl(1, i % 8);
		for (int32_t j = 0; j < height; ++j) {
			int32_t ip = j * width + i;
			int32_t ibyte = j * wNByte + i / 8;
			if (((int32_t)(pixels->get(ip) & (uint32_t)(int32_t)0xFF000000)) != 0) {
				(*andMask)[ibyte] |= omask;
			}
			int32_t pr = (int32_t)((pixels->get(ip) >> 16) & (uint32_t)255);
			int32_t pg = (int32_t)((pixels->get(ip) >> 8) & (uint32_t)255);
			int32_t pb = (int32_t)((pixels->get(ip) >> 0) & (uint32_t)255);
			if ((pr - fcr) * (pr - fcr) + (pg - fcg) * (pg - fcg) + (pb - fcb) * (pb - fcb) <= (pr - bcr) * (pr - bcr) + (pg - bcg) * (pg - bcg) + (pb - bcb) * (pb - bcb)) {
				(*xorMask)[ibyte] |= omask;
			}
		}
	}
	createCursor(xorMask, andMask, 8 * wNByte, height, fc, bc, xHotSpot, yHotSpot);
}

X11CustomCursor::X11CustomCursor() {
}

$Class* X11CustomCursor::load$($String* name, bool initialize) {
	$loadClass(X11CustomCursor, name, initialize, &_X11CustomCursor_ClassInfo_, allocate$X11CustomCursor);
	return class$;
}

$Class* X11CustomCursor::class$ = nullptr;

	} // awt
} // sun