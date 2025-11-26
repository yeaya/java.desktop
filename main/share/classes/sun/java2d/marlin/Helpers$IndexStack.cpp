#include <sun/java2d/marlin/Helpers$IndexStack.h>

#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/Helpers.h>
#include <sun/java2d/marlin/IntArrayCache$Reference.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef DO_STATS
#undef INITIAL_COUNT
#undef INITIAL_EDGES_COUNT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $Helpers = ::sun::java2d::marlin::Helpers;
using $IntArrayCache$Reference = ::sun::java2d::marlin::IntArrayCache$Reference;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $Histogram = ::sun::java2d::marlin::stats::Histogram;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _Helpers$IndexStack_FieldInfo_[] = {
	{"INITIAL_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Helpers$IndexStack, INITIAL_COUNT)},
	{"end", "I", nullptr, $PRIVATE, $field(Helpers$IndexStack, end)},
	{"indices", "[I", nullptr, $PRIVATE, $field(Helpers$IndexStack, indices)},
	{"indices_ref", "Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, $PRIVATE | $FINAL, $field(Helpers$IndexStack, indices_ref)},
	{"indicesUseMark", "I", nullptr, $PRIVATE, $field(Helpers$IndexStack, indicesUseMark)},
	{"stat_idxstack_indices", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $PRIVATE | $FINAL, $field(Helpers$IndexStack, stat_idxstack_indices)},
	{"hist_idxstack_indices", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $PRIVATE | $FINAL, $field(Helpers$IndexStack, hist_idxstack_indices)},
	{"stat_array_idxstack_indices", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $PRIVATE | $FINAL, $field(Helpers$IndexStack, stat_array_idxstack_indices)},
	{}
};

$MethodInfo _Helpers$IndexStack_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(Helpers$IndexStack::*)($RendererContext*)>(&Helpers$IndexStack::init$))},
	{"<init>", "(Lsun/java2d/marlin/RendererContext;Lsun/java2d/marlin/stats/StatLong;Lsun/java2d/marlin/stats/Histogram;Lsun/java2d/marlin/stats/StatLong;)V", nullptr, 0, $method(static_cast<void(Helpers$IndexStack::*)($RendererContext*,$StatLong*,$Histogram*,$StatLong*)>(&Helpers$IndexStack::init$))},
	{"dispose", "()V", nullptr, 0, $method(static_cast<void(Helpers$IndexStack::*)()>(&Helpers$IndexStack::dispose))},
	{"isEmpty", "()Z", nullptr, 0, $method(static_cast<bool(Helpers$IndexStack::*)()>(&Helpers$IndexStack::isEmpty))},
	{"pullAll", "([DLsun/java2d/marlin/DPathConsumer2D;)V", nullptr, 0, $method(static_cast<void(Helpers$IndexStack::*)($doubles*,$DPathConsumer2D*)>(&Helpers$IndexStack::pullAll))},
	{"push", "(I)V", nullptr, 0, $method(static_cast<void(Helpers$IndexStack::*)(int32_t)>(&Helpers$IndexStack::push))},
	{"reset", "()V", nullptr, 0, $method(static_cast<void(Helpers$IndexStack::*)()>(&Helpers$IndexStack::reset))},
	{}
};

$InnerClassInfo _Helpers$IndexStack_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.Helpers$IndexStack", "sun.java2d.marlin.Helpers", "IndexStack", $STATIC | $FINAL},
	{}
};

$ClassInfo _Helpers$IndexStack_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.Helpers$IndexStack",
	"java.lang.Object",
	nullptr,
	_Helpers$IndexStack_FieldInfo_,
	_Helpers$IndexStack_MethodInfo_,
	nullptr,
	nullptr,
	_Helpers$IndexStack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.Helpers"
};

$Object* allocate$Helpers$IndexStack($Class* clazz) {
	return $of($alloc(Helpers$IndexStack));
}

int32_t Helpers$IndexStack::INITIAL_COUNT = 0;

void Helpers$IndexStack::init$($RendererContext* rdrCtx) {
	Helpers$IndexStack::init$(rdrCtx, nullptr, nullptr, nullptr);
}

void Helpers$IndexStack::init$($RendererContext* rdrCtx, $StatLong* stat_idxstack_indices, $Histogram* hist_idxstack_indices, $StatLong* stat_array_idxstack_indices) {
	$set(this, indices_ref, $nc(rdrCtx)->newDirtyIntArrayRef(Helpers$IndexStack::INITIAL_COUNT));
	$set(this, indices, $nc(this->indices_ref)->initial);
	this->end = 0;
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		this->indicesUseMark = 0;
	}
	$set(this, stat_idxstack_indices, stat_idxstack_indices);
	$set(this, hist_idxstack_indices, hist_idxstack_indices);
	$set(this, stat_array_idxstack_indices, stat_array_idxstack_indices);
}

void Helpers$IndexStack::dispose() {
	this->end = 0;
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc(this->stat_idxstack_indices)->add(this->indicesUseMark);
		$nc(this->hist_idxstack_indices)->add(this->indicesUseMark);
		this->indicesUseMark = 0;
	}
	$set(this, indices, $nc(this->indices_ref)->putArray(this->indices));
}

bool Helpers$IndexStack::isEmpty() {
	return (this->end == 0);
}

void Helpers$IndexStack::reset() {
	this->end = 0;
}

void Helpers$IndexStack::push(int32_t v) {
	$var($ints, _values, this->indices);
	int32_t nc = this->end;
	if (nc != 0) {
		if ($nc(_values)->get(nc - 1) == v) {
			--this->end;
			return;
		}
	}
	if ($nc(_values)->length <= nc) {
		$init($MarlinConst);
		if ($MarlinConst::DO_STATS) {
			$nc(this->stat_array_idxstack_indices)->add(nc + 1);
		}
		$set(this, indices, ($assign(_values, $nc(this->indices_ref)->widenArray(_values, nc, nc + 1))));
	}
	$nc(_values)->set(this->end++, v);
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		if (this->end > this->indicesUseMark) {
			this->indicesUseMark = this->end;
		}
	}
}

void Helpers$IndexStack::pullAll($doubles* points, $DPathConsumer2D* io) {
	int32_t nc = this->end;
	if (nc == 0) {
		return;
	}
	$var($ints, _values, this->indices);
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < nc; ++i) {
			j = $nc(_values)->get(i) << 1;
			$nc(io)->lineTo($nc(points)->get(j), points->get(j + 1));
		}
	}
	this->end = 0;
}

void clinit$Helpers$IndexStack($Class* class$) {
	$init($MarlinConst);
	Helpers$IndexStack::INITIAL_COUNT = $MarlinConst::INITIAL_EDGES_COUNT >> 2;
}

Helpers$IndexStack::Helpers$IndexStack() {
}

$Class* Helpers$IndexStack::load$($String* name, bool initialize) {
	$loadClass(Helpers$IndexStack, name, initialize, &_Helpers$IndexStack_ClassInfo_, clinit$Helpers$IndexStack, allocate$Helpers$IndexStack);
	return class$;
}

$Class* Helpers$IndexStack::class$ = nullptr;

		} // marlin
	} // java2d
} // sun