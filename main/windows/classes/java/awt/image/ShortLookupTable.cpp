#include <java/awt/image/ShortLookupTable.h>

#include <java/awt/image/LookupTable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

using $shortArray2 = $Array<int16_t, 2>;
using $LookupTable = ::java::awt::image::LookupTable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ShortLookupTable_FieldInfo_[] = {
	{"data", "[[S", nullptr, 0, $field(ShortLookupTable, data)},
	{}
};

$MethodInfo _ShortLookupTable_MethodInfo_[] = {
	{"<init>", "(I[[S)V", nullptr, $PUBLIC, $method(static_cast<void(ShortLookupTable::*)(int32_t,$shortArray2*)>(&ShortLookupTable::init$))},
	{"<init>", "(I[S)V", nullptr, $PUBLIC, $method(static_cast<void(ShortLookupTable::*)(int32_t,$shorts*)>(&ShortLookupTable::init$))},
	{"getTable", "()[[S", nullptr, $PUBLIC | $FINAL, $method(static_cast<$shortArray2*(ShortLookupTable::*)()>(&ShortLookupTable::getTable))},
	{"lookupPixel", "([I[I)[I", nullptr, $PUBLIC},
	{"lookupPixel", "([S[S)[S", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ShortLookupTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.ShortLookupTable",
	"java.awt.image.LookupTable",
	nullptr,
	_ShortLookupTable_FieldInfo_,
	_ShortLookupTable_MethodInfo_
};

$Object* allocate$ShortLookupTable($Class* clazz) {
	return $of($alloc(ShortLookupTable));
}

void ShortLookupTable::init$(int32_t offset, $shortArray2* data) {
	$LookupTable::init$(offset, $nc(data)->length);
	this->numComponents = $nc(data)->length;
	this->numEntries = $nc(data->get(0))->length;
	$set(this, data, $new($shortArray2, this->numComponents));
	for (int32_t i = 0; i < this->numComponents; ++i) {
		$nc(this->data)->set(i, data->get(i));
	}
}

void ShortLookupTable::init$(int32_t offset, $shorts* data) {
	$LookupTable::init$(offset, $nc(data)->length);
	this->numComponents = 1;
	this->numEntries = $nc(data)->length;
	$set(this, data, $new($shortArray2, 1));
	$nc(this->data)->set(0, data);
}

$shortArray2* ShortLookupTable::getTable() {
	return this->data;
}

$ints* ShortLookupTable::lookupPixel($ints* src, $ints* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ints, dst, dst$renamed);
	if (dst == nullptr) {
		$assign(dst, $new($ints, $nc(src)->length));
	}
	if (this->numComponents == 1) {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = ((int32_t)(src->get(i) & (uint32_t)0x0000FFFF)) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, (int32_t)$nc($nc(this->data)->get(0))->get(s));
		}
	} else {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = ((int32_t)(src->get(i) & (uint32_t)0x0000FFFF)) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, (int32_t)$nc($nc(this->data)->get(i))->get(s));
		}
	}
	return dst;
}

$shorts* ShortLookupTable::lookupPixel($shorts* src, $shorts* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($shorts, dst, dst$renamed);
	if (dst == nullptr) {
		$assign(dst, $new($shorts, $nc(src)->length));
	}
	if (this->numComponents == 1) {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = ((int32_t)(src->get(i) & (uint32_t)0x0000FFFF)) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, $nc($nc(this->data)->get(0))->get(s));
		}
	} else {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = ((int32_t)(src->get(i) & (uint32_t)0x0000FFFF)) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, $nc($nc(this->data)->get(i))->get(s));
		}
	}
	return dst;
}

ShortLookupTable::ShortLookupTable() {
}

$Class* ShortLookupTable::load$($String* name, bool initialize) {
	$loadClass(ShortLookupTable, name, initialize, &_ShortLookupTable_ClassInfo_, allocate$ShortLookupTable);
	return class$;
}

$Class* ShortLookupTable::class$ = nullptr;

		} // image
	} // awt
} // java