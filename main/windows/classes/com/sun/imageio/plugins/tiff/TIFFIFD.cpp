#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>

#include <com/sun/imageio/plugins/tiff/TIFFIFD$TIFFIFDEntry.h>
#include <java/io/EOFException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/SortedSet.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFDirectory.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef COMPRESSION_NONE
#undef DOUBLE_TILE_SIZE
#undef FLOAT_TILE_SIZE
#undef INT_TILE_SIZE
#undef LONG_TILE_SIZE
#undef MAX_ASCII_SIZE
#undef MAX_SAMPLES_PER_PIXEL
#undef MAX_VALUE
#undef PLANAR_CONFIGURATION_PLANAR
#undef RATIONAL_TILE_SIZE
#undef SHORT_TILE_SIZE
#undef SRATIONAL_TILE_SIZE
#undef SSHORT_TILE_SIZE
#undef TAG_BITS_PER_SAMPLE
#undef TAG_COLOR_MAP
#undef TAG_COMPRESSION
#undef TAG_EXTRA_SAMPLES
#undef TAG_FILL_ORDER
#undef TAG_ICC_PROFILE
#undef TAG_IMAGE_LENGTH
#undef TAG_IMAGE_WIDTH
#undef TAG_JPEG_AC_TABLES
#undef TAG_JPEG_DC_TABLES
#undef TAG_JPEG_INTERCHANGE_FORMAT
#undef TAG_JPEG_INTERCHANGE_FORMAT_LENGTH
#undef TAG_JPEG_PROC
#undef TAG_JPEG_Q_TABLES
#undef TAG_JPEG_RESTART_INTERVAL
#undef TAG_JPEG_TABLES
#undef TAG_PHOTOMETRIC_INTERPRETATION
#undef TAG_PLANAR_CONFIGURATION
#undef TAG_PREDICTOR
#undef TAG_REFERENCE_BLACK_WHITE
#undef TAG_ROWS_PER_STRIP
#undef TAG_SAMPLES_PER_PIXEL
#undef TAG_SAMPLE_FORMAT
#undef TAG_STRIP_BYTE_COUNTS
#undef TAG_STRIP_OFFSETS
#undef TAG_T4_OPTIONS
#undef TAG_T6_OPTIONS
#undef TAG_TILE_BYTE_COUNTS
#undef TAG_TILE_LENGTH
#undef TAG_TILE_OFFSETS
#undef TAG_TILE_WIDTH
#undef TAG_Y_CB_CR_COEFFICIENTS
#undef TAG_Y_CB_CR_SUBSAMPLING
#undef TIFFIFD
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
#undef UNIT_SIZE
#undef UNKNOWN_TAG_NAME
#undef US_ASCII

using $IntegerArray = $Array<::java::lang::Integer>;
using $TIFFFieldArray = $Array<::javax::imageio::plugins::tiff::TIFFField>;
using $TIFFTagSetArray = $Array<::javax::imageio::plugins::tiff::TIFFTagSet>;
using $intArray2 = $Array<int32_t, 2>;
using $longArray2 = $Array<int64_t, 2>;
using $TIFFIFD$TIFFIFDEntry = ::com::sun::imageio::plugins::tiff::TIFFIFD$TIFFIFDEntry;
using $EOFException = ::java::io::EOFException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SortedSet = ::java::util::SortedSet;
using $IIOException = ::javax::imageio::IIOException;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFDirectory = ::javax::imageio::plugins::tiff::TIFFDirectory;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFIFD_FieldInfo_[] = {
	{"MAX_SAMPLES_PER_PIXEL", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFIFD, MAX_SAMPLES_PER_PIXEL)},
	{"MAX_ASCII_SIZE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFIFD, MAX_ASCII_SIZE)},
	{"stripOrTileByteCountsPosition", "J", nullptr, $PRIVATE, $field(TIFFIFD, stripOrTileByteCountsPosition)},
	{"stripOrTileOffsetsPosition", "J", nullptr, $PRIVATE, $field(TIFFIFD, stripOrTileOffsetsPosition)},
	{"lastPosition", "J", nullptr, $PRIVATE, $field(TIFFIFD, lastPosition)},
	{"essentialTags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(TIFFIFD, essentialTags)},
	{}
};

$MethodInfo _TIFFIFD_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Ljavax/imageio/plugins/tiff/TIFFTag;)V", "(Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;Ljavax/imageio/plugins/tiff/TIFFTag;)V", $PUBLIC, $method(static_cast<void(TIFFIFD::*)($List*,$TIFFTag*)>(&TIFFIFD::init$))},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;)V", $PUBLIC, $method(static_cast<void(TIFFIFD::*)($List*)>(&TIFFIFD::init$))},
	{"calculateByteCounts", "(ILjava/util/List;)Z", "(ILjava/util/List<Ljavax/imageio/plugins/tiff/TIFFField;>;)Z", $PRIVATE, $method(static_cast<bool(TIFFIFD::*)(int32_t,$List*)>(&TIFFIFD::calculateByteCounts))},
	{"checkFieldOffsets", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFIFD::*)(int64_t)>(&TIFFIFD::checkFieldOffsets)), "javax.imageio.IIOException"},
	{"getDirectoryAsIFD", "(Ljavax/imageio/plugins/tiff/TIFFDirectory;)Lcom/sun/imageio/plugins/tiff/TIFFIFD;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TIFFIFD*(*)($TIFFDirectory*)>(&TIFFIFD::getDirectoryAsIFD))},
	{"getFieldAsInt", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFIFD::*)(int32_t)>(&TIFFIFD::getFieldAsInt))},
	{"getFieldAsLong", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(TIFFIFD::*)(int32_t)>(&TIFFIFD::getFieldAsLong))},
	{"getLastPosition", "()J", nullptr, $PUBLIC},
	{"getShallowClone", "()Lcom/sun/imageio/plugins/tiff/TIFFIFD;", nullptr, $PUBLIC},
	{"getStripOrTileByteCountsPosition", "()J", nullptr, $PUBLIC},
	{"getStripOrTileOffsetsPosition", "()J", nullptr, $PUBLIC},
	{"getTag", "(ILjava/util/List;)Ljavax/imageio/plugins/tiff/TIFFTag;", "(ILjava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;)Ljavax/imageio/plugins/tiff/TIFFTag;", $PUBLIC | $STATIC, $method(static_cast<$TIFFTag*(*)(int32_t,$List*)>(&TIFFIFD::getTag))},
	{"getTag", "(Ljava/lang/String;Ljava/util/List;)Ljavax/imageio/plugins/tiff/TIFFTag;", "(Ljava/lang/String;Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;)Ljavax/imageio/plugins/tiff/TIFFTag;", $PUBLIC | $STATIC, $method(static_cast<$TIFFTag*(*)($String*,$List*)>(&TIFFIFD::getTag))},
	{"getTagSetList", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;", $PUBLIC},
	{"initialize", "(Ljavax/imageio/stream/ImageInputStream;ZZZ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"initializeEssentialTags", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TIFFIFD::initializeEssentialTags))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/imageio/plugins/tiff/TIFFField;>;", $PUBLIC},
	{"readFieldValue", "(Ljavax/imageio/stream/ImageInputStream;II[Ljava/lang/Object;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ImageInputStream*,int32_t,int32_t,$ObjectArray*)>(&TIFFIFD::readFieldValue)), "java.io.IOException"},
	{"setPositions", "(JJJ)V", nullptr, 0},
	{"writeTIFFFieldToStream", "(Ljavax/imageio/plugins/tiff/TIFFField;Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($TIFFField*,$ImageOutputStream*)>(&TIFFIFD::writeTIFFFieldToStream)), "java.io.IOException"},
	{"writeToStream", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _TIFFIFD_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.tiff.TIFFIFD$TIFFIFDEntry", "com.sun.imageio.plugins.tiff.TIFFIFD", "TIFFIFDEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TIFFIFD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFIFD",
	"javax.imageio.plugins.tiff.TIFFDirectory",
	nullptr,
	_TIFFIFD_FieldInfo_,
	_TIFFIFD_MethodInfo_,
	nullptr,
	nullptr,
	_TIFFIFD_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.tiff.TIFFIFD$TIFFIFDEntry"
};

$Object* allocate$TIFFIFD($Class* clazz) {
	return $of($alloc(TIFFIFD));
}

$volatile($Set*) TIFFIFD::essentialTags = nullptr;

void TIFFIFD::initializeEssentialTags() {
	$init(TIFFIFD);
	$var($Set, tags, TIFFIFD::essentialTags);
	if (tags == nullptr) {
		$assignStatic(TIFFIFD::essentialTags, ($assign(tags, $Set::of($$new($IntegerArray, {
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_COLOR_MAP)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_COMPRESSION)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_EXTRA_SAMPLES)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_FILL_ORDER)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_ICC_PROFILE)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_IMAGE_LENGTH)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_IMAGE_WIDTH)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_JPEG_AC_TABLES)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_JPEG_DC_TABLES)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_JPEG_PROC)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_JPEG_Q_TABLES)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_JPEG_RESTART_INTERVAL)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_JPEG_TABLES)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_PLANAR_CONFIGURATION)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_PREDICTOR)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_REFERENCE_BLACK_WHITE)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_ROWS_PER_STRIP)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_SAMPLE_FORMAT)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_STRIP_OFFSETS)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_T4_OPTIONS)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_T6_OPTIONS)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_TILE_LENGTH)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_TILE_OFFSETS)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_TILE_WIDTH)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_Y_CB_CR_COEFFICIENTS)),
			$($Integer::valueOf($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING))
		})))));
	}
}

