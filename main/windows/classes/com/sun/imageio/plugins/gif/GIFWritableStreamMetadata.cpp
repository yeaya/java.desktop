#include <com/sun/imageio/plugins/gif/GIFWritableStreamMetadata.h>

#include <com/sun/imageio/plugins/gif/GIFMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFStreamMetadata.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef NATIVE_FORMAT_NAME
#undef UNDEFINED_INTEGER_VALUE

using $GIFMetadata = ::com::sun::imageio::plugins::gif::GIFMetadata;
using $GIFStreamMetadata = ::com::sun::imageio::plugins::gif::GIFStreamMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

$FieldInfo _GIFWritableStreamMetadata_FieldInfo_[] = {
	{"NATIVE_FORMAT_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFWritableStreamMetadata, NATIVE_FORMAT_NAME)},
	{}
};

$MethodInfo _GIFWritableStreamMetadata_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GIFWritableStreamMetadata::*)()>(&GIFWritableStreamMetadata::init$))},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"mergeNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setFromTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{}
};

$ClassInfo _GIFWritableStreamMetadata_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFWritableStreamMetadata",
	"com.sun.imageio.plugins.gif.GIFStreamMetadata",
	nullptr,
	_GIFWritableStreamMetadata_FieldInfo_,
	_GIFWritableStreamMetadata_MethodInfo_
};

$Object* allocate$GIFWritableStreamMetadata($Class* clazz) {
	return $of($alloc(GIFWritableStreamMetadata));
}

$String* GIFWritableStreamMetadata::NATIVE_FORMAT_NAME = nullptr;

void GIFWritableStreamMetadata::init$() {
	$GIFStreamMetadata::init$(true, GIFWritableStreamMetadata::NATIVE_FORMAT_NAME, "com.sun.imageio.plugins.gif.GIFStreamMetadataFormat"_s, nullptr, nullptr);
	reset();
}

bool GIFWritableStreamMetadata::isReadOnly() {
	return false;
}

void GIFWritableStreamMetadata::mergeTree($String* formatName, $Node* root) {
	$init($GIFStreamMetadata);
	if ($nc(formatName)->equals($GIFStreamMetadata::nativeMetadataFormatName)) {
		if (root == nullptr) {
			$throwNew($IllegalArgumentException, "root == null!"_s);
		}
		mergeNativeTree(root);
	} else {
		$init($IIOMetadataFormatImpl);
		if (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			if (root == nullptr) {
				$throwNew($IllegalArgumentException, "root == null!"_s);
			}
			mergeStandardTree(root);
		} else {
			$throwNew($IllegalArgumentException, "Not a recognized format!"_s);
		}
	}
}

void GIFWritableStreamMetadata::reset() {
	$set(this, version, nullptr);
	this->logicalScreenWidth = $GIFMetadata::UNDEFINED_INTEGER_VALUE;
	this->logicalScreenHeight = $GIFMetadata::UNDEFINED_INTEGER_VALUE;
	this->colorResolution = $GIFMetadata::UNDEFINED_INTEGER_VALUE;
	this->pixelAspectRatio = 0;
	this->backgroundColorIndex = 0;
	this->sortFlag = false;
	$set(this, globalColorTable, nullptr);
}

void GIFWritableStreamMetadata::mergeNativeTree($Node* root) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, root);
	$init($GIFStreamMetadata);
	if (!$nc($($nc(node)->getNodeName()))->equals($GIFStreamMetadata::nativeMetadataFormatName)) {
		fatal(node, $$str({"Root must be "_s, $GIFStreamMetadata::nativeMetadataFormatName}));
	}
	$assign(node, $nc(node)->getFirstChild());
	while (node != nullptr) {
		$var($String, name, node->getNodeName());
		if ($nc(name)->equals("Version"_s)) {
			$set(this, version, getStringAttribute(node, "value"_s, nullptr, true, $GIFStreamMetadata::versionStrings));
		} else if (name->equals("LogicalScreenDescriptor"_s)) {
			this->logicalScreenWidth = getIntAttribute(node, "logicalScreenWidth"_s, $GIFMetadata::UNDEFINED_INTEGER_VALUE, true, true, 1, 0x0000FFFF);
			this->logicalScreenHeight = getIntAttribute(node, "logicalScreenHeight"_s, $GIFMetadata::UNDEFINED_INTEGER_VALUE, true, true, 1, 0x0000FFFF);
			this->colorResolution = getIntAttribute(node, "colorResolution"_s, $GIFMetadata::UNDEFINED_INTEGER_VALUE, true, true, 1, 8);
			this->pixelAspectRatio = getIntAttribute(node, "pixelAspectRatio"_s, 0, true, true, 0, 255);
		} else if (name->equals("GlobalColorTable"_s)) {
			int32_t sizeOfGlobalColorTable = getIntAttribute(node, "sizeOfGlobalColorTable"_s, true, 2, 256);
			if (sizeOfGlobalColorTable != 2 && sizeOfGlobalColorTable != 4 && sizeOfGlobalColorTable != 8 && sizeOfGlobalColorTable != 16 && sizeOfGlobalColorTable != 32 && sizeOfGlobalColorTable != 64 && sizeOfGlobalColorTable != 128 && sizeOfGlobalColorTable != 256) {
				fatal(node, "Bad value for GlobalColorTable attribute sizeOfGlobalColorTable!"_s);
			}
			this->backgroundColorIndex = getIntAttribute(node, "backgroundColorIndex"_s, 0, true, true, 0, 255);
			this->sortFlag = getBooleanAttribute(node, "sortFlag"_s, false, true);
			$set(this, globalColorTable, getColorTable(node, "ColorTableEntry"_s, true, sizeOfGlobalColorTable));
		} else {
			fatal(node, "Unknown child of root node!"_s);
		}
		$assign(node, node->getNextSibling());
	}
}

