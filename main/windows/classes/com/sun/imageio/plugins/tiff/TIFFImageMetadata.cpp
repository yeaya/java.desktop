#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>

#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageWriter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFDirectory.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef COMPRESSION_JPEG
#undef COMPRESSION_NONE
#undef COMPRESSION_OLD_JPEG
#undef EXTRA_SAMPLES_ASSOCIATED_ALPHA
#undef EXTRA_SAMPLES_UNASSOCIATED_ALPHA
#undef FILL_ORDER_LEFT_TO_RIGHT
#undef FILL_ORDER_RIGHT_TO_LEFT
#undef MAX_DATATYPE
#undef MIN_DATATYPE
#undef NATIVE_METADATA_FORMAT_CLASS_NAME
#undef NATIVE_METADATA_FORMAT_NAME
#undef NEW_SUBFILE_TYPE_REDUCED_RESOLUTION
#undef NEW_SUBFILE_TYPE_SINGLE_PAGE
#undef NEW_SUBFILE_TYPE_TRANSPARENCY
#undef PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO
#undef PHOTOMETRIC_INTERPRETATION_CIELAB
#undef PHOTOMETRIC_INTERPRETATION_CMYK
#undef PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR
#undef PHOTOMETRIC_INTERPRETATION_RGB
#undef PHOTOMETRIC_INTERPRETATION_TRANSPARENCY_MASK
#undef PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO
#undef PHOTOMETRIC_INTERPRETATION_Y_CB_CR
#undef PLANAR_CONFIGURATION_CHUNKY
#undef PLANAR_CONFIGURATION_PLANAR
#undef RESOLUTION_UNIT_CENTIMETER
#undef RESOLUTION_UNIT_INCH
#undef RESOLUTION_UNIT_NONE
#undef SAMPLE_FORMAT_FLOATING_POINT
#undef SAMPLE_FORMAT_SIGNED_INTEGER
#undef SAMPLE_FORMAT_UNSIGNED_INTEGER
#undef TAG_ARTIST
#undef TAG_BITS_PER_SAMPLE
#undef TAG_COLOR_MAP
#undef TAG_COMPRESSION
#undef TAG_COPYRIGHT
#undef TAG_DATE_TIME
#undef TAG_DOCUMENT_NAME
#undef TAG_EXIF_IFD_POINTER
#undef TAG_EXTRA_SAMPLES
#undef TAG_FILL_ORDER
#undef TAG_HOST_COMPUTER
#undef TAG_IMAGE_DESCRIPTION
#undef TAG_INK_NAMES
#undef TAG_JPEG_INTERCHANGE_FORMAT
#undef TAG_MAKE
#undef TAG_MODEL
#undef TAG_NEW_SUBFILE_TYPE
#undef TAG_ORIENTATION
#undef TAG_PAGE_NAME
#undef TAG_PHOTOMETRIC_INTERPRETATION
#undef TAG_PLANAR_CONFIGURATION
#undef TAG_RESOLUTION_UNIT
#undef TAG_SAMPLES_PER_PIXEL
#undef TAG_SAMPLE_FORMAT
#undef TAG_SOFTWARE
#undef TAG_X_POSITION
#undef TAG_X_RESOLUTION
#undef TAG_Y_POSITION
#undef TAG_Y_RESOLUTION
#undef TIFF_ASCII
#undef TIFF_IFD_POINTER
#undef TIFF_LONG
#undef TIFF_RATIONAL
#undef TIFF_SHORT
#undef UNKNOWN_TAG_NAME

using $longArray2 = $Array<int64_t, 2>;
using $TIFFIFD = ::com::sun::imageio::plugins::tiff::TIFFIFD;
using $TIFFImageWriter = ::com::sun::imageio::plugins::tiff::TIFFImageWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ExifParentTIFFTagSet = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet;
using $TIFFDirectory = ::javax::imageio::plugins::tiff::TIFFDirectory;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFImageMetadata_FieldInfo_[] = {
	{"NATIVE_METADATA_FORMAT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TIFFImageMetadata, NATIVE_METADATA_FORMAT_NAME)},
	{"NATIVE_METADATA_FORMAT_CLASS_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TIFFImageMetadata, NATIVE_METADATA_FORMAT_CLASS_NAME)},
	{"tagSets", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;", $PRIVATE, $field(TIFFImageMetadata, tagSets)},
	{"rootIFD", "Lcom/sun/imageio/plugins/tiff/TIFFIFD;", nullptr, 0, $field(TIFFImageMetadata, rootIFD)},
	{"colorSpaceNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFImageMetadata, colorSpaceNames)},
	{"orientationNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFImageMetadata, orientationNames)},
	{}
};

$MethodInfo _TIFFImageMetadata_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;)V", $PUBLIC, $method(static_cast<void(TIFFImageMetadata::*)($List*)>(&TIFFImageMetadata::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/tiff/TIFFIFD;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageMetadata::*)($TIFFIFD*)>(&TIFFImageMetadata::init$))},
	{"addShortOrLongField", "(IJ)V", nullptr, $PUBLIC},
	{"fatal", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Node*,$String*)>(&TIFFImageMetadata::fatal)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getAsTree", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Node*,$String*)>(&TIFFImageMetadata::getAttribute))},
	{"getChildNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(static_cast<$Node*(TIFFImageMetadata::*)($Node*,$String*)>(&TIFFImageMetadata::getChildNode))},
	{"getIFDAsTree", "(Lcom/sun/imageio/plugins/tiff/TIFFIFD;Ljava/lang/String;I)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(static_cast<$Node*(TIFFImageMetadata::*)($TIFFIFD*,$String*,int32_t)>(&TIFFImageMetadata::getIFDAsTree))},
	{"getNativeTree", "()Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(static_cast<$Node*(TIFFImageMetadata::*)()>(&TIFFImageMetadata::getNativeTree))},
	{"getRootIFD", "()Lcom/sun/imageio/plugins/tiff/TIFFIFD;", nullptr, $PUBLIC},
	{"getShallowClone", "()Lcom/sun/imageio/plugins/tiff/TIFFImageMetadata;", nullptr, $PUBLIC},
	{"getStandardChromaNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardCompressionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDataNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDimensionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDocumentNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardTextNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardTransparencyNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getTIFFField", "(I)Ljavax/imageio/plugins/tiff/TIFFField;", nullptr, $PUBLIC},
	{"initializeFromStream", "(Ljavax/imageio/stream/ImageInputStream;ZZ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"listToCharArray", "(Ljava/lang/String;)[C", nullptr, $PRIVATE, $method(static_cast<$chars*(TIFFImageMetadata::*)($String*)>(&TIFFImageMetadata::listToCharArray))},
	{"listToIntArray", "(Ljava/lang/String;)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(TIFFImageMetadata::*)($String*)>(&TIFFImageMetadata::listToIntArray))},
	{"mergeNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageMetadata::*)($Node*)>(&TIFFImageMetadata::mergeNativeTree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageMetadata::*)($Node*)>(&TIFFImageMetadata::mergeStandardTree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"parseIFD", "(Lorg/w3c/dom/Node;)Lcom/sun/imageio/plugins/tiff/TIFFIFD;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TIFFIFD*(*)($Node*)>(&TIFFImageMetadata::parseIFD)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"removeTIFFField", "(I)V", nullptr, $PUBLIC},
	{"repeat", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(TIFFImageMetadata::*)($String*,int32_t)>(&TIFFImageMetadata::repeat))},
	{"reset", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFImageMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFImageMetadata",
	"javax.imageio.metadata.IIOMetadata",
	nullptr,
	_TIFFImageMetadata_FieldInfo_,
	_TIFFImageMetadata_MethodInfo_
};

$Object* allocate$TIFFImageMetadata($Class* clazz) {
	return $of($alloc(TIFFImageMetadata));
}

$String* TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME = nullptr;
$String* TIFFImageMetadata::NATIVE_METADATA_FORMAT_CLASS_NAME = nullptr;
$StringArray* TIFFImageMetadata::colorSpaceNames = nullptr;
$StringArray* TIFFImageMetadata::orientationNames = nullptr;

void TIFFImageMetadata::init$($List* tagSets) {
	$IIOMetadata::init$(true, TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME, TIFFImageMetadata::NATIVE_METADATA_FORMAT_CLASS_NAME, nullptr, nullptr);
	$set(this, tagSets, tagSets);
	$set(this, rootIFD, $new($TIFFIFD, tagSets));
}

void TIFFImageMetadata::init$($TIFFIFD* ifd) {
	$IIOMetadata::init$(true, TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME, TIFFImageMetadata::NATIVE_METADATA_FORMAT_CLASS_NAME, nullptr, nullptr);
	$set(this, tagSets, $nc(ifd)->getTagSetList());
	$set(this, rootIFD, ifd);
}

void TIFFImageMetadata::initializeFromStream($ImageInputStream* stream, bool ignoreMetadata, bool readUnknownTags) {
	$nc(this->rootIFD)->initialize(stream, true, ignoreMetadata, readUnknownTags);
}

void TIFFImageMetadata::addShortOrLongField(int32_t tagNumber, int64_t value) {
	$var($TIFFField, field, $new($TIFFField, $($nc(this->rootIFD)->getTag(tagNumber)), value));
	$nc(this->rootIFD)->addTIFFField(field);
}

bool TIFFImageMetadata::isReadOnly() {
	return false;
}

$Node* TIFFImageMetadata::getIFDAsTree($TIFFIFD* ifd, $String* parentTagName, int32_t parentTagNumber) {
	$var($IIOMetadataNode, IFDRoot, $new($IIOMetadataNode, "TIFFIFD"_s));
	if (parentTagNumber != 0) {
		IFDRoot->setAttribute("parentTagNumber"_s, $($Integer::toString(parentTagNumber)));
	}
	if (parentTagName != nullptr) {
		IFDRoot->setAttribute("parentTagName"_s, parentTagName);
	}
	$var($List, tagSets, $nc(ifd)->getTagSetList());
	if ($nc(tagSets)->size() > 0) {
		$var($Iterator, iter, tagSets->iterator());
		$var($StringBuilder, tagSetNames, $new($StringBuilder));
		while ($nc(iter)->hasNext()) {
			$var($TIFFTagSet, tagSet, $cast($TIFFTagSet, iter->next()));
			tagSetNames->append($($nc($of(tagSet))->getClass()->getName()));
			if (iter->hasNext()) {
				tagSetNames->append(","_s);
			}
		}
		IFDRoot->setAttribute("tagSets"_s, $(tagSetNames->toString()));
	}
	$var($Iterator, iter, ifd->iterator());
	while ($nc(iter)->hasNext()) {
		$var($TIFFField, f, $cast($TIFFField, iter->next()));
		int32_t tagNumber = $nc(f)->getTagNumber();
		$var($TIFFTag, tag, $TIFFIFD::getTag(tagNumber, tagSets));
		$var($Node, node, nullptr);
		if (tag == nullptr) {
			$assign(node, f->getAsNativeNode());
		} else {
			bool var$1 = tag->isIFDPointer();
			if (var$1 && f->hasDirectory()) {
				$var($TIFFIFD, subIFD, $TIFFIFD::getDirectoryAsIFD($(f->getDirectory())));
				$var($TIFFIFD, var$2, subIFD);
				$var($String, var$3, tag->getName());
				$assign(node, getIFDAsTree(var$2, var$3, tag->getNumber()));
			} else {
				$assign(node, f->getAsNativeNode());
			}
		}
		if (node != nullptr) {
			IFDRoot->appendChild(node);
		}
	}
	return IFDRoot;
}

$Node* TIFFImageMetadata::getAsTree($String* formatName) {
	if ($nc(formatName)->equals(this->nativeMetadataFormatName)) {
		return getNativeTree();
	} else {
		$init($IIOMetadataFormatImpl);
		if (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			return getStandardTree();
		} else {
			$throwNew($IllegalArgumentException, "Not a recognized format!"_s);
		}
	}
}

$Node* TIFFImageMetadata::getNativeTree() {
	$var($IIOMetadataNode, root, $new($IIOMetadataNode, this->nativeMetadataFormatName));
	$var($Node, IFDNode, getIFDAsTree(this->rootIFD, nullptr, 0));
	root->appendChild(IFDNode);
	return root;
}

$IIOMetadataNode* TIFFImageMetadata::getStandardChromaNode() {
	$var($IIOMetadataNode, chroma_node, $new($IIOMetadataNode, "Chroma"_s));
	$var($IIOMetadataNode, node, nullptr);
	$var($TIFFField, f, nullptr);
	int32_t photometricInterpretation = -1;
	bool isPaletteColor = false;
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION));
	if (f != nullptr) {
		photometricInterpretation = f->getAsInt(0);
		isPaletteColor = photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR;
	}
	int32_t numChannels = -1;
	if (isPaletteColor) {
		numChannels = 3;
	} else {
		$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL));
		if (f != nullptr) {
			numChannels = f->getAsInt(0);
		} else {
			$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE));
			if (f != nullptr) {
				numChannels = f->getCount();
			}
		}
	}
	if (photometricInterpretation != -1) {
		if (photometricInterpretation >= 0 && photometricInterpretation < $nc(TIFFImageMetadata::colorSpaceNames)->length) {
			$assign(node, $new($IIOMetadataNode, "ColorSpaceType"_s));
			$var($String, csName, nullptr);
			if (photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_CMYK && numChannels == 3) {
				$assign(csName, "CMY"_s);
			} else {
				$assign(csName, $nc(TIFFImageMetadata::colorSpaceNames)->get(photometricInterpretation));
			}
			node->setAttribute("name"_s, csName);
			chroma_node->appendChild(node);
		}
		$assign(node, $new($IIOMetadataNode, "BlackIsZero"_s));
		node->setAttribute("value"_s, (photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO) ? "FALSE"_s : "TRUE"_s);
		chroma_node->appendChild(node);
	}
	if (numChannels != -1) {
		$assign(node, $new($IIOMetadataNode, "NumChannels"_s));
		node->setAttribute("value"_s, $($Integer::toString(numChannels)));
		chroma_node->appendChild(node);
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_COLOR_MAP));
	if (f != nullptr) {
		bool hasAlpha = false;
		$assign(node, $new($IIOMetadataNode, "Palette"_s));
		int32_t len = $div(f->getCount(), (hasAlpha ? 4 : 3));
		for (int32_t i = 0; i < len; ++i) {
			$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "PaletteEntry"_s));
			entry->setAttribute("index"_s, $($Integer::toString(i)));
			int32_t r = (f->getAsInt(i) * 255) / 0x0000FFFF;
			int32_t g = (f->getAsInt(len + i) * 255) / 0x0000FFFF;
			int32_t b = (f->getAsInt(2 * len + i) * 255) / 0x0000FFFF;
			entry->setAttribute("red"_s, $($Integer::toString(r)));
			entry->setAttribute("green"_s, $($Integer::toString(g)));
			entry->setAttribute("blue"_s, $($Integer::toString(b)));
			if (hasAlpha) {
				int32_t alpha = 0;
				entry->setAttribute("alpha"_s, $($Integer::toString(alpha)));
			}
			node->appendChild(entry);
		}
		chroma_node->appendChild(node);
	}
	return chroma_node;
}

$IIOMetadataNode* TIFFImageMetadata::getStandardCompressionNode() {
	$var($IIOMetadataNode, compression_node, $new($IIOMetadataNode, "Compression"_s));
	$var($IIOMetadataNode, node, nullptr);
	$var($TIFFField, f, nullptr);
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION));
	if (f != nullptr) {
		$var($String, compressionTypeName, nullptr);
		int32_t compression = f->getAsInt(0);
		bool isLossless = true;
		if (compression == $BaselineTIFFTagSet::COMPRESSION_NONE) {
			$assign(compressionTypeName, "None"_s);
			isLossless = true;
		} else {
			$init($TIFFImageWriter);
			$var($ints, compressionNumbers, $TIFFImageWriter::compressionNumbers);
			for (int32_t i = 0; i < $nc(compressionNumbers)->length; ++i) {
				if (compression == compressionNumbers->get(i)) {
					$assign(compressionTypeName, $nc($TIFFImageWriter::compressionTypes)->get(i));
					isLossless = $nc($TIFFImageWriter::isCompressionLossless)->get(i);
					break;
				}
			}
		}
		if (compressionTypeName != nullptr) {
			$assign(node, $new($IIOMetadataNode, "CompressionTypeName"_s));
			node->setAttribute("value"_s, compressionTypeName);
			compression_node->appendChild(node);
			$assign(node, $new($IIOMetadataNode, "Lossless"_s));
			node->setAttribute("value"_s, isLossless ? "TRUE"_s : "FALSE"_s);
			compression_node->appendChild(node);
		}
	}
	$assign(node, $new($IIOMetadataNode, "NumProgressiveScans"_s));
	node->setAttribute("value"_s, "1"_s);
	compression_node->appendChild(node);
	return compression_node;
}

$String* TIFFImageMetadata::repeat($String* s, int32_t times) {
	if (times == 1) {
		return s;
	}
	$var($StringBuilder, sb, $new($StringBuilder, ($nc(s)->length() + 1) * times - 1));
	sb->append(s);
	for (int32_t i = 1; i < times; ++i) {
		sb->append(" "_s);
		sb->append(s);
	}
	return sb->toString();
}

$IIOMetadataNode* TIFFImageMetadata::getStandardDataNode() {
	$var($IIOMetadataNode, data_node, $new($IIOMetadataNode, "Data"_s));
	$var($IIOMetadataNode, node, nullptr);
	$var($TIFFField, f, nullptr);
	bool isPaletteColor = false;
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION));
	if (f != nullptr) {
		isPaletteColor = f->getAsInt(0) == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR;
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_PLANAR_CONFIGURATION));
	$var($String, planarConfiguration, "PixelInterleaved"_s);
	if (f != nullptr && f->getAsInt(0) == $BaselineTIFFTagSet::PLANAR_CONFIGURATION_PLANAR) {
		$assign(planarConfiguration, "PlaneInterleaved"_s);
	}
	$assign(node, $new($IIOMetadataNode, "PlanarConfiguration"_s));
	node->setAttribute("value"_s, planarConfiguration);
	data_node->appendChild(node);
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION));
	if (f != nullptr) {
		int32_t photometricInterpretation = f->getAsInt(0);
		$var($String, sampleFormat, "UnsignedIntegral"_s);
		if (photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR) {
			$assign(sampleFormat, "Index"_s);
		} else {
			$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_SAMPLE_FORMAT));
			if (f != nullptr) {
				int32_t format = f->getAsInt(0);
				if (format == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER) {
					$assign(sampleFormat, "SignedIntegral"_s);
				} else if (format == $BaselineTIFFTagSet::SAMPLE_FORMAT_UNSIGNED_INTEGER) {
					$assign(sampleFormat, "UnsignedIntegral"_s);
				} else if (format == $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
					$assign(sampleFormat, "Real"_s);
				} else {
					$assign(sampleFormat, nullptr);
				}
			}
		}
		if (sampleFormat != nullptr) {
			$assign(node, $new($IIOMetadataNode, "SampleFormat"_s));
			node->setAttribute("value"_s, sampleFormat);
			data_node->appendChild(node);
		}
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE));
	$var($ints, bitsPerSample, nullptr);
	if (f != nullptr) {
		$assign(bitsPerSample, f->getAsInts());
	} else {
		$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION));
		int32_t compression = f != nullptr ? $nc(f)->getAsInt(0) : $BaselineTIFFTagSet::COMPRESSION_NONE;
		bool var$0 = getTIFFField($ExifParentTIFFTagSet::TAG_EXIF_IFD_POINTER) != nullptr || compression == $BaselineTIFFTagSet::COMPRESSION_JPEG || compression == $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG;
		if (var$0 || getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT) != nullptr) {
			$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION));
			bool var$1 = f != nullptr;
			if (var$1) {
				bool var$2 = f->getAsInt(0) == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO;
				var$1 = (var$2 || f->getAsInt(0) == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO);
			}
			if (var$1) {
				$assign(bitsPerSample, $new($ints, {8}));
			} else {
				$assign(bitsPerSample, $new($ints, {
					8,
					8,
					8
				}));
			}
		} else {
			$assign(bitsPerSample, $new($ints, {1}));
		}
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(bitsPerSample)->length; ++i) {
		if (i > 0) {
			sb->append(" "_s);
		}
		sb->append(bitsPerSample->get(i));
	}
	$assign(node, $new($IIOMetadataNode, "BitsPerSample"_s));
	if (isPaletteColor) {
		node->setAttribute("value"_s, $(repeat($(sb->toString()), 3)));
	} else {
		node->setAttribute("value"_s, $(sb->toString()));
	}
	data_node->appendChild(node);
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_FILL_ORDER));
	int32_t fillOrder = f != nullptr ? $nc(f)->getAsInt(0) : $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT;
	$assign(sb, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(bitsPerSample)->length; ++i) {
		if (i > 0) {
			sb->append(" "_s);
		}
		int32_t maxBitIndex = bitsPerSample->get(i) == 1 ? 7 : bitsPerSample->get(i) - 1;
		int32_t msb = fillOrder == $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT ? maxBitIndex : 0;
		sb->append(msb);
	}
	$assign(node, $new($IIOMetadataNode, "SampleMSB"_s));
	if (isPaletteColor) {
		node->setAttribute("value"_s, $(repeat($(sb->toString()), 3)));
	} else {
		node->setAttribute("value"_s, $(sb->toString()));
	}
	data_node->appendChild(node);
	return data_node;
}

$IIOMetadataNode* TIFFImageMetadata::getStandardDimensionNode() {
	$var($IIOMetadataNode, dimension_node, $new($IIOMetadataNode, "Dimension"_s));
	$var($IIOMetadataNode, node, nullptr);
	$var($TIFFField, f, nullptr);
	$var($longs, xres, nullptr);
	$var($longs, yres, nullptr);
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_X_RESOLUTION));
	if (f != nullptr) {
		$assign(xres, $cast($longs, $nc($(f->getAsRational(0)))->clone()));
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_Y_RESOLUTION));
	if (f != nullptr) {
		$assign(yres, $cast($longs, $nc($(f->getAsRational(0)))->clone()));
	}
	if (xres != nullptr && yres != nullptr) {
		$assign(node, $new($IIOMetadataNode, "PixelAspectRatio"_s));
		float ratio = (float)((double)xres->get(1) * yres->get(0)) / (xres->get(0) * yres->get(1));
		node->setAttribute("value"_s, $($Float::toString(ratio)));
		dimension_node->appendChild(node);
	}
	if (xres != nullptr || yres != nullptr) {
		$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_RESOLUTION_UNIT));
		int32_t resolutionUnit = f != nullptr ? $nc(f)->getAsInt(0) : $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH;
		bool gotPixelSize = resolutionUnit != $BaselineTIFFTagSet::RESOLUTION_UNIT_NONE;
		if (resolutionUnit == $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH) {
			if (xres != nullptr) {
				(*xres)[0] *= 100;
				(*xres)[1] *= 254;
			}
			if (yres != nullptr) {
				(*yres)[0] *= 100;
				(*yres)[1] *= 254;
			}
		}
		if (gotPixelSize) {
			if (xres != nullptr) {
				float horizontalPixelSize = (float)(10.0 * xres->get(1) / xres->get(0));
				$assign(node, $new($IIOMetadataNode, "HorizontalPixelSize"_s));
				node->setAttribute("value"_s, $($Float::toString(horizontalPixelSize)));
				dimension_node->appendChild(node);
			}
			if (yres != nullptr) {
				float verticalPixelSize = (float)(10.0 * yres->get(1) / yres->get(0));
				$assign(node, $new($IIOMetadataNode, "VerticalPixelSize"_s));
				node->setAttribute("value"_s, $($Float::toString(verticalPixelSize)));
				dimension_node->appendChild(node);
			}
		}
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_RESOLUTION_UNIT));
	int32_t resolutionUnit = f != nullptr ? $nc(f)->getAsInt(0) : $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH;
	if (resolutionUnit == $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH || resolutionUnit == $BaselineTIFFTagSet::RESOLUTION_UNIT_CENTIMETER) {
		$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_X_POSITION));
		if (f != nullptr) {
			$var($longs, xpos, f->getAsRational(0));
			float xPosition = (float)$nc(xpos)->get(0) / (float)xpos->get(1);
			if (resolutionUnit == $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH) {
				xPosition *= 254.0f;
			} else {
				xPosition *= 10.0f;
			}
			$assign(node, $new($IIOMetadataNode, "HorizontalPosition"_s));
			node->setAttribute("value"_s, $($Float::toString(xPosition)));
			dimension_node->appendChild(node);
		}
		$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_Y_POSITION));
		if (f != nullptr) {
			$var($longs, ypos, f->getAsRational(0));
			float yPosition = (float)$nc(ypos)->get(0) / (float)ypos->get(1);
			if (resolutionUnit == $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH) {
				yPosition *= 254.0f;
			} else {
				yPosition *= 10.0f;
			}
			$assign(node, $new($IIOMetadataNode, "VerticalPosition"_s));
			node->setAttribute("value"_s, $($Float::toString(yPosition)));
			dimension_node->appendChild(node);
		}
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_ORIENTATION));
	if (f != nullptr) {
		int32_t o = f->getAsInt(0);
		if (o >= 0 && o < $nc(TIFFImageMetadata::orientationNames)->length) {
			$assign(node, $new($IIOMetadataNode, "ImageOrientation"_s));
			node->setAttribute("value"_s, $nc(TIFFImageMetadata::orientationNames)->get(o));
			dimension_node->appendChild(node);
		}
	}
	return dimension_node;
}

$IIOMetadataNode* TIFFImageMetadata::getStandardDocumentNode() {
	$var($IIOMetadataNode, document_node, $new($IIOMetadataNode, "Document"_s));
	$var($IIOMetadataNode, node, nullptr);
	$var($TIFFField, f, nullptr);
	$assign(node, $new($IIOMetadataNode, "FormatVersion"_s));
	node->setAttribute("value"_s, "6.0"_s);
	document_node->appendChild(node);
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_NEW_SUBFILE_TYPE));
	if (f != nullptr) {
		int32_t newSubFileType = f->getAsInt(0);
		$var($String, value, nullptr);
		if (((int32_t)(newSubFileType & (uint32_t)$BaselineTIFFTagSet::NEW_SUBFILE_TYPE_TRANSPARENCY)) != 0) {
			$assign(value, "TransparencyMask"_s);
		} else if (((int32_t)(newSubFileType & (uint32_t)$BaselineTIFFTagSet::NEW_SUBFILE_TYPE_REDUCED_RESOLUTION)) != 0) {
			$assign(value, "ReducedResolution"_s);
		} else if (((int32_t)(newSubFileType & (uint32_t)$BaselineTIFFTagSet::NEW_SUBFILE_TYPE_SINGLE_PAGE)) != 0) {
			$assign(value, "SinglePage"_s);
		}
		if (value != nullptr) {
			$assign(node, $new($IIOMetadataNode, "SubimageInterpretation"_s));
			node->setAttribute("value"_s, value);
			document_node->appendChild(node);
		}
	}
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_DATE_TIME));
	if (f != nullptr) {
		$var($String, s, f->getAsString(0));
		if ($nc(s)->length() == 19) {
			$assign(node, $new($IIOMetadataNode, "ImageCreationTime"_s));
			bool appendNode = false;
			try {
				node->setAttribute("year"_s, $(s->substring(0, 4)));
				node->setAttribute("month"_s, $(s->substring(5, 7)));
				node->setAttribute("day"_s, $(s->substring(8, 10)));
				node->setAttribute("hour"_s, $(s->substring(11, 13)));
				node->setAttribute("minute"_s, $(s->substring(14, 16)));
				node->setAttribute("second"_s, $(s->substring(17, 19)));
				appendNode = true;
			} catch ($IndexOutOfBoundsException&) {
				$var($IndexOutOfBoundsException, e, $catch());
				appendNode = false;
			}
			if (appendNode) {
				document_node->appendChild(node);
			}
		}
	}
	return document_node;
}

$IIOMetadataNode* TIFFImageMetadata::getStandardTextNode() {
	$var($IIOMetadataNode, text_node, nullptr);
	$var($IIOMetadataNode, node, nullptr);
	$var($TIFFField, f, nullptr);
	$var($ints, textFieldTagNumbers, $new($ints, {
		$BaselineTIFFTagSet::TAG_DOCUMENT_NAME,
		$BaselineTIFFTagSet::TAG_IMAGE_DESCRIPTION,
		$BaselineTIFFTagSet::TAG_MAKE,
		$BaselineTIFFTagSet::TAG_MODEL,
		$BaselineTIFFTagSet::TAG_PAGE_NAME,
		$BaselineTIFFTagSet::TAG_SOFTWARE,
		$BaselineTIFFTagSet::TAG_ARTIST,
		$BaselineTIFFTagSet::TAG_HOST_COMPUTER,
		$BaselineTIFFTagSet::TAG_INK_NAMES,
		$BaselineTIFFTagSet::TAG_COPYRIGHT
	}));
	for (int32_t i = 0; i < textFieldTagNumbers->length; ++i) {
		$assign(f, getTIFFField(textFieldTagNumbers->get(i)));
		if (f != nullptr) {
			$var($String, value, f->getAsString(0));
			if (text_node == nullptr) {
				$assign(text_node, $new($IIOMetadataNode, "Text"_s));
			}
			$assign(node, $new($IIOMetadataNode, "TextEntry"_s));
			node->setAttribute("keyword"_s, $($nc($(f->getTag()))->getName()));
			node->setAttribute("value"_s, value);
			$nc(text_node)->appendChild(node);
		}
	}
	return text_node;
}

$IIOMetadataNode* TIFFImageMetadata::getStandardTransparencyNode() {
	$var($IIOMetadataNode, transparency_node, $new($IIOMetadataNode, "Transparency"_s));
	$var($IIOMetadataNode, node, nullptr);
	$var($TIFFField, f, nullptr);
	$assign(node, $new($IIOMetadataNode, "Alpha"_s));
	$var($String, value, "none"_s);
	$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_EXTRA_SAMPLES));
	if (f != nullptr) {
		$var($ints, extraSamples, f->getAsInts());
		for (int32_t i = 0; i < $nc(extraSamples)->length; ++i) {
			if (extraSamples->get(i) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
				$assign(value, "premultiplied"_s);
				break;
			} else if (extraSamples->get(i) == $BaselineTIFFTagSet::EXTRA_SAMPLES_UNASSOCIATED_ALPHA) {
				$assign(value, "nonpremultiplied"_s);
				break;
			}
		}
	}
	node->setAttribute("value"_s, value);
	transparency_node->appendChild(node);
	return transparency_node;
}

void TIFFImageMetadata::fatal($Node* node, $String* reason) {
	$init(TIFFImageMetadata);
	$throwNew($IIOInvalidTreeException, reason, node);
}

$ints* TIFFImageMetadata::listToIntArray($String* list) {
	$var($StringTokenizer, st, $new($StringTokenizer, list, " "_s));
	$var($ArrayList, intList, $new($ArrayList));
	while (st->hasMoreTokens()) {
		$var($String, nextInteger, st->nextToken());
		$var($Integer, nextInt, $Integer::valueOf(nextInteger));
		intList->add(nextInt);
	}
	$var($ints, intArray, $new($ints, intList->size()));
	for (int32_t i = 0; i < intArray->length; ++i) {
		intArray->set(i, $nc(($cast($Integer, $(intList->get(i)))))->intValue());
	}
	return intArray;
}

$chars* TIFFImageMetadata::listToCharArray($String* list) {
	$var($StringTokenizer, st, $new($StringTokenizer, list, " "_s));
	$var($ArrayList, intList, $new($ArrayList));
	while (st->hasMoreTokens()) {
		$var($String, nextInteger, st->nextToken());
		$var($Integer, nextInt, $Integer::valueOf(nextInteger));
		intList->add(nextInt);
	}
	$var($chars, charArray, $new($chars, intList->size()));
	for (int32_t i = 0; i < charArray->length; ++i) {
		charArray->set(i, (char16_t)($nc(($cast($Integer, $(intList->get(i)))))->intValue()));
	}
	return charArray;
}

void TIFFImageMetadata::mergeStandardTree($Node* root) {
	$var($TIFFField, f, nullptr);
	$var($TIFFTag, tag, nullptr);
	$var($Node, node, root);
	$init($IIOMetadataFormatImpl);
	if (!$nc($($nc(node)->getNodeName()))->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
		fatal(node, $$str({"Root must be "_s, $IIOMetadataFormatImpl::standardMetadataFormatName}));
	}
	$var($String, sampleFormat, nullptr);
	$var($Node, dataNode, getChildNode(root, "Data"_s));
	bool isPaletteColor = false;
	if (dataNode != nullptr) {
		$var($Node, sampleFormatNode, getChildNode(dataNode, "SampleFormat"_s));
		if (sampleFormatNode != nullptr) {
			$assign(sampleFormat, getAttribute(sampleFormatNode, "value"_s));
			isPaletteColor = $nc(sampleFormat)->equals("Index"_s);
		}
	}
	if (!isPaletteColor) {
		$var($Node, chromaNode, getChildNode(root, "Chroma"_s));
		if (chromaNode != nullptr && getChildNode(chromaNode, "Palette"_s) != nullptr) {
			isPaletteColor = true;
		}
	}
	$assign(node, $nc(node)->getFirstChild());
	while (node != nullptr) {
		$var($String, name, node->getNodeName());
		if ($nc(name)->equals("Chroma"_s)) {
			$var($String, colorSpaceType, nullptr);
			$var($String, blackIsZero, nullptr);
			bool gotPalette = false;
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if ($nc(childName)->equals("ColorSpaceType"_s)) {
					$assign(colorSpaceType, getAttribute(child, "name"_s));
				} else if (childName->equals("NumChannels"_s)) {
					$assign(tag, $nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL));
					int32_t samplesPerPixel = isPaletteColor ? 1 : $Integer::parseInt($(getAttribute(child, "value"_s)));
					$assign(f, $new($TIFFField, tag, samplesPerPixel));
					$nc(this->rootIFD)->addTIFFField(f);
				} else if (childName->equals("BlackIsZero"_s)) {
					$assign(blackIsZero, getAttribute(child, "value"_s));
				} else if (childName->equals("Palette"_s)) {
					$var($Node, entry, child->getFirstChild());
					$var($HashMap, palette, $new($HashMap));
					int32_t maxIndex = -1;
					while (entry != nullptr) {
						$var($String, entryName, entry->getNodeName());
						if ($nc(entryName)->equals("PaletteEntry"_s)) {
							$var($String, idx, getAttribute(entry, "index"_s));
							int32_t id = $Integer::parseInt(idx);
							if (id > maxIndex) {
								maxIndex = id;
							}
							char16_t red = (char16_t)$Integer::parseInt($(getAttribute(entry, "red"_s)));
							char16_t green = (char16_t)$Integer::parseInt($(getAttribute(entry, "green"_s)));
							char16_t blue = (char16_t)$Integer::parseInt($(getAttribute(entry, "blue"_s)));
							palette->put($($Integer::valueOf(id)), $$new($chars, {
								red,
								green,
								blue
							}));
							gotPalette = true;
						}
						$assign(entry, entry->getNextSibling());
					}
					if (gotPalette) {
						int32_t mapSize = maxIndex + 1;
						int32_t paletteLength = 3 * mapSize;
						$var($chars, paletteEntries, $new($chars, paletteLength));
						{
							$var($Iterator, i$, $nc($(palette->entrySet()))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Map$Entry, paletteEntry, $cast($Map$Entry, i$->next()));
								{
									int32_t index = $nc(($cast($Integer, $($nc(paletteEntry)->getKey()))))->intValue();
									$var($chars, rgb, $cast($chars, paletteEntry->getValue()));
									paletteEntries->set(index, (char16_t)(($nc(rgb)->get(0) * 0x0000FFFF) / 255));
									paletteEntries->set(mapSize + index, (char16_t)((rgb->get(1) * 0x0000FFFF) / 255));
									paletteEntries->set(2 * mapSize + index, (char16_t)((rgb->get(2) * 0x0000FFFF) / 255));
								}
							}
						}
						$assign(tag, $nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_COLOR_MAP));
						$assign(f, $new($TIFFField, tag, $TIFFTag::TIFF_SHORT, paletteLength, $of(paletteEntries)));
						$nc(this->rootIFD)->addTIFFField(f);
					}
				}
				$assign(child, child->getNextSibling());
			}
			int32_t photometricInterpretation = -1;
			bool var$0 = (colorSpaceType == nullptr || $nc(colorSpaceType)->equals("GRAY"_s)) && blackIsZero != nullptr;
			if (var$0 && blackIsZero->equalsIgnoreCase("FALSE"_s)) {
				photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO;
			} else if (colorSpaceType != nullptr) {
				if (colorSpaceType->equals("GRAY"_s)) {
					bool isTransparency = false;
					if ($instanceOf($IIOMetadataNode, root)) {
						$var($IIOMetadataNode, iioRoot, $cast($IIOMetadataNode, root));
						$var($NodeList, siNodeList, $nc(iioRoot)->getElementsByTagName("SubimageInterpretation"_s));
						if ($nc(siNodeList)->getLength() == 1) {
							$var($Node, siNode, siNodeList->item(0));
							$var($String, value, getAttribute(siNode, "value"_s));
							if ($nc(value)->equals("TransparencyMask"_s)) {
								isTransparency = true;
							}
						}
					}
					if (isTransparency) {
						photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_TRANSPARENCY_MASK;
					} else {
						photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO;
					}
				} else if (colorSpaceType->equals("RGB"_s)) {
					photometricInterpretation = gotPalette ? $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR : $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_RGB;
				} else if (colorSpaceType->equals("YCbCr"_s)) {
					photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_Y_CB_CR;
				} else if (colorSpaceType->equals("CMYK"_s)) {
					photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_CMYK;
				} else if (colorSpaceType->equals("Lab"_s)) {
					photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_CIELAB;
				}
			}
			if (photometricInterpretation != -1) {
				$assign(tag, $nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION));
				$assign(f, $new($TIFFField, tag, photometricInterpretation));
				$nc(this->rootIFD)->addTIFFField(f);
			}
		} else if (name->equals("Compression"_s)) {
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if (childName->equals("CompressionTypeName"_s)) {
					int32_t compression = -1;
					$var($String, compressionTypeName, getAttribute(child, "value"_s));
					if ($nc(compressionTypeName)->equalsIgnoreCase("None"_s)) {
						compression = $BaselineTIFFTagSet::COMPRESSION_NONE;
					} else {
						$init($TIFFImageWriter);
						$var($StringArray, compressionNames, $TIFFImageWriter::compressionTypes);
						for (int32_t i = 0; i < $nc(compressionNames)->length; ++i) {
							if ($nc(compressionNames->get(i))->equalsIgnoreCase(compressionTypeName)) {
								compression = $nc($TIFFImageWriter::compressionNumbers)->get(i);
								break;
							}
						}
					}
					if (compression != -1) {
						$assign(tag, $nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_COMPRESSION));
						$assign(f, $new($TIFFField, tag, compression));
						$nc(this->rootIFD)->addTIFFField(f);
					}
				}
				$assign(child, child->getNextSibling());
			}
		} else if (name->equals("Data"_s)) {
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if (childName->equals("PlanarConfiguration"_s)) {
					$var($String, pc, getAttribute(child, "value"_s));
					int32_t planarConfiguration = -1;
					if ($nc(pc)->equals("PixelInterleaved"_s)) {
						planarConfiguration = $BaselineTIFFTagSet::PLANAR_CONFIGURATION_CHUNKY;
					} else if (pc->equals("PlaneInterleaved"_s)) {
						planarConfiguration = $BaselineTIFFTagSet::PLANAR_CONFIGURATION_PLANAR;
					}
					if (planarConfiguration != -1) {
						$assign(tag, $nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_PLANAR_CONFIGURATION));
						$assign(f, $new($TIFFField, tag, planarConfiguration));
						$nc(this->rootIFD)->addTIFFField(f);
					}
				} else if (childName->equals("BitsPerSample"_s)) {
					$var($String, bps, getAttribute(child, "value"_s));
					$var($chars, bitsPerSample, listToCharArray(bps));
					$assign(tag, $nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE));
					if (isPaletteColor) {
						$assign(f, $new($TIFFField, tag, $TIFFTag::TIFF_SHORT, 1, $of($$new($chars, {$nc(bitsPerSample)->get(0)}))));
					} else {
						$assign(f, $new($TIFFField, tag, $TIFFTag::TIFF_SHORT, $nc(bitsPerSample)->length, $of(bitsPerSample)));
					}
					$nc(this->rootIFD)->addTIFFField(f);
				} else if (childName->equals("SampleMSB"_s)) {
					$var($String, sMSB, getAttribute(child, "value"_s));
					$var($ints, sampleMSB, listToIntArray(sMSB));
					bool isRightToLeft = true;
					for (int32_t i = 0; i < $nc(sampleMSB)->length; ++i) {
						if (sampleMSB->get(i) != 0) {
							isRightToLeft = false;
							break;
						}
					}
					int32_t fillOrder = isRightToLeft ? $BaselineTIFFTagSet::FILL_ORDER_RIGHT_TO_LEFT : $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT;
					$assign(tag, $nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_FILL_ORDER));
					$assign(f, $new($TIFFField, tag, fillOrder));
					$nc(this->rootIFD)->addTIFFField(f);
				}
				$assign(child, child->getNextSibling());
			}
		} else if (name->equals("Dimension"_s)) {
			float pixelAspectRatio = -1.0f;
			bool gotPixelAspectRatio = false;
			float horizontalPixelSize = -1.0f;
			bool gotHorizontalPixelSize = false;
			float verticalPixelSize = -1.0f;
			bool gotVerticalPixelSize = false;
			bool sizeIsAbsolute = false;
			float horizontalPosition = -1.0f;
			bool gotHorizontalPosition = false;
			float verticalPosition = -1.0f;
			bool gotVerticalPosition = false;
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if (childName->equals("PixelAspectRatio"_s)) {
					$var($String, par, getAttribute(child, "value"_s));
					pixelAspectRatio = $Float::parseFloat(par);
					gotPixelAspectRatio = true;
				} else if (childName->equals("ImageOrientation"_s)) {
					$var($String, orientation, getAttribute(child, "value"_s));
					for (int32_t i = 0; i < $nc(TIFFImageMetadata::orientationNames)->length; ++i) {
						if ($nc(orientation)->equals($nc(TIFFImageMetadata::orientationNames)->get(i))) {
							$var($chars, oData, $new($chars, 1));
							oData->set(0, (char16_t)i);
							$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_ORIENTATION)), $TIFFTag::TIFF_SHORT, 1, $of(oData)));
							$nc(this->rootIFD)->addTIFFField(f);
							break;
						}
					}
				} else if (childName->equals("HorizontalPixelSize"_s)) {
					$var($String, hps, getAttribute(child, "value"_s));
					horizontalPixelSize = $Float::parseFloat(hps);
					gotHorizontalPixelSize = true;
				} else if (childName->equals("VerticalPixelSize"_s)) {
					$var($String, vps, getAttribute(child, "value"_s));
					verticalPixelSize = $Float::parseFloat(vps);
					gotVerticalPixelSize = true;
				} else if (childName->equals("HorizontalPosition"_s)) {
					$var($String, hp, getAttribute(child, "value"_s));
					horizontalPosition = $Float::parseFloat(hp);
					gotHorizontalPosition = true;
				} else if (childName->equals("VerticalPosition"_s)) {
					$var($String, vp, getAttribute(child, "value"_s));
					verticalPosition = $Float::parseFloat(vp);
					gotVerticalPosition = true;
				}
				$assign(child, child->getNextSibling());
			}
			sizeIsAbsolute = gotHorizontalPixelSize || gotVerticalPixelSize;
			if (gotPixelAspectRatio) {
				if (gotHorizontalPixelSize && !gotVerticalPixelSize) {
					verticalPixelSize = horizontalPixelSize / pixelAspectRatio;
					gotVerticalPixelSize = true;
				} else if (gotVerticalPixelSize && !gotHorizontalPixelSize) {
					horizontalPixelSize = verticalPixelSize * pixelAspectRatio;
					gotHorizontalPixelSize = true;
				} else if (!gotHorizontalPixelSize && !gotVerticalPixelSize) {
					horizontalPixelSize = pixelAspectRatio;
					verticalPixelSize = 1.0f;
					gotHorizontalPixelSize = true;
					gotVerticalPixelSize = true;
				}
			}
			if (gotHorizontalPixelSize) {
				float xResolution = (sizeIsAbsolute ? 10.0f : 1.0f) / horizontalPixelSize;
				$var($longArray2, hData, $new($longArray2, 1, 2));
				hData->set(0, $$new($longs, 2));
				$nc(hData->get(0))->set(0, $cast(int64_t, (xResolution * 10000.0f)));
				$nc(hData->get(0))->set(1, (int64_t)10000);
				$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_X_RESOLUTION)), $TIFFTag::TIFF_RATIONAL, 1, $of(hData)));
				$nc(this->rootIFD)->addTIFFField(f);
			}
			if (gotVerticalPixelSize) {
				float yResolution = (sizeIsAbsolute ? 10.0f : 1.0f) / verticalPixelSize;
				$var($longArray2, vData, $new($longArray2, 1, 2));
				vData->set(0, $$new($longs, 2));
				$nc(vData->get(0))->set(0, $cast(int64_t, (yResolution * 10000.0f)));
				$nc(vData->get(0))->set(1, (int64_t)10000);
				$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_Y_RESOLUTION)), $TIFFTag::TIFF_RATIONAL, 1, $of(vData)));
				$nc(this->rootIFD)->addTIFFField(f);
			}
			$var($chars, res, $new($chars, 1));
			res->set(0, (char16_t)(sizeIsAbsolute ? $BaselineTIFFTagSet::RESOLUTION_UNIT_CENTIMETER : $BaselineTIFFTagSet::RESOLUTION_UNIT_NONE));
			$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_RESOLUTION_UNIT)), $TIFFTag::TIFF_SHORT, 1, $of(res)));
			$nc(this->rootIFD)->addTIFFField(f);
			if (sizeIsAbsolute) {
				if (gotHorizontalPosition) {
					$var($longArray2, hData, $new($longArray2, 1, 2));
					$nc(hData->get(0))->set(0, $cast(int64_t, (horizontalPosition * 10000.0f)));
					$nc(hData->get(0))->set(1, (int64_t)0x000186A0);
					$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_X_POSITION)), $TIFFTag::TIFF_RATIONAL, 1, $of(hData)));
					$nc(this->rootIFD)->addTIFFField(f);
				}
				if (gotVerticalPosition) {
					$var($longArray2, vData, $new($longArray2, 1, 2));
					$nc(vData->get(0))->set(0, $cast(int64_t, (verticalPosition * 10000.0f)));
					$nc(vData->get(0))->set(1, (int64_t)0x000186A0);
					$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_Y_POSITION)), $TIFFTag::TIFF_RATIONAL, 1, $of(vData)));
					$nc(this->rootIFD)->addTIFFField(f);
				}
			}
		} else if (name->equals("Document"_s)) {
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if (childName->equals("SubimageInterpretation"_s)) {
					$var($String, si, getAttribute(child, "value"_s));
					int32_t newSubFileType = -1;
					if ($nc(si)->equals("TransparencyMask"_s)) {
						newSubFileType = $BaselineTIFFTagSet::NEW_SUBFILE_TYPE_TRANSPARENCY;
					} else if (si->equals("ReducedResolution"_s)) {
						newSubFileType = $BaselineTIFFTagSet::NEW_SUBFILE_TYPE_REDUCED_RESOLUTION;
					} else if (si->equals("SinglePage"_s)) {
						newSubFileType = $BaselineTIFFTagSet::NEW_SUBFILE_TYPE_SINGLE_PAGE;
					}
					if (newSubFileType != -1) {
						$assign(tag, $nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_NEW_SUBFILE_TYPE));
						$assign(f, $new($TIFFField, tag, newSubFileType));
						$nc(this->rootIFD)->addTIFFField(f);
					}
				}
				if (childName->equals("ImageCreationTime"_s)) {
					$var($String, year, getAttribute(child, "year"_s));
					$var($String, month, getAttribute(child, "month"_s));
					$var($String, day, getAttribute(child, "day"_s));
					$var($String, hour, getAttribute(child, "hour"_s));
					$var($String, minute, getAttribute(child, "minute"_s));
					$var($String, second, getAttribute(child, "second"_s));
					$var($StringBuilder, sb, $new($StringBuilder));
					sb->append(year);
					sb->append(":"_s);
					if ($nc(month)->length() == 1) {
						sb->append("0"_s);
					}
					sb->append(month);
					sb->append(":"_s);
					if ($nc(day)->length() == 1) {
						sb->append("0"_s);
					}
					sb->append(day);
					sb->append(" "_s);
					if ($nc(hour)->length() == 1) {
						sb->append("0"_s);
					}
					sb->append(hour);
					sb->append(":"_s);
					if ($nc(minute)->length() == 1) {
						sb->append("0"_s);
					}
					sb->append(minute);
					sb->append(":"_s);
					if ($nc(second)->length() == 1) {
						sb->append("0"_s);
					}
					sb->append(second);
					$var($StringArray, dt, $new($StringArray, 1));
					dt->set(0, $(sb->toString()));
					$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_DATE_TIME)), $TIFFTag::TIFF_ASCII, 1, $of(dt)));
					$nc(this->rootIFD)->addTIFFField(f);
				}
				$assign(child, child->getNextSibling());
			}
		} else if (name->equals("Text"_s)) {
			$var($Node, child, node->getFirstChild());
			$var($String, theAuthor, nullptr);
			$var($String, theDescription, nullptr);
			$var($String, theTitle, nullptr);
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if (childName->equals("TextEntry"_s)) {
					int32_t tagNumber = -1;
					$var($NamedNodeMap, childAttrs, child->getAttributes());
					$var($Node, keywordNode, $nc(childAttrs)->getNamedItem("keyword"_s));
					if (keywordNode != nullptr) {
						$var($String, keyword, keywordNode->getNodeValue());
						$var($String, value, getAttribute(child, "value"_s));
						bool var$1 = !$nc(keyword)->isEmpty();
						if (var$1 && !$nc(value)->isEmpty()) {
							if (keyword->equalsIgnoreCase("DocumentName"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_DOCUMENT_NAME;
							} else if (keyword->equalsIgnoreCase("ImageDescription"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_IMAGE_DESCRIPTION;
							} else if (keyword->equalsIgnoreCase("Make"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_MAKE;
							} else if (keyword->equalsIgnoreCase("Model"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_MODEL;
							} else if (keyword->equalsIgnoreCase("PageName"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_PAGE_NAME;
							} else if (keyword->equalsIgnoreCase("Software"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_SOFTWARE;
							} else if (keyword->equalsIgnoreCase("Artist"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_ARTIST;
							} else if (keyword->equalsIgnoreCase("HostComputer"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_HOST_COMPUTER;
							} else if (keyword->equalsIgnoreCase("InkNames"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_INK_NAMES;
							} else if (keyword->equalsIgnoreCase("Copyright"_s)) {
								tagNumber = $BaselineTIFFTagSet::TAG_COPYRIGHT;
							} else if (keyword->equalsIgnoreCase("author"_s)) {
								$assign(theAuthor, value);
							} else if (keyword->equalsIgnoreCase("description"_s)) {
								$assign(theDescription, value);
							} else if (keyword->equalsIgnoreCase("title"_s)) {
								$assign(theTitle, value);
							}
							if (tagNumber != -1) {
								$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag(tagNumber)), $TIFFTag::TIFF_ASCII, 1, $of($$new($StringArray, {value}))));
								$nc(this->rootIFD)->addTIFFField(f);
							}
						}
					}
				}
				$assign(child, child->getNextSibling());
			}
			if (theAuthor != nullptr && getTIFFField($BaselineTIFFTagSet::TAG_ARTIST) == nullptr) {
				$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_ARTIST)), $TIFFTag::TIFF_ASCII, 1, $of($$new($StringArray, {theAuthor}))));
				$nc(this->rootIFD)->addTIFFField(f);
			}
			if (theDescription != nullptr && getTIFFField($BaselineTIFFTagSet::TAG_IMAGE_DESCRIPTION) == nullptr) {
				$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_IMAGE_DESCRIPTION)), $TIFFTag::TIFF_ASCII, 1, $of($$new($StringArray, {theDescription}))));
				$nc(this->rootIFD)->addTIFFField(f);
			}
			if (theTitle != nullptr && getTIFFField($BaselineTIFFTagSet::TAG_DOCUMENT_NAME) == nullptr) {
				$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_DOCUMENT_NAME)), $TIFFTag::TIFF_ASCII, 1, $of($$new($StringArray, {theTitle}))));
				$nc(this->rootIFD)->addTIFFField(f);
			}
		} else if (name->equals("Transparency"_s)) {
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if (childName->equals("Alpha"_s)) {
					$var($String, alpha, getAttribute(child, "value"_s));
					$assign(f, nullptr);
					if ($nc(alpha)->equals("premultiplied"_s)) {
						$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_EXTRA_SAMPLES)), $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA));
					} else if (alpha->equals("nonpremultiplied"_s)) {
						$assign(f, $new($TIFFField, $($nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_EXTRA_SAMPLES)), $BaselineTIFFTagSet::EXTRA_SAMPLES_UNASSOCIATED_ALPHA));
					}
					if (f != nullptr) {
						$nc(this->rootIFD)->addTIFFField(f);
					}
				}
				$assign(child, child->getNextSibling());
			}
		}
		$assign(node, node->getNextSibling());
	}
	if (sampleFormat != nullptr) {
		int32_t sf = -1;
		if (sampleFormat->equals("SignedIntegral"_s)) {
			sf = $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER;
		} else if (sampleFormat->equals("UnsignedIntegral"_s)) {
			sf = $BaselineTIFFTagSet::SAMPLE_FORMAT_UNSIGNED_INTEGER;
		} else if (sampleFormat->equals("Real"_s)) {
			sf = $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT;
		} else if (sampleFormat->equals("Index"_s)) {
			sf = $BaselineTIFFTagSet::SAMPLE_FORMAT_UNSIGNED_INTEGER;
		}
		if (sf != -1) {
			int32_t count = 1;
			$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL));
			if (f != nullptr) {
				count = f->getAsInt(0);
			} else {
				$assign(f, getTIFFField($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE));
				if (f != nullptr) {
					count = f->getCount();
				}
			}
			$var($chars, sampleFormatArray, $new($chars, count));
			$Arrays::fill(sampleFormatArray, (char16_t)sf);
			$assign(tag, $nc(this->rootIFD)->getTag($BaselineTIFFTagSet::TAG_SAMPLE_FORMAT));
			$assign(f, $new($TIFFField, tag, $TIFFTag::TIFF_SHORT, sampleFormatArray->length, $of(sampleFormatArray)));
			$nc(this->rootIFD)->addTIFFField(f);
		}
	}
}

$String* TIFFImageMetadata::getAttribute($Node* node, $String* attrName) {
	$init(TIFFImageMetadata);
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($Node, attr, $nc(attrs)->getNamedItem(attrName));
	return attr != nullptr ? $nc(attr)->getNodeValue() : ($String*)nullptr;
}

$Node* TIFFImageMetadata::getChildNode($Node* node, $String* childName) {
	$var($Node, childNode, nullptr);
	if ($nc(node)->hasChildNodes()) {
		$var($NodeList, childNodes, node->getChildNodes());
		int32_t length = $nc(childNodes)->getLength();
		for (int32_t i = 0; i < length; ++i) {
			$var($Node, item, childNodes->item(i));
			if ($nc($($nc(item)->getNodeName()))->equals(childName)) {
				$assign(childNode, item);
				break;
			}
		}
	}
	return childNode;
}

$TIFFIFD* TIFFImageMetadata::parseIFD($Node* node$renamed) {
	$init(TIFFImageMetadata);
	$var($Node, node, node$renamed);
	$beforeCallerSensitive();
	if (!$nc($($nc(node)->getNodeName()))->equals("TIFFIFD"_s)) {
		fatal(node, "Expected \"TIFFIFD\" node"_s);
	}
	$var($String, tagSetNames, getAttribute(node, "tagSets"_s));
	$var($List, tagSets, $new($ArrayList, 5));
	if (tagSetNames != nullptr) {
		$var($StringTokenizer, st, $new($StringTokenizer, tagSetNames, ","_s));
		while (st->hasMoreTokens()) {
			$var($String, className, st->nextToken());
			$var($Object, o, nullptr);
			$Class* setClass = nullptr;
			try {
				$var($ClassLoader, cl, TIFFImageMetadata::class$->getClassLoader());
				setClass = $Class::forName(className, false, cl);
				$load($TIFFTagSet);
				if (!$TIFFTagSet::class$->isAssignableFrom(setClass)) {
					fatal(node, "TagSets in IFD must be subset of TIFFTagSet class"_s);
				}
				$var($Method, getInstanceMethod, $nc(setClass)->getMethod("getInstance"_s, ($ClassArray*)nullptr));
				$assign(o, $nc(getInstanceMethod)->invoke(nullptr, ($ObjectArray*)nullptr));
			} catch ($NoSuchMethodException&) {
				$var($NoSuchMethodException, e, $catch());
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			} catch ($IllegalAccessException&) {
				$var($IllegalAccessException, e, $catch());
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			} catch ($InvocationTargetException&) {
				$var($InvocationTargetException, e, $catch());
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			} catch ($ClassNotFoundException&) {
				$var($ClassNotFoundException, e, $catch());
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			}
			if (!($instanceOf($TIFFTagSet, o))) {
				fatal(node, $$str({"Specified tag set class \""_s, className, "\" is not an instance of TIFFTagSet"_s}));
			} else {
				tagSets->add($cast($TIFFTagSet, o));
			}
		}
	}
	$var($TIFFIFD, ifd, $new($TIFFIFD, tagSets));
	$assign(node, $nc(node)->getFirstChild());
	while (node != nullptr) {
		$var($String, name, node->getNodeName());
		$var($TIFFField, f, nullptr);
		if (name->equals("TIFFIFD"_s)) {
			$var($TIFFIFD, subIFD, parseIFD(node));
			$var($String, parentTagName, getAttribute(node, "parentTagName"_s));
			$var($String, parentTagNumber, getAttribute(node, "parentTagNumber"_s));
			$var($TIFFTag, tag, nullptr);
			if (parentTagName != nullptr) {
				$assign(tag, $TIFFIFD::getTag(parentTagName, tagSets));
			} else if (parentTagNumber != nullptr) {
				int32_t tagNumber = $Integer::parseUnsignedInt(parentTagNumber);
				$assign(tag, $TIFFIFD::getTag(tagNumber, tagSets));
			}
			int32_t type = 0;
			if (tag == nullptr) {
				type = $TIFFTag::TIFF_LONG;
				$init($TIFFTag);
				$assign(tag, $new($TIFFTag, $TIFFTag::UNKNOWN_TAG_NAME, 0, $sl(1, type)));
			} else if (tag->isDataTypeOK($TIFFTag::TIFF_IFD_POINTER)) {
				type = $TIFFTag::TIFF_IFD_POINTER;
			} else if (tag->isDataTypeOK($TIFFTag::TIFF_LONG)) {
				type = $TIFFTag::TIFF_LONG;
			} else {
				for (type = $TIFFTag::MAX_DATATYPE; type >= $TIFFTag::MIN_DATATYPE; --type) {
					if (tag->isDataTypeOK(type)) {
						break;
					}
				}
			}
			$assign(f, $new($TIFFField, tag, type, (int64_t)1, static_cast<$TIFFDirectory*>(subIFD)));
		} else if (name->equals("TIFFField"_s)) {
			int32_t number = $Integer::parseInt($(getAttribute(node, "number"_s)));
			$var($TIFFTagSet, tagSet, nullptr);
			{
				$var($Iterator, i$, tagSets->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($TIFFTagSet, t, $cast($TIFFTagSet, i$->next()));
					{
						if ($nc(t)->getTag(number) != nullptr) {
							$assign(tagSet, t);
							break;
						}
					}
				}
			}
			$assign(f, $TIFFField::createFromMetadataNode(tagSet, node));
		} else {
			fatal(node, $$str({"Expected either \"TIFFIFD\" or \"TIFFField\" node, got "_s, name}));
		}
		ifd->addTIFFField(f);
		$assign(node, node->getNextSibling());
	}
	return ifd;
}

void TIFFImageMetadata::mergeNativeTree($Node* root) {
	$var($Node, node, root);
	if (!$nc($($nc(node)->getNodeName()))->equals(this->nativeMetadataFormatName)) {
		fatal(node, $$str({"Root must be "_s, this->nativeMetadataFormatName}));
	}
	$assign(node, $nc(node)->getFirstChild());
	if (node == nullptr || !$nc($(node->getNodeName()))->equals("TIFFIFD"_s)) {
		fatal(root, "Root must have \"TIFFIFD\" child"_s);
	}
	$var($TIFFIFD, ifd, parseIFD(node));
	$var($List, rootIFDTagSets, $nc(this->rootIFD)->getTagSetList());
	{
		$var($Iterator, i$, $nc($($nc(ifd)->getTagSetList()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			{
				if ($instanceOf($TIFFTagSet, o) && !$nc(rootIFDTagSets)->contains(o)) {
					$nc(this->rootIFD)->addTagSet($cast($TIFFTagSet, o));
				}
			}
		}
	}
	$var($Iterator, ifdIter, ifd->iterator());
	while ($nc(ifdIter)->hasNext()) {
		$var($TIFFField, field, $cast($TIFFField, ifdIter->next()));
		$nc(this->rootIFD)->addTIFFField(field);
	}
}

void TIFFImageMetadata::mergeTree($String* formatName, $Node* root) {
	if ($nc(formatName)->equals(this->nativeMetadataFormatName)) {
		if (root == nullptr) {
			$throwNew($NullPointerException, "root == null!"_s);
		}
		mergeNativeTree(root);
	} else {
		$init($IIOMetadataFormatImpl);
		if (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			if (root == nullptr) {
				$throwNew($NullPointerException, "root == null!"_s);
			}
			mergeStandardTree(root);
		} else {
			$throwNew($IllegalArgumentException, "Not a recognized format!"_s);
		}
	}
}

void TIFFImageMetadata::reset() {
	$set(this, rootIFD, $new($TIFFIFD, this->tagSets));
}

$TIFFIFD* TIFFImageMetadata::getRootIFD() {
	return this->rootIFD;
}

$TIFFField* TIFFImageMetadata::getTIFFField(int32_t tagNumber) {
	return $nc(this->rootIFD)->getTIFFField(tagNumber);
}

void TIFFImageMetadata::removeTIFFField(int32_t tagNumber) {
	$nc(this->rootIFD)->removeTIFFField(tagNumber);
}

TIFFImageMetadata* TIFFImageMetadata::getShallowClone() {
	return $new(TIFFImageMetadata, $($nc(this->rootIFD)->getShallowClone()));
}

void clinit$TIFFImageMetadata($Class* class$) {
	$assignStatic(TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME, "javax_imageio_tiff_image_1.0"_s);
	$assignStatic(TIFFImageMetadata::NATIVE_METADATA_FORMAT_CLASS_NAME, "javax.imageio.plugins.tiff.TIFFImageMetadataFormat"_s);
	$assignStatic(TIFFImageMetadata::colorSpaceNames, $new($StringArray, {
		"GRAY"_s,
		"GRAY"_s,
		"RGB"_s,
		"RGB"_s,
		"GRAY"_s,
		"CMYK"_s,
		"YCbCr"_s,
		"Lab"_s,
		"Lab"_s
	}));
	$assignStatic(TIFFImageMetadata::orientationNames, $new($StringArray, {
		($String*)nullptr,
		"Normal"_s,
		"FlipH"_s,
		"Rotate180"_s,
		"FlipV"_s,
		"FlipHRotate90"_s,
		"Rotate270"_s,
		"FlipVRotate90"_s,
		"Rotate90"_s
	}));
}

TIFFImageMetadata::TIFFImageMetadata() {
}

$Class* TIFFImageMetadata::load$($String* name, bool initialize) {
	$loadClass(TIFFImageMetadata, name, initialize, &_TIFFImageMetadata_ClassInfo_, clinit$TIFFImageMetadata, allocate$TIFFImageMetadata);
	return class$;
}

$Class* TIFFImageMetadata::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com