TIFFIFD* TIFFIFD::getDirectoryAsIFD($TIFFDirectory* dir) {
	$init(TIFFIFD);
	if ($instanceOf(TIFFIFD, dir)) {
		return $cast(TIFFIFD, dir);
	}
	$var($List, var$0, $Arrays::asList($($nc(dir)->getTagSets())));
	$var(TIFFIFD, ifd, $new(TIFFIFD, var$0, $($nc(dir)->getParentTag())));
	$var($TIFFFieldArray, fields, $nc(dir)->getTIFFFields());
	int32_t numFields = $nc(fields)->length;
	for (int32_t i = 0; i < numFields; ++i) {
		$var($TIFFField, f, fields->get(i));
		$var($TIFFTag, tag, $nc(f)->getTag());
		if ($nc(tag)->isIFDPointer()) {
			$var($TIFFDirectory, subDir, nullptr);
			if (f->hasDirectory()) {
				$assign(subDir, f->getDirectory());
			} else if ($instanceOf($TIFFDirectory, $(f->getData()))) {
				$assign(subDir, $cast($TIFFDirectory, f->getData()));
			}
			if (subDir != nullptr) {
				$var($TIFFDirectory, subIFD, getDirectoryAsIFD(subDir));
				$var($TIFFTag, var$1, tag);
				int32_t var$2 = f->getType();
				$assign(f, $new($TIFFField, var$1, var$2, (int64_t)f->getCount(), subIFD));
			} else {
				$assign(f, nullptr);
			}
		}
		if (f != nullptr) {
			ifd->addTIFFField(f);
		}
	}
	return ifd;
}

$TIFFTag* TIFFIFD::getTag(int32_t tagNumber, $List* tagSets) {
	$init(TIFFIFD);
	{
		$var($Iterator, i$, $nc(tagSets)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TIFFTagSet, tagSet, $cast($TIFFTagSet, i$->next()));
			{
				$var($TIFFTag, tag, $nc(tagSet)->getTag(tagNumber));
				if (tag != nullptr) {
					return tag;
				}
			}
		}
	}
	return nullptr;
}

$TIFFTag* TIFFIFD::getTag($String* tagName, $List* tagSets) {
	$init(TIFFIFD);
	{
		$var($Iterator, i$, $nc(tagSets)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TIFFTagSet, tagSet, $cast($TIFFTagSet, i$->next()));
			{
				$var($TIFFTag, tag, $nc(tagSet)->getTag(tagName));
				if (tag != nullptr) {
					return tag;
				}
			}
		}
	}
	return nullptr;
}

