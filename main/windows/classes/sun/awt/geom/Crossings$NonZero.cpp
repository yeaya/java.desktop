#include <sun/awt/geom/Crossings$NonZero.h>

#include <java/lang/Array.h>
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
#include <sun/awt/geom/Crossings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Crossings = ::sun::awt::geom::Crossings;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _Crossings$NonZero_FieldInfo_[] = {
	{"crosscounts", "[I", nullptr, $PRIVATE, $field(Crossings$NonZero, crosscounts)},
	{}
};

$MethodInfo _Crossings$NonZero_MethodInfo_[] = {
	{"<init>", "(DDDD)V", nullptr, $PUBLIC, $method(static_cast<void(Crossings$NonZero::*)(double,double,double,double)>(&Crossings$NonZero::init$))},
	{"covers", "(DD)Z", nullptr, $PUBLIC},
	{"insert", "(IDDI)V", nullptr, $PUBLIC, $method(static_cast<void(Crossings$NonZero::*)(int32_t,double,double,int32_t)>(&Crossings$NonZero::insert))},
	{"record", "(DDI)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Crossings$NonZero::*)(int32_t)>(&Crossings$NonZero::remove))},
	{}
};

$InnerClassInfo _Crossings$NonZero_InnerClassesInfo_[] = {
	{"sun.awt.geom.Crossings$NonZero", "sun.awt.geom.Crossings", "NonZero", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Crossings$NonZero_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.geom.Crossings$NonZero",
	"sun.awt.geom.Crossings",
	nullptr,
	_Crossings$NonZero_FieldInfo_,
	_Crossings$NonZero_MethodInfo_,
	nullptr,
	nullptr,
	_Crossings$NonZero_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.Crossings"
};

$Object* allocate$Crossings$NonZero($Class* clazz) {
	return $of($alloc(Crossings$NonZero));
}

void Crossings$NonZero::init$(double xlo, double ylo, double xhi, double yhi) {
	$Crossings::init$(xlo, ylo, xhi, yhi);
	$set(this, crosscounts, $new($ints, $nc(this->yranges)->length / 2));
}

bool Crossings$NonZero::covers(double ystart, double yend) {
	int32_t i = 0;
	while (i < this->limit) {
		double ylo = $nc(this->yranges)->get(i++);
		double yhi = $nc(this->yranges)->get(i++);
		if (ystart >= yhi) {
			continue;
		}
		if (ystart < ylo) {
			return false;
		}
		if (yend <= yhi) {
			return true;
		}
		ystart = yhi;
	}
	return (ystart >= yend);
}

void Crossings$NonZero::remove(int32_t cur) {
	this->limit -= 2;
	int32_t rem = this->limit - cur;
	if (rem > 0) {
		$System::arraycopy(this->yranges, cur + 2, this->yranges, cur, rem);
		$System::arraycopy(this->crosscounts, cur / 2 + 1, this->crosscounts, cur / 2, rem / 2);
	}
}

void Crossings$NonZero::insert(int32_t cur, double lo, double hi, int32_t dir) {
	$useLocalCurrentObjectStackCache();
	int32_t rem = this->limit - cur;
	$var($doubles, oldranges, this->yranges);
	$var($ints, oldcounts, this->crosscounts);
	if (this->limit >= $nc(this->yranges)->length) {
		$set(this, yranges, $new($doubles, this->limit + 10));
		$System::arraycopy(oldranges, 0, this->yranges, 0, cur);
		$set(this, crosscounts, $new($ints, (this->limit + 10) / 2));
		$System::arraycopy(oldcounts, 0, this->crosscounts, 0, cur / 2);
	}
	if (rem > 0) {
		$System::arraycopy(oldranges, cur, this->yranges, cur + 2, rem);
		$System::arraycopy(oldcounts, cur / 2, this->crosscounts, cur / 2 + 1, rem / 2);
	}
	$nc(this->yranges)->set(cur + 0, lo);
	$nc(this->yranges)->set(cur + 1, hi);
	$nc(this->crosscounts)->set(cur / 2, dir);
	this->limit += 2;
}

void Crossings$NonZero::record(double ystart, double yend, int32_t direction) {
	if (ystart >= yend) {
		return;
	}
	int32_t cur = 0;
	while (cur < this->limit && ystart > $nc(this->yranges)->get(cur + 1)) {
		cur += 2;
	}
	if (cur < this->limit) {
		int32_t rdir = $nc(this->crosscounts)->get(cur / 2);
		double yrlo = $nc(this->yranges)->get(cur + 0);
		double yrhi = $nc(this->yranges)->get(cur + 1);
		if (yrhi == ystart && rdir == direction) {
			if (cur + 2 == this->limit) {
				$nc(this->yranges)->set(cur + 1, yend);
				return;
			}
			remove(cur);
			ystart = yrlo;
			rdir = $nc(this->crosscounts)->get(cur / 2);
			yrlo = $nc(this->yranges)->get(cur + 0);
			yrhi = $nc(this->yranges)->get(cur + 1);
		}
		if (yend < yrlo) {
			insert(cur, ystart, yend, direction);
			return;
		}
		if (yend == yrlo && rdir == direction) {
			$nc(this->yranges)->set(cur, ystart);
			return;
		}
		if (ystart < yrlo) {
			insert(cur, ystart, yrlo, direction);
			cur += 2;
			ystart = yrlo;
		} else if (yrlo < ystart) {
			insert(cur, yrlo, ystart, rdir);
			cur += 2;
			yrlo = ystart;
		}
		int32_t newdir = rdir + direction;
		double newend = $Math::min(yend, yrhi);
		if (newdir == 0) {
			remove(cur);
		} else {
			$nc(this->crosscounts)->set(cur / 2, newdir);
			$nc(this->yranges)->set(cur++, ystart);
			$nc(this->yranges)->set(cur++, newend);
		}
		ystart = (yrlo = newend);
		if (yrlo < yrhi) {
			insert(cur, yrlo, yrhi, rdir);
		}
	}
	if (ystart < yend) {
		insert(cur, ystart, yend, direction);
	}
}

Crossings$NonZero::Crossings$NonZero() {
}

$Class* Crossings$NonZero::load$($String* name, bool initialize) {
	$loadClass(Crossings$NonZero, name, initialize, &_Crossings$NonZero_ClassInfo_, allocate$Crossings$NonZero);
	return class$;
}

$Class* Crossings$NonZero::class$ = nullptr;

		} // geom
	} // awt
} // sun