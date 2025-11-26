#include <sun/font/LayoutPathImpl$SegmentPath$Segment.h>

#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D.h>
#include <sun/font/LayoutPathImpl$SegmentPath$LineInfo.h>
#include <sun/font/LayoutPathImpl$SegmentPath.h>
#include <jcpp.h>

#undef MIN_VALUE

using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LayoutPathImpl$SegmentPath = ::sun::font::LayoutPathImpl$SegmentPath;
using $LayoutPathImpl$SegmentPath$LineInfo = ::sun::font::LayoutPathImpl$SegmentPath$LineInfo;

namespace sun {
	namespace font {

$FieldInfo _LayoutPathImpl$SegmentPath$Segment_FieldInfo_[] = {
	{"this$0", "Lsun/font/LayoutPathImpl$SegmentPath;", nullptr, $FINAL | $SYNTHETIC, $field(LayoutPathImpl$SegmentPath$Segment, this$0)},
	{"ix", "I", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Segment, ix)},
	{"ux", "D", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Segment, ux)},
	{"uy", "D", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Segment, uy)},
	{"temp", "Lsun/font/LayoutPathImpl$SegmentPath$LineInfo;", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Segment, temp)},
	{"broken", "Z", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Segment, broken)},
	{"cx", "D", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Segment, cx)},
	{"cy", "D", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Segment, cy)},
	{"gp", "Ljava/awt/geom/GeneralPath;", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Segment, gp)},
	{}
};

$MethodInfo _LayoutPathImpl$SegmentPath$Segment_MethodInfo_[] = {
	{"<init>", "(Lsun/font/LayoutPathImpl$SegmentPath;I)V", nullptr, 0, $method(static_cast<void(LayoutPathImpl$SegmentPath$Segment::*)($LayoutPathImpl$SegmentPath*,int32_t)>(&LayoutPathImpl$SegmentPath$Segment::init$))},
	{"close", "()V", nullptr, 0},
	{"init", "()V", nullptr, 0},
	{"line", "(Lsun/font/LayoutPathImpl$SegmentPath$LineInfo;)V", nullptr, 0},
	{"move", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _LayoutPathImpl$SegmentPath$Segment_InnerClassesInfo_[] = {
	{"sun.font.LayoutPathImpl$SegmentPath", "sun.font.LayoutPathImpl", "SegmentPath", $PUBLIC | $STATIC | $FINAL},
	{"sun.font.LayoutPathImpl$SegmentPath$Segment", "sun.font.LayoutPathImpl$SegmentPath", "Segment", 0},
	{}
};

$ClassInfo _LayoutPathImpl$SegmentPath$Segment_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.LayoutPathImpl$SegmentPath$Segment",
	"java.lang.Object",
	nullptr,
	_LayoutPathImpl$SegmentPath$Segment_FieldInfo_,
	_LayoutPathImpl$SegmentPath$Segment_MethodInfo_,
	nullptr,
	nullptr,
	_LayoutPathImpl$SegmentPath$Segment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.LayoutPathImpl"
};

$Object* allocate$LayoutPathImpl$SegmentPath$Segment($Class* clazz) {
	return $of($alloc(LayoutPathImpl$SegmentPath$Segment));
}

void LayoutPathImpl$SegmentPath$Segment::init$($LayoutPathImpl$SegmentPath* this$0, int32_t ix) {
	$set(this, this$0, this$0);
	this->ix = ix;
	double len = $nc(this$0->data)->get(ix + 2) - $nc(this$0->data)->get(ix - 1);
	this->ux = ($nc(this$0->data)->get(ix) - $nc(this$0->data)->get(ix - 3)) / len;
	this->uy = ($nc(this$0->data)->get(ix + 1) - $nc(this$0->data)->get(ix - 2)) / len;
	$set(this, temp, $new($LayoutPathImpl$SegmentPath$LineInfo, this$0));
}

void LayoutPathImpl$SegmentPath$Segment::init() {
	this->broken = true;
	$init($Double);
	this->cx = (this->cy = $Double::MIN_VALUE);
	$set(this, gp, $new($GeneralPath));
}

void LayoutPathImpl$SegmentPath$Segment::move() {
	this->broken = true;
}

void LayoutPathImpl$SegmentPath$Segment::close() {
	if (!this->broken) {
		$nc(this->gp)->closePath();
	}
}

void LayoutPathImpl$SegmentPath$Segment::line($LayoutPathImpl$SegmentPath$LineInfo* li) {
	if ($nc(li)->pin(this->ix, this->temp)) {
		$nc(this->temp)->sx -= $nc(this->this$0->data)->get(this->ix - 1);
		double sx = $nc(this->this$0->data)->get(this->ix - 3) + $nc(this->temp)->sx * this->ux - $nc(this->temp)->sy * this->uy;
		double sy = $nc(this->this$0->data)->get(this->ix - 2) + $nc(this->temp)->sx * this->uy + $nc(this->temp)->sy * this->ux;
		$nc(this->temp)->lx -= $nc(this->this$0->data)->get(this->ix - 1);
		double lx = $nc(this->this$0->data)->get(this->ix - 3) + $nc(this->temp)->lx * this->ux - $nc(this->temp)->ly * this->uy;
		double ly = $nc(this->this$0->data)->get(this->ix - 2) + $nc(this->temp)->lx * this->uy + $nc(this->temp)->ly * this->ux;
		if (sx != this->cx || sy != this->cy) {
			if (this->broken) {
				$nc(this->gp)->moveTo((float)sx, (float)sy);
			} else {
				$nc(this->gp)->lineTo((float)sx, (float)sy);
			}
		}
		$nc(this->gp)->lineTo((float)lx, (float)ly);
		this->broken = false;
		this->cx = lx;
		this->cy = ly;
	}
}

LayoutPathImpl$SegmentPath$Segment::LayoutPathImpl$SegmentPath$Segment() {
}

$Class* LayoutPathImpl$SegmentPath$Segment::load$($String* name, bool initialize) {
	$loadClass(LayoutPathImpl$SegmentPath$Segment, name, initialize, &_LayoutPathImpl$SegmentPath$Segment_ClassInfo_, allocate$LayoutPathImpl$SegmentPath$Segment);
	return class$;
}

$Class* LayoutPathImpl$SegmentPath$Segment::class$ = nullptr;

	} // font
} // sun