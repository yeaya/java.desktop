#include <com/sun/imageio/plugins/gif/GIFImageMetadata.h>

#include <com/sun/imageio/plugins/gif/GIFMetadata.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $GIFMetadata = ::com::sun::imageio::plugins::gif::GIFMetadata;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

$FieldInfo _GIFImageMetadata_FieldInfo_[] = {
	{"nativeMetadataFormatName", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFImageMetadata, nativeMetadataFormatName)},
	{"disposalMethodNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFImageMetadata, disposalMethodNames)},
	{"imageLeftPosition", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, imageLeftPosition)},
	{"imageTopPosition", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, imageTopPosition)},
	{"imageWidth", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, imageWidth)},
	{"imageHeight", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, imageHeight)},
	{"interlaceFlag", "Z", nullptr, $PUBLIC, $field(GIFImageMetadata, interlaceFlag)},
	{"sortFlag", "Z", nullptr, $PUBLIC, $field(GIFImageMetadata, sortFlag)},
	{"localColorTable", "[B", nullptr, $PUBLIC, $field(GIFImageMetadata, localColorTable)},
	{"disposalMethod", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, disposalMethod)},
	{"userInputFlag", "Z", nullptr, $PUBLIC, $field(GIFImageMetadata, userInputFlag)},
	{"transparentColorFlag", "Z", nullptr, $PUBLIC, $field(GIFImageMetadata, transparentColorFlag)},
	{"delayTime", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, delayTime)},
	{"transparentColorIndex", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, transparentColorIndex)},
	{"hasPlainTextExtension", "Z", nullptr, $PUBLIC, $field(GIFImageMetadata, hasPlainTextExtension)},
	{"textGridLeft", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, textGridLeft)},
	{"textGridTop", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, textGridTop)},
	{"textGridWidth", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, textGridWidth)},
	{"textGridHeight", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, textGridHeight)},
	{"characterCellWidth", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, characterCellWidth)},
	{"characterCellHeight", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, characterCellHeight)},
	{"textForegroundColor", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, textForegroundColor)},
	{"textBackgroundColor", "I", nullptr, $PUBLIC, $field(GIFImageMetadata, textBackgroundColor)},
	{"text", "[B", nullptr, $PUBLIC, $field(GIFImageMetadata, text)},
	{"applicationIDs", "Ljava/util/List;", "Ljava/util/List<[B>;", $PUBLIC, $field(GIFImageMetadata, applicationIDs)},
	{"authenticationCodes", "Ljava/util/List;", "Ljava/util/List<[B>;", $PUBLIC, $field(GIFImageMetadata, authenticationCodes)},
	{"applicationData", "Ljava/util/List;", "Ljava/util/List<[B>;", $PUBLIC, $field(GIFImageMetadata, applicationData)},
	{"comments", "Ljava/util/List;", "Ljava/util/List<[B>;", $PUBLIC, $field(GIFImageMetadata, comments)},
	{}
};

$MethodInfo _GIFImageMetadata_MethodInfo_[] = {
	{"<init>", "(ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(GIFImageMetadata::*)(bool,$String*,$String*,$StringArray*,$StringArray*)>(&GIFImageMetadata::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GIFImageMetadata::*)()>(&GIFImageMetadata::init$))},
	{"getAsTree", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNativeTree", "()Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(static_cast<$Node*(GIFImageMetadata::*)()>(&GIFImageMetadata::getNativeTree))},
	{"getStandardChromaNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardCompressionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDataNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDimensionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardTextNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardTransparencyNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"mergeNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setFromTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"toISO8859", "([B)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(GIFImageMetadata::*)($bytes*)>(&GIFImageMetadata::toISO8859))},
	{}
};

$ClassInfo _GIFImageMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFImageMetadata",
	"com.sun.imageio.plugins.gif.GIFMetadata",
	nullptr,
	_GIFImageMetadata_FieldInfo_,
	_GIFImageMetadata_MethodInfo_
};

$Object* allocate$GIFImageMetadata($Class* clazz) {
	return $of($alloc(GIFImageMetadata));
}

$String* GIFImageMetadata::nativeMetadataFormatName = nullptr;
$StringArray* GIFImageMetadata::disposalMethodNames = nullptr;

void GIFImageMetadata::init$(bool standardMetadataFormatSupported, $String* nativeMetadataFormatName, $String* nativeMetadataFormatClassName, $StringArray* extraMetadataFormatNames, $StringArray* extraMetadataFormatClassNames) {
	$GIFMetadata::init$(standardMetadataFormatSupported, nativeMetadataFormatName, nativeMetadataFormatClassName, extraMetadataFormatNames, extraMetadataFormatClassNames);
	this->interlaceFlag = false;
	this->sortFlag = false;
	$set(this, localColorTable, nullptr);
	this->disposalMethod = 0;
	this->userInputFlag = false;
	this->transparentColorFlag = false;
	this->delayTime = 0;
	this->transparentColorIndex = 0;
	this->hasPlainTextExtension = false;
	$set(this, applicationIDs, nullptr);
	$set(this, authenticationCodes, nullptr);
	$set(this, applicationData, nullptr);
	$set(this, comments, nullptr);
}

void GIFImageMetadata::init$() {
	GIFImageMetadata::init$(true, GIFImageMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.gif.GIFImageMetadataFormat"_s, nullptr, nullptr);
}

bool GIFImageMetadata::isReadOnly() {
	return true;
}

$Node* GIFImageMetadata::getAsTree($String* formatName) {
	if ($nc(formatName)->equals(GIFImageMetadata::nativeMetadataFormatName)) {
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

$String* GIFImageMetadata::toISO8859($bytes* data) {
	try {
		return $new($String, data, "ISO-8859-1"_s);
	} catch ($UnsupportedEncodingException& e) {
		return ""_s;
	}
	$shouldNotReachHere();
}

$Node* GIFImageMetadata::getNativeTree() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, nullptr);
	$var($IIOMetadataNode, root, $new($IIOMetadataNode, GIFImageMetadata::nativeMetadataFormatName));
	$assign(node, $new($IIOMetadataNode, "ImageDescriptor"_s));
	node->setAttribute("imageLeftPosition"_s, $($Integer::toString(this->imageLeftPosition)));
	node->setAttribute("imageTopPosition"_s, $($Integer::toString(this->imageTopPosition)));
	node->setAttribute("imageWidth"_s, $($Integer::toString(this->imageWidth)));
	node->setAttribute("imageHeight"_s, $($Integer::toString(this->imageHeight)));
	node->setAttribute("interlaceFlag"_s, this->interlaceFlag ? "TRUE"_s : "FALSE"_s);
	root->appendChild(node);
	if (this->localColorTable != nullptr) {
		$assign(node, $new($IIOMetadataNode, "LocalColorTable"_s));
		int32_t numEntries = $nc(this->localColorTable)->length / 3;
		node->setAttribute("sizeOfLocalColorTable"_s, $($Integer::toString(numEntries)));
		node->setAttribute("sortFlag"_s, this->sortFlag ? "TRUE"_s : "FALSE"_s);
		for (int32_t i = 0; i < numEntries; ++i) {
			$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "ColorTableEntry"_s));
			entry->setAttribute("index"_s, $($Integer::toString(i)));
			int32_t r = (int32_t)($nc(this->localColorTable)->get(3 * i) & (uint32_t)255);
			int32_t g = (int32_t)($nc(this->localColorTable)->get(3 * i + 1) & (uint32_t)255);
			int32_t b = (int32_t)($nc(this->localColorTable)->get(3 * i + 2) & (uint32_t)255);
			entry->setAttribute("red"_s, $($Integer::toString(r)));
			entry->setAttribute("green"_s, $($Integer::toString(g)));
			entry->setAttribute("blue"_s, $($Integer::toString(b)));
			node->appendChild(entry);
		}
		root->appendChild(node);
	}
	$assign(node, $new($IIOMetadataNode, "GraphicControlExtension"_s));
	node->setAttribute("disposalMethod"_s, $nc(GIFImageMetadata::disposalMethodNames)->get(this->disposalMethod));
	node->setAttribute("userInputFlag"_s, this->userInputFlag ? "TRUE"_s : "FALSE"_s);
	node->setAttribute("transparentColorFlag"_s, this->transparentColorFlag ? "TRUE"_s : "FALSE"_s);
	node->setAttribute("delayTime"_s, $($Integer::toString(this->delayTime)));
	node->setAttribute("transparentColorIndex"_s, $($Integer::toString(this->transparentColorIndex)));
	root->appendChild(node);
	if (this->hasPlainTextExtension) {
		$assign(node, $new($IIOMetadataNode, "PlainTextExtension"_s));
		node->setAttribute("textGridLeft"_s, $($Integer::toString(this->textGridLeft)));
		node->setAttribute("textGridTop"_s, $($Integer::toString(this->textGridTop)));
		node->setAttribute("textGridWidth"_s, $($Integer::toString(this->textGridWidth)));
		node->setAttribute("textGridHeight"_s, $($Integer::toString(this->textGridHeight)));
		node->setAttribute("characterCellWidth"_s, $($Integer::toString(this->characterCellWidth)));
		node->setAttribute("characterCellHeight"_s, $($Integer::toString(this->characterCellHeight)));
		node->setAttribute("textForegroundColor"_s, $($Integer::toString(this->textForegroundColor)));
		node->setAttribute("textBackgroundColor"_s, $($Integer::toString(this->textBackgroundColor)));
		node->setAttribute("text"_s, $(toISO8859(this->text)));
		root->appendChild(node);
	}
	int32_t numAppExtensions = this->applicationIDs == nullptr ? 0 : $nc(this->applicationIDs)->size();
	if (numAppExtensions > 0) {
		$assign(node, $new($IIOMetadataNode, "ApplicationExtensions"_s));
		for (int32_t i = 0; i < numAppExtensions; ++i) {
			$var($IIOMetadataNode, appExtNode, $new($IIOMetadataNode, "ApplicationExtension"_s));
			$var($bytes, applicationID, $cast($bytes, $nc(this->applicationIDs)->get(i)));
			appExtNode->setAttribute("applicationID"_s, $(toISO8859(applicationID)));
			$var($bytes, authenticationCode, $cast($bytes, $nc(this->authenticationCodes)->get(i)));
			appExtNode->setAttribute("authenticationCode"_s, $(toISO8859(authenticationCode)));
			$var($bytes, appData, $cast($bytes, $nc(this->applicationData)->get(i)));
			appExtNode->setUserObject($($nc(appData)->clone()));
			node->appendChild(appExtNode);
		}
		root->appendChild(node);
	}
	int32_t numComments = this->comments == nullptr ? 0 : $nc(this->comments)->size();
	if (numComments > 0) {
		$assign(node, $new($IIOMetadataNode, "CommentExtensions"_s));
		for (int32_t i = 0; i < numComments; ++i) {
			$var($IIOMetadataNode, commentNode, $new($IIOMetadataNode, "CommentExtension"_s));
			$var($bytes, comment, $cast($bytes, $nc(this->comments)->get(i)));
			commentNode->setAttribute("value"_s, $(toISO8859(comment)));
			node->appendChild(commentNode);
		}
		root->appendChild(node);
	}
	return root;
}

$IIOMetadataNode* GIFImageMetadata::getStandardChromaNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, chroma_node, $new($IIOMetadataNode, "Chroma"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "ColorSpaceType"_s));
	node->setAttribute("name"_s, "RGB"_s);
	chroma_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "NumChannels"_s));
	node->setAttribute("value"_s, this->transparentColorFlag ? "4"_s : "3"_s);
	chroma_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "BlackIsZero"_s));
	node->setAttribute("value"_s, "TRUE"_s);
	chroma_node->appendChild(node);
	if (this->localColorTable != nullptr) {
		$assign(node, $new($IIOMetadataNode, "Palette"_s));
		int32_t numEntries = $nc(this->localColorTable)->length / 3;
		for (int32_t i = 0; i < numEntries; ++i) {
			$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "PaletteEntry"_s));
			entry->setAttribute("index"_s, $($Integer::toString(i)));
			entry->setAttribute("red"_s, $($Integer::toString((int32_t)($nc(this->localColorTable)->get(3 * i) & (uint32_t)255))));
			entry->setAttribute("green"_s, $($Integer::toString((int32_t)($nc(this->localColorTable)->get(3 * i + 1) & (uint32_t)255))));
			entry->setAttribute("blue"_s, $($Integer::toString((int32_t)($nc(this->localColorTable)->get(3 * i + 2) & (uint32_t)255))));
			node->appendChild(entry);
		}
		chroma_node->appendChild(node);
	}
	return chroma_node;
}

$IIOMetadataNode* GIFImageMetadata::getStandardCompressionNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, compression_node, $new($IIOMetadataNode, "Compression"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "CompressionTypeName"_s));
	node->setAttribute("value"_s, "lzw"_s);
	compression_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "Lossless"_s));
	node->setAttribute("value"_s, "TRUE"_s);
	compression_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "NumProgressiveScans"_s));
	node->setAttribute("value"_s, this->interlaceFlag ? "4"_s : "1"_s);
	compression_node->appendChild(node);
	return compression_node;
}

