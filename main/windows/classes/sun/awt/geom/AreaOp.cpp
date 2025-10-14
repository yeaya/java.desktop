#include <sun/awt/geom/AreaOp.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <sun/awt/geom/AreaOp$1.h>
#include <sun/awt/geom/ChainEnd.h>
#include <sun/awt/geom/Curve.h>
#include <sun/awt/geom/CurveLink.h>
#include <sun/awt/geom/Edge.h>
#include <jcpp.h>

#undef CTAG_LEFT
#undef CTAG_RIGHT
#undef ETAG_ENTER
#undef ETAG_EXIT
#undef ETAG_IGNORE
#undef RSTAG_INSIDE
#undef RSTAG_OUTSIDE

using $ChainEndArray = $Array<::sun::awt::geom::ChainEnd>;
using $CurveLinkArray = $Array<::sun::awt::geom::CurveLink>;
using $EdgeArray = $Array<::sun::awt::geom::Edge>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AreaOp$1 = ::sun::awt::geom::AreaOp$1;
using $ChainEnd = ::sun::awt::geom::ChainEnd;
using $Curve = ::sun::awt::geom::Curve;
using $CurveLink = ::sun::awt::geom::CurveLink;
using $Edge = ::sun::awt::geom::Edge;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _AreaOp_FieldInfo_[] = {
	{"CTAG_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AreaOp, CTAG_LEFT)},
	{"CTAG_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AreaOp, CTAG_RIGHT)},
	{"ETAG_IGNORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AreaOp, ETAG_IGNORE)},
	{"ETAG_ENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AreaOp, ETAG_ENTER)},
	{"ETAG_EXIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AreaOp, ETAG_EXIT)},
	{"RSTAG_INSIDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AreaOp, RSTAG_INSIDE)},
	{"RSTAG_OUTSIDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AreaOp, RSTAG_OUTSIDE)},
	{"YXTopComparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<Lsun/awt/geom/Edge;>;", $PRIVATE | $STATIC, $staticField(AreaOp, YXTopComparator)},
	{"EmptyLinkList", "[Lsun/awt/geom/CurveLink;", nullptr, $PRIVATE | $STATIC, $staticField(AreaOp, EmptyLinkList)},
	{"EmptyChainList", "[Lsun/awt/geom/ChainEnd;", nullptr, $PRIVATE | $STATIC, $staticField(AreaOp, EmptyChainList)},
	{}
};

$MethodInfo _AreaOp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AreaOp::*)()>(&AreaOp::init$))},
	{"addEdges", "(Ljava/util/Vector;Ljava/util/Vector;I)V", "(Ljava/util/Vector<Lsun/awt/geom/Edge;>;Ljava/util/Vector<Lsun/awt/geom/Curve;>;I)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Vector*,$Vector*,int32_t)>(&AreaOp::addEdges))},
	{"calculate", "(Ljava/util/Vector;Ljava/util/Vector;)Ljava/util/Vector;", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;Ljava/util/Vector<Lsun/awt/geom/Curve;>;)Ljava/util/Vector<Lsun/awt/geom/Curve;>;", $PUBLIC},
	{"classify", "(Lsun/awt/geom/Edge;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"finalizeSubCurves", "(Ljava/util/Vector;Ljava/util/Vector;)V", "(Ljava/util/Vector<Lsun/awt/geom/CurveLink;>;Ljava/util/Vector<Lsun/awt/geom/ChainEnd;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,$Vector*)>(&AreaOp::finalizeSubCurves))},
	{"getState", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"newRow", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"obstructs", "(DDI)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(double,double,int32_t)>(&AreaOp::obstructs))},
	{"pruneEdges", "(Ljava/util/Vector;)Ljava/util/Vector;", "(Ljava/util/Vector<Lsun/awt/geom/Edge;>;)Ljava/util/Vector<Lsun/awt/geom/Curve;>;", $PRIVATE, $method(static_cast<$Vector*(AreaOp::*)($Vector*)>(&AreaOp::pruneEdges))},
	{"resolveLinks", "(Ljava/util/Vector;Ljava/util/Vector;Ljava/util/Vector;)V", "(Ljava/util/Vector<Lsun/awt/geom/CurveLink;>;Ljava/util/Vector<Lsun/awt/geom/ChainEnd;>;Ljava/util/Vector<Lsun/awt/geom/CurveLink;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,$Vector*,$Vector*)>(&AreaOp::resolveLinks))},
	{}
};

$InnerClassInfo _AreaOp_InnerClassesInfo_[] = {
	{"sun.awt.geom.AreaOp$EOWindOp", "sun.awt.geom.AreaOp", "EOWindOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$NZWindOp", "sun.awt.geom.AreaOp", "NZWindOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$XorOp", "sun.awt.geom.AreaOp", "XorOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$IntOp", "sun.awt.geom.AreaOp", "IntOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$SubOp", "sun.awt.geom.AreaOp", "SubOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$AddOp", "sun.awt.geom.AreaOp", "AddOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
	{"sun.awt.geom.AreaOp$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AreaOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.geom.AreaOp",
	"java.lang.Object",
	nullptr,
	_AreaOp_FieldInfo_,
	_AreaOp_MethodInfo_,
	nullptr,
	nullptr,
	_AreaOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.geom.AreaOp$EOWindOp,sun.awt.geom.AreaOp$NZWindOp,sun.awt.geom.AreaOp$XorOp,sun.awt.geom.AreaOp$IntOp,sun.awt.geom.AreaOp$SubOp,sun.awt.geom.AreaOp$AddOp,sun.awt.geom.AreaOp$CAGOp,sun.awt.geom.AreaOp$1"
};

$Object* allocate$AreaOp($Class* clazz) {
	return $of($alloc(AreaOp));
}

$Comparator* AreaOp::YXTopComparator = nullptr;
$CurveLinkArray* AreaOp::EmptyLinkList = nullptr;
$ChainEndArray* AreaOp::EmptyChainList = nullptr;

void AreaOp::init$() {
}

$Vector* AreaOp::calculate($Vector* left, $Vector* right) {
	$var($Vector, edges, $new($Vector));
	addEdges(edges, left, AreaOp::CTAG_LEFT);
	addEdges(edges, right, AreaOp::CTAG_RIGHT);
	$var($Vector, curves, pruneEdges(edges));
	return curves;
}

void AreaOp::addEdges($Vector* edges, $Vector* curves, int32_t curvetag) {
	$init(AreaOp);
	$var($Enumeration, enum_, $nc(curves)->elements());
	while ($nc(enum_)->hasMoreElements()) {
		$var($Curve, c, $cast($Curve, enum_->nextElement()));
		if ($nc(c)->getOrder() > 0) {
			$nc(edges)->add($$new($Edge, c, curvetag));
		}
	}
}

$Vector* AreaOp::pruneEdges($Vector* edges) {
	int32_t numedges = $nc(edges)->size();
	if (numedges < 2) {
		return $new($Vector);
	}
	$var($EdgeArray, edgelist, $fcast($EdgeArray, edges->toArray($$new($EdgeArray, numedges))));
	$Arrays::sort(edgelist, AreaOp::YXTopComparator);
	$var($Edge, e, nullptr);
	int32_t left = 0;
	int32_t right = 0;
	int32_t cur = 0;
	int32_t next = 0;
	$var($doubles, yrange, $new($doubles, 2));
	$var($Vector, subcurves, $new($Vector));
	$var($Vector, chains, $new($Vector));
	$var($Vector, links, $new($Vector));
	while (left < numedges) {
		double y = yrange->get(0);
		for (cur = (next = right - 1); cur >= left; --cur) {
			$assign(e, $nc(edgelist)->get(cur));
			if ($nc($($nc(e)->getCurve()))->getYBot() > y) {
				if (next > cur) {
					edgelist->set(next, e);
				}
				--next;
			}
		}
		left = next + 1;
		if (left >= right) {
			if (right >= numedges) {
				break;
			}
			y = $nc($($nc($nc(edgelist)->get(right))->getCurve()))->getYTop();
			if (y > yrange->get(0)) {
				finalizeSubCurves(subcurves, chains);
			}
			yrange->set(0, y);
		}
		while (right < numedges) {
			$assign(e, $nc(edgelist)->get(right));
			if ($nc($($nc(e)->getCurve()))->getYTop() > y) {
				break;
			}
			++right;
		}
		yrange->set(1, $nc($($nc($nc(edgelist)->get(left))->getCurve()))->getYBot());
		if (right < numedges) {
			y = $nc($($nc(edgelist->get(right))->getCurve()))->getYTop();
			if (yrange->get(1) > y) {
				yrange->set(1, y);
			}
		}
		int32_t nexteq = 1;
		for (cur = left; cur < right; ++cur) {
			$assign(e, edgelist->get(cur));
			$nc(e)->setEquivalence(0);
			for (next = cur; next > left; --next) {
				$var($Edge, prevedge, edgelist->get(next - 1));
				int32_t ordering = e->compareTo(prevedge, yrange);
				if (yrange->get(1) <= yrange->get(0)) {
					$throwNew($InternalError, $$str({"backstepping to "_s, $$str(yrange->get(1)), " from "_s, $$str(yrange->get(0))}));
				}
				if (ordering >= 0) {
					if (ordering == 0) {
						int32_t eq = $nc(prevedge)->getEquivalence();
						if (eq == 0) {
							eq = nexteq++;
							prevedge->setEquivalence(eq);
						}
						e->setEquivalence(eq);
					}
					break;
				}
				edgelist->set(next, prevedge);
			}
			edgelist->set(next, e);
		}
		newRow();
		double ystart = yrange->get(0);
		double yend = yrange->get(1);
		for (cur = left; cur < right; ++cur) {
			$assign(e, edgelist->get(cur));
			int32_t etag = 0;
			int32_t eq = $nc(e)->getEquivalence();
			if (eq != 0) {
				int32_t origstate = getState();
				etag = (origstate == AreaOp::RSTAG_INSIDE ? AreaOp::ETAG_EXIT : AreaOp::ETAG_ENTER);
				$var($Edge, activematch, nullptr);
				$var($Edge, longestmatch, e);
				double furthesty = yend;
				bool var$0 = false;
				do {
					classify(e);
					if (activematch == nullptr && e->isActiveFor(ystart, etag)) {
						$assign(activematch, e);
					}
					y = $nc($(e->getCurve()))->getYBot();
					if (y > furthesty) {
						$assign(longestmatch, e);
						furthesty = y;
					}
					var$0 = ++cur < right;
				} while (var$0 && $nc(($assign(e, edgelist->get(cur))))->getEquivalence() == eq);
				--cur;
				if (getState() == origstate) {
					etag = AreaOp::ETAG_IGNORE;
				} else {
					$assign(e, activematch != nullptr ? activematch : longestmatch);
				}
			} else {
				etag = classify(e);
			}
			if (etag != AreaOp::ETAG_IGNORE) {
				e->record(yend, etag);
				links->add($$new($CurveLink, $(e->getCurve()), ystart, yend, etag));
			}
		}
		if (getState() != AreaOp::RSTAG_OUTSIDE) {
			$init($System);
			$nc($System::out)->println("Still inside at end of active edge list!"_s);
			$nc($System::out)->println($$str({"num curves = "_s, $$str((right - left))}));
			$nc($System::out)->println($$str({"num links = "_s, $$str(links->size())}));
			$nc($System::out)->println($$str({"y top = "_s, $$str(yrange->get(0))}));
			if (right < numedges) {
				$nc($System::out)->println($$str({"y top of next curve = "_s, $$str($nc($($nc(edgelist->get(right))->getCurve()))->getYTop())}));
			} else {
				$nc($System::out)->println("no more curves"_s);
			}
			for (cur = left; cur < right; ++cur) {
				$assign(e, edgelist->get(cur));
				$nc($System::out)->println($of(e));
				int32_t eq = $nc(e)->getEquivalence();
				if (eq != 0) {
					$nc($System::out)->println($$str({"  was equal to "_s, $$str(eq), "..."_s}));
				}
			}
		}
		resolveLinks(subcurves, chains, links);
		links->clear();
		yrange->set(0, yend);
	}
	finalizeSubCurves(subcurves, chains);
	$var($Vector, ret, $new($Vector));
	$var($Enumeration, enum_, subcurves->elements());
	while ($nc(enum_)->hasMoreElements()) {
		$var($CurveLink, link, $cast($CurveLink, enum_->nextElement()));
		ret->add($($nc(link)->getMoveto()));
		$var($CurveLink, nextlink, link);
		while (($assign(nextlink, $nc(nextlink)->getNext())) != nullptr) {
			if (!$nc(link)->absorb(nextlink)) {
				ret->add($(link->getSubCurve()));
				$assign(link, nextlink);
			}
		}
		ret->add($($nc(link)->getSubCurve()));
	}
	return ret;
}

void AreaOp::finalizeSubCurves($Vector* subcurves, $Vector* chains) {
	$init(AreaOp);
	int32_t numchains = $nc(chains)->size();
	if (numchains == 0) {
		return;
	}
	if (((int32_t)(numchains & (uint32_t)1)) != 0) {
		$throwNew($InternalError, "Odd number of chains!"_s);
	}
	$var($ChainEndArray, endlist, $new($ChainEndArray, numchains));
	chains->toArray(endlist);
	for (int32_t i = 1; i < numchains; i += 2) {
		$var($ChainEnd, open, endlist->get(i - 1));
		$var($ChainEnd, close, endlist->get(i));
		$var($CurveLink, subcurve, $nc(open)->linkTo(close));
		if (subcurve != nullptr) {
			$nc(subcurves)->add(subcurve);
		}
	}
	chains->clear();
}

void AreaOp::resolveLinks($Vector* subcurves, $Vector* chains, $Vector* links) {
	$init(AreaOp);
	int32_t numlinks = $nc(links)->size();
	$var($CurveLinkArray, linklist, nullptr);
	if (numlinks == 0) {
		$assign(linklist, AreaOp::EmptyLinkList);
	} else {
		if (((int32_t)(numlinks & (uint32_t)1)) != 0) {
			$throwNew($InternalError, "Odd number of new curves!"_s);
		}
		$assign(linklist, $new($CurveLinkArray, numlinks + 2));
		links->toArray(linklist);
	}
	int32_t numchains = $nc(chains)->size();
	$var($ChainEndArray, endlist, nullptr);
	if (numchains == 0) {
		$assign(endlist, AreaOp::EmptyChainList);
	} else {
		if (((int32_t)(numchains & (uint32_t)1)) != 0) {
			$throwNew($InternalError, "Odd number of chains!"_s);
		}
		$assign(endlist, $new($ChainEndArray, numchains + 2));
		chains->toArray(endlist);
	}
	int32_t curchain = 0;
	int32_t curlink = 0;
	chains->clear();
	$var($ChainEnd, chain, $nc(endlist)->get(0));
	$var($ChainEnd, nextchain, endlist->get(1));
	$var($CurveLink, link, $nc(linklist)->get(0));
	$var($CurveLink, nextlink, linklist->get(1));
	while (chain != nullptr || link != nullptr) {
		bool connectchains = (link == nullptr);
		bool connectlinks = (chain == nullptr);
		if (!connectchains && !connectlinks) {
			bool var$0 = ((int32_t)(curchain & (uint32_t)1)) == 0;
			if (var$0) {
				double var$1 = $nc(chain)->getX();
				var$0 = var$1 == $nc(nextchain)->getX();
			}
			connectchains = (var$0);
			bool var$2 = ((int32_t)(curlink & (uint32_t)1)) == 0;
			if (var$2) {
				double var$3 = link->getX();
				var$2 = var$3 == $nc(nextlink)->getX();
			}
			connectlinks = (var$2);
			if (!connectchains && !connectlinks) {
				double cx = chain->getX();
				double lx = link->getX();
				connectchains = (nextchain != nullptr && cx < lx && obstructs(nextchain->getX(), lx, curchain));
				connectlinks = (nextlink != nullptr && lx < cx && obstructs(nextlink->getX(), cx, curlink));
			}
		}
		if (connectchains) {
			$var($CurveLink, subcurve, $nc(chain)->linkTo(nextchain));
			if (subcurve != nullptr) {
				$nc(subcurves)->add(subcurve);
			}
			curchain += 2;
			$assign(chain, endlist->get(curchain));
			$assign(nextchain, endlist->get(curchain + 1));
		}
		if (connectlinks) {
			$var($ChainEnd, openend, $new($ChainEnd, link, nullptr));
			$var($ChainEnd, closeend, $new($ChainEnd, nextlink, openend));
			openend->setOtherEnd(closeend);
			chains->add(openend);
			chains->add(closeend);
			curlink += 2;
			$assign(link, linklist->get(curlink));
			$assign(nextlink, linklist->get(curlink + 1));
		}
		if (!connectchains && !connectlinks) {
			$nc(chain)->addLink(link);
			chains->add(chain);
			++curchain;
			$assign(chain, nextchain);
			$assign(nextchain, endlist->get(curchain + 1));
			++curlink;
			$assign(link, nextlink);
			$assign(nextlink, linklist->get(curlink + 1));
		}
	}
	if (((int32_t)(chains->size() & (uint32_t)1)) != 0) {
		$init($System);
		$nc($System::out)->println("Odd number of chains!"_s);
	}
}

bool AreaOp::obstructs(double v1, double v2, int32_t phase) {
	$init(AreaOp);
	return ((((int32_t)(phase & (uint32_t)1)) == 0) ? (v1 <= v2) : (v1 < v2));
}

void clinit$AreaOp($Class* class$) {
	$assignStatic(AreaOp::YXTopComparator, $new($AreaOp$1));
	$assignStatic(AreaOp::EmptyLinkList, $new($CurveLinkArray, 2));
	$assignStatic(AreaOp::EmptyChainList, $new($ChainEndArray, 2));
}

AreaOp::AreaOp() {
}

$Class* AreaOp::load$($String* name, bool initialize) {
	$loadClass(AreaOp, name, initialize, &_AreaOp_ClassInfo_, clinit$AreaOp, allocate$AreaOp);
	return class$;
}

$Class* AreaOp::class$ = nullptr;

		} // geom
	} // awt
} // sun