void TIFFIFD::writeTIFFFieldToStream($TIFFField* field, $ImageOutputStream* stream) {
	$init(TIFFIFD);
	int32_t count = $nc(field)->getCount();
	$var($Object, data, field->getData());
	switch (field->getType()) {
	case $TIFFTag::TIFF_ASCII:
		{
			for (int32_t i = 0; i < count; ++i) {
				$var($String, s, $nc(($cast($StringArray, data)))->get(i));
				int32_t length = $nc(s)->length();
				for (int32_t j = 0; j < length; ++j) {
					$nc(stream)->writeByte((int32_t)(s->charAt(j) & (uint32_t)255));
				}
				$nc(stream)->writeByte(0);
			}
			break;
		}
	case $TIFFTag::TIFF_UNDEFINED:
		{}
	case $TIFFTag::TIFF_BYTE:
		{}
	case $TIFFTag::TIFF_SBYTE:
		{
			$nc(stream)->write($cast($bytes, data));
			break;
		}
	case $TIFFTag::TIFF_SHORT:
		{
			$nc(stream)->writeChars($cast($chars, data), 0, $nc(($cast($chars, data)))->length);
			break;
		}
	case $TIFFTag::TIFF_SSHORT:
		{
			$nc(stream)->writeShorts($cast($shorts, data), 0, $nc(($cast($shorts, data)))->length);
			break;
		}
	case $TIFFTag::TIFF_SLONG:
		{
			$nc(stream)->writeInts($cast($ints, data), 0, $nc(($cast($ints, data)))->length);
			break;
		}
	case $TIFFTag::TIFF_LONG:
		{
			for (int32_t i = 0; i < count; ++i) {
				$nc(stream)->writeInt((int32_t)($nc(($cast($longs, data)))->get(i)));
			}
			break;
		}
	case $TIFFTag::TIFF_IFD_POINTER:
		{
			$nc(stream)->writeInt(0);
			break;
		}
	case $TIFFTag::TIFF_FLOAT:
		{
			$nc(stream)->writeFloats($cast($floats, data), 0, $nc(($cast($floats, data)))->length);
			break;
		}
	case $TIFFTag::TIFF_DOUBLE:
		{
			$nc(stream)->writeDoubles($cast($doubles, data), 0, $nc(($cast($doubles, data)))->length);
			break;
		}
	case $TIFFTag::TIFF_SRATIONAL:
		{
			for (int32_t i = 0; i < count; ++i) {
				$nc(stream)->writeInt($nc($nc(($cast($intArray2, data)))->get(i))->get(0));
				stream->writeInt($nc($nc(($cast($intArray2, data)))->get(i))->get(1));
			}
			break;
		}
	case $TIFFTag::TIFF_RATIONAL:
		{
			for (int32_t i = 0; i < count; ++i) {
				int64_t num = $nc($nc(($cast($longArray2, data)))->get(i))->get(0);
				int64_t den = $nc($nc(($cast($longArray2, data)))->get(i))->get(1);
				$nc(stream)->writeInt((int32_t)num);
				stream->writeInt((int32_t)den);
			}
			break;
		}
	default:
		{}
	}
}

void TIFFIFD::init$($List* tagSets, $TIFFTag* parentTag) {
	$TIFFDirectory::init$($fcast($TIFFTagSetArray, $($nc(tagSets)->toArray($$new($TIFFTagSetArray, tagSets->size())))), parentTag);
	this->stripOrTileByteCountsPosition = -1;
	this->stripOrTileOffsetsPosition = -1;
	this->lastPosition = -1;
}

void TIFFIFD::init$($List* tagSets) {
	TIFFIFD::init$(tagSets, nullptr);
}

$List* TIFFIFD::getTagSetList() {
	return $Arrays::asList($(getTagSets()));
}

$Iterator* TIFFIFD::iterator() {
	return $nc($($Arrays::asList($(getTIFFFields()))))->iterator();
}

