#include <sun/awt/geom/Crossings$EvenOdd.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/geom/Crossings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Crossings = ::sun::awt::geom::Crossings;

namespace sun {
	namespace awt {
		namespace geom {

$MethodInfo _Crossings$EvenOdd_MethodInfo_[] = {
	{"<init>", "(DDDD)V", nullptr, $PUBLIC, $method(static_cast<void(Crossings$EvenOdd::*)(double,double,double,double)>(&Crossings$EvenOdd::init$))},
	{"covers", "(DD)Z", nullptr, $PUBLIC},
	{"record", "(DDI)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Crossings$EvenOdd_InnerClassesInfo_[] = {
	{"sun.awt.geom.Crossings$EvenOdd", "sun.awt.geom.Crossings", "EvenOdd", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Crossings$EvenOdd_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.geom.Crossings$EvenOdd",
	"sun.awt.geom.Crossings",
	nullptr,
	nullptr,
	_Crossings$EvenOdd_MethodInfo_,
	nullptr,
	nullptr,
	_Crossings$EvenOdd_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.Crossings"
};

$Object* allocate$Crossings$EvenOdd($Class* clazz) {
	return $of($alloc(Crossings$EvenOdd));
}

void Crossings$EvenOdd::init$(double xlo, double ylo, double xhi, double yhi) {
	$Crossings::init$(xlo, ylo, xhi, yhi);
}

bool Crossings$EvenOdd::covers(double ystart, double yend) {
	return (this->limit == 2 && $nc(this->yranges)->get(0) <= ystart && $nc(this->yranges)->get(1) >= yend);
}

void Crossings$EvenOdd::record(double ystart, double yend, int32_t direction) {
	if (ystart >= yend) {
		return;
	}
	int32_t from = 0;
	while (from < this->limit && ystart > $nc(this->yranges)->get(from + 1)) {
		from += 2;
	}
	int32_t to = from;
	while (from < this->limit) {
		double yrlo = $nc(this->yranges)->get(from++);
		double yrhi = $nc(this->yranges)->get(from++);
		if (yend < yrlo) {
			$nc(this->yranges)->set(to++, ystart);
			$nc(this->yranges)->set(to++, yend);
			ystart = yrlo;
			yend = yrhi;
			continue;
		}
		double yll = 0.0;
		double ylh = 0.0;
		double yhl = 0.0;
		double yhh = 0.0;
		if (ystart < yrlo) {
			yll = ystart;
			ylh = yrlo;
		} else {
			yll = yrlo;
			ylh = ystart;
		}
		if (yend < yrhi) {
			yhl = yend;
			yhh = yrhi;
		} else {
			yhl = yrhi;
			yhh = yend;
		}
		if (ylh == yhl) {
			ystart = yll;
			yend = yhh;
		} else {
			if (ylh > yhl) {
				ystart = yhl;
				yhl = ylh;
				ylh = ystart;
			}
			if (yll != ylh) {
				$nc(this->yranges)->set(to++, yll);
				$nc(this->yranges)->set(to++, ylh);
			}
			ystart = yhl;
			yend = yhh;
		}
		if (ystart >= yend) {
			break;
		}
	}
	if (to < from && from < this->limit) {
		$System::arraycopy(this->yranges, from, this->yranges, to, this->limit - from);
	}
	to += (this->limit - from);
	if (ystart < yend) {
		if (to >= $nc(this->yranges)->length) {
			$var($doubles, newranges, $new($doubles, to + 10));
			$System::arraycopy(this->yranges, 0, newranges, 0, to);
			$set(this, yranges, newranges);
		}
		$nc(this->yranges)->set(to++, ystart);
		$nc(this->yranges)->set(to++, yend);
	}
	this->limit = to;
}

Crossings$EvenOdd::Crossings$EvenOdd() {
}

$Class* Crossings$EvenOdd::load$($String* name, bool initialize) {
	$loadClass(Crossings$EvenOdd, name, initialize, &_Crossings$EvenOdd_ClassInfo_, allocate$Crossings$EvenOdd);
	return class$;
}

$Class* Crossings$EvenOdd::class$ = nullptr;

		} // geom
	} // awt
} // sun