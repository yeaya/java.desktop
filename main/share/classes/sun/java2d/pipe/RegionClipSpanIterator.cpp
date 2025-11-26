#include <sun/java2d/pipe/RegionClipSpanIterator.h>

#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RegionIterator.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::sun::java2d::pipe::Region;
using $RegionIterator = ::sun::java2d::pipe::RegionIterator;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _RegionClipSpanIterator_FieldInfo_[] = {
	{"rgn", "Lsun/java2d/pipe/Region;", nullptr, 0, $field(RegionClipSpanIterator, rgn)},
	{"spanIter", "Lsun/java2d/pipe/SpanIterator;", nullptr, 0, $field(RegionClipSpanIterator, spanIter)},
	{"resetState", "Lsun/java2d/pipe/RegionIterator;", nullptr, 0, $field(RegionClipSpanIterator, resetState)},
	{"lwm", "Lsun/java2d/pipe/RegionIterator;", nullptr, 0, $field(RegionClipSpanIterator, lwm)},
	{"row", "Lsun/java2d/pipe/RegionIterator;", nullptr, 0, $field(RegionClipSpanIterator, row)},
	{"box", "Lsun/java2d/pipe/RegionIterator;", nullptr, 0, $field(RegionClipSpanIterator, box)},
	{"spanlox", "I", nullptr, 0, $field(RegionClipSpanIterator, spanlox)},
	{"spanhix", "I", nullptr, 0, $field(RegionClipSpanIterator, spanhix)},
	{"spanloy", "I", nullptr, 0, $field(RegionClipSpanIterator, spanloy)},
	{"spanhiy", "I", nullptr, 0, $field(RegionClipSpanIterator, spanhiy)},
	{"lwmloy", "I", nullptr, 0, $field(RegionClipSpanIterator, lwmloy)},
	{"lwmhiy", "I", nullptr, 0, $field(RegionClipSpanIterator, lwmhiy)},
	{"rgnlox", "I", nullptr, 0, $field(RegionClipSpanIterator, rgnlox)},
	{"rgnloy", "I", nullptr, 0, $field(RegionClipSpanIterator, rgnloy)},
	{"rgnhix", "I", nullptr, 0, $field(RegionClipSpanIterator, rgnhix)},
	{"rgnhiy", "I", nullptr, 0, $field(RegionClipSpanIterator, rgnhiy)},
	{"rgnbndslox", "I", nullptr, 0, $field(RegionClipSpanIterator, rgnbndslox)},
	{"rgnbndsloy", "I", nullptr, 0, $field(RegionClipSpanIterator, rgnbndsloy)},
	{"rgnbndshix", "I", nullptr, 0, $field(RegionClipSpanIterator, rgnbndshix)},
	{"rgnbndshiy", "I", nullptr, 0, $field(RegionClipSpanIterator, rgnbndshiy)},
	{"rgnbox", "[I", nullptr, 0, $field(RegionClipSpanIterator, rgnbox)},
	{"spanbox", "[I", nullptr, 0, $field(RegionClipSpanIterator, spanbox)},
	{"doNextSpan", "Z", nullptr, 0, $field(RegionClipSpanIterator, doNextSpan)},
	{"doNextBox", "Z", nullptr, 0, $field(RegionClipSpanIterator, doNextBox)},
	{"done", "Z", nullptr, 0, $field(RegionClipSpanIterator, done)},
	{}
};

$MethodInfo _RegionClipSpanIterator_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/Region;Lsun/java2d/pipe/SpanIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(RegionClipSpanIterator::*)($Region*,$SpanIterator*)>(&RegionClipSpanIterator::init$))},
	{"getNativeIterator", "()J", nullptr, $PUBLIC},
	{"getPathBox", "([I)V", nullptr, $PUBLIC},
	{"intersectClipBox", "(IIII)V", nullptr, $PUBLIC},
	{"nextSpan", "([I)Z", nullptr, $PUBLIC},
	{"skipDownTo", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RegionClipSpanIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.RegionClipSpanIterator",
	"java.lang.Object",
	"sun.java2d.pipe.SpanIterator",
	_RegionClipSpanIterator_FieldInfo_,
	_RegionClipSpanIterator_MethodInfo_
};

$Object* allocate$RegionClipSpanIterator($Class* clazz) {
	return $of($alloc(RegionClipSpanIterator));
}

void RegionClipSpanIterator::init$($Region* rgn, $SpanIterator* spanIter) {
	$set(this, rgnbox, $new($ints, 4));
	$set(this, spanbox, $new($ints, 4));
	this->done = false;
	$set(this, spanIter, spanIter);
	$set(this, resetState, $nc(rgn)->getIterator());
	$set(this, lwm, $nc(this->resetState)->createCopy());
	if (!$nc(this->lwm)->nextYRange(this->rgnbox)) {
		this->done = true;
		return;
	}
	this->rgnloy = (this->lwmloy = $nc(this->rgnbox)->get(1));
	this->rgnhiy = (this->lwmhiy = $nc(this->rgnbox)->get(3));
	rgn->getBounds(this->rgnbox);
	this->rgnbndslox = $nc(this->rgnbox)->get(0);
	this->rgnbndsloy = $nc(this->rgnbox)->get(1);
	this->rgnbndshix = $nc(this->rgnbox)->get(2);
	this->rgnbndshiy = $nc(this->rgnbox)->get(3);
	if (this->rgnbndslox >= this->rgnbndshix || this->rgnbndsloy >= this->rgnbndshiy) {
		this->done = true;
		return;
	}
	$set(this, rgn, rgn);
	$set(this, row, $nc(this->lwm)->createCopy());
	$set(this, box, $nc(this->row)->createCopy());
	this->doNextSpan = true;
	this->doNextBox = false;
}

void RegionClipSpanIterator::getPathBox($ints* pathbox) {
	$var($ints, rgnbox, $new($ints, 4));
	$nc(this->rgn)->getBounds(rgnbox);
	$nc(this->spanIter)->getPathBox(pathbox);
	if ($nc(pathbox)->get(0) < rgnbox->get(0)) {
		pathbox->set(0, rgnbox->get(0));
	}
	if ($nc(pathbox)->get(1) < rgnbox->get(1)) {
		pathbox->set(1, rgnbox->get(1));
	}
	if ($nc(pathbox)->get(2) > rgnbox->get(2)) {
		pathbox->set(2, rgnbox->get(2));
	}
	if ($nc(pathbox)->get(3) > rgnbox->get(3)) {
		pathbox->set(3, rgnbox->get(3));
	}
}

void RegionClipSpanIterator::intersectClipBox(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	$nc(this->spanIter)->intersectClipBox(lox, loy, hix, hiy);
}