int32_t TIFFIFD::readFieldValue($ImageInputStream* stream, int32_t type, int32_t count, $ObjectArray* data) {
	$init(TIFFIFD);
	$var($Object, obj, nullptr);
	int32_t UNIT_SIZE = 0x000FA000;
	{
		int32_t SHORT_TILE_SIZE = 0;
		int32_t LONG_TILE_SIZE = 0;
		int32_t RATIONAL_TILE_SIZE = 0;
		int32_t SSHORT_TILE_SIZE = 0;
		int32_t INT_TILE_SIZE = 0;
		int32_t SRATIONAL_TILE_SIZE = 0;
		int32_t FLOAT_TILE_SIZE = 0;
		int32_t DOUBLE_TILE_SIZE = 0;
		switch (type) {
		case $TIFFTag::TIFF_BYTE:
			{}
		case $TIFFTag::TIFF_SBYTE:
			{}
		case $TIFFTag::TIFF_UNDEFINED:
			{}
		case $TIFFTag::TIFF_ASCII:
			{
				if (type == $TIFFTag::TIFF_ASCII) {
					$var($bytes, bvalues, $new($bytes, count));
					$nc(stream)->readFully(bvalues, 0, count);
					$var($ArrayList, v, $new($ArrayList));
					bool inString = false;
					int32_t prevIndex = 0;
					for (int32_t index = 0; index <= count; ++index) {
						if (index < count && bvalues->get(index) != 0) {
							if (!inString) {
								prevIndex = index;
								inString = true;
							}
						} else if (inString) {
							$init($StandardCharsets);
							$var($String, s, $new($String, bvalues, prevIndex, index - prevIndex, $StandardCharsets::US_ASCII));
							v->add(s);
							inString = false;
						}
					}
					count = v->size();
					$var($StringArray, strings, nullptr);
					if (count != 0) {
						$assign(strings, $new($StringArray, count));
						for (int32_t c = 0; c < count; ++c) {
							strings->set(c, $cast($String, $(v->get(c))));
						}
					} else {
						count = 1;
						$assign(strings, $new($StringArray, {""_s}));
					}
					$assign(obj, strings);
				} else if (count < UNIT_SIZE) {
					$var($bytes, bvalues, $new($bytes, count));
					$nc(stream)->readFully(bvalues, 0, count);
					$assign(obj, bvalues);
				} else {
					int32_t bytesToRead = count;
					int32_t bytesRead = 0;
					$var($List, bufs, $new($ArrayList));
					while (bytesToRead != 0) {
						int32_t sz = $Math::min(bytesToRead, UNIT_SIZE);
						$var($bytes, unit, $new($bytes, sz));
						$nc(stream)->readFully(unit, bytesRead, sz);
						bufs->add(unit);
						bytesRead += sz;
						bytesToRead -= sz;
					}
					$var($bytes, tagData, $new($bytes, bytesRead));
					int32_t copiedBytes = 0;
					{
						$var($Iterator, i$, bufs->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($bytes, ba, $cast($bytes, i$->next()));
							{
								$System::arraycopy(ba, 0, tagData, copiedBytes, $nc(ba)->length);
								copiedBytes += $nc(ba)->length;
							}
						}
					}
					$assign(obj, tagData);
				}
				break;
			}
		case $TIFFTag::TIFF_SHORT:
			{
				SHORT_TILE_SIZE = $div(UNIT_SIZE, $TIFFTag::getSizeOfType($TIFFTag::TIFF_SHORT));
				if (count < SHORT_TILE_SIZE) {
					$var($chars, cvalues, $new($chars, count));
					for (int32_t j = 0; j < count; ++j) {
						cvalues->set(j, (char16_t)($nc(stream)->readUnsignedShort()));
					}
					$assign(obj, cvalues);
				} else {
					int32_t charsToRead = count;
					int32_t charsRead = 0;
					$var($List, bufs, $new($ArrayList));
					while (charsToRead != 0) {
						int32_t sz = $Math::min(charsToRead, SHORT_TILE_SIZE);
						$var($chars, unit, $new($chars, sz));
						for (int32_t i = 0; i < sz; ++i) {
							unit->set(i, (char16_t)($nc(stream)->readUnsignedShort()));
						}
						bufs->add(unit);
						charsRead += sz;
						charsToRead -= sz;
					}
					$var($chars, tagData, $new($chars, charsRead));
					int32_t copiedChars = 0;
					{
						$var($Iterator, i$, bufs->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($chars, ca, $cast($chars, i$->next()));
							{
								$System::arraycopy(ca, 0, tagData, copiedChars, $nc(ca)->length);
								copiedChars += $nc(ca)->length;
							}
						}
					}
					$assign(obj, tagData);
				}
				break;
			}
		case $TIFFTag::TIFF_LONG:
			{}
		case $TIFFTag::TIFF_IFD_POINTER:
			{
				LONG_TILE_SIZE = $div(UNIT_SIZE, $TIFFTag::getSizeOfType($TIFFTag::TIFF_LONG));
				if (count < LONG_TILE_SIZE) {
					$var($longs, lvalues, $new($longs, count));
					for (int32_t j = 0; j < count; ++j) {
						lvalues->set(j, $nc(stream)->readUnsignedInt());
					}
					$assign(obj, lvalues);
				} else {
					int32_t longsToRead = count;
					int32_t longsRead = 0;
					$var($List, bufs, $new($ArrayList));
					while (longsToRead != 0) {
						int32_t sz = $Math::min(longsToRead, LONG_TILE_SIZE);
						$var($longs, unit, $new($longs, sz));
						for (int32_t i = 0; i < sz; ++i) {
							unit->set(i, $nc(stream)->readUnsignedInt());
						}
						bufs->add(unit);
						longsRead += sz;
						longsToRead -= sz;
					}
					$var($longs, tagData, $new($longs, longsRead));
					int32_t copiedLongs = 0;
					{
						$var($Iterator, i$, bufs->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($longs, la, $cast($longs, i$->next()));
							{
								$System::arraycopy(la, 0, tagData, copiedLongs, $nc(la)->length);
								copiedLongs += $nc(la)->length;
							}
						}
					}
					$assign(obj, tagData);
				}
				break;
			}
		case $TIFFTag::TIFF_RATIONAL:
			{
				RATIONAL_TILE_SIZE = $div(UNIT_SIZE, $TIFFTag::getSizeOfType($TIFFTag::TIFF_RATIONAL));
				if (count < RATIONAL_TILE_SIZE) {
					$var($longArray2, llvalues, $new($longArray2, count, 2));
					for (int32_t j = 0; j < count; ++j) {
						$nc(llvalues->get(j))->set(0, $nc(stream)->readUnsignedInt());
						$nc(llvalues->get(j))->set(1, stream->readUnsignedInt());
					}
					$assign(obj, llvalues);
				} else {
					int32_t rationalsToRead = count;
					int32_t rationalsRead = 0;
					$var($List, bufs, $new($ArrayList));
					while (rationalsToRead != 0) {
						int32_t sz = $Math::min(rationalsToRead, RATIONAL_TILE_SIZE);
						$var($longs, unit, $new($longs, sz * 2));
						for (int32_t i = 0; i < (sz * 2); ++i) {
							unit->set(i, $nc(stream)->readUnsignedInt());
						}
						bufs->add(unit);
						rationalsRead += sz;
						rationalsToRead -= sz;
					}
					$var($longArray2, tagData, $new($longArray2, rationalsRead, 2));
					int32_t copiedRationals = 0;
					{
						$var($Iterator, i$, bufs->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($longs, la, $cast($longs, i$->next()));
							{
								for (int32_t i = 0; i < $nc(la)->length; i = i + 2) {
									$nc(tagData->get(copiedRationals + i))->set(0, la->get(i));
									$nc(tagData->get(copiedRationals + i))->set(1, la->get(i + 1));
								}
								copiedRationals += ($nc(la)->length / 2);
							}
						}
					}
					$assign(obj, tagData);
				}
				break;
			}
		case $TIFFTag::TIFF_SSHORT:
			{
				SSHORT_TILE_SIZE = $div(UNIT_SIZE, $TIFFTag::getSizeOfType($TIFFTag::TIFF_SSHORT));
				if (count < SSHORT_TILE_SIZE) {
					$var($shorts, svalues, $new($shorts, count));
					for (int32_t j = 0; j < count; ++j) {
						svalues->set(j, $nc(stream)->readShort());
					}
					$assign(obj, svalues);
				} else {
					int32_t shortsToRead = count;
					int32_t shortsRead = 0;
					$var($List, bufs, $new($ArrayList));
					while (shortsToRead != 0) {
						int32_t sz = $Math::min(shortsToRead, SSHORT_TILE_SIZE);
						$var($shorts, unit, $new($shorts, sz));
						$nc(stream)->readFully(unit, shortsRead, sz);
						bufs->add(unit);
						shortsRead += sz;
						shortsToRead -= sz;
					}
					$var($shorts, tagData, $new($shorts, shortsRead));
					int32_t copiedShorts = 0;
					{
						$var($Iterator, i$, bufs->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($shorts, sa, $cast($shorts, i$->next()));
							{
								$System::arraycopy(sa, 0, tagData, copiedShorts, $nc(sa)->length);
								copiedShorts += $nc(sa)->length;
							}
						}
					}
					$assign(obj, tagData);
				}
				break;
			}
		case $TIFFTag::TIFF_SLONG:
			{
				INT_TILE_SIZE = $div(UNIT_SIZE, $TIFFTag::getSizeOfType($TIFFTag::TIFF_SLONG));
				if (count < INT_TILE_SIZE) {
					$var($ints, ivalues, $new($ints, count));
					for (int32_t j = 0; j < count; ++j) {
						ivalues->set(j, $nc(stream)->readInt());
					}
					$assign(obj, ivalues);
				} else {
					int32_t intsToRead = count;
					int32_t intsRead = 0;
					$var($List, bufs, $new($ArrayList));
					while (intsToRead != 0) {
						int32_t sz = $Math::min(intsToRead, INT_TILE_SIZE);
						$var($ints, unit, $new($ints, sz));
						$nc(stream)->readFully(unit, intsToRead, sz);
						bufs->add(unit);
						intsRead += sz;
						intsToRead -= sz;
					}
					$var($ints, tagData, $new($ints, intsRead));
					int32_t copiedInts = 0;
					{
						$var($Iterator, i$, bufs->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($ints, ia, $cast($ints, i$->next()));
							{
								$System::arraycopy(ia, 0, tagData, copiedInts, $nc(ia)->length);
								copiedInts += $nc(ia)->length;
							}
						}
					}
					$assign(obj, tagData);
				}
				break;
			}
		case $TIFFTag::TIFF_SRATIONAL:
			{
				SRATIONAL_TILE_SIZE = $div(UNIT_SIZE, $TIFFTag::getSizeOfType($TIFFTag::TIFF_SRATIONAL));
				if (count < SRATIONAL_TILE_SIZE) {
					$var($intArray2, iivalues, $new($intArray2, count, 2));
					for (int32_t j = 0; j < count; ++j) {
						$nc(iivalues->get(j))->set(0, $nc(stream)->readInt());
						$nc(iivalues->get(j))->set(1, stream->readInt());
					}
					$assign(obj, iivalues);
				} else {
					int32_t srationalsToRead = count;
					int32_t srationalsRead = 0;
					$var($List, bufs, $new($ArrayList));
					while (srationalsToRead != 0) {
						int32_t sz = $Math::min(srationalsToRead, SRATIONAL_TILE_SIZE);
						$var($ints, unit, $new($ints, sz * 2));
						$nc(stream)->readFully(unit, (srationalsToRead * 2), (sz * 2));
						bufs->add(unit);
						srationalsRead += sz;
						srationalsToRead -= sz;
					}
					$var($intArray2, tagData, $new($intArray2, srationalsRead, 2));
					int32_t copiedSrationals = 0;
					{
						$var($Iterator, i$, bufs->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($ints, ia, $cast($ints, i$->next()));
							{
								for (int32_t i = 0; i < $nc(ia)->length; i = i + 2) {
									$nc(tagData->get(copiedSrationals + i))->set(0, ia->get(i));
									$nc(tagData->get(copiedSrationals + i))->set(1, ia->get(i + 1));
								}
								copiedSrationals += ($nc(ia)->length / 2);
							}
						}
					}
					$assign(obj, tagData);
				}
				break;
			}
		case $TIFFTag::TIFF_FLOAT:
			{
				FLOAT_TILE_SIZE = $div(UNIT_SIZE, $TIFFTag::getSizeOfType($TIFFTag::TIFF_FLOAT));
				if (count < FLOAT_TILE_SIZE) {
					$var($floats, fvalues, $new($floats, count));
					for (int32_t j = 0; j < count; ++j) {
						fvalues->set(j, $nc(stream)->readFloat());
					}
					$assign(obj, fvalues);
				} else {
					int32_t floatsToRead = count;
					int32_t floatsRead = 0;
					$var($List, bufs, $new($ArrayList));
					while (floatsToRead != 0) {
						int32_t sz = $Math::min(floatsToRead, FLOAT_TILE_SIZE);
						$var($floats, unit, $new($floats, sz));
						$nc(stream)->readFully(unit, floatsToRead, sz);
						bufs->add(unit);
						floatsRead += sz;
						floatsToRead -= sz;
					}
					$var($floats, tagData, $new($floats, floatsRead));
					int32_t copiedFloats = 0;
					{
						$var($Iterator, i$, bufs->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($floats, fa, $cast($floats, i$->next()));
							{
								$System::arraycopy(fa, 0, tagData, copiedFloats, $nc(fa)->length);
								copiedFloats += $nc(fa)->length;
							}
						}
					}
					$assign(obj, tagData);
				}
				break;
			}
		case $TIFFTag::TIFF_DOUBLE:
			{
				DOUBLE_TILE_SIZE = $div(UNIT_SIZE, $TIFFTag::getSizeOfType($TIFFTag::TIFF_DOUBLE));
				if (count < DOUBLE_TILE_SIZE) {
					$var($doubles, dvalues, $new($doubles, count));
					for (int32_t j = 0; j < count; ++j) {
						dvalues->set(j, $nc(stream)->readDouble());
					}
					$assign(obj, dvalues);
				} else {
					int32_t doublesToRead = count;
					int32_t doublesRead = 0;
					$var($List, bufs, $new($ArrayList));
					while (doublesToRead != 0) {
						int32_t sz = $Math::min(doublesToRead, DOUBLE_TILE_SIZE);
						$var($doubles, unit, $new($doubles, sz));
						$nc(stream)->readFully(unit, doublesToRead, sz);
						bufs->add(unit);
						doublesRead += sz;
						doublesToRead -= sz;
					}
					$var($doubles, tagData, $new($doubles, doublesRead));
					int32_t copiedDoubles = 0;
					{
						$var($Iterator, i$, bufs->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($doubles, da, $cast($doubles, i$->next()));
							{
								$System::arraycopy(da, 0, tagData, copiedDoubles, $nc(da)->length);
								copiedDoubles += $nc(da)->length;
							}
						}
					}
					$assign(obj, tagData);
				}
				break;
			}
		default:
			{
				$assign(obj, nullptr);
				break;
			}
		}
	}
	$nc(data)->set(0, obj);
	return count;
}

int64_t TIFFIFD::getFieldAsLong(int32_t tagNumber) {
	$var($TIFFField, f, getTIFFField(tagNumber));
	return f == nullptr ? (int64_t)-1 : $nc(f)->getAsLong(0);
}

int32_t TIFFIFD::getFieldAsInt(int32_t tagNumber) {
	$var($TIFFField, f, getTIFFField(tagNumber));
	return f == nullptr ? -1 : $nc(f)->getAsInt(0);
}

bool TIFFIFD::calculateByteCounts(int32_t expectedSize, $List* byteCounts) {
	if (!$nc(byteCounts)->isEmpty()) {
		$throwNew($IllegalArgumentException, "byteCounts is not empty"_s);
	}
	if (getFieldAsInt($BaselineTIFFTagSet::TAG_PLANAR_CONFIGURATION) == $BaselineTIFFTagSet::PLANAR_CONFIGURATION_PLANAR) {
		return false;
	}
	if (getFieldAsInt($BaselineTIFFTagSet::TAG_COMPRESSION) != $BaselineTIFFTagSet::COMPRESSION_NONE) {
		return false;
	}
	int64_t w = getFieldAsLong($BaselineTIFFTagSet::TAG_IMAGE_WIDTH);
	if (w < 0) {
		return false;
	}
	int64_t h = getFieldAsLong($BaselineTIFFTagSet::TAG_IMAGE_LENGTH);
	if (h < 0) {
		return false;
	}
	int64_t tw = getFieldAsLong($BaselineTIFFTagSet::TAG_TILE_WIDTH);
	if (tw < 0) {
		tw = w;
	}
	int64_t th = getFieldAsLong($BaselineTIFFTagSet::TAG_TILE_LENGTH);
	if (th < 0) {
		th = getFieldAsLong($BaselineTIFFTagSet::TAG_ROWS_PER_STRIP);
		if (th < 0) {
			th = h;
		}
	}
	$var($ints, bitsPerSample, nullptr);
	$var($TIFFField, f, getTIFFField($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE));
	if (f != nullptr) {
		$assign(bitsPerSample, f->getAsInts());
	} else {
		int32_t samplesPerPixel = getFieldAsInt($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL);
		if (samplesPerPixel < 0) {
			samplesPerPixel = 1;
		}
		$assign(bitsPerSample, $new($ints, samplesPerPixel));
		$Arrays::fill(bitsPerSample, 8);
	}
	int32_t bitsPerPixel = 0;
	{
		$var($ints, arr$, bitsPerSample);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t bps = arr$->get(i$);
			{
				bitsPerPixel += bps;
			}
		}
	}
	int32_t bytesPerRow = (int32_t)(tw * bitsPerPixel + 7) / 8;
	int32_t bytesPerPacket = (int32_t)th * bytesPerRow;
	int64_t nx = $div((w + tw - 1), tw);
	int64_t ny = $div((h + th - 1), th);
	if (nx * ny != expectedSize) {
		return false;
	}
	bool isTiled = getTIFFField($BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS) != nullptr;
	int32_t tagNumber = 0;
	if (isTiled) {
		tagNumber = $BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS;
	} else {
		tagNumber = $BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS;
	}
	$var($TIFFTag, t, $nc($($BaselineTIFFTagSet::getInstance()))->getTag(tagNumber));
	$assign(f, getTIFFField(tagNumber));
	if (f != nullptr) {
		removeTIFFField(tagNumber);
	}
	int32_t numPackets = (int32_t)(nx * ny);
	$var($longs, packetByteCounts, $new($longs, numPackets));
	$Arrays::fill(packetByteCounts, (int64_t)bytesPerPacket);
	if (tw <= w && $mod(h, th) != 0) {
		int32_t numRowsInLastStrip = (int32_t)(h - (ny - 1) * th);
		packetByteCounts->set(numPackets - 1, numRowsInLastStrip * bytesPerRow);
	}
	$assign(f, $new($TIFFField, t, $TIFFTag::TIFF_LONG, numPackets, $of(packetByteCounts)));
	addTIFFField(f);
	$nc(byteCounts)->add(f);
	return true;
}