$IIOMetadataNode* GIFImageMetadata::getStandardDataNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, data_node, $new($IIOMetadataNode, "Data"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "SampleFormat"_s));
	node->setAttribute("value"_s, "Index"_s);
	data_node->appendChild(node);
	return data_node;
}

$IIOMetadataNode* GIFImageMetadata::getStandardDimensionNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, dimension_node, $new($IIOMetadataNode, "Dimension"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "ImageOrientation"_s));
	node->setAttribute("value"_s, "Normal"_s);
	dimension_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "HorizontalPixelOffset"_s));
	node->setAttribute("value"_s, $($Integer::toString(this->imageLeftPosition)));
	dimension_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "VerticalPixelOffset"_s));
	node->setAttribute("value"_s, $($Integer::toString(this->imageTopPosition)));
	dimension_node->appendChild(node);
	return dimension_node;
}

$IIOMetadataNode* GIFImageMetadata::getStandardTextNode() {
	$useLocalCurrentObjectStackCache();
	if (this->comments == nullptr) {
		return nullptr;
	}
	$var($Iterator, commentIter, $nc(this->comments)->iterator());
	if (!$nc(commentIter)->hasNext()) {
		return nullptr;
	}
	$var($IIOMetadataNode, text_node, $new($IIOMetadataNode, "Text"_s));
	$var($IIOMetadataNode, node, nullptr);
	while ($nc(commentIter)->hasNext()) {
		$var($bytes, comment, $cast($bytes, commentIter->next()));
		$var($String, s, nullptr);
		try {
			$assign(s, $new($String, comment, "ISO-8859-1"_s));
		} catch ($UnsupportedEncodingException& e) {
			$throwNew($RuntimeException, "Encoding ISO-8859-1 unknown!"_s);
		}
		$assign(node, $new($IIOMetadataNode, "TextEntry"_s));
		node->setAttribute("value"_s, s);
		node->setAttribute("encoding"_s, "ISO-8859-1"_s);
		node->setAttribute("compression"_s, "none"_s);
		text_node->appendChild(node);
	}
	return text_node;
}

$IIOMetadataNode* GIFImageMetadata::getStandardTransparencyNode() {
	$useLocalCurrentObjectStackCache();
	if (!this->transparentColorFlag) {
		return nullptr;
	}
	$var($IIOMetadataNode, transparency_node, $new($IIOMetadataNode, "Transparency"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "TransparentIndex"_s));
	node->setAttribute("value"_s, $($Integer::toString(this->transparentColorIndex)));
	transparency_node->appendChild(node);
	return transparency_node;
}

void GIFImageMetadata::setFromTree($String* formatName, $Node* root) {
	$throwNew($IllegalStateException, "Metadata is read-only!"_s);
}

void GIFImageMetadata::mergeNativeTree($Node* root) {
	$throwNew($IllegalStateException, "Metadata is read-only!"_s);
}

void GIFImageMetadata::mergeStandardTree($Node* root) {
	$throwNew($IllegalStateException, "Metadata is read-only!"_s);
}

void GIFImageMetadata::reset() {
	$throwNew($IllegalStateException, "Metadata is read-only!"_s);
}

void GIFImageMetadata::mergeTree($String* formatName, $Node* root) {
	$GIFMetadata::mergeTree(formatName, root);
}

void clinit$GIFImageMetadata($Class* class$) {
	$assignStatic(GIFImageMetadata::nativeMetadataFormatName, "javax_imageio_gif_image_1.0"_s);
	$assignStatic(GIFImageMetadata::disposalMethodNames, $new($StringArray, {
		"none"_s,
		"doNotDispose"_s,
		"restoreToBackgroundColor"_s,
		"restoreToPrevious"_s,
		"undefinedDisposalMethod4"_s,
		"undefinedDisposalMethod5"_s,
		"undefinedDisposalMethod6"_s,
		"undefinedDisposalMethod7"_s
	}));
}

GIFImageMetadata::GIFImageMetadata() {
}

$Class* GIFImageMetadata::load$($String* name, bool initialize) {
	$loadClass(GIFImageMetadata, name, initialize, &_GIFImageMetadata_ClassInfo_, clinit$GIFImageMetadata, allocate$GIFImageMetadata);
	return class$;
}

$Class* GIFImageMetadata::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com