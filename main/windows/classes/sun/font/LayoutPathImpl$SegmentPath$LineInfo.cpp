#include <sun/font/LayoutPathImpl$SegmentPath$LineInfo.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/LayoutPathImpl$1.h>
#include <sun/font/LayoutPathImpl$EndType.h>
#include <sun/font/LayoutPathImpl$SegmentPath.h>
#include <jcpp.h>

#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LayoutPathImpl$1 = ::sun::font::LayoutPathImpl$1;
using $LayoutPathImpl$EndType = ::sun::font::LayoutPathImpl$EndType;
using $LayoutPathImpl$SegmentPath = ::sun::font::LayoutPathImpl$SegmentPath;

namespace sun {
	namespace font {

$FieldInfo _LayoutPathImpl$SegmentPath$LineInfo_FieldInfo_[] = {
	{"this$0", "Lsun/font/LayoutPathImpl$SegmentPath;", nullptr, $FINAL | $SYNTHETIC, $field(LayoutPathImpl$SegmentPath$LineInfo, this$0)},
	{"sx", "D", nullptr, 0, $field(LayoutPathImpl$SegmentPath$LineInfo, sx)},
	{"sy", "D", nullptr, 0, $field(LayoutPathImpl$SegmentPath$LineInfo, sy)},
	{"lx", "D", nullptr, 0, $field(LayoutPathImpl$SegmentPath$LineInfo, lx)},
	{"ly", "D", nullptr, 0, $field(LayoutPathImpl$SegmentPath$LineInfo, ly)},
	{"m", "D", nullptr, 0, $field(LayoutPathImpl$SegmentPath$LineInfo, m)},
	{}
};

$MethodInfo _LayoutPathImpl$SegmentPath$LineInfo_MethodInfo_[] = {
	{"<init>", "(Lsun/font/LayoutPathImpl$SegmentPath;)V", nullptr, 0, $method(static_cast<void(LayoutPathImpl$SegmentPath$LineInfo::*)($LayoutPathImpl$SegmentPath*)>(&LayoutPathImpl$SegmentPath$LineInfo::init$))},
	{"pin", "(DDLsun/font/LayoutPathImpl$SegmentPath$LineInfo;)Z", nullptr, 0},
	{"pin", "(ILsun/font/LayoutPathImpl$SegmentPath$LineInfo;)Z", nullptr, 0},
	{"set", "(DDDD)V", nullptr, 0},
	{"set", "(Lsun/font/LayoutPathImpl$SegmentPath$LineInfo;)V", nullptr, 0},
	{}
};

$InnerClassInfo _LayoutPathImpl$SegmentPath$LineInfo_InnerClassesInfo_[] = {
	{"sun.font.LayoutPathImpl$SegmentPath", "sun.font.LayoutPathImpl", "SegmentPath", $PUBLIC | $STATIC | $FINAL},
	{"sun.font.LayoutPathImpl$SegmentPath$LineInfo", "sun.font.LayoutPathImpl$SegmentPath", "LineInfo", 0},
	{}
};

$ClassInfo _LayoutPathImpl$SegmentPath$LineInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.LayoutPathImpl$SegmentPath$LineInfo",
	"java.lang.Object",
	nullptr,
	_LayoutPathImpl$SegmentPath$LineInfo_FieldInfo_,
	_LayoutPathImpl$SegmentPath$LineInfo_MethodInfo_,
	nullptr,
	nullptr,
	_LayoutPathImpl$SegmentPath$LineInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.LayoutPathImpl"
};

$Object* allocate$LayoutPathImpl$SegmentPath$LineInfo($Class* clazz) {
	return $of($alloc(LayoutPathImpl$SegmentPath$LineInfo));
}

void LayoutPathImpl$SegmentPath$LineInfo::init$($LayoutPathImpl$SegmentPath* this$0) {
	$set(this, this$0, this$0);
}

void LayoutPathImpl$SegmentPath$LineInfo::set(double sx, double sy, double lx, double ly) {
	this->sx = sx;
	this->sy = sy;
	this->lx = lx;
	this->ly = ly;
	double dx = lx - sx;
	if (dx == 0) {
		this->m = (double)0;
	} else {
		double dy = ly - sy;
		this->m = dy / dx;
	}
}

void LayoutPathImpl$SegmentPath$LineInfo::set(LayoutPathImpl$SegmentPath$LineInfo* rhs) {
	this->sx = $nc(rhs)->sx;
	this->sy = rhs->sy;
	this->lx = rhs->lx;
	this->ly = rhs->ly;
	this->m = rhs->m;
}

bool LayoutPathImpl$SegmentPath$LineInfo::pin(double lo, double hi, LayoutPathImpl$SegmentPath$LineInfo* result) {
	$nc(result)->set(this);
	if (this->lx >= this->sx) {
		if (this->sx < hi && this->lx >= lo) {
			if (this->sx < lo) {
				if (this->m != 0) {
					result->sy = this->sy + this->m * (lo - this->sx);
				}
				result->sx = lo;
			}
			if (this->lx > hi) {
				if (this->m != 0) {
					result->ly = this->ly + this->m * (hi - this->lx);
				}
				result->lx = hi;
			}
			return true;
		}
	} else if (this->lx < hi && this->sx >= lo) {
		if (this->lx < lo) {
			if (this->m != 0) {
				result->ly = this->ly + this->m * (lo - this->lx);
			}
			result->lx = lo;
		}
		if (this->sx > hi) {
			if (this->m != 0) {
				result->sy = this->sy + this->m * (hi - this->sx);
			}
			result->sx = hi;
		}
		return true;
	}
	return false;
}

bool LayoutPathImpl$SegmentPath$LineInfo::pin(int32_t ix, LayoutPathImpl$SegmentPath$LineInfo* result) {
	double lo = $nc(this->this$0->data)->get(ix - 1);
	double hi = $nc(this->this$0->data)->get(ix + 2);
	$init($LayoutPathImpl$1);
	switch ($nc($LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType)->get($nc((this->this$0->etype))->ordinal())) {
	case 1:
		{
			break;
		}
	case 2:
		{
			if (ix == 3) {
				$init($Double);
				lo = $Double::NEGATIVE_INFINITY;
			}
			if (ix == $nc(this->this$0->data)->length - 3) {
				$init($Double);
				hi = $Double::POSITIVE_INFINITY;
			}
			break;
		}
	case 3:
		{
			break;
		}
	}
	return pin(lo, hi, result);
}

LayoutPathImpl$SegmentPath$LineInfo::LayoutPathImpl$SegmentPath$LineInfo() {
}

$Class* LayoutPathImpl$SegmentPath$LineInfo::load$($String* name, bool initialize) {
	$loadClass(LayoutPathImpl$SegmentPath$LineInfo, name, initialize, &_LayoutPathImpl$SegmentPath$LineInfo_ClassInfo_, allocate$LayoutPathImpl$SegmentPath$LineInfo);
	return class$;
}

$Class* LayoutPathImpl$SegmentPath$LineInfo::class$ = nullptr;

	} // font
} // sun