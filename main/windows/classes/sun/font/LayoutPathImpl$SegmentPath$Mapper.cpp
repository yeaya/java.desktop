#include <sun/font/LayoutPathImpl$SegmentPath$Mapper.h>

#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <sun/font/LayoutPathImpl$SegmentPath$LineInfo.h>
#include <sun/font/LayoutPathImpl$SegmentPath$Segment.h>
#include <sun/font/LayoutPathImpl$SegmentPath.h>
#include <jcpp.h>

using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $LayoutPathImpl$SegmentPath = ::sun::font::LayoutPathImpl$SegmentPath;
using $LayoutPathImpl$SegmentPath$LineInfo = ::sun::font::LayoutPathImpl$SegmentPath$LineInfo;
using $LayoutPathImpl$SegmentPath$Segment = ::sun::font::LayoutPathImpl$SegmentPath$Segment;

namespace sun {
	namespace font {

$FieldInfo _LayoutPathImpl$SegmentPath$Mapper_FieldInfo_[] = {
	{"this$0", "Lsun/font/LayoutPathImpl$SegmentPath;", nullptr, $FINAL | $SYNTHETIC, $field(LayoutPathImpl$SegmentPath$Mapper, this$0)},
	{"li", "Lsun/font/LayoutPathImpl$SegmentPath$LineInfo;", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Mapper, li)},
	{"segments", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/font/LayoutPathImpl$SegmentPath$Segment;>;", $FINAL, $field(LayoutPathImpl$SegmentPath$Mapper, segments)},
	{"mpt", "Ljava/awt/geom/Point2D$Double;", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Mapper, mpt)},
	{"cpt", "Ljava/awt/geom/Point2D$Double;", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Mapper, cpt)},
	{"haveMT", "Z", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Mapper, haveMT)},
	{}
};

$MethodInfo _LayoutPathImpl$SegmentPath$Mapper_MethodInfo_[] = {
	{"<init>", "(Lsun/font/LayoutPathImpl$SegmentPath;)V", nullptr, 0, $method(static_cast<void(LayoutPathImpl$SegmentPath$Mapper::*)($LayoutPathImpl$SegmentPath*)>(&LayoutPathImpl$SegmentPath$Mapper::init$))},
	{"close", "()V", nullptr, 0},
	{"init", "()V", nullptr, 0},
	{"lineTo", "(DD)V", nullptr, 0},
	{"mapShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, 0},
	{}
};

$InnerClassInfo _LayoutPathImpl$SegmentPath$Mapper_InnerClassesInfo_[] = {
	{"sun.font.LayoutPathImpl$SegmentPath", "sun.font.LayoutPathImpl", "SegmentPath", $PUBLIC | $STATIC | $FINAL},
	{"sun.font.LayoutPathImpl$SegmentPath$Mapper", "sun.font.LayoutPathImpl$SegmentPath", "Mapper", 0},
	{}
};

$ClassInfo _LayoutPathImpl$SegmentPath$Mapper_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.LayoutPathImpl$SegmentPath$Mapper",
	"java.lang.Object",
	nullptr,
	_LayoutPathImpl$SegmentPath$Mapper_FieldInfo_,
	_LayoutPathImpl$SegmentPath$Mapper_MethodInfo_,
	nullptr,
	nullptr,
	_LayoutPathImpl$SegmentPath$Mapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.LayoutPathImpl"
};

$Object* allocate$LayoutPathImpl$SegmentPath$Mapper($Class* clazz) {
	return $of($alloc(LayoutPathImpl$SegmentPath$Mapper));
}

