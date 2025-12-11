#include <com/sun/imageio/plugins/gif/GIFStreamMetadata.h>

#include <com/sun/imageio/plugins/gif/GIFMetadata.h>
#include <java/lang/IllegalStateException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef UNDEFINED_INTEGER_VALUE

using $GIFMetadata = ::com::sun::imageio::plugins::gif::GIFMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

$FieldInfo _GIFStreamMetadata_FieldInfo_[] = {
	{"nativeMetadataFormatName", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFStreamMetadata, nativeMetadataFormatName)},
	{"versionStrings", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFStreamMetadata, versionStrings)},
	{"version", "Ljava/lang/String;", nullptr, $PUBLIC, $field(GIFStreamMetadata, version)},
	{"logicalScreenWidth", "I", nullptr, $PUBLIC, $field(GIFStreamMetadata, logicalScreenWidth)},
	{"logicalScreenHeight", "I", nullptr, $PUBLIC, $field(GIFStreamMetadata, logicalScreenHeight)},
	{"colorResolution", "I", nullptr, $PUBLIC, $field(GIFStreamMetadata, colorResolution)},
	{"pixelAspectRatio", "I", nullptr, $PUBLIC, $field(GIFStreamMetadata, pixelAspectRatio)},
	{"backgroundColorIndex", "I", nullptr, $PUBLIC, $field(GIFStreamMetadata, backgroundColorIndex)},
	{"sortFlag", "Z", nullptr, $PUBLIC, $field(GIFStreamMetadata, sortFlag)},
	{"colorTableSizes", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFStreamMetadata, colorTableSizes)},
	{"globalColorTable", "[B", nullptr, $PUBLIC, $field(GIFStreamMetadata, globalColorTable)},
	{}
};

$MethodInfo _GIFStreamMetadata_MethodInfo_[] = {
	{"<init>", "(ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(GIFStreamMetadata::*)(bool,$String*,$String*,$StringArray*,$StringArray*)>(&GIFStreamMetadata::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GIFStreamMetadata::*)()>(&GIFStreamMetadata::init$))},
	{"getAsTree", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNativeTree", "()Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(static_cast<$Node*(GIFStreamMetadata::*)()>(&GIFStreamMetadata::getNativeTree))},
	{"getStandardChromaNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardCompressionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDataNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDimensionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDocumentNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardTextNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardTransparencyNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"mergeNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setFromTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{}
};

$ClassInfo _GIFStreamMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFStreamMetadata",
	"com.sun.imageio.plugins.gif.GIFMetadata",
	nullptr,
	_GIFStreamMetadata_FieldInfo_,
	_GIFStreamMetadata_MethodInfo_
};

$Object* allocate$GIFStreamMetadata($Class* clazz) {
	return $of($alloc(GIFStreamMetadata));
}

$String* GIFStreamMetadata::nativeMetadataFormatName = nullptr;
$StringArray* GIFStreamMetadata::versionStrings = nullptr;
$StringArray* GIFStreamMetadata::colorTableSizes = nullptr;

void GIFStreamMetadata::init$(bool standardMetadataFormatSupported, $String* nativeMetadataFormatName, $String* nativeMetadataFormatClassName, $StringArray* extraMetadataFormatNames, $StringArray* extraMetadataFormatClassNames) {
	$GIFMetadata::init$(standardMetadataFormatSupported, nativeMetadataFormatName, nativeMetadataFormatClassName, extraMetadataFormatNames, extraMetadataFormatClassNames);
	$set(this, globalColorTable, nullptr);
}

void GIFStreamMetadata::init$() {
	GIFStreamMetadata::init$(true, GIFStreamMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.gif.GIFStreamMetadataFormat"_s, nullptr, nullptr);
}

bool GIFStreamMetadata::isReadOnly() {
	return true;
}

$Node* GIFStreamMetadata::getAsTree($String* formatName) {
	if ($nc(formatName)->equals(GIFStreamMetadata::nativeMetadataFormatName)) {
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

$Node* GIFStreamMetadata::getNativeTree() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, nullptr);
	$var($IIOMetadataNode, root, $new($IIOMetadataNode, GIFStreamMetadata::nativeMetadataFormatName));
	$assign(node, $new($IIOMetadataNode, "Version"_s));
	node->setAttribute("value"_s, this->version);
	root->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "LogicalScreenDescriptor"_s));
	node->setAttribute("logicalScreenWidth"_s, this->logicalScreenWidth == $GIFMetadata::UNDEFINED_INTEGER_VALUE ? ""_s : $($Integer::toString(this->logicalScreenWidth)));
	node->setAttribute("logicalScreenHeight"_s, this->logicalScreenHeight == $GIFMetadata::UNDEFINED_INTEGER_VALUE ? ""_s : $($Integer::toString(this->logicalScreenHeight)));
	node->setAttribute("colorResolution"_s, this->colorResolution == $GIFMetadata::UNDEFINED_INTEGER_VALUE ? ""_s : $($Integer::toString(this->colorResolution)));
	node->setAttribute("pixelAspectRatio"_s, $($Integer::toString(this->pixelAspectRatio)));
	root->appendChild(node);
	if (this->globalColorTable != nullptr) {
		$assign(node, $new($IIOMetadataNode, "GlobalColorTable"_s));
		int32_t numEntries = $nc(this->globalColorTable)->length / 3;
		node->setAttribute("sizeOfGlobalColorTable"_s, $($Integer::toString(numEntries)));
		node->setAttribute("backgroundColorIndex"_s, $($Integer::toString(this->backgroundColorIndex)));
		node->setAttribute("sortFlag"_s, this->sortFlag ? "TRUE"_s : "FALSE"_s);
		for (int32_t i = 0; i < numEntries; ++i) {
			$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "ColorTableEntry"_s));
			entry->setAttribute("index"_s, $($Integer::toString(i)));
			int32_t r = (int32_t)($nc(this->globalColorTable)->get(3 * i) & (uint32_t)255);
			int32_t g = (int32_t)($nc(this->globalColorTable)->get(3 * i + 1) & (uint32_t)255);
			int32_t b = (int32_t)($nc(this->globalColorTable)->get(3 * i + 2) & (uint32_t)255);
			entry->setAttribute("red"_s, $($Integer::toString(r)));
			entry->setAttribute("green"_s, $($Integer::toString(g)));
			entry->setAttribute("blue"_s, $($Integer::toString(b)));
			node->appendChild(entry);
		}
		root->appendChild(node);
	}
	return root;
}

$IIOMetadataNode* GIFStreamMetadata::getStandardChromaNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, chroma_node, $new($IIOMetadataNode, "Chroma"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "ColorSpaceType"_s));
	node->setAttribute("name"_s, "RGB"_s);
	chroma_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "BlackIsZero"_s));
	node->setAttribute("value"_s, "TRUE"_s);
	chroma_node->appendChild(node);
	if (this->globalColorTable != nullptr) {
		$assign(node, $new($IIOMetadataNode, "Palette"_s));
		int32_t numEntries = $nc(this->globalColorTable)->length / 3;
		for (int32_t i = 0; i < numEntries; ++i) {
			$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "PaletteEntry"_s));
			entry->setAttribute("index"_s, $($Integer::toString(i)));
			entry->setAttribute("red"_s, $($Integer::toString((int32_t)($nc(this->globalColorTable)->get(3 * i) & (uint32_t)255))));
			entry->setAttribute("green"_s, $($Integer::toString((int32_t)($nc(this->globalColorTable)->get(3 * i + 1) & (uint32_t)255))));
			entry->setAttribute("blue"_s, $($Integer::toString((int32_t)($nc(this->globalColorTable)->get(3 * i + 2) & (uint32_t)255))));
			node->appendChild(entry);
		}
		chroma_node->appendChild(node);
		$assign(node, $new($IIOMetadataNode, "BackgroundIndex"_s));
		node->setAttribute("value"_s, $($Integer::toString(this->backgroundColorIndex)));
		chroma_node->appendChild(node);
	}
	return chroma_node;
}

