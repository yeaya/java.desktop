#include <sun/java2d/loops/ProcessPath$ActiveEdgeList.h>

#include <sun/java2d/loops/ProcessPath$Edge.h>
#include <sun/java2d/loops/ProcessPath$Point.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$Edge = ::sun::java2d::loops::ProcessPath$Edge;
using $ProcessPath$Point = ::sun::java2d::loops::ProcessPath$Point;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ProcessPath$ActiveEdgeList_FieldInfo_[] = {
	{"head", "Lsun/java2d/loops/ProcessPath$Edge;", nullptr, 0, $field(ProcessPath$ActiveEdgeList, head)},
	{}
};

$MethodInfo _ProcessPath$ActiveEdgeList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProcessPath$ActiveEdgeList::*)()>(&ProcessPath$ActiveEdgeList::init$))},
	{"delete", "(Lsun/java2d/loops/ProcessPath$Edge;)V", nullptr, $PUBLIC},
	{"insert", "(Lsun/java2d/loops/ProcessPath$Point;I)V", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"sort", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessPath$ActiveEdgeList_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$ActiveEdgeList", "sun.java2d.loops.ProcessPath", "ActiveEdgeList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessPath$ActiveEdgeList_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.ProcessPath$ActiveEdgeList",
	"java.lang.Object",
	nullptr,
	_ProcessPath$ActiveEdgeList_FieldInfo_,
	_ProcessPath$ActiveEdgeList_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath$ActiveEdgeList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$ActiveEdgeList($Class* clazz) {
	return $of($alloc(ProcessPath$ActiveEdgeList));
}

void ProcessPath$ActiveEdgeList::init$() {
}

bool ProcessPath$ActiveEdgeList::isEmpty() {
	return (this->head == nullptr);
}

void ProcessPath$ActiveEdgeList::insert($ProcessPath$Point* pnt, int32_t cy) {
	$useLocalCurrentObjectStackCache();
	$var($ProcessPath$Point, np, $nc(pnt)->next);
	int32_t X1 = pnt->x;
	int32_t Y1 = pnt->y;
	int32_t X2 = $nc(np)->x;
	int32_t Y2 = np->y;
	$var($ProcessPath$Edge, ne, nullptr);
	if (Y1 == Y2) {
		return;
	} else {
		int32_t dX = X2 - X1;
		int32_t dY = Y2 - Y1;
		int32_t stepx = 0;
		int32_t x0 = 0;
		int32_t dy = 0;
		int32_t dir = 0;
		if (Y1 < Y2) {
			x0 = X1;
			dy = cy - Y1;
			dir = -1;
		} else {
			x0 = X2;
			dy = cy - Y2;
			dir = 1;
		}
		if (dX > 1048576.0f || dX < -1048576.0f) {
			stepx = $cast(int32_t, ((((double)dX) * 1024) / dY));
			x0 = x0 + $cast(int32_t, ((((double)dX) * dy) / dY));
		} else {
			stepx = $div((dX << 10), dY);
			x0 += $div((dX * dy), dY);
		}
		$assign(ne, $new($ProcessPath$Edge, pnt, x0, stepx, dir));
	}
	$set($nc(ne), next, this->head);
	$set(ne, prev, nullptr);
	if (this->head != nullptr) {
		$set($nc(this->head), prev, ne);
	}
	$set(this, head, ($set(pnt, edge, ne)));
}

void ProcessPath$ActiveEdgeList::delete$($ProcessPath$Edge* e) {
	$useLocalCurrentObjectStackCache();
	$var($ProcessPath$Edge, prevp, $nc(e)->prev);
	$var($ProcessPath$Edge, nextp, e->next);
	if (prevp != nullptr) {
		$set(prevp, next, nextp);
	} else {
		$set(this, head, nextp);
	}
	if (nextp != nullptr) {
		$set(nextp, prev, prevp);
	}
}

void ProcessPath$ActiveEdgeList::sort() {
	$useLocalCurrentObjectStackCache();
	$var($ProcessPath$Edge, p, nullptr);
	$var($ProcessPath$Edge, q, nullptr);
	$var($ProcessPath$Edge, r, nullptr);
	$var($ProcessPath$Edge, s, nullptr);
	$var($ProcessPath$Edge, temp, nullptr);
	bool wasSwap = true;
	while (s != $nc(this->head)->next && wasSwap) {
		$assign(r, ($assign(p, this->head)));
		$assign(q, $nc(p)->next);
		wasSwap = false;
		while (p != s) {
			if (p->x >= $nc(q)->x) {
				wasSwap = true;
				if (p == this->head) {
					$assign(temp, q->next);
					$set(q, next, p);
					$set(p, next, temp);
					$set(this, head, q);
					$assign(r, q);
				} else {
					$assign(temp, q->next);
					$set(q, next, p);
					$set(p, next, temp);
					$set($nc(r), next, q);
					$assign(r, q);
				}
			} else {
				$assign(r, p);
				$assign(p, p->next);
			}
			$assign(q, p->next);
			if (q == s) {
				$assign(s, p);
			}
		}
	}
	$assign(p, this->head);
	$assign(q, nullptr);
	while (p != nullptr) {
		$set(p, prev, q);
		$assign(q, p);
		$assign(p, p->next);
	}
}

ProcessPath$ActiveEdgeList::ProcessPath$ActiveEdgeList() {
}

$Class* ProcessPath$ActiveEdgeList::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$ActiveEdgeList, name, initialize, &_ProcessPath$ActiveEdgeList_ClassInfo_, allocate$ProcessPath$ActiveEdgeList);
	return class$;
}

$Class* ProcessPath$ActiveEdgeList::class$ = nullptr;

		} // loops
	} // java2d
} // sun