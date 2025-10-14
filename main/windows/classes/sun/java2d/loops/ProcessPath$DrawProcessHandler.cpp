#include <sun/java2d/loops/ProcessPath$DrawProcessHandler.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/loops/ProcessPath$EndSubPathHandler.h>
#include <sun/java2d/loops/ProcessPath$ProcessHandler.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

#undef PROCESS_LINE
#undef PROCESS_POINT
#undef _X
#undef _Y

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $ProcessPath$EndSubPathHandler = ::sun::java2d::loops::ProcessPath$EndSubPathHandler;
using $ProcessPath$ProcessHandler = ::sun::java2d::loops::ProcessPath$ProcessHandler;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ProcessPath$DrawProcessHandler_FieldInfo_[] = {
	{"processESP", "Lsun/java2d/loops/ProcessPath$EndSubPathHandler;", nullptr, 0, $field(ProcessPath$DrawProcessHandler, processESP)},
	{}
};

$MethodInfo _ProcessPath$DrawProcessHandler_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/ProcessPath$DrawHandler;Lsun/java2d/loops/ProcessPath$EndSubPathHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(ProcessPath$DrawProcessHandler::*)($ProcessPath$DrawHandler*,$ProcessPath$EndSubPathHandler*)>(&ProcessPath$DrawProcessHandler::init$))},
	{"PROCESS_LINE", "(IIIIZ[I)V", nullptr, 0},
	{"PROCESS_POINT", "(IIZ[I)V", nullptr, 0},
	{"processEndSubPath", "()V", nullptr, $PUBLIC},
	{"processFixedLine", "(IIII[IZZ)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessPath$DrawProcessHandler_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$DrawProcessHandler", "sun.java2d.loops.ProcessPath", "DrawProcessHandler", $PRIVATE | $STATIC},
	{"sun.java2d.loops.ProcessPath$ProcessHandler", "sun.java2d.loops.ProcessPath", "ProcessHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ProcessPath$DrawProcessHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.ProcessPath$DrawProcessHandler",
	"sun.java2d.loops.ProcessPath$ProcessHandler",
	nullptr,
	_ProcessPath$DrawProcessHandler_FieldInfo_,
	_ProcessPath$DrawProcessHandler_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath$DrawProcessHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$DrawProcessHandler($Class* clazz) {
	return $of($alloc(ProcessPath$DrawProcessHandler));
}

void ProcessPath$DrawProcessHandler::init$($ProcessPath$DrawHandler* dhnd, $ProcessPath$EndSubPathHandler* processESP) {
	$ProcessPath$ProcessHandler::init$(dhnd, 0);
	$set(this, dhnd, dhnd);
	$set(this, processESP, processESP);
}

void ProcessPath$DrawProcessHandler::processEndSubPath() {
	$nc(this->processESP)->processEndSubPath();
}

void ProcessPath$DrawProcessHandler::PROCESS_LINE(int32_t fX0, int32_t fY0, int32_t fX1, int32_t fY1, bool checkBounds, $ints* pixelInfo) {
	int32_t X0 = fX0 >> 10;
	int32_t Y0 = fY0 >> 10;
	int32_t X1 = fX1 >> 10;
	int32_t Y1 = fY1 >> 10;
	if (((X0 ^ X1) | (Y0 ^ Y1)) == 0) {
		if (checkBounds && ($nc(this->dhnd)->yMin > Y0 || $nc(this->dhnd)->yMax <= Y0 || $nc(this->dhnd)->xMin > X0 || $nc(this->dhnd)->xMax <= X0)) {
			return;
		}
		if ($nc(pixelInfo)->get(0) == 0) {
			pixelInfo->set(0, 1);
			pixelInfo->set(1, X0);
			pixelInfo->set(2, Y0);
			pixelInfo->set(3, X0);
			pixelInfo->set(4, Y0);
			$nc(this->dhnd)->drawPixel(X0, Y0);
		} else if ((X0 != pixelInfo->get(3) || Y0 != pixelInfo->get(4)) && (X0 != pixelInfo->get(1) || Y0 != pixelInfo->get(2))) {
			$nc(this->dhnd)->drawPixel(X0, Y0);
			pixelInfo->set(3, X0);
			pixelInfo->set(4, Y0);
		}
		return;
	}
	if (!checkBounds || ($nc(this->dhnd)->yMin <= Y0 && $nc(this->dhnd)->yMax > Y0 && $nc(this->dhnd)->xMin <= X0 && $nc(this->dhnd)->xMax > X0)) {
		if ($nc(pixelInfo)->get(0) == 1 && ((pixelInfo->get(1) == X0 && pixelInfo->get(2) == Y0) || ($nc(pixelInfo)->get(3) == X0 && pixelInfo->get(4) == Y0))) {
			$nc(this->dhnd)->drawPixel(X0, Y0);
		}
	}
	$nc(this->dhnd)->drawLine(X0, Y0, X1, Y1);
	if ($nc(pixelInfo)->get(0) == 0) {
		pixelInfo->set(0, 1);
		pixelInfo->set(1, X0);
		pixelInfo->set(2, Y0);
		pixelInfo->set(3, X0);
		pixelInfo->set(4, Y0);
	}
	if (($nc(pixelInfo)->get(1) == X1 && pixelInfo->get(2) == Y1) || ($nc(pixelInfo)->get(3) == X1 && pixelInfo->get(4) == Y1)) {
		if (checkBounds && ($nc(this->dhnd)->yMin > Y1 || $nc(this->dhnd)->yMax <= Y1 || $nc(this->dhnd)->xMin > X1 || $nc(this->dhnd)->xMax <= X1)) {
			return;
		}
		$nc(this->dhnd)->drawPixel(X1, Y1);
	}
	$nc(pixelInfo)->set(3, X1);
	pixelInfo->set(4, Y1);
}

void ProcessPath$DrawProcessHandler::PROCESS_POINT(int32_t fX, int32_t fY, bool checkBounds, $ints* pixelInfo) {
	int32_t _X = fX >> 10;
	int32_t _Y = fY >> 10;
	if (checkBounds && ($nc(this->dhnd)->yMin > _Y || $nc(this->dhnd)->yMax <= _Y || $nc(this->dhnd)->xMin > _X || $nc(this->dhnd)->xMax <= _X)) {
		return;
	}
	if ($nc(pixelInfo)->get(0) == 0) {
		pixelInfo->set(0, 1);
		pixelInfo->set(1, _X);
		pixelInfo->set(2, _Y);
		pixelInfo->set(3, _X);
		pixelInfo->set(4, _Y);
		$nc(this->dhnd)->drawPixel(_X, _Y);
	} else if ((_X != pixelInfo->get(3) || _Y != pixelInfo->get(4)) && (_X != pixelInfo->get(1) || _Y != pixelInfo->get(2))) {
		$nc(this->dhnd)->drawPixel(_X, _Y);
		pixelInfo->set(3, _X);
		pixelInfo->set(4, _Y);
	}
}

void ProcessPath$DrawProcessHandler::processFixedLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $ints* pixelInfo, bool checkBounds, bool endSubPath) {
	int32_t c = ((x1 ^ x2) | (y1 ^ y2));
	int32_t rx1 = 0;
	int32_t ry1 = 0;
	int32_t rx2 = 0;
	int32_t ry2 = 0;
	if (((int32_t)(c & (uint32_t)-1024)) == 0) {
		if (c == 0) {
			PROCESS_POINT(x1 + 512, y1 + 512, checkBounds, pixelInfo);
		}
		return;
	}
	if (x1 == x2 || y1 == y2) {
		rx1 = x1 + 512;
		rx2 = x2 + 512;
		ry1 = y1 + 512;
		ry2 = y2 + 512;
	} else {
		int32_t dx = x2 - x1;
		int32_t dy = y2 - y1;
		int32_t fx1 = (int32_t)(x1 & (uint32_t)-1024);
		int32_t fy1 = (int32_t)(y1 & (uint32_t)-1024);
		int32_t fx2 = (int32_t)(x2 & (uint32_t)-1024);
		int32_t fy2 = (int32_t)(y2 & (uint32_t)-1024);
		if (fx1 == x1 || fy1 == y1) {
			rx1 = x1 + 512;
			ry1 = y1 + 512;
		} else {
			int32_t bx1 = (x1 < x2) ? fx1 + 1024 : fx1;
			int32_t by1 = (y1 < y2) ? fy1 + 1024 : fy1;
			int32_t cross = y1 + $div(((bx1 - x1) * dy), dx);
			if (cross >= fy1 && cross <= fy1 + 1024) {
				rx1 = bx1;
				ry1 = cross + 512;
			} else {
				cross = x1 + $div(((by1 - y1) * dx), dy);
				rx1 = cross + 512;
				ry1 = by1;
			}
		}
		if (fx2 == x2 || fy2 == y2) {
			rx2 = x2 + 512;
			ry2 = y2 + 512;
		} else {
			int32_t bx2 = (x1 > x2) ? fx2 + 1024 : fx2;
			int32_t by2 = (y1 > y2) ? fy2 + 1024 : fy2;
			int32_t cross = y2 + $div(((bx2 - x2) * dy), dx);
			if (cross >= fy2 && cross <= fy2 + 1024) {
				rx2 = bx2;
				ry2 = cross + 512;
			} else {
				cross = x2 + $div(((by2 - y2) * dx), dy);
				rx2 = cross + 512;
				ry2 = by2;
			}
		}
	}
	PROCESS_LINE(rx1, ry1, rx2, ry2, checkBounds, pixelInfo);
}

ProcessPath$DrawProcessHandler::ProcessPath$DrawProcessHandler() {
}

$Class* ProcessPath$DrawProcessHandler::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$DrawProcessHandler, name, initialize, &_ProcessPath$DrawProcessHandler_ClassInfo_, allocate$ProcessPath$DrawProcessHandler);
	return class$;
}

$Class* ProcessPath$DrawProcessHandler::class$ = nullptr;

		} // loops
	} // java2d
} // sun