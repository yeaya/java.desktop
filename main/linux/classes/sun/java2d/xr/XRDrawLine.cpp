#include <sun/java2d/xr/XRDrawLine.h>

#include <java/lang/Math.h>
#include <sun/java2d/xr/DirtyRegion.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <jcpp.h>

#undef BIG_MAX
#undef BIG_MIN
#undef MIN_VALUE
#undef OUTCODE_BOTTOM
#undef OUTCODE_LEFT
#undef OUTCODE_RIGHT
#undef OUTCODE_TOP

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirtyRegion = ::sun::java2d::xr::DirtyRegion;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRDrawLine_FieldInfo_[] = {
	{"BIG_MAX", "I", nullptr, $STATIC | $FINAL, $constField(XRDrawLine, BIG_MAX)},
	{"BIG_MIN", "I", nullptr, $STATIC | $FINAL, $constField(XRDrawLine, BIG_MIN)},
	{"OUTCODE_TOP", "I", nullptr, $STATIC | $FINAL, $constField(XRDrawLine, OUTCODE_TOP)},
	{"OUTCODE_BOTTOM", "I", nullptr, $STATIC | $FINAL, $constField(XRDrawLine, OUTCODE_BOTTOM)},
	{"OUTCODE_LEFT", "I", nullptr, $STATIC | $FINAL, $constField(XRDrawLine, OUTCODE_LEFT)},
	{"OUTCODE_RIGHT", "I", nullptr, $STATIC | $FINAL, $constField(XRDrawLine, OUTCODE_RIGHT)},
	{"x1", "I", nullptr, 0, $field(XRDrawLine, x1)},
	{"y1", "I", nullptr, 0, $field(XRDrawLine, y1)},
	{"x2", "I", nullptr, 0, $field(XRDrawLine, x2)},
	{"y2", "I", nullptr, 0, $field(XRDrawLine, y2)},
	{"ucX1", "I", nullptr, 0, $field(XRDrawLine, ucX1)},
	{"ucY1", "I", nullptr, 0, $field(XRDrawLine, ucY1)},
	{"ucX2", "I", nullptr, 0, $field(XRDrawLine, ucX2)},
	{"ucY2", "I", nullptr, 0, $field(XRDrawLine, ucY2)},
	{"region", "Lsun/java2d/xr/DirtyRegion;", nullptr, 0, $field(XRDrawLine, region)},
	{}
};