void LayoutPathImpl$SegmentPath$Mapper::init$($LayoutPathImpl$SegmentPath* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, li, $new($LayoutPathImpl$SegmentPath$LineInfo, this$0));
	$set(this, segments, $new($ArrayList));
	for (int32_t i = 3; i < $nc(this$0->data)->length; i += 3) {
		if ($nc(this$0->data)->get(i + 2) != $nc(this$0->data)->get(i - 1)) {
			$nc(this->segments)->add($$new($LayoutPathImpl$SegmentPath$Segment, this$0, i));
		}
	}
	$set(this, mpt, $new($Point2D$Double));
	$set(this, cpt, $new($Point2D$Double));
}

void LayoutPathImpl$SegmentPath$Mapper::init() {
	$useLocalCurrentObjectStackCache();
	this->haveMT = false;
	{
		$var($Iterator, i$, $nc(this->segments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LayoutPathImpl$SegmentPath$Segment, s, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
			{
				$nc(s)->init();
			}
		}
	}
}

void LayoutPathImpl$SegmentPath$Mapper::moveTo(double x, double y) {
	$nc(this->mpt)->x = x;
	$nc(this->mpt)->y = y;
	this->haveMT = true;
}

void LayoutPathImpl$SegmentPath$Mapper::lineTo(double x, double y) {
	$useLocalCurrentObjectStackCache();
	if (this->haveMT) {
		$nc(this->cpt)->x = $nc(this->mpt)->x;
		$nc(this->cpt)->y = $nc(this->mpt)->y;
	}
	if (x == $nc(this->cpt)->x && y == $nc(this->cpt)->y) {
		return;
	}
	if (this->haveMT) {
		this->haveMT = false;
		{
			$var($Iterator, i$, $nc(this->segments)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($LayoutPathImpl$SegmentPath$Segment, s, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
				{
					$nc(s)->move();
				}
			}
		}
	}
	$nc(this->li)->set($nc(this->cpt)->x, $nc(this->cpt)->y, x, y);
	{
		$var($Iterator, i$, $nc(this->segments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LayoutPathImpl$SegmentPath$Segment, s, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
			{
				$nc(s)->line(this->li);
			}
		}
	}
	$nc(this->cpt)->x = x;
	$nc(this->cpt)->y = y;
}

void LayoutPathImpl$SegmentPath$Mapper::close() {
	$useLocalCurrentObjectStackCache();
	lineTo($nc(this->mpt)->x, $nc(this->mpt)->y);
	{
		$var($Iterator, i$, $nc(this->segments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LayoutPathImpl$SegmentPath$Segment, s, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
			{
				$nc(s)->close();
			}
		}
	}
}

$Shape* LayoutPathImpl$SegmentPath$Mapper::mapShape($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($PathIterator, pi, $nc(s)->getPathIterator(nullptr, (double)1));
	init();
	$var($doubles, coords, $new($doubles, 2));
	while (!$nc(pi)->isDone()) {
		switch (pi->currentSegment(coords)) {
		case 4:
			{
				close();
				break;
			}
		case 0:
			{
				moveTo(coords->get(0), coords->get(1));
				break;
			}
		case 1:
			{
				lineTo(coords->get(0), coords->get(1));
				break;
			}
		default:
			{
				break;
			}
		}
		pi->next();
	}
	$var($GeneralPath, gp, $new($GeneralPath));
	{
		$var($Iterator, i$, $nc(this->segments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LayoutPathImpl$SegmentPath$Segment, seg, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
			{
				gp->append(static_cast<$Shape*>($nc(seg)->gp), false);
			}
		}
	}
	return gp;
}

LayoutPathImpl$SegmentPath$Mapper::LayoutPathImpl$SegmentPath$Mapper() {
}

$Class* LayoutPathImpl$SegmentPath$Mapper::load$($String* name, bool initialize) {
	$loadClass(LayoutPathImpl$SegmentPath$Mapper, name, initialize, &_LayoutPathImpl$SegmentPath$Mapper_ClassInfo_, allocate$LayoutPathImpl$SegmentPath$Mapper);
	return class$;
}

$Class* LayoutPathImpl$SegmentPath$Mapper::class$ = nullptr;

	} // font
} // sun