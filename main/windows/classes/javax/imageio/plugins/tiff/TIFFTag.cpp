#include <javax/imageio/plugins/tiff/TIFFTag.h>

#include <java/util/Iterator.h>
#include <java/util/NavigableMap.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/TreeMap.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

#undef DISALLOWED_DATATYPES_MASK
#undef MAX_DATATYPE
#undef MIN_DATATYPE
#undef SIZE_OF_TYPE
#undef TIFF_ASCII
#undef TIFF_BYTE
#undef TIFF_DOUBLE
#undef TIFF_FLOAT
#undef TIFF_IFD_POINTER
#undef TIFF_LONG
#undef TIFF_RATIONAL
#undef TIFF_SBYTE
#undef TIFF_SHORT
#undef TIFF_SLONG
#undef TIFF_SRATIONAL
#undef TIFF_SSHORT
#undef TIFF_UNDEFINED
#undef UNKNOWN_TAG_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $NavigableMap = ::java::util::NavigableMap;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $TreeMap = ::java::util::TreeMap;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _TIFFTag_FieldInfo_[] = {
	{"TIFF_BYTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_BYTE)},
	{"TIFF_ASCII", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_ASCII)},
	{"TIFF_SHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_SHORT)},
	{"TIFF_LONG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_LONG)},
	{"TIFF_RATIONAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_RATIONAL)},
	{"TIFF_SBYTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_SBYTE)},
	{"TIFF_UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_UNDEFINED)},
	{"TIFF_SSHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_SSHORT)},
	{"TIFF_SLONG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_SLONG)},
	{"TIFF_SRATIONAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_SRATIONAL)},
	{"TIFF_FLOAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_FLOAT)},
	{"TIFF_DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_DOUBLE)},
	{"TIFF_IFD_POINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, TIFF_IFD_POINTER)},
	{"MIN_DATATYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, MIN_DATATYPE)},
	{"MAX_DATATYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TIFFTag, MAX_DATATYPE)},
	{"UNKNOWN_TAG_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TIFFTag, UNKNOWN_TAG_NAME)},
	{"DISALLOWED_DATATYPES_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFTag, DISALLOWED_DATATYPES_MASK)},
	{"SIZE_OF_TYPE", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFTag, SIZE_OF_TYPE)},
	{"number", "I", nullptr, $PRIVATE, $field(TIFFTag, number)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TIFFTag, name)},
	{"dataTypes", "I", nullptr, $PRIVATE, $field(TIFFTag, dataTypes)},
	{"count", "I", nullptr, $PRIVATE, $field(TIFFTag, count)},
	{"tagSet", "Ljavax/imageio/plugins/tiff/TIFFTagSet;", nullptr, $PRIVATE, $field(TIFFTag, tagSet)},
	{"valueNames", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<Ljava/lang/Integer;Ljava/lang/String;>;", $PRIVATE, $field(TIFFTag, valueNames)},
	{}
};

$MethodInfo _TIFFTag_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;III)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFTag::*)($String*,int32_t,int32_t,int32_t)>(&TIFFTag::init$))},
	{"<init>", "(Ljava/lang/String;ILjavax/imageio/plugins/tiff/TIFFTagSet;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFTag::*)($String*,int32_t,$TIFFTagSet*)>(&TIFFTag::init$))},
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFTag::*)($String*,int32_t,int32_t)>(&TIFFTag::init$))},
	{"addValueName", "(ILjava/lang/String;)V", nullptr, $PROTECTED},
	{"getCount", "()I", nullptr, $PUBLIC},
	{"getDataTypes", "()I", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamedValues", "()[I", nullptr, $PUBLIC},
	{"getNumber", "()I", nullptr, $PUBLIC},
	{"getSizeOfType", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&TIFFTag::getSizeOfType))},
	{"getTagSet", "()Ljavax/imageio/plugins/tiff/TIFFTagSet;", nullptr, $PUBLIC},
	{"getValueName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasValueNames", "()Z", nullptr, $PUBLIC},
	{"isDataTypeOK", "(I)Z", nullptr, $PUBLIC},
	{"isIFDPointer", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFTag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.plugins.tiff.TIFFTag",
	"java.lang.Object",
	nullptr,
	_TIFFTag_FieldInfo_,
	_TIFFTag_MethodInfo_
};

$Object* allocate$TIFFTag($Class* clazz) {
	return $of($alloc(TIFFTag));
}

$String* TIFFTag::UNKNOWN_TAG_NAME = nullptr;
$ints* TIFFTag::SIZE_OF_TYPE = nullptr;

void TIFFTag::init$($String* name, int32_t number, int32_t dataTypes, int32_t count) {
	$useLocalCurrentObjectStackCache();
	$set(this, tagSet, nullptr);
	$set(this, valueNames, nullptr);
	if (name == nullptr) {
		$throwNew($NullPointerException, "name == null"_s);
	} else if (number < 0) {
		$throwNew($IllegalArgumentException, $$str({"number ("_s, $$str(number), ") < 0"_s}));
	} else if (dataTypes < 0 || ((int32_t)(dataTypes & (uint32_t)TIFFTag::DISALLOWED_DATATYPES_MASK)) != 0) {
		$throwNew($IllegalArgumentException, "dataTypes out of range"_s);
	}
	$set(this, name, name);
	this->number = number;
	this->dataTypes = dataTypes;
	this->count = count;
}

void TIFFTag::init$($String* name, int32_t number, $TIFFTagSet* tagSet) {
	TIFFTag::init$(name, number, $sl(1, TIFFTag::TIFF_LONG) | $sl(1, TIFFTag::TIFF_IFD_POINTER), 1);
	if (tagSet == nullptr) {
		$throwNew($NullPointerException, "tagSet == null"_s);
	}
	$set(this, tagSet, tagSet);
}

void TIFFTag::init$($String* name, int32_t number, int32_t dataTypes) {
	TIFFTag::init$(name, number, dataTypes, -1);
}

int32_t TIFFTag::getSizeOfType(int32_t dataType) {
	$init(TIFFTag);
	if (dataType < TIFFTag::MIN_DATATYPE || dataType > TIFFTag::MAX_DATATYPE) {
		$throwNew($IllegalArgumentException, "dataType out of range!"_s);
	}
	return $nc(TIFFTag::SIZE_OF_TYPE)->get(dataType);
}

$String* TIFFTag::getName() {
	return this->name;
}

int32_t TIFFTag::getNumber() {
	return this->number;
}

int32_t TIFFTag::getDataTypes() {
	return this->dataTypes;
}

int32_t TIFFTag::getCount() {
	return this->count;
}

bool TIFFTag::isDataTypeOK(int32_t dataType) {
	if (dataType < TIFFTag::MIN_DATATYPE || dataType > TIFFTag::MAX_DATATYPE) {
		$throwNew($IllegalArgumentException, "datatype not in range!"_s);
	}
	return ((int32_t)(this->dataTypes & (uint32_t)($sl(1, dataType)))) != 0;
}

$TIFFTagSet* TIFFTag::getTagSet() {
	return this->tagSet;
}

bool TIFFTag::isIFDPointer() {
	return this->tagSet != nullptr || isDataTypeOK(TIFFTag::TIFF_IFD_POINTER);
}

bool TIFFTag::hasValueNames() {
	return this->valueNames != nullptr;
}

void TIFFTag::addValueName(int32_t value, $String* name) {
	if (this->valueNames == nullptr) {
		$set(this, valueNames, $new($TreeMap));
	}
	$nc(this->valueNames)->put($($Integer::valueOf(value)), name);
}

$String* TIFFTag::getValueName(int32_t value) {
	if (this->valueNames == nullptr) {
		return nullptr;
	}
	return $cast($String, $nc(this->valueNames)->get($($Integer::valueOf(value))));
}

$ints* TIFFTag::getNamedValues() {
	$useLocalCurrentObjectStackCache();
	$var($ints, intValues, nullptr);
	if (this->valueNames != nullptr) {
		$var($Set, values, $nc(this->valueNames)->keySet());
		$var($Iterator, iter, $nc(values)->iterator());
		$assign(intValues, $new($ints, values->size()));
		int32_t i = 0;
		while ($nc(iter)->hasNext()) {
			intValues->set(i++, $nc(($cast($Integer, $(iter->next()))))->intValue());
		}
	}
	return intValues;
}

void clinit$TIFFTag($Class* class$) {
	$assignStatic(TIFFTag::UNKNOWN_TAG_NAME, "UnknownTag"_s);
	$assignStatic(TIFFTag::SIZE_OF_TYPE, $new($ints, {
		0,
		1,
		1,
		2,
		4,
		8,
		1,
		1,
		2,
		4,
		8,
		4,
		8,
		4
	}));
}

TIFFTag::TIFFTag() {
}

$Class* TIFFTag::load$($String* name, bool initialize) {
	$loadClass(TIFFTag, name, initialize, &_TIFFTag_ClassInfo_, clinit$TIFFTag, allocate$TIFFTag);
	return class$;
}

$Class* TIFFTag::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax