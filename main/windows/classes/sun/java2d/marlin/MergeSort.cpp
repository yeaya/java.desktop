#include <sun/java2d/marlin/MergeSort.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

#undef INSERTION_SORT_THRESHOLD

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _MergeSort_FieldInfo_[] = {
	{"INSERTION_SORT_THRESHOLD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MergeSort, INSERTION_SORT_THRESHOLD)},
	{}
};

$MethodInfo _MergeSort_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MergeSort::*)()>(&MergeSort::init$))},
	{"mergeSort", "([I[I[I[I[I[III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,$ints*,$ints*,$ints*,$ints*,$ints*,int32_t,int32_t)>(&MergeSort::mergeSort))},
	{"mergeSortNoCopy", "([I[I[I[III)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,$ints*,$ints*,$ints*,int32_t,int32_t)>(&MergeSort::mergeSortNoCopy))},
	{}
};

$ClassInfo _MergeSort_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.MergeSort",
	"java.lang.Object",
	nullptr,
	_MergeSort_FieldInfo_,
	_MergeSort_MethodInfo_
};

$Object* allocate$MergeSort($Class* clazz) {
	return $of($alloc(MergeSort));
}

void MergeSort::mergeSortNoCopy($ints* x, $ints* y, $ints* auxX, $ints* auxY, int32_t toIndex, int32_t insertionSortIndex) {
	$useLocalCurrentObjectStackCache();
	if ((toIndex > $nc(x)->length) || (toIndex > $nc(y)->length) || (toIndex > $nc(auxX)->length) || (toIndex > $nc(auxY)->length)) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"bad arguments: toIndex="_s, $$str(toIndex)}));
	}
	mergeSort(x, y, x, auxX, y, auxY, insertionSortIndex, toIndex);
	if ((insertionSortIndex == 0) || ($nc(auxX)->get(insertionSortIndex - 1) <= auxX->get(insertionSortIndex))) {
		$System::arraycopy(auxX, 0, x, 0, toIndex);
		$System::arraycopy(auxY, 0, y, 0, toIndex);
		return;
	}
	{
		int32_t i = 0;
		int32_t p = 0;
		int32_t q = insertionSortIndex;
		for (; i < toIndex; ++i) {
			if ((q >= toIndex) || ((p < insertionSortIndex) && ($nc(auxX)->get(p) <= auxX->get(q)))) {
				$nc(x)->set(i, auxX->get(p));
				$nc(y)->set(i, $nc(auxY)->get(p));
				++p;
			} else {
				$nc(x)->set(i, auxX->get(q));
				$nc(y)->set(i, $nc(auxY)->get(q));
				++q;
			}
		}
	}
}

void MergeSort::mergeSort($ints* refX, $ints* refY, $ints* srcX, $ints* dstX, $ints* srcY, $ints* dstY, int32_t low, int32_t high) {
	int32_t length = high - low;
	if (length <= MergeSort::INSERTION_SORT_THRESHOLD) {
		$nc(dstX)->set(low, $nc(refX)->get(low));
		$nc(dstY)->set(low, $nc(refY)->get(low));
		{
			int32_t i = low + 1;
			int32_t j = low;
			int32_t x = 0;
			int32_t y = 0;
			for (; i < high; j = i++) {
				x = refX->get(i);
				y = refY->get(i);
				while (dstX->get(j) > x) {
					dstX->set(j + 1, dstX->get(j));
					dstY->set(j + 1, dstY->get(j));
					if (j-- == low) {
						break;
					}
				}
				dstX->set(j + 1, x);
				dstY->set(j + 1, y);
			}
		}
		return;
	}
	int32_t mid = (low + high) >> 1;
	mergeSort(refX, refY, dstX, srcX, dstY, srcY, low, mid);
	mergeSort(refX, refY, dstX, srcX, dstY, srcY, mid, high);
	if ($nc(srcX)->get(high - 1) <= srcX->get(low)) {
		int32_t left = mid - low;
		int32_t right = high - mid;
		int32_t off = (left != right) ? 1 : 0;
		$System::arraycopy(srcX, low, dstX, mid + off, left);
		$System::arraycopy(srcX, mid, dstX, low, right);
		$System::arraycopy(srcY, low, dstY, mid + off, left);
		$System::arraycopy(srcY, mid, dstY, low, right);
		return;
	}
	if ($nc(srcX)->get(mid - 1) <= srcX->get(mid)) {
		$System::arraycopy(srcX, low, dstX, low, length);
		$System::arraycopy(srcY, low, dstY, low, length);
		return;
	}
	{
		int32_t i = low;
		int32_t p = low;
		int32_t q = mid;
		for (; i < high; ++i) {
			if ((q >= high) || ((p < mid) && ($nc(srcX)->get(p) <= srcX->get(q)))) {
				$nc(dstX)->set(i, srcX->get(p));
				$nc(dstY)->set(i, $nc(srcY)->get(p));
				++p;
			} else {
				$nc(dstX)->set(i, srcX->get(q));
				$nc(dstY)->set(i, $nc(srcY)->get(q));
				++q;
			}
		}
	}
}

void MergeSort::init$() {
}

MergeSort::MergeSort() {
}

$Class* MergeSort::load$($String* name, bool initialize) {
	$loadClass(MergeSort, name, initialize, &_MergeSort_ClassInfo_, allocate$MergeSort);
	return class$;
}

$Class* MergeSort::class$ = nullptr;

		} // marlin
	} // java2d
} // sun