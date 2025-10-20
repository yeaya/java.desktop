#include <com/sun/imageio/plugins/png/RowFilter.h>

#include <com/sun/imageio/plugins/png/PNGImageReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef PNG_COLOR_PALETTE

using $byteArray2 = $Array<int8_t, 2>;
using $PNGImageReader = ::com::sun::imageio::plugins::png::PNGImageReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$MethodInfo _RowFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RowFilter::*)()>(&RowFilter::init$))},
	{"abs", "(I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&RowFilter::abs))},
	{"filterRow", "(I[B[B[[BII)I", nullptr, $PUBLIC},
	{"paethPredictor", "(III)I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(RowFilter::*)(int32_t,int32_t,int32_t)>(&RowFilter::paethPredictor))},
	{"subFilter", "([B[BII)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*,int32_t,int32_t)>(&RowFilter::subFilter))},
	{"upFilter", "([B[B[BII)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*,$bytes*,int32_t,int32_t)>(&RowFilter::upFilter))},
	{}
};

$ClassInfo _RowFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.png.RowFilter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RowFilter_MethodInfo_
};

$Object* allocate$RowFilter($Class* clazz) {
	return $of($alloc(RowFilter));
}

void RowFilter::init$() {
}

int32_t RowFilter::abs(int32_t x) {
	return (x < 0) ? -x : x;
}

int32_t RowFilter::subFilter($bytes* currRow, $bytes* subFilteredRow, int32_t bytesPerPixel, int32_t bytesPerRow) {
	int32_t badness = 0;
	for (int32_t i = bytesPerPixel; i < bytesPerRow + bytesPerPixel; ++i) {
		int32_t curr = (int32_t)($nc(currRow)->get(i) & (uint32_t)255);
		int32_t left = (int32_t)(currRow->get(i - bytesPerPixel) & (uint32_t)255);
		int32_t difference = curr - left;
		$nc(subFilteredRow)->set(i, (int8_t)difference);
		badness += abs(difference);
	}
	return badness;
}

int32_t RowFilter::upFilter($bytes* currRow, $bytes* prevRow, $bytes* upFilteredRow, int32_t bytesPerPixel, int32_t bytesPerRow) {
	int32_t badness = 0;
	for (int32_t i = bytesPerPixel; i < bytesPerRow + bytesPerPixel; ++i) {
		int32_t curr = (int32_t)($nc(currRow)->get(i) & (uint32_t)255);
		int32_t up = (int32_t)($nc(prevRow)->get(i) & (uint32_t)255);
		int32_t difference = curr - up;
		$nc(upFilteredRow)->set(i, (int8_t)difference);
		badness += abs(difference);
	}
	return badness;
}

int32_t RowFilter::paethPredictor(int32_t a, int32_t b, int32_t c) {
	int32_t p = a + b - c;
	int32_t pa = abs(p - a);
	int32_t pb = abs(p - b);
	int32_t pc = abs(p - c);
	if ((pa <= pb) && (pa <= pc)) {
		return a;
	} else if (pb <= pc) {
		return b;
	} else {
		return c;
	}
}

int32_t RowFilter::filterRow(int32_t colorType, $bytes* currRow, $bytes* prevRow, $byteArray2* scratchRows, int32_t bytesPerRow, int32_t bytesPerPixel) {
	$useLocalCurrentObjectStackCache();
	if (colorType != $PNGImageReader::PNG_COLOR_PALETTE) {
		$System::arraycopy(currRow, bytesPerPixel, $nc(scratchRows)->get(0), bytesPerPixel, bytesPerRow);
		return 0;
	}
	$var($ints, filterBadness, $new($ints, 5));
	for (int32_t i = 0; i < 5; ++i) {
		filterBadness->set(i, $Integer::MAX_VALUE);
	}
	{
		int32_t badness = 0;
		for (int32_t i = bytesPerPixel; i < bytesPerRow + bytesPerPixel; ++i) {
			int32_t curr = (int32_t)($nc(currRow)->get(i) & (uint32_t)255);
			badness += curr;
		}
		filterBadness->set(0, badness);
	}
	{
		$var($bytes, subFilteredRow, $nc(scratchRows)->get(1));
		int32_t badness = subFilter(currRow, subFilteredRow, bytesPerPixel, bytesPerRow);
		filterBadness->set(1, badness);
	}
	{
		$var($bytes, upFilteredRow, $nc(scratchRows)->get(2));
		int32_t badness = upFilter(currRow, prevRow, upFilteredRow, bytesPerPixel, bytesPerRow);
		filterBadness->set(2, badness);
	}
	{
		$var($bytes, averageFilteredRow, $nc(scratchRows)->get(3));
		int32_t badness = 0;
		for (int32_t i = bytesPerPixel; i < bytesPerRow + bytesPerPixel; ++i) {
			int32_t curr = (int32_t)($nc(currRow)->get(i) & (uint32_t)255);
			int32_t left = (int32_t)(currRow->get(i - bytesPerPixel) & (uint32_t)255);
			int32_t up = (int32_t)($nc(prevRow)->get(i) & (uint32_t)255);
			int32_t difference = curr - (left + up) / 2;
			$nc(averageFilteredRow)->set(i, (int8_t)difference);
			badness += abs(difference);
		}
		filterBadness->set(3, badness);
	}
	{
		$var($bytes, paethFilteredRow, $nc(scratchRows)->get(4));
		int32_t badness = 0;
		for (int32_t i = bytesPerPixel; i < bytesPerRow + bytesPerPixel; ++i) {
			int32_t curr = (int32_t)($nc(currRow)->get(i) & (uint32_t)255);
			int32_t left = (int32_t)(currRow->get(i - bytesPerPixel) & (uint32_t)255);
			int32_t up = (int32_t)($nc(prevRow)->get(i) & (uint32_t)255);
			int32_t upleft = (int32_t)(prevRow->get(i - bytesPerPixel) & (uint32_t)255);
			int32_t predictor = paethPredictor(left, up, upleft);
			int32_t difference = curr - predictor;
			$nc(paethFilteredRow)->set(i, (int8_t)difference);
			badness += abs(difference);
		}
		filterBadness->set(4, badness);
	}
	int32_t minBadness = filterBadness->get(0);
	int32_t filterType = 0;
	for (int32_t i = 1; i < 5; ++i) {
		if (filterBadness->get(i) < minBadness) {
			minBadness = filterBadness->get(i);
			filterType = i;
		}
	}
	if (filterType == 0) {
		$System::arraycopy(currRow, bytesPerPixel, $nc(scratchRows)->get(0), bytesPerPixel, bytesPerRow);
	}
	return filterType;
}

RowFilter::RowFilter() {
}

$Class* RowFilter::load$($String* name, bool initialize) {
	$loadClass(RowFilter, name, initialize, &_RowFilter_ClassInfo_, allocate$RowFilter);
	return class$;
}

$Class* RowFilter::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com