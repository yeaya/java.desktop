#include <com/sun/imageio/plugins/gif/GIFWritableImageMetadata.h>

#include <com/sun/imageio/plugins/gif/GIFImageMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFMetadata.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef NATIVE_FORMAT_NAME

using $GIFImageMetadata = ::com::sun::imageio::plugins::gif::GIFImageMetadata;
using $GIFMetadata = ::com::sun::imageio::plugins::gif::GIFMetadata;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
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

$FieldInfo _GIFWritableImageMetadata_FieldInfo_[] = {
	{"NATIVE_FORMAT_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFWritableImageMetadata, NATIVE_FORMAT_NAME)},
	{}
};

$MethodInfo _GIFWritableImageMetadata_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GIFWritableImageMetadata::*)()>(&GIFWritableImageMetadata::init$))},
	{"fromISO8859", "(Ljava/lang/String;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(GIFWritableImageMetadata::*)($String*)>(&GIFWritableImageMetadata::fromISO8859))},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"mergeNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setFromTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{}
};

$ClassInfo _GIFWritableImageMetadata_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFWritableImageMetadata",
	"com.sun.imageio.plugins.gif.GIFImageMetadata",
	nullptr,
	_GIFWritableImageMetadata_FieldInfo_,
	_GIFWritableImageMetadata_MethodInfo_
};

$Object* allocate$GIFWritableImageMetadata($Class* clazz) {
	return $of($alloc(GIFWritableImageMetadata));
}

$String* GIFWritableImageMetadata::NATIVE_FORMAT_NAME = nullptr;

void GIFWritableImageMetadata::init$() {
	$GIFImageMetadata::init$(true, GIFWritableImageMetadata::NATIVE_FORMAT_NAME, "com.sun.imageio.plugins.gif.GIFImageMetadataFormat"_s, nullptr, nullptr);
}

bool GIFWritableImageMetadata::isReadOnly() {
	return false;
}

void GIFWritableImageMetadata::reset() {
	this->imageLeftPosition = 0;
	this->imageTopPosition = 0;
	this->imageWidth = 0;
	this->imageHeight = 0;
	this->interlaceFlag = false;
	this->sortFlag = false;
	$set(this, localColorTable, nullptr);
	this->disposalMethod = 0;
	this->userInputFlag = false;
	this->transparentColorFlag = false;
	this->delayTime = 0;
	this->transparentColorIndex = 0;
	this->hasPlainTextExtension = false;
	this->textGridLeft = 0;
	this->textGridTop = 0;
	this->textGridWidth = 0;
	this->textGridHeight = 0;
	this->characterCellWidth = 0;
	this->characterCellHeight = 0;
	this->textForegroundColor = 0;
	this->textBackgroundColor = 0;
	$set(this, text, nullptr);
	$set(this, applicationIDs, nullptr);
	$set(this, authenticationCodes, nullptr);
	$set(this, applicationData, nullptr);
	$set(this, comments, nullptr);
}

$bytes* GIFWritableImageMetadata::fromISO8859($String* data) {
	try {
		return $nc(data)->getBytes("ISO-8859-1"_s);
	} catch ($UnsupportedEncodingException&) {
		$var($UnsupportedEncodingException, e, $catch());
		return ""_s->getBytes();
	}
	$shouldNotReachHere();
}

