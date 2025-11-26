#include <javax/imageio/plugins/tiff/TIFFDirectory.h>

#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef MAX_LOW_FIELD_TAG_NUM
#undef NATIVE_METADATA_FORMAT_NAME

using $TIFFFieldArray = $Array<::javax::imageio::plugins::tiff::TIFFField>;
using $TIFFTagSetArray = $Array<::javax::imageio::plugins::tiff::TIFFTagSet>;
using $TIFFIFD = ::com::sun::imageio::plugins::tiff::TIFFIFD;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _TIFFDirectory_FieldInfo_[] = {
	{"MAX_LOW_FIELD_TAG_NUM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFDirectory, MAX_LOW_FIELD_TAG_NUM)},
	{"tagSets", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;", $PRIVATE, $field(TIFFDirectory, tagSets)},
	{"parentTag", "Ljavax/imageio/plugins/tiff/TIFFTag;", nullptr, $PRIVATE, $field(TIFFDirectory, parentTag)},
	{"lowFields", "[Ljavax/imageio/plugins/tiff/TIFFField;", nullptr, $PRIVATE, $field(TIFFDirectory, lowFields)},
	{"numLowFields", "I", nullptr, $PRIVATE, $field(TIFFDirectory, numLowFields)},
	{"highFields", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljavax/imageio/plugins/tiff/TIFFField;>;", $PRIVATE, $field(TIFFDirectory, highFields)},
	{}
};

$MethodInfo _TIFFDirectory_MethodInfo_[] = {
	{"<init>", "([Ljavax/imageio/plugins/tiff/TIFFTagSet;Ljavax/imageio/plugins/tiff/TIFFTag;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFDirectory::*)($TIFFTagSetArray*,$TIFFTag*)>(&TIFFDirectory::init$))},
	{"addTIFFField", "(Ljavax/imageio/plugins/tiff/TIFFField;)V", nullptr, $PUBLIC},
	{"addTagSet", "(Ljavax/imageio/plugins/tiff/TIFFTagSet;)V", nullptr, $PUBLIC},
	{"clone", "()Ljavax/imageio/plugins/tiff/TIFFDirectory;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"containsTIFFField", "(I)Z", nullptr, $PUBLIC},
	{"createFromMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)Ljavax/imageio/plugins/tiff/TIFFDirectory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TIFFDirectory*(*)($IIOMetadata*)>(&TIFFDirectory::createFromMetadata)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getAsMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getNumTIFFFields", "()I", nullptr, $PUBLIC},
	{"getParentTag", "()Ljavax/imageio/plugins/tiff/TIFFTag;", nullptr, $PUBLIC},
	{"getTIFFField", "(I)Ljavax/imageio/plugins/tiff/TIFFField;", nullptr, $PUBLIC},
	{"getTIFFFields", "()[Ljavax/imageio/plugins/tiff/TIFFField;", nullptr, $PUBLIC},
	{"getTag", "(I)Ljavax/imageio/plugins/tiff/TIFFTag;", nullptr, $PUBLIC},
	{"getTagSets", "()[Ljavax/imageio/plugins/tiff/TIFFTagSet;", nullptr, $PUBLIC},
	{"removeTIFFField", "(I)V", nullptr, $PUBLIC},
	{"removeTIFFFields", "()V", nullptr, $PUBLIC},
	{"removeTagSet", "(Ljavax/imageio/plugins/tiff/TIFFTagSet;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFDirectory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.plugins.tiff.TIFFDirectory",
	"java.lang.Object",
	"java.lang.Cloneable",
	_TIFFDirectory_FieldInfo_,
	_TIFFDirectory_MethodInfo_
};

$Object* allocate$TIFFDirectory($Class* clazz) {
	return $of($alloc(TIFFDirectory));
}

TIFFDirectory* TIFFDirectory::createFromMetadata($IIOMetadata* tiffImageMetadata) {
	$init(TIFFDirectory);
	$useLocalCurrentObjectStackCache();
	if (tiffImageMetadata == nullptr) {
		$throwNew($NullPointerException, "tiffImageMetadata == null"_s);
	}
	$var($TIFFImageMetadata, tim, nullptr);
	if ($instanceOf($TIFFImageMetadata, tiffImageMetadata)) {
		$assign(tim, $cast($TIFFImageMetadata, tiffImageMetadata));
	} else {
		$var($ArrayList, l, $new($ArrayList, 1));
		l->add($($BaselineTIFFTagSet::getInstance()));
		$assign(tim, $new($TIFFImageMetadata, static_cast<$List*>(l)));
		$var($String, formatName, nullptr);
		$init($TIFFImageMetadata);
		if ($nc($TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME)->equals($($nc(tiffImageMetadata)->getNativeMetadataFormatName()))) {
			$assign(formatName, $TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME);
		} else {
			$var($StringArray, extraNames, $nc(tiffImageMetadata)->getExtraMetadataFormatNames());
			if (extraNames != nullptr) {
				for (int32_t i = 0; i < extraNames->length; ++i) {
					if ($nc($TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME)->equals(extraNames->get(i))) {
						$assign(formatName, extraNames->get(i));
						break;
					}
				}
			}
			if (formatName == nullptr) {
				if (tiffImageMetadata->isStandardMetadataFormatSupported()) {
					$init($IIOMetadataFormatImpl);
					$assign(formatName, $IIOMetadataFormatImpl::standardMetadataFormatName);
				} else {
					$throwNew($IllegalArgumentException, "Parameter does not support required metadata format!"_s);
				}
			}
		}
		tim->setFromTree(formatName, $($nc(tiffImageMetadata)->getAsTree(formatName)));
	}
	return $nc(tim)->getRootIFD();
}

void TIFFDirectory::init$($TIFFTagSetArray* tagSets, $TIFFTag* parentTag) {
	$set(this, lowFields, $new($TIFFFieldArray, TIFFDirectory::MAX_LOW_FIELD_TAG_NUM + 1));
	this->numLowFields = 0;
	$set(this, highFields, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
	if (tagSets == nullptr) {
		$throwNew($NullPointerException, "tagSets == null!"_s);
	}
	$set(this, tagSets, $new($ArrayList, $nc(tagSets)->length));
	int32_t numTagSets = $nc(tagSets)->length;
	for (int32_t i = 0; i < numTagSets; ++i) {
		$nc(this->tagSets)->add(tagSets->get(i));
	}
	$set(this, parentTag, parentTag);
}

$TIFFTagSetArray* TIFFDirectory::getTagSets() {
	return $fcast($TIFFTagSetArray, $nc(this->tagSets)->toArray($$new($TIFFTagSetArray, $nc(this->tagSets)->size())));
}

void TIFFDirectory::addTagSet($TIFFTagSet* tagSet) {
	if (tagSet == nullptr) {
		$throwNew($NullPointerException, "tagSet == null"_s);
	}
	if (!$nc(this->tagSets)->contains(tagSet)) {
		$nc(this->tagSets)->add(tagSet);
	}
}

void TIFFDirectory::removeTagSet($TIFFTagSet* tagSet) {
	if (tagSet == nullptr) {
		$throwNew($NullPointerException, "tagSet == null"_s);
	}
	if ($nc(this->tagSets)->contains(tagSet)) {
		$nc(this->tagSets)->remove($of(tagSet));
	}
}

$TIFFTag* TIFFDirectory::getParentTag() {
	return this->parentTag;
}

$TIFFTag* TIFFDirectory::getTag(int32_t tagNumber) {
	return $TIFFIFD::getTag(tagNumber, this->tagSets);
}

int32_t TIFFDirectory::getNumTIFFFields() {
	return this->numLowFields + $nc(this->highFields)->size();
}

bool TIFFDirectory::containsTIFFField(int32_t tagNumber) {
	return (tagNumber >= 0 && tagNumber <= TIFFDirectory::MAX_LOW_FIELD_TAG_NUM && $nc(this->lowFields)->get(tagNumber) != nullptr) || $nc(this->highFields)->containsKey($($Integer::valueOf(tagNumber)));
}

void TIFFDirectory::addTIFFField($TIFFField* f) {
	if (f == nullptr) {
		$throwNew($NullPointerException, "f == null"_s);
	}
	int32_t tagNumber = $nc(f)->getTagNumber();
	if (tagNumber >= 0 && tagNumber <= TIFFDirectory::MAX_LOW_FIELD_TAG_NUM) {
		if ($nc(this->lowFields)->get(tagNumber) == nullptr) {
			++this->numLowFields;
		}
		$nc(this->lowFields)->set(tagNumber, f);
	} else {
		$nc(this->highFields)->put($($Integer::valueOf(tagNumber)), f);
	}
}

$TIFFField* TIFFDirectory::getTIFFField(int32_t tagNumber) {
	$useLocalCurrentObjectStackCache();
	$var($TIFFField, f, nullptr);
	if (tagNumber >= 0 && tagNumber <= TIFFDirectory::MAX_LOW_FIELD_TAG_NUM) {
		$assign(f, $nc(this->lowFields)->get(tagNumber));
	} else {
		$assign(f, $cast($TIFFField, $nc(this->highFields)->get($($Integer::valueOf(tagNumber)))));
	}
	return f;
}

void TIFFDirectory::removeTIFFField(int32_t tagNumber) {
	if (tagNumber >= 0 && tagNumber <= TIFFDirectory::MAX_LOW_FIELD_TAG_NUM) {
		if ($nc(this->lowFields)->get(tagNumber) != nullptr) {
			--this->numLowFields;
			$nc(this->lowFields)->set(tagNumber, nullptr);
		}
	} else {
		$nc(this->highFields)->remove($($Integer::valueOf(tagNumber)));
	}
}

$TIFFFieldArray* TIFFDirectory::getTIFFFields() {
	$useLocalCurrentObjectStackCache();
	$var($TIFFFieldArray, fields, $new($TIFFFieldArray, this->numLowFields + $nc(this->highFields)->size()));
	int32_t nextIndex = 0;
	for (int32_t i = 0; i <= TIFFDirectory::MAX_LOW_FIELD_TAG_NUM; ++i) {
		if ($nc(this->lowFields)->get(i) != nullptr) {
			fields->set(nextIndex++, $nc(this->lowFields)->get(i));
			if (nextIndex == this->numLowFields) {
				break;
			}
		}
	}
	if (!$nc(this->highFields)->isEmpty()) {
		{
			$var($Iterator, i$, $nc($($nc(this->highFields)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Integer, tagNumber, $cast($Integer, i$->next()));
				{
					fields->set(nextIndex++, $cast($TIFFField, $($nc(this->highFields)->get(tagNumber))));
				}
			}
		}
	}
	return fields;
}

void TIFFDirectory::removeTIFFFields() {
	$Arrays::fill(this->lowFields, ($Object*)nullptr);
	this->numLowFields = 0;
	$nc(this->highFields)->clear();
}

$IIOMetadata* TIFFDirectory::getAsMetadata() {
	return $new($TIFFImageMetadata, $($TIFFIFD::getDirectoryAsIFD(this)));
}

TIFFDirectory* TIFFDirectory::clone() {
	$useLocalCurrentObjectStackCache();
	$var(TIFFDirectory, dir, $cast(TIFFDirectory, $Cloneable::clone()));
	$set($nc(dir), tagSets, $new($ArrayList, static_cast<$Collection*>(this->tagSets)));
	$set(dir, parentTag, getParentTag());
	$var($TIFFFieldArray, fields, getTIFFFields());
	{
		$var($TIFFFieldArray, arr$, fields);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TIFFField, field, arr$->get(i$));
			{
				dir->addTIFFField($($nc(field)->clone()));
			}
		}
	}
	return dir;
}

TIFFDirectory::TIFFDirectory() {
}

$Class* TIFFDirectory::load$($String* name, bool initialize) {
	$loadClass(TIFFDirectory, name, initialize, &_TIFFDirectory_ClassInfo_, allocate$TIFFDirectory);
	return class$;
}

$Class* TIFFDirectory::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax