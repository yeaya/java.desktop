#include <sun/font/LayoutPathImpl$SegmentPathBuilder.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/LayoutPathImpl$EndType.h>
#include <sun/font/LayoutPathImpl$SegmentPath.h>
#include <sun/font/LayoutPathImpl.h>
#include <jcpp.h>

#undef EXTENDED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $LayoutPathImpl = ::sun::font::LayoutPathImpl;
using $LayoutPathImpl$EndType = ::sun::font::LayoutPathImpl$EndType;
using $LayoutPathImpl$SegmentPath = ::sun::font::LayoutPathImpl$SegmentPath;

namespace sun {
	namespace font {

$FieldInfo _LayoutPathImpl$SegmentPathBuilder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LayoutPathImpl$SegmentPathBuilder, $assertionsDisabled)},
	{"data", "[D", nullptr, $PRIVATE, $field(LayoutPathImpl$SegmentPathBuilder, data)},
	{"w", "I", nullptr, $PRIVATE, $field(LayoutPathImpl$SegmentPathBuilder, w)},
	{"px", "D", nullptr, $PRIVATE, $field(LayoutPathImpl$SegmentPathBuilder, px)},
	{"py", "D", nullptr, $PRIVATE, $field(LayoutPathImpl$SegmentPathBuilder, py)},
	{"a", "D", nullptr, $PRIVATE, $field(LayoutPathImpl$SegmentPathBuilder, a)},
	{"pconnect", "Z", nullptr, $PRIVATE, $field(LayoutPathImpl$SegmentPathBuilder, pconnect)},
	{}
};

$MethodInfo _LayoutPathImpl$SegmentPathBuilder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LayoutPathImpl$SegmentPathBuilder::*)()>(&LayoutPathImpl$SegmentPathBuilder::init$))},
	{"build", "(Lsun/font/LayoutPathImpl$EndType;[D)Lsun/font/LayoutPathImpl$SegmentPath;", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<$LayoutPathImpl$SegmentPath*(LayoutPathImpl$SegmentPathBuilder::*)($LayoutPathImpl$EndType*,$doubles*)>(&LayoutPathImpl$SegmentPathBuilder::build))},
	{"complete", "()Lsun/font/LayoutPathImpl$SegmentPath;", nullptr, $PUBLIC, $method(static_cast<$LayoutPathImpl$SegmentPath*(LayoutPathImpl$SegmentPathBuilder::*)()>(&LayoutPathImpl$SegmentPathBuilder::complete))},
	{"complete", "(Lsun/font/LayoutPathImpl$EndType;)Lsun/font/LayoutPathImpl$SegmentPath;", nullptr, $PUBLIC, $method(static_cast<$LayoutPathImpl$SegmentPath*(LayoutPathImpl$SegmentPathBuilder::*)($LayoutPathImpl$EndType*)>(&LayoutPathImpl$SegmentPathBuilder::complete))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC, $method(static_cast<void(LayoutPathImpl$SegmentPathBuilder::*)(double,double)>(&LayoutPathImpl$SegmentPathBuilder::lineTo))},
	{"moveTo", "(DD)V", nullptr, $PUBLIC, $method(static_cast<void(LayoutPathImpl$SegmentPathBuilder::*)(double,double)>(&LayoutPathImpl$SegmentPathBuilder::moveTo))},
	{"nextPoint", "(DDZ)V", nullptr, $PRIVATE, $method(static_cast<void(LayoutPathImpl$SegmentPathBuilder::*)(double,double,bool)>(&LayoutPathImpl$SegmentPathBuilder::nextPoint))},
	{"reset", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(LayoutPathImpl$SegmentPathBuilder::*)(int32_t)>(&LayoutPathImpl$SegmentPathBuilder::reset))},
	{}
};

$InnerClassInfo _LayoutPathImpl$SegmentPathBuilder_InnerClassesInfo_[] = {
	{"sun.font.LayoutPathImpl$SegmentPathBuilder", "sun.font.LayoutPathImpl", "SegmentPathBuilder", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _LayoutPathImpl$SegmentPathBuilder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.LayoutPathImpl$SegmentPathBuilder",
	"java.lang.Object",
	nullptr,
	_LayoutPathImpl$SegmentPathBuilder_FieldInfo_,
	_LayoutPathImpl$SegmentPathBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_LayoutPathImpl$SegmentPathBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.LayoutPathImpl"
};

$Object* allocate$LayoutPathImpl$SegmentPathBuilder($Class* clazz) {
	return $of($alloc(LayoutPathImpl$SegmentPathBuilder));
}

bool LayoutPathImpl$SegmentPathBuilder::$assertionsDisabled = false;

void LayoutPathImpl$SegmentPathBuilder::init$() {
}

void LayoutPathImpl$SegmentPathBuilder::reset(int32_t datalen) {
	if (this->data == nullptr || datalen > $nc(this->data)->length) {
		$set(this, data, $new($doubles, datalen));
	} else if (datalen == 0) {
		$set(this, data, nullptr);
	}
	this->w = 0;
	this->px = (this->py = (double)0);
	this->pconnect = false;
}

$LayoutPathImpl$SegmentPath* LayoutPathImpl$SegmentPathBuilder::build($LayoutPathImpl$EndType* etype, $doubles* pts) {
	if (!LayoutPathImpl$SegmentPathBuilder::$assertionsDisabled && !($nc(pts)->length % 2 == 0)) {
		$throwNew($AssertionError);
	}
	reset($nc(pts)->length / 2 * 3);
	for (int32_t i = 0; i < $nc(pts)->length; i += 2) {
		nextPoint(pts->get(i), pts->get(i + 1), i != 0);
	}
	return complete(etype);
}

void LayoutPathImpl$SegmentPathBuilder::moveTo(double x, double y) {
	nextPoint(x, y, false);
}

void LayoutPathImpl$SegmentPathBuilder::lineTo(double x, double y) {
	nextPoint(x, y, true);
}

void LayoutPathImpl$SegmentPathBuilder::nextPoint(double x, double y, bool connect) {
	if (x == this->px && y == this->py) {
		return;
	}
	if (this->w == 0) {
		if (this->data == nullptr) {
			$set(this, data, $new($doubles, 6));
		}
		if (connect) {
			this->w = 3;
		}
	}
	if (this->w != 0 && !connect && !this->pconnect) {
		$nc(this->data)->set(this->w - 3, this->px = x);
		$nc(this->data)->set(this->w - 2, this->py = y);
		return;
	}
	if (this->w == $nc(this->data)->length) {
		$var($doubles, t, $new($doubles, this->w * 2));
		$System::arraycopy(this->data, 0, t, 0, this->w);
		$set(this, data, t);
	}
	if (connect) {
		double dx = x - this->px;
		double dy = y - this->py;
		this->a += $Math::sqrt(dx * dx + dy * dy);
	}
	$nc(this->data)->set(this->w++, x);
	$nc(this->data)->set(this->w++, y);
	$nc(this->data)->set(this->w++, this->a);
	this->px = x;
	this->py = y;
	this->pconnect = connect;
}

$LayoutPathImpl$SegmentPath* LayoutPathImpl$SegmentPathBuilder::complete() {
	$init($LayoutPathImpl$EndType);
	return complete($LayoutPathImpl$EndType::EXTENDED);
}

$LayoutPathImpl$SegmentPath* LayoutPathImpl$SegmentPathBuilder::complete($LayoutPathImpl$EndType* etype) {
	$var($LayoutPathImpl$SegmentPath, result, nullptr);
	if (this->data == nullptr || this->w < 6) {
		return nullptr;
	}
	if (this->w == $nc(this->data)->length) {
		$assign(result, $new($LayoutPathImpl$SegmentPath, this->data, etype));
		reset(0);
	} else {
		$var($doubles, dataToAdopt, $new($doubles, this->w));
		$System::arraycopy(this->data, 0, dataToAdopt, 0, this->w);
		$assign(result, $new($LayoutPathImpl$SegmentPath, dataToAdopt, etype));
		reset(2);
	}
	return result;
}

void clinit$LayoutPathImpl$SegmentPathBuilder($Class* class$) {
	$load($LayoutPathImpl);
	LayoutPathImpl$SegmentPathBuilder::$assertionsDisabled = !$LayoutPathImpl::class$->desiredAssertionStatus();
}

LayoutPathImpl$SegmentPathBuilder::LayoutPathImpl$SegmentPathBuilder() {
}

$Class* LayoutPathImpl$SegmentPathBuilder::load$($String* name, bool initialize) {
	$loadClass(LayoutPathImpl$SegmentPathBuilder, name, initialize, &_LayoutPathImpl$SegmentPathBuilder_ClassInfo_, clinit$LayoutPathImpl$SegmentPathBuilder, allocate$LayoutPathImpl$SegmentPathBuilder);
	return class$;
}

$Class* LayoutPathImpl$SegmentPathBuilder::class$ = nullptr;

	} // font
} // sun