bool RegionClipSpanIterator::nextSpan($ints* resultbox) {
	if (this->done) {
		return false;
	}
	int32_t resultlox = 0;
	int32_t resultloy = 0;
	int32_t resulthix = 0;
	int32_t resulthiy = 0;
	bool doNextRow = false;
	while (true) {
		if (this->doNextSpan) {
			if (!$nc(this->spanIter)->nextSpan(this->spanbox)) {
				this->done = true;
				return false;
			} else {
				this->spanlox = $nc(this->spanbox)->get(0);
				if (this->spanlox >= this->rgnbndshix) {
					continue;
				}
				this->spanloy = $nc(this->spanbox)->get(1);
				if (this->spanloy >= this->rgnbndshiy) {
					continue;
				}
				this->spanhix = $nc(this->spanbox)->get(2);
				if (this->spanhix <= this->rgnbndslox) {
					continue;
				}
				this->spanhiy = $nc(this->spanbox)->get(3);
				if (this->spanhiy <= this->rgnbndsloy) {
					continue;
				}
			}
			if (this->lwmloy > this->spanloy) {
				$nc(this->lwm)->copyStateFrom(this->resetState);
				$nc(this->lwm)->nextYRange(this->rgnbox);
				this->lwmloy = $nc(this->rgnbox)->get(1);
				this->lwmhiy = $nc(this->rgnbox)->get(3);
			}
			while (this->lwmhiy <= this->spanloy) {
				if (!$nc(this->lwm)->nextYRange(this->rgnbox)) {
					break;
				}
				this->lwmloy = $nc(this->rgnbox)->get(1);
				this->lwmhiy = $nc(this->rgnbox)->get(3);
			}
			if (this->lwmhiy > this->spanloy && this->lwmloy < this->spanhiy) {
				if (this->rgnloy != this->lwmloy) {
					$nc(this->row)->copyStateFrom(this->lwm);
					this->rgnloy = this->lwmloy;
					this->rgnhiy = this->lwmhiy;
				}
				$nc(this->box)->copyStateFrom(this->row);
				this->doNextBox = true;
				this->doNextSpan = false;
			}
			continue;
		}
		if (doNextRow) {
			doNextRow = false;
			bool ok = $nc(this->row)->nextYRange(this->rgnbox);
			if (ok) {
				this->rgnloy = $nc(this->rgnbox)->get(1);
				this->rgnhiy = $nc(this->rgnbox)->get(3);
			}
			if (!ok || this->rgnloy >= this->spanhiy) {
				this->doNextSpan = true;
			} else {
				$nc(this->box)->copyStateFrom(this->row);
				this->doNextBox = true;
			}
			continue;
		}
		if (this->doNextBox) {
			bool ok = $nc(this->box)->nextXBand(this->rgnbox);
			if (ok) {
				this->rgnlox = $nc(this->rgnbox)->get(0);
				this->rgnhix = $nc(this->rgnbox)->get(2);
			}
			if (!ok || this->rgnlox >= this->spanhix) {
				this->doNextBox = false;
				if (this->rgnhiy >= this->spanhiy) {
					this->doNextSpan = true;
				} else {
					doNextRow = true;
				}
			} else {
				this->doNextBox = this->rgnhix <= this->spanlox;
			}
			continue;
		}
		this->doNextBox = true;
		if (this->spanlox > this->rgnlox) {
			resultlox = this->spanlox;
		} else {
			resultlox = this->rgnlox;
		}
		if (this->spanloy > this->rgnloy) {
			resultloy = this->spanloy;
		} else {
			resultloy = this->rgnloy;
		}
		if (this->spanhix < this->rgnhix) {
			resulthix = this->spanhix;
		} else {
			resulthix = this->rgnhix;
		}
		if (this->spanhiy < this->rgnhiy) {
			resulthiy = this->spanhiy;
		} else {
			resulthiy = this->rgnhiy;
		}
		if (resultlox >= resulthix || resultloy >= resulthiy) {
			continue;
		} else {
			break;
		}
	}
	$nc(resultbox)->set(0, resultlox);
	resultbox->set(1, resultloy);
	resultbox->set(2, resulthix);
	resultbox->set(3, resulthiy);
	return true;
}

void RegionClipSpanIterator::skipDownTo(int32_t y) {
	$nc(this->spanIter)->skipDownTo(y);
}

int64_t RegionClipSpanIterator::getNativeIterator() {
	return 0;
}

RegionClipSpanIterator::RegionClipSpanIterator() {
}

$Class* RegionClipSpanIterator::load$($String* name, bool initialize) {
	$loadClass(RegionClipSpanIterator, name, initialize, &_RegionClipSpanIterator_ClassInfo_, allocate$RegionClipSpanIterator);
	return class$;
}

$Class* RegionClipSpanIterator::class$ = nullptr;

		} // pipe
	} // java2d
} // sun