$MethodInfo _XRDrawLine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XRDrawLine::*)()>(&XRDrawLine::init$))},
	{"OverflowsBig", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(XRDrawLine::*)(int32_t)>(&XRDrawLine::OverflowsBig))},
	{"clipCoordinates", "(IIIIZIIII)Z", nullptr, $PRIVATE, $method(static_cast<bool(XRDrawLine::*)(int32_t,int32_t,int32_t,int32_t,bool,int32_t,int32_t,int32_t,int32_t)>(&XRDrawLine::clipCoordinates))},
	{"initCoordinates", "(IIIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(XRDrawLine::*)(int32_t,int32_t,int32_t,int32_t,bool)>(&XRDrawLine::initCoordinates))},
	{"lineToPoints", "(Lsun/java2d/xr/GrowableRectArray;IIIIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(XRDrawLine::*)($GrowableRectArray*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&XRDrawLine::lineToPoints))},
	{"lineToRects", "(Lsun/java2d/xr/GrowableRectArray;IIIIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(XRDrawLine::*)($GrowableRectArray*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&XRDrawLine::lineToRects))},
	{"out", "(IIIII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XRDrawLine::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&XRDrawLine::out))},
	{"outcode", "(IIIIII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XRDrawLine::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&XRDrawLine::outcode))},
	{"rasterizeLine", "(Lsun/java2d/xr/GrowableRectArray;IIIIIIIIZZ)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XRDrawLine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRDrawLine",
	"java.lang.Object",
	nullptr,
	_XRDrawLine_FieldInfo_,
	_XRDrawLine_MethodInfo_
};

$Object* allocate$XRDrawLine($Class* clazz) {
	return $of($alloc(XRDrawLine));
}

void XRDrawLine::init$() {
	$set(this, region, $new($DirtyRegion));
}

void XRDrawLine::rasterizeLine($GrowableRectArray* rectBuffer, int32_t _x1, int32_t _y1, int32_t _x2, int32_t _y2, int32_t cxmin, int32_t cymin, int32_t cxmax, int32_t cymax, bool clip, bool overflowCheck) {
	float diagF = 0.0;
	int32_t error = 0;
	int32_t steps = 0;
	int32_t errminor = 0;
	int32_t errmajor = 0;
	bool xmajor = false;
	int32_t dx = 0;
	int32_t dy = 0;
	int32_t ax = 0;
	int32_t ay = 0;
	initCoordinates(_x1, _y1, _x2, _y2, overflowCheck);
	dx = this->x2 - this->x1;
	dy = this->y2 - this->y1;
	ax = $Math::abs(dx);
	ay = $Math::abs(dy);
	xmajor = (ax >= ay);
	diagF = ((float)ax) / ay;
	if (clip && !clipCoordinates(cxmin, cymin, cxmax, cymax, xmajor, dx, dy, ax, ay)) {
		return;
	}
	$nc(this->region)->setDirtyLineRegion(this->x1, this->y1, this->x2, this->y2);
	int32_t xDiff = $nc(this->region)->x2 - $nc(this->region)->x;
	int32_t yDiff = $nc(this->region)->y2 - $nc(this->region)->y;
	if (xDiff == 0 || yDiff == 0) {
		$nc(rectBuffer)->pushRectValues($nc(this->region)->x, $nc(this->region)->y, $nc(this->region)->x2 - $nc(this->region)->x + 1, $nc(this->region)->y2 - $nc(this->region)->y + 1);
		return;
	}
	if (xmajor) {
		errmajor = ay * 2;
		errminor = ax * 2;
		ax = -ax;
		steps = this->x2 - this->x1;
	} else {
		errmajor = ax * 2;
		errminor = ay * 2;
		ay = -ay;
		steps = this->y2 - this->y1;
	}
	if ((steps = ($Math::abs(steps) + 1)) == 0) {
		return;
	}
	error = -(errminor / 2);
	if (this->y1 != this->ucY1) {
		int32_t ysteps = this->y1 - this->ucY1;
		if (ysteps < 0) {
			ysteps = -ysteps;
		}
		error += ysteps * ax * 2;
	}
	if (this->x1 != this->ucX1) {
		int32_t xsteps = this->x1 - this->ucX1;
		if (xsteps < 0) {
			xsteps = -xsteps;
		}
		error += xsteps * ay * 2;
	}
	error += errmajor;
	errminor -= errmajor;
	int32_t xStep = (dx > 0 ? 1 : -1);
	int32_t yStep = (dy > 0 ? 1 : -1);
	int32_t orthogonalXStep = xmajor ? xStep : 0;
	int32_t orthogonalYStep = !xmajor ? yStep : 0;
	if (diagF <= 0.9 || diagF >= 1.1) {
		lineToRects(rectBuffer, steps, error, errmajor, errminor, xStep, yStep, orthogonalXStep, orthogonalYStep);
	} else {
		lineToPoints(rectBuffer, steps, error, errmajor, errminor, xStep, yStep, orthogonalXStep, orthogonalYStep);
	}
}

void XRDrawLine::lineToPoints($GrowableRectArray* rectBuffer, int32_t steps, int32_t error, int32_t errmajor, int32_t errminor, int32_t xStep, int32_t yStep, int32_t orthogonalXStep, int32_t orthogonalYStep) {
	int32_t x = this->x1;
	int32_t y = this->y1;
	do {
		$nc(rectBuffer)->pushRectValues(x, y, 1, 1);
		if (error < 0) {
			error += errmajor;
			x += orthogonalXStep;
			y += orthogonalYStep;
		} else {
			error -= errminor;
			x += xStep;
			y += yStep;
		}
	} while (--steps > 0);
}

void XRDrawLine::lineToRects($GrowableRectArray* rectBuffer, int32_t steps, int32_t error, int32_t errmajor, int32_t errminor, int32_t xStep, int32_t yStep, int32_t orthogonalXStep, int32_t orthogonalYStep) {
	int32_t x = this->x1;
	int32_t y = this->y1;
	int32_t rectX = $Integer::MIN_VALUE;
	int32_t rectY = 0;
	int32_t rectW = 0;
	int32_t rectH = 0;
	do {
		if (y == rectY) {
			if (x == (rectX + rectW)) {
				++rectW;
			} else if (x == (rectX - 1)) {
				--rectX;
				++rectW;
			}
		} else if (x == rectX) {
			if (y == (rectY + rectH)) {
				++rectH;
			} else if (y == (rectY - 1)) {
				--rectY;
				++rectH;
			}
		} else {
			if (rectX != $Integer::MIN_VALUE) {
				$nc(rectBuffer)->pushRectValues(rectX, rectY, rectW, rectH);
			}
			rectX = x;
			rectY = y;
			rectW = (rectH = 1);
		}
		if (error < 0) {
			error += errmajor;
			x += orthogonalXStep;
			y += orthogonalYStep;
		} else {
			error -= errminor;
			x += xStep;
			y += yStep;
		}
	} while (--steps > 0);
	$nc(rectBuffer)->pushRectValues(rectX, rectY, rectW, rectH);
}

bool XRDrawLine::clipCoordinates(int32_t cxmin, int32_t cymin, int32_t cxmax, int32_t cymax, bool xmajor, int32_t dx, int32_t dy, int32_t ax, int32_t ay) {
	int32_t outcode1 = 0;
	int32_t outcode2 = 0;
	outcode1 = outcode(this->x1, this->y1, cxmin, cymin, cxmax, cymax);
	outcode2 = outcode(this->x2, this->y2, cxmin, cymin, cxmax, cymax);
	while ((outcode1 | outcode2) != 0) {
		int64_t xsteps = 0;
		int64_t ysteps = 0;
		if (((int32_t)(outcode1 & (uint32_t)outcode2)) != 0) {
			return false;
		}
		if (outcode1 != 0) {
			if (((int32_t)(outcode1 & (uint32_t)(XRDrawLine::OUTCODE_TOP | XRDrawLine::OUTCODE_BOTTOM))) != 0) {
				if (((int32_t)(outcode1 & (uint32_t)XRDrawLine::OUTCODE_TOP)) != 0) {
					this->y1 = cymin;
				} else {
					this->y1 = cymax;
				}
				ysteps = this->y1 - this->ucY1;
				if (ysteps < 0) {
					ysteps = -ysteps;
				}
				xsteps = 2 * ysteps * ax + ay;
				if (xmajor) {
					xsteps += ay - ax - 1;
				}
				xsteps = $div(xsteps, (2 * ay));
				if (dx < 0) {
					xsteps = -xsteps;
				}
				this->x1 = this->ucX1 + (int32_t)xsteps;
			} else if (((int32_t)(outcode1 & (uint32_t)(XRDrawLine::OUTCODE_LEFT | XRDrawLine::OUTCODE_RIGHT))) != 0) {
				if (((int32_t)(outcode1 & (uint32_t)XRDrawLine::OUTCODE_LEFT)) != 0) {
					this->x1 = cxmin;
				} else {
					this->x1 = cxmax;
				}
				xsteps = this->x1 - this->ucX1;
				if (xsteps < 0) {
					xsteps = -xsteps;
				}
				ysteps = 2 * xsteps * ay + ax;
				if (!xmajor) {
					ysteps += ax - ay - 1;
				}
				ysteps = $div(ysteps, (2 * ax));
				if (dy < 0) {
					ysteps = -ysteps;
				}
				this->y1 = this->ucY1 + (int32_t)ysteps;
			}
			outcode1 = outcode(this->x1, this->y1, cxmin, cymin, cxmax, cymax);
		} else {
			if (((int32_t)(outcode2 & (uint32_t)(XRDrawLine::OUTCODE_TOP | XRDrawLine::OUTCODE_BOTTOM))) != 0) {
				if (((int32_t)(outcode2 & (uint32_t)XRDrawLine::OUTCODE_TOP)) != 0) {
					this->y2 = cymin;
				} else {
					this->y2 = cymax;
				}
				ysteps = this->y2 - this->ucY2;
				if (ysteps < 0) {
					ysteps = -ysteps;
				}
				xsteps = 2 * ysteps * ax + ay;
				if (xmajor) {
					xsteps += ay - ax;
				} else {
					xsteps -= 1;
				}
				xsteps = $div(xsteps, (2 * ay));
				if (dx > 0) {
					xsteps = -xsteps;
				}
				this->x2 = this->ucX2 + (int32_t)xsteps;
			} else if (((int32_t)(outcode2 & (uint32_t)(XRDrawLine::OUTCODE_LEFT | XRDrawLine::OUTCODE_RIGHT))) != 0) {
				if (((int32_t)(outcode2 & (uint32_t)XRDrawLine::OUTCODE_LEFT)) != 0) {
					this->x2 = cxmin;
				} else {
					this->x2 = cxmax;
				}
				xsteps = this->x2 - this->ucX2;
				if (xsteps < 0) {
					xsteps = -xsteps;
				}
				ysteps = 2 * xsteps * ay + ax;
				if (xmajor) {
					ysteps -= 1;
				} else {
					ysteps += ax - ay;
				}
				ysteps = $div(ysteps, (2 * ax));
				if (dy > 0) {
					ysteps = -ysteps;
				}
				this->y2 = this->ucY2 + (int32_t)ysteps;
			}
			outcode2 = outcode(this->x2, this->y2, cxmin, cymin, cxmax, cymax);
		}
	}
	return true;
}

void XRDrawLine::initCoordinates(int32_t x1, int32_t y1, int32_t x2, int32_t y2, bool checkOverflow) {
	bool var$0 = checkOverflow;
	if (var$0) {
		bool var$3 = OverflowsBig(x1);
		bool var$2 = var$3 || OverflowsBig(y1);
		bool var$1 = var$2 || OverflowsBig(x2);
		var$0 = (var$1 || OverflowsBig(y2));
	}
	if (var$0) {
		double x1d = (double)x1;
		double y1d = (double)y1;
		double x2d = (double)x2;
		double y2d = (double)y2;
		double dxd = x2d - x1d;
		double dyd = y2d - y1d;
		if (x1 < XRDrawLine::BIG_MIN) {
			y1d = y1 + (XRDrawLine::BIG_MIN - x1) * dyd / dxd;
			x1d = (double)XRDrawLine::BIG_MIN;
		} else if (x1 > XRDrawLine::BIG_MAX) {
			y1d = y1 - (x1 - XRDrawLine::BIG_MAX) * dyd / dxd;
			x1d = (double)XRDrawLine::BIG_MAX;
		}
		if (y1d < XRDrawLine::BIG_MIN) {
			x1d = x1 + (XRDrawLine::BIG_MIN - y1) * dxd / dyd;
			y1d = (double)XRDrawLine::BIG_MIN;
		} else if (y1d > XRDrawLine::BIG_MAX) {
			x1d = x1 - (y1 - XRDrawLine::BIG_MAX) * dxd / dyd;
			y1d = (double)XRDrawLine::BIG_MAX;
		}
		if (x2 < XRDrawLine::BIG_MIN) {
			y2d = y2 + (XRDrawLine::BIG_MIN - x2) * dyd / dxd;
			x2d = (double)XRDrawLine::BIG_MIN;
		} else if (x2 > XRDrawLine::BIG_MAX) {
			y2d = y2 - (x2 - XRDrawLine::BIG_MAX) * dyd / dxd;
			x2d = (double)XRDrawLine::BIG_MAX;
		}
		if (y2d < XRDrawLine::BIG_MIN) {
			x2d = x2 + (XRDrawLine::BIG_MIN - y2) * dxd / dyd;
			y2d = (double)XRDrawLine::BIG_MIN;
		} else if (y2d > XRDrawLine::BIG_MAX) {
			x2d = x2 - (y2 - XRDrawLine::BIG_MAX) * dxd / dyd;
			y2d = (double)XRDrawLine::BIG_MAX;
		}
		x1 = $cast(int32_t, x1d);
		y1 = $cast(int32_t, y1d);
		x2 = $cast(int32_t, x2d);
		y2 = $cast(int32_t, y2d);
	}
	this->x1 = (this->ucX1 = x1);
	this->y1 = (this->ucY1 = y1);
	this->x2 = (this->ucX2 = x2);
	this->y2 = (this->ucY2 = y2);
}

bool XRDrawLine::OverflowsBig(int32_t v) {
	return ((v) != (((v) << 2) >> 2));
}

int32_t XRDrawLine::out(int32_t v, int32_t vmin, int32_t vmax, int32_t cmin, int32_t cmax) {
	return ((v < vmin) ? cmin : ((v > vmax) ? cmax : 0));
}

int32_t XRDrawLine::outcode(int32_t x, int32_t y, int32_t xmin, int32_t ymin, int32_t xmax, int32_t ymax) {
	int32_t var$0 = out(y, ymin, ymax, XRDrawLine::OUTCODE_TOP, XRDrawLine::OUTCODE_BOTTOM);
	return var$0 | out(x, xmin, xmax, XRDrawLine::OUTCODE_LEFT, XRDrawLine::OUTCODE_RIGHT);
}

XRDrawLine::XRDrawLine() {
}

$Class* XRDrawLine::load$($String* name, bool initialize) {
	$loadClass(XRDrawLine, name, initialize, &_XRDrawLine_ClassInfo_, allocate$XRDrawLine);
	return class$;
}

$Class* XRDrawLine::class$ = nullptr;

		} // xr
	} // java2d
} // sun