$IIOMetadataNode* GIFStreamMetadata::getStandardCompressionNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, compression_node, $new($IIOMetadataNode, "Compression"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "CompressionTypeName"_s));
	node->setAttribute("value"_s, "lzw"_s);
	compression_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "Lossless"_s));
	node->setAttribute("value"_s, "TRUE"_s);
	compression_node->appendChild(node);
	return compression_node;
}

$IIOMetadataNode* GIFStreamMetadata::getStandardDataNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, data_node, $new($IIOMetadataNode, "Data"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "SampleFormat"_s));
	node->setAttribute("value"_s, "Index"_s);
	data_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "BitsPerSample"_s));
	node->setAttribute("value"_s, this->colorResolution == $GIFMetadata::UNDEFINED_INTEGER_VALUE ? ""_s : $($Integer::toString(this->colorResolution)));
	data_node->appendChild(node);
	return data_node;
}

$IIOMetadataNode* GIFStreamMetadata::getStandardDimensionNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, dimension_node, $new($IIOMetadataNode, "Dimension"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "PixelAspectRatio"_s));
	float aspectRatio = 1.0f;
	if (this->pixelAspectRatio != 0) {
		aspectRatio = (this->pixelAspectRatio + 15) / 64.0f;
	}
	node->setAttribute("value"_s, $($Float::toString(aspectRatio)));
	dimension_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "ImageOrientation"_s));
	node->setAttribute("value"_s, "Normal"_s);
	dimension_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "HorizontalScreenSize"_s));
	node->setAttribute("value"_s, this->logicalScreenWidth == $GIFMetadata::UNDEFINED_INTEGER_VALUE ? ""_s : $($Integer::toString(this->logicalScreenWidth)));
	dimension_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "VerticalScreenSize"_s));
	node->setAttribute("value"_s, this->logicalScreenHeight == $GIFMetadata::UNDEFINED_INTEGER_VALUE ? ""_s : $($Integer::toString(this->logicalScreenHeight)));
	dimension_node->appendChild(node);
	return dimension_node;
}

$IIOMetadataNode* GIFStreamMetadata::getStandardDocumentNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, document_node, $new($IIOMetadataNode, "Document"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "FormatVersion"_s));
	node->setAttribute("value"_s, this->version);
	document_node->appendChild(node);
	return document_node;
}

$IIOMetadataNode* GIFStreamMetadata::getStandardTextNode() {
	return nullptr;
}

$IIOMetadataNode* GIFStreamMetadata::getStandardTransparencyNode() {
	return nullptr;
}

void GIFStreamMetadata::setFromTree($String* formatName, $Node* root) {
	$throwNew($IllegalStateException, "Metadata is read-only!"_s);
}

void GIFStreamMetadata::mergeNativeTree($Node* root) {
	$throwNew($IllegalStateException, "Metadata is read-only!"_s);
}

void GIFStreamMetadata::mergeStandardTree($Node* root) {
	$throwNew($IllegalStateException, "Metadata is read-only!"_s);
}

void GIFStreamMetadata::reset() {
	$throwNew($IllegalStateException, "Metadata is read-only!"_s);
}

void GIFStreamMetadata::mergeTree($String* formatName, $Node* root) {
	$GIFMetadata::mergeTree(formatName, root);
}

void clinit$GIFStreamMetadata($Class* class$) {
	$assignStatic(GIFStreamMetadata::nativeMetadataFormatName, "javax_imageio_gif_stream_1.0"_s);
	$assignStatic(GIFStreamMetadata::versionStrings, $new($StringArray, {
		"87a"_s,
		"89a"_s
	}));
	$assignStatic(GIFStreamMetadata::colorTableSizes, $new($StringArray, {
		"2"_s,
		"4"_s,
		"8"_s,
		"16"_s,
		"32"_s,
		"64"_s,
		"128"_s,
		"256"_s
	}));
}

GIFStreamMetadata::GIFStreamMetadata() {
}

$Class* GIFStreamMetadata::load$($String* name, bool initialize) {
	$loadClass(GIFStreamMetadata, name, initialize, &_GIFStreamMetadata_ClassInfo_, clinit$GIFStreamMetadata, allocate$GIFStreamMetadata);
	return class$;
}

$Class* GIFStreamMetadata::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com