void TIFFIFD::checkFieldOffsets(int64_t streamLength) {
	if (streamLength < 0) {
		return;
	}
	$var($List, offsets, $new($ArrayList));
	$var($TIFFField, f, getTIFFField($BaselineTIFFTagSet::TAG_STRIP_OFFSETS));
	int32_t count = 0;
	if (f != nullptr) {
		count = f->getCount();
		offsets->add(f);
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_TILE_OFFSETS));
	if (f != nullptr) {
		int32_t sz = offsets->size();
		int32_t newCount = f->getCount();
		if (sz > 0 && newCount != count) {
			$throwNew($IIOException, "StripOffsets count != TileOffsets count"_s);
		}
		if (sz == 0) {
			count = newCount;
		}
		offsets->add(f);
	}
	$var($List, byteCounts, $new($ArrayList));
	if (offsets->size() > 0) {
		$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS));
		if (f != nullptr) {
			if (f->getCount() != count) {
				$throwNew($IIOException, "StripByteCounts count != number of offsets"_s);
			}
			byteCounts->add(f);
		}
		$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS));
		if (f != nullptr) {
			if (f->getCount() != count) {
				$throwNew($IIOException, "TileByteCounts count != number of offsets"_s);
			}
			byteCounts->add(f);
		}
		if (byteCounts->size() > 0) {
			{
				$var($Iterator, i$, offsets->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($TIFFField, offset, $cast($TIFFField, i$->next()));
					{
						{
							$var($Iterator, i$, byteCounts->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($TIFFField, byteCount, $cast($TIFFField, i$->next()));
								{
									for (int32_t i = 0; i < count; ++i) {
										int64_t dataOffset = $nc(offset)->getAsLong(i);
										int64_t dataByteCount = $nc(byteCount)->getAsLong(i);
										if (dataOffset + dataByteCount > streamLength) {
											$throwNew($IIOException, "Data segment out of stream"_s);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	$var($TIFFField, jpegOffset, getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT));
	if (jpegOffset != nullptr) {
		$var($TIFFField, jpegLength, getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH));
		if (jpegLength != nullptr) {
			int64_t var$0 = jpegOffset->getAsLong(0);
			if (var$0 + jpegLength->getAsLong(0) > streamLength) {
				$throwNew($IIOException, "JPEGInterchangeFormat data out of stream"_s);
			}
		}
	}
	bool var$1 = jpegOffset == nullptr;
	if (var$1) {
		bool var$2 = offsets->size() == 0;
		var$1 = (var$2 || byteCounts->size() == 0);
	}
	if (var$1) {
		bool throwException = true;
		bool var$3 = offsets->size() != 0;
		if (var$3 && byteCounts->size() == 0) {
			int32_t expectedSize = $nc(($cast($TIFFField, $(offsets->get(0)))))->getCount();
			throwException = !calculateByteCounts(expectedSize, byteCounts);
		}
		if (throwException) {
			$throwNew($IIOException, "Insufficient data offsets or byte counts"_s);
		}
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_JPEG_Q_TABLES));
	if (f != nullptr) {
		$var($longs, tableOffsets, f->getAsLongs());
		{
			$var($longs, arr$, tableOffsets);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int64_t off = arr$->get(i$);
				{
					if (off + 64 > streamLength) {
						$throwNew($IIOException, "JPEGQTables data out of stream"_s);
					}
				}
			}
		}
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_JPEG_DC_TABLES));
	if (f != nullptr) {
		$var($longs, tableOffsets, f->getAsLongs());
		{
			$var($longs, arr$, tableOffsets);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int64_t off = arr$->get(i$);
				{
					if (off + 16 > streamLength) {
						$throwNew($IIOException, "JPEGDCTables data out of stream"_s);
					}
				}
			}
		}
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_JPEG_AC_TABLES));
	if (f != nullptr) {
		$var($longs, tableOffsets, f->getAsLongs());
		{
			$var($longs, arr$, tableOffsets);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int64_t off = arr$->get(i$);
				{
					if (off + 16 > streamLength) {
						$throwNew($IIOException, "JPEGACTables data out of stream"_s);
					}
				}
			}
		}
	}
}

void TIFFIFD::initialize($ImageInputStream* stream, bool isPrimaryIFD, bool ignoreMetadata, bool readUnknownTags) {
	removeTIFFFields();
	int64_t streamLength = $nc(stream)->length();
	bool haveStreamLength = streamLength != -1;
	$var($List, tagSetList, getTagSetList());
	bool ensureEssentialTags = false;
	$var($TIFFTagSet, baselineTagSet, nullptr);
	if (isPrimaryIFD && (ignoreMetadata || (!readUnknownTags && !$nc(tagSetList)->contains($($BaselineTIFFTagSet::getInstance()))))) {
		ensureEssentialTags = true;
		initializeEssentialTags();
		$assign(baselineTagSet, $BaselineTIFFTagSet::getInstance());
	}
	$var($List, entries, $new($ArrayList));
	$var($ObjectArray, entryData, $new($ObjectArray, 1));
	int32_t numEntries = stream->readUnsignedShort();
	for (int32_t i = 0; i < numEntries; ++i) {
		int32_t tagNumber = stream->readUnsignedShort();
		int32_t type = stream->readUnsignedShort();
		int32_t sizeOfType = 0;
		try {
			sizeOfType = $TIFFTag::getSizeOfType(type);
		} catch ($IllegalArgumentException&) {
			$var($IllegalArgumentException, ignored, $catch());
			stream->skipBytes(4);
			continue;
		}
		int64_t longCount = stream->readUnsignedInt();
		$var($TIFFTag, tag, getTag(tagNumber, tagSetList));
		if (tag == nullptr && ensureEssentialTags && $nc(TIFFIFD::essentialTags)->contains($($Integer::valueOf(tagNumber)))) {
			$assign(tag, $nc(baselineTagSet)->getTag(tagNumber));
		}
		bool var$0 = (ignoreMetadata && (!ensureEssentialTags || !$nc(TIFFIFD::essentialTags)->contains($($Integer::valueOf(tagNumber))))) || (tag == nullptr && !readUnknownTags);
		if (var$0 || (tag != nullptr && !tag->isDataTypeOK(type)) || longCount > $Integer::MAX_VALUE) {
			stream->skipBytes(4);
			continue;
		}
		int32_t count = (int32_t)longCount;
		if (tag == nullptr) {
			$assign(tag, $new($TIFFTag, $TIFFTag::UNKNOWN_TAG_NAME, tagNumber, $sl(1, type), count));
		} else {
			int32_t expectedCount = $nc(tag)->getCount();
			if (expectedCount > 0) {
				if (count != expectedCount) {
					$throwNew($IIOException, $$str({"Unexpected count "_s, $$str(count), " for "_s, $(tag->getName()), " field"_s}));
				}
			} else if (type == $TIFFTag::TIFF_ASCII) {
				int32_t asciiSize = $TIFFTag::getSizeOfType($TIFFTag::TIFF_ASCII);
				if (count * asciiSize > TIFFIFD::MAX_ASCII_SIZE) {
					count = (int32_t)($div(TIFFIFD::MAX_ASCII_SIZE, asciiSize));
				}
			}
		}
		int64_t longSize = longCount * sizeOfType;
		if (longSize > $Integer::MAX_VALUE) {
			stream->skipBytes(4);
			continue;
		}
		int32_t size = (int32_t)longSize;
		if (size > 4 || $nc(tag)->isIFDPointer()) {
			int64_t offset = stream->readUnsignedInt();
			if (haveStreamLength && offset + size > streamLength) {
				continue;
			}
			entries->add($$new($TIFFIFD$TIFFIFDEntry, tag, type, count, offset));
		} else {
			$var($Object, obj, nullptr);
			try {
				count = readFieldValue(stream, type, count, entryData);
				$assign(obj, entryData->get(0));
			} catch ($EOFException&) {
				$var($EOFException, eofe, $catch());
				if ($nc($($BaselineTIFFTagSet::getInstance()))->getTag(tagNumber) == nullptr) {
					$throw(eofe);
				}
			}
			if (size < 4) {
				stream->skipBytes(4 - size);
			}
			entries->add($$new($TIFFField, tag, type, count, obj));
		}
	}
	int64_t nextIFDOffset = stream->getStreamPosition();
	$var($ObjectArray, fieldData, $new($ObjectArray, 1));
	{
		$var($Iterator, i$, entries->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, entry, i$->next());
			{
				if ($instanceOf($TIFFField, entry)) {
					addTIFFField($cast($TIFFField, entry));
				} else {
					$var($TIFFIFD$TIFFIFDEntry, e, $cast($TIFFIFD$TIFFIFDEntry, entry));
					$var($TIFFTag, tag, $nc(e)->tag);
					int32_t tagNumber = $nc(tag)->getNumber();
					int32_t type = e->type;
					int32_t count = e->count;
					stream->seek(e->offset);
					if (tag->isIFDPointer()) {
						$var($List, tagSets, $new($ArrayList, 1));
						tagSets->add($(tag->getTagSet()));
						$var(TIFFIFD, subIFD, $new(TIFFIFD, tagSets));
						subIFD->initialize(stream, false, ignoreMetadata, readUnknownTags);
						$var($TIFFField, f, $new($TIFFField, tag, type, e->offset, static_cast<$TIFFDirectory*>(subIFD)));
						addTIFFField(f);
					} else {
						if (tagNumber == $BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS || tagNumber == $BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS || tagNumber == $BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH) {
							this->stripOrTileByteCountsPosition = stream->getStreamPosition();
						} else if (tagNumber == $BaselineTIFFTagSet::TAG_STRIP_OFFSETS || tagNumber == $BaselineTIFFTagSet::TAG_TILE_OFFSETS || tagNumber == $BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT) {
							this->stripOrTileOffsetsPosition = stream->getStreamPosition();
						}
						$var($Object, obj, nullptr);
						try {
							count = readFieldValue(stream, type, count, fieldData);
							$assign(obj, fieldData->get(0));
						} catch ($EOFException&) {
							$var($EOFException, eofe, $catch());
							if ($nc($($BaselineTIFFTagSet::getInstance()))->getTag(tagNumber) != nullptr) {
								$throw(eofe);
							}
						}
						if (obj == nullptr) {
							continue;
						}
						$var($TIFFField, f, $new($TIFFField, tag, type, count, obj));
						addTIFFField(f);
					}
				}
			}
		}
	}
	if (isPrimaryIFD && haveStreamLength) {
		checkFieldOffsets(streamLength);
	}
	stream->seek(nextIFDOffset);
	this->lastPosition = stream->getStreamPosition();
}

void TIFFIFD::writeToStream($ImageOutputStream* stream) {
	int32_t numFields = getNumTIFFFields();
	$nc(stream)->writeShort(numFields);
	int64_t nextSpace = stream->getStreamPosition() + 12 * numFields + 4;
	$var($Iterator, iter, iterator());
	while ($nc(iter)->hasNext()) {
		$var($TIFFField, f, $cast($TIFFField, iter->next()));
		$var($TIFFTag, tag, $nc(f)->getTag());
		int32_t type = f->getType();
		int32_t count = f->getCount();
		if (type == 0) {
			type = $TIFFTag::TIFF_UNDEFINED;
		}
		int32_t size = count * $TIFFTag::getSizeOfType(type);
		if (type == $TIFFTag::TIFF_ASCII) {
			int32_t chars = 0;
			for (int32_t i = 0; i < count; ++i) {
				chars += $nc($(f->getAsString(i)))->length() + 1;
			}
			count = chars;
			size = count;
		}
		int32_t tagNumber = f->getTagNumber();
		stream->writeShort(tagNumber);
		stream->writeShort(type);
		stream->writeInt(count);
		stream->writeInt(0);
		stream->mark();
		stream->skipBytes(-4);
		int64_t pos = 0;
		if (size > 4 || $nc(tag)->isIFDPointer()) {
			nextSpace = (int64_t)((nextSpace + 3) & (uint64_t)(int64_t)~3);
			stream->writeInt((int32_t)nextSpace);
			stream->seek(nextSpace);
			pos = nextSpace;
			bool var$0 = tag->isIFDPointer();
			if (var$0 && f->hasDirectory()) {
				$var(TIFFIFD, subIFD, getDirectoryAsIFD($(f->getDirectory())));
				$nc(subIFD)->writeToStream(stream);
				nextSpace = subIFD->lastPosition;
			} else {
				writeTIFFFieldToStream(f, stream);
				nextSpace = stream->getStreamPosition();
			}
		} else {
			pos = stream->getStreamPosition();
			writeTIFFFieldToStream(f, stream);
		}
		if (tagNumber == $BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS || tagNumber == $BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS || tagNumber == $BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH) {
			this->stripOrTileByteCountsPosition = pos;
		} else if (tagNumber == $BaselineTIFFTagSet::TAG_STRIP_OFFSETS || tagNumber == $BaselineTIFFTagSet::TAG_TILE_OFFSETS || tagNumber == $BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT) {
			this->stripOrTileOffsetsPosition = pos;
		}
		stream->reset();
	}
	this->lastPosition = nextSpace;
}

int64_t TIFFIFD::getStripOrTileByteCountsPosition() {
	return this->stripOrTileByteCountsPosition;
}

int64_t TIFFIFD::getStripOrTileOffsetsPosition() {
	return this->stripOrTileOffsetsPosition;
}

int64_t TIFFIFD::getLastPosition() {
	return this->lastPosition;
}

void TIFFIFD::setPositions(int64_t stripOrTileOffsetsPosition, int64_t stripOrTileByteCountsPosition, int64_t lastPosition) {
	this->stripOrTileOffsetsPosition = stripOrTileOffsetsPosition;
	this->stripOrTileByteCountsPosition = stripOrTileByteCountsPosition;
	this->lastPosition = lastPosition;
}

TIFFIFD* TIFFIFD::getShallowClone() {
	$var($TIFFTagSet, baselineTagSet, $BaselineTIFFTagSet::getInstance());
	$var($List, tagSetList, getTagSetList());
	if (!$nc(tagSetList)->contains(baselineTagSet)) {
		return this;
	}
	$var(TIFFIFD, shallowClone, $new(TIFFIFD, tagSetList, $(getParentTag())));
	$var($Set, baselineTagNumbers, $nc(baselineTagSet)->getTagNumbers());
	$var($Iterator, fields, iterator());
	while ($nc(fields)->hasNext()) {
		$var($TIFFField, field, $cast($TIFFField, fields->next()));
		$var($Integer, tagNumber, $Integer::valueOf($nc(field)->getTagNumber()));
		$var($TIFFField, fieldClone, nullptr);
		if ($nc(baselineTagNumbers)->contains(tagNumber)) {
			$var($Object, fieldData, $nc(field)->getData());
			int32_t fieldType = field->getType();
			try {
				switch (fieldType) {
				case $TIFFTag::TIFF_BYTE:
					{}
				case $TIFFTag::TIFF_SBYTE:
					{}
				case $TIFFTag::TIFF_UNDEFINED:
					{
						$assign(fieldData, $nc(($cast($bytes, fieldData)))->clone());
						break;
					}
				case $TIFFTag::TIFF_ASCII:
					{
						$assign(fieldData, $nc(($cast($StringArray, fieldData)))->clone());
						break;
					}
				case $TIFFTag::TIFF_SHORT:
					{
						$assign(fieldData, $nc(($cast($chars, fieldData)))->clone());
						break;
					}
				case $TIFFTag::TIFF_LONG:
					{}
				case $TIFFTag::TIFF_IFD_POINTER:
					{
						$assign(fieldData, $nc(($cast($longs, fieldData)))->clone());
						break;
					}
				case $TIFFTag::TIFF_RATIONAL:
					{
						$assign(fieldData, $nc(($cast($longArray2, fieldData)))->clone());
						break;
					}
				case $TIFFTag::TIFF_SSHORT:
					{
						$assign(fieldData, $nc(($cast($shorts, fieldData)))->clone());
						break;
					}
				case $TIFFTag::TIFF_SLONG:
					{
						$assign(fieldData, $nc(($cast($ints, fieldData)))->clone());
						break;
					}
				case $TIFFTag::TIFF_SRATIONAL:
					{
						$assign(fieldData, $nc(($cast($intArray2, fieldData)))->clone());
						break;
					}
				case $TIFFTag::TIFF_FLOAT:
					{
						$assign(fieldData, $nc(($cast($floats, fieldData)))->clone());
						break;
					}
				case $TIFFTag::TIFF_DOUBLE:
					{
						$assign(fieldData, $nc(($cast($doubles, fieldData)))->clone());
						break;
					}
				default:
					{}
				}
			} catch ($Exception&) {
				$catch();
			}
			$var($TIFFTag, var$0, field->getTag());
			int32_t var$1 = fieldType;
			$assign(fieldClone, $new($TIFFField, var$0, var$1, field->getCount(), fieldData));
		} else {
			$assign(fieldClone, field);
		}
		shallowClone->addTIFFField(fieldClone);
	}
	shallowClone->setPositions(this->stripOrTileOffsetsPosition, this->stripOrTileByteCountsPosition, this->lastPosition);
	return shallowClone;
}

void clinit$TIFFIFD($Class* class$) {
	$assignStatic(TIFFIFD::essentialTags, nullptr);
}

TIFFIFD::TIFFIFD() {
}

$Class* TIFFIFD::load$($String* name, bool initialize) {
	$loadClass(TIFFIFD, name, initialize, &_TIFFIFD_ClassInfo_, clinit$TIFFIFD, allocate$TIFFIFD);
	return class$;
}

$Class* TIFFIFD::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com