void GIFWritableImageMetadata::mergeNativeTree($Node* root) {
	$var($Node, node, root);
	$init($GIFImageMetadata);
	if (!$nc($($nc(node)->getNodeName()))->equals($GIFImageMetadata::nativeMetadataFormatName)) {
		fatal(node, $$str({"Root must be "_s, $GIFImageMetadata::nativeMetadataFormatName}));
	}
	$assign(node, $nc(node)->getFirstChild());
	while (node != nullptr) {
		$var($String, name, node->getNodeName());
		if ($nc(name)->equals("ImageDescriptor"_s)) {
			this->imageLeftPosition = getIntAttribute(node, "imageLeftPosition"_s, -1, true, true, 0, 0x0000FFFF);
			this->imageTopPosition = getIntAttribute(node, "imageTopPosition"_s, -1, true, true, 0, 0x0000FFFF);
			this->imageWidth = getIntAttribute(node, "imageWidth"_s, -1, true, true, 1, 0x0000FFFF);
			this->imageHeight = getIntAttribute(node, "imageHeight"_s, -1, true, true, 1, 0x0000FFFF);
			this->interlaceFlag = getBooleanAttribute(node, "interlaceFlag"_s, false, true);
		} else if (name->equals("LocalColorTable"_s)) {
			int32_t sizeOfLocalColorTable = getIntAttribute(node, "sizeOfLocalColorTable"_s, true, 2, 256);
			if (sizeOfLocalColorTable != 2 && sizeOfLocalColorTable != 4 && sizeOfLocalColorTable != 8 && sizeOfLocalColorTable != 16 && sizeOfLocalColorTable != 32 && sizeOfLocalColorTable != 64 && sizeOfLocalColorTable != 128 && sizeOfLocalColorTable != 256) {
				fatal(node, "Bad value for LocalColorTable attribute sizeOfLocalColorTable!"_s);
			}
			this->sortFlag = getBooleanAttribute(node, "sortFlag"_s, false, true);
			$set(this, localColorTable, getColorTable(node, "ColorTableEntry"_s, true, sizeOfLocalColorTable));
		} else if (name->equals("GraphicControlExtension"_s)) {
			$var($String, disposalMethodName, getStringAttribute(node, "disposalMethod"_s, nullptr, true, $GIFImageMetadata::disposalMethodNames));
			this->disposalMethod = 0;
			while (!$nc(disposalMethodName)->equals($nc($GIFImageMetadata::disposalMethodNames)->get(this->disposalMethod))) {
				++this->disposalMethod;
			}
			this->userInputFlag = getBooleanAttribute(node, "userInputFlag"_s, false, true);
			this->transparentColorFlag = getBooleanAttribute(node, "transparentColorFlag"_s, false, true);
			this->delayTime = getIntAttribute(node, "delayTime"_s, -1, true, true, 0, 0x0000FFFF);
			this->transparentColorIndex = getIntAttribute(node, "transparentColorIndex"_s, -1, true, true, 0, 0x0000FFFF);
		} else if (name->equals("PlainTextExtension"_s)) {
			this->hasPlainTextExtension = true;
			this->textGridLeft = getIntAttribute(node, "textGridLeft"_s, -1, true, true, 0, 0x0000FFFF);
			this->textGridTop = getIntAttribute(node, "textGridTop"_s, -1, true, true, 0, 0x0000FFFF);
			this->textGridWidth = getIntAttribute(node, "textGridWidth"_s, -1, true, true, 1, 0x0000FFFF);
			this->textGridHeight = getIntAttribute(node, "textGridHeight"_s, -1, true, true, 1, 0x0000FFFF);
			this->characterCellWidth = getIntAttribute(node, "characterCellWidth"_s, -1, true, true, 1, 255);
			this->characterCellHeight = getIntAttribute(node, "characterCellHeight"_s, -1, true, true, 1, 255);
			this->textForegroundColor = getIntAttribute(node, "textForegroundColor"_s, -1, true, true, 0, 255);
			this->textBackgroundColor = getIntAttribute(node, "textBackgroundColor"_s, -1, true, true, 0, 255);
			$var($String, textString, getStringAttribute(node, "text"_s, ""_s, false, nullptr));
			$set(this, text, fromISO8859(textString));
		} else if (name->equals("ApplicationExtensions"_s)) {
			$var($IIOMetadataNode, applicationExtension, $cast($IIOMetadataNode, node->getFirstChild()));
			if (!$nc($($nc(applicationExtension)->getNodeName()))->equals("ApplicationExtension"_s)) {
				fatal(node, "Only a ApplicationExtension may be a child of a ApplicationExtensions!"_s);
			}
			$var($String, applicationIDString, getStringAttribute(applicationExtension, "applicationID"_s, nullptr, true, nullptr));
			$var($String, authenticationCodeString, getStringAttribute(applicationExtension, "authenticationCode"_s, nullptr, true, nullptr));
			$var($Object, applicationExtensionData, $nc(applicationExtension)->getUserObject());
			if (applicationExtensionData == nullptr || !($instanceOf($bytes, applicationExtensionData))) {
				fatal(applicationExtension, "Bad user object in ApplicationExtension!"_s);
			}
			if (this->applicationIDs == nullptr) {
				$set(this, applicationIDs, $new($ArrayList));
				$set(this, authenticationCodes, $new($ArrayList));
				$set(this, applicationData, $new($ArrayList));
			}
			$nc(this->applicationIDs)->add($(fromISO8859(applicationIDString)));
			$nc(this->authenticationCodes)->add($(fromISO8859(authenticationCodeString)));
			$nc(this->applicationData)->add($cast($bytes, applicationExtensionData));
		} else if (name->equals("CommentExtensions"_s)) {
			$var($Node, commentExtension, node->getFirstChild());
			if (commentExtension != nullptr) {
				while (commentExtension != nullptr) {
					if (!$nc($(commentExtension->getNodeName()))->equals("CommentExtension"_s)) {
						fatal(node, "Only a CommentExtension may be a child of a CommentExtensions!"_s);
					}
					if (this->comments == nullptr) {
						$set(this, comments, $new($ArrayList));
					}
					$var($String, comment, getStringAttribute(commentExtension, "value"_s, nullptr, true, nullptr));
					$nc(this->comments)->add($(fromISO8859(comment)));
					$assign(commentExtension, commentExtension->getNextSibling());
				}
			}
		} else {
			fatal(node, "Unknown child of root node!"_s);
		}
		$assign(node, node->getNextSibling());
	}
}

void GIFWritableImageMetadata::mergeStandardTree($Node* root) {
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
					$set(this, localColorTable, getColorTable(childNode, "PaletteEntry"_s, false, -1));
					break;
				}
				$assign(childNode, childNode->getNextSibling());
			}
		} else if (name->equals("Compression"_s)) {
			$var($Node, childNode, node->getFirstChild());
			while (childNode != nullptr) {
				$var($String, childName, childNode->getNodeName());
				if ($nc(childName)->equals("NumProgressiveScans"_s)) {
					int32_t numProgressiveScans = getIntAttribute(childNode, "value"_s, 4, false, true, 1, $Integer::MAX_VALUE);
					if (numProgressiveScans > 1) {
						this->interlaceFlag = true;
					}
					break;
				}
				$assign(childNode, childNode->getNextSibling());
			}
		} else if (name->equals("Dimension"_s)) {
			$var($Node, childNode, node->getFirstChild());
			while (childNode != nullptr) {
				$var($String, childName, childNode->getNodeName());
				if ($nc(childName)->equals("HorizontalPixelOffset"_s)) {
					this->imageLeftPosition = getIntAttribute(childNode, "value"_s, -1, true, true, 0, 0x0000FFFF);
				} else if (childName->equals("VerticalPixelOffset"_s)) {
					this->imageTopPosition = getIntAttribute(childNode, "value"_s, -1, true, true, 0, 0x0000FFFF);
				}
				$assign(childNode, childNode->getNextSibling());
			}
		} else if (name->equals("Text"_s)) {
			$var($Node, childNode, node->getFirstChild());
			while (childNode != nullptr) {
				$var($String, childName, childNode->getNodeName());
				bool var$1 = $nc(childName)->equals("TextEntry"_s);
				bool var$0 = var$1 && $nc($(getAttribute(childNode, "compression"_s, "none"_s, false)))->equals("none"_s);
				if (var$0 && $Charset::isSupported($(getAttribute(childNode, "encoding"_s, "ISO-8859-1"_s, false)))) {
					$var($String, value, getAttribute(childNode, "value"_s));
					$var($bytes, comment, fromISO8859(value));
					if (this->comments == nullptr) {
						$set(this, comments, $new($ArrayList));
					}
					$nc(this->comments)->add(comment);
				}
				$assign(childNode, childNode->getNextSibling());
			}
		} else if (name->equals("Transparency"_s)) {
			$var($Node, childNode, node->getFirstChild());
			while (childNode != nullptr) {
				$var($String, childName, childNode->getNodeName());
				if ($nc(childName)->equals("TransparentIndex"_s)) {
					this->transparentColorIndex = getIntAttribute(childNode, "value"_s, -1, true, true, 0, 255);
					this->transparentColorFlag = true;
					break;
				}
				$assign(childNode, childNode->getNextSibling());
			}
		}
		$assign(node, node->getNextSibling());
	}
}

void GIFWritableImageMetadata::setFromTree($String* formatName, $Node* root) {
	reset();
	mergeTree(formatName, root);
}

GIFWritableImageMetadata::GIFWritableImageMetadata() {
}

void clinit$GIFWritableImageMetadata($Class* class$) {
	$assignStatic(GIFWritableImageMetadata::NATIVE_FORMAT_NAME, "javax_imageio_gif_image_1.0"_s);
}

$Class* GIFWritableImageMetadata::load$($String* name, bool initialize) {
	$loadClass(GIFWritableImageMetadata, name, initialize, &_GIFWritableImageMetadata_ClassInfo_, clinit$GIFWritableImageMetadata, allocate$GIFWritableImageMetadata);
	return class$;
}

$Class* GIFWritableImageMetadata::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com