void GIFWritableStreamMetadata::mergeStandardTree($Node* root) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, root);
	$init($IIOMetadataFormatImpl);
	if (!$nc($($nc(node)->getNodeName()))->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
		fatal(node, $$str({"Root must be "_s, $IIOMetadataFormatImpl::standardMetadataFormatName}));
	}
	$assign(node, $nc(node)->getFirstChild());
	while (node != nullptr) {
		$var($String, name, node->getNodeName());
		if ($nc(name)->equals("Chroma"_s)) {
			$var($Node, childNode, node->getFirstChild());
			while (childNode != nullptr) {
				$var($String, childName, childNode->getNodeName());
				if ($nc(childName)->equals("Palette"_s)) {
					$set(this, globalColorTable, getColorTable(childNode, "PaletteEntry"_s, false, -1));
				} else if (childName->equals("BackgroundIndex"_s)) {
					this->backgroundColorIndex = getIntAttribute(childNode, "value"_s, -1, true, true, 0, 255);
				}
				$assign(childNode, childNode->getNextSibling());
			}
		} else if (name->equals("Data"_s)) {
			$var($Node, childNode, node->getFirstChild());
			while (childNode != nullptr) {
				$var($String, childName, childNode->getNodeName());
				if ($nc(childName)->equals("BitsPerSample"_s)) {
					this->colorResolution = getIntAttribute(childNode, "value"_s, -1, true, true, 1, 8);
					break;
				}
				$assign(childNode, childNode->getNextSibling());
			}
		} else if (name->equals("Dimension"_s)) {
			$var($Node, childNode, node->getFirstChild());
			while (childNode != nullptr) {
				$var($String, childName, childNode->getNodeName());
				if ($nc(childName)->equals("PixelAspectRatio"_s)) {
					float aspectRatio = getFloatAttribute(childNode, "value"_s);
					if (aspectRatio == 1.0f) {
						this->pixelAspectRatio = 0;
					} else {
						int32_t ratio = $cast(int32_t, (aspectRatio * 64.0f - 15.0f));
						this->pixelAspectRatio = $Math::max($Math::min(ratio, 255), 0);
					}
				} else if (childName->equals("HorizontalScreenSize"_s)) {
					this->logicalScreenWidth = getIntAttribute(childNode, "value"_s, -1, true, true, 1, 0x0000FFFF);
				} else if (childName->equals("VerticalScreenSize"_s)) {
					this->logicalScreenHeight = getIntAttribute(childNode, "value"_s, -1, true, true, 1, 0x0000FFFF);
				}
				$assign(childNode, childNode->getNextSibling());
			}
		} else if (name->equals("Document"_s)) {
			$var($Node, childNode, node->getFirstChild());
			while (childNode != nullptr) {
				$var($String, childName, childNode->getNodeName());
				if ($nc(childName)->equals("FormatVersion"_s)) {
					$var($String, formatVersion, getStringAttribute(childNode, "value"_s, nullptr, true, nullptr));
					$init($GIFStreamMetadata);
					for (int32_t i = 0; i < $nc($GIFStreamMetadata::versionStrings)->length; ++i) {
						if ($nc(formatVersion)->equals($nc($GIFStreamMetadata::versionStrings)->get(i))) {
							$set(this, version, formatVersion);
							break;
						}
					}
					break;
				}
				$assign(childNode, childNode->getNextSibling());
			}
		}
		$assign(node, node->getNextSibling());
	}
}

void GIFWritableStreamMetadata::setFromTree($String* formatName, $Node* root) {
	reset();
	mergeTree(formatName, root);
}

GIFWritableStreamMetadata::GIFWritableStreamMetadata() {
}

void clinit$GIFWritableStreamMetadata($Class* class$) {
	$assignStatic(GIFWritableStreamMetadata::NATIVE_FORMAT_NAME, "javax_imageio_gif_stream_1.0"_s);
}

$Class* GIFWritableStreamMetadata::load$($String* name, bool initialize) {
	$loadClass(GIFWritableStreamMetadata, name, initialize, &_GIFWritableStreamMetadata_ClassInfo_, clinit$GIFWritableStreamMetadata, allocate$GIFWritableStreamMetadata);
	return class$;
}

$Class* GIFWritableStreamMetadata::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com