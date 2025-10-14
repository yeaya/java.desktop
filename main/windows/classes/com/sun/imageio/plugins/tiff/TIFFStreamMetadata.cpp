#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadata.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteOrder.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN
#undef NATIVE_METADATA_FORMAT_CLASS_NAME
#undef NATIVE_METADATA_FORMAT_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteOrder = ::java::nio::ByteOrder;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFStreamMetadata_FieldInfo_[] = {
	{"NATIVE_METADATA_FORMAT_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TIFFStreamMetadata, NATIVE_METADATA_FORMAT_NAME)},
	{"NATIVE_METADATA_FORMAT_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TIFFStreamMetadata, NATIVE_METADATA_FORMAT_CLASS_NAME)},
	{"bigEndianString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFStreamMetadata, bigEndianString)},
	{"littleEndianString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFStreamMetadata, littleEndianString)},
	{"byteOrder", "Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $field(TIFFStreamMetadata, byteOrder)},
	{}
};

$MethodInfo _TIFFStreamMetadata_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFStreamMetadata::*)()>(&TIFFStreamMetadata::init$))},
	{"fatal", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Node*,$String*)>(&TIFFStreamMetadata::fatal)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getAsTree", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"mergeNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFStreamMetadata::*)($Node*)>(&TIFFStreamMetadata::mergeNativeTree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFStreamMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFStreamMetadata",
	"javax.imageio.metadata.IIOMetadata",
	nullptr,
	_TIFFStreamMetadata_FieldInfo_,
	_TIFFStreamMetadata_MethodInfo_
};

$Object* allocate$TIFFStreamMetadata($Class* clazz) {
	return $of($alloc(TIFFStreamMetadata));
}

$String* TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME = nullptr;
$String* TIFFStreamMetadata::NATIVE_METADATA_FORMAT_CLASS_NAME = nullptr;
$String* TIFFStreamMetadata::bigEndianString = nullptr;
$String* TIFFStreamMetadata::littleEndianString = nullptr;

void TIFFStreamMetadata::init$() {
	$IIOMetadata::init$(false, TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME, TIFFStreamMetadata::NATIVE_METADATA_FORMAT_CLASS_NAME, nullptr, nullptr);
	$init($ByteOrder);
	$set(this, byteOrder, $ByteOrder::BIG_ENDIAN);
}

bool TIFFStreamMetadata::isReadOnly() {
	return false;
}

void TIFFStreamMetadata::fatal($Node* node, $String* reason) {
	$init(TIFFStreamMetadata);
	$throwNew($IIOInvalidTreeException, reason, node);
}

$Node* TIFFStreamMetadata::getAsTree($String* formatName) {
	$var($IIOMetadataNode, root, $new($IIOMetadataNode, this->nativeMetadataFormatName));
	$var($IIOMetadataNode, byteOrderNode, $new($IIOMetadataNode, "ByteOrder"_s));
	byteOrderNode->setAttribute("value"_s, $($nc(this->byteOrder)->toString()));
	root->appendChild(byteOrderNode);
	return root;
}

void TIFFStreamMetadata::mergeNativeTree($Node* root) {
	$var($Node, node, root);
	if (!$nc($($nc(node)->getNodeName()))->equals(this->nativeMetadataFormatName)) {
		fatal(node, $$str({"Root must be "_s, this->nativeMetadataFormatName}));
	}
	$assign(node, $nc(node)->getFirstChild());
	if (node == nullptr || !$nc($(node->getNodeName()))->equals("ByteOrder"_s)) {
		fatal(node, "Root must have \"ByteOrder\" child"_s);
	}
	$var($NamedNodeMap, attrs, node->getAttributes());
	$var($String, order, $nc($($nc(attrs)->getNamedItem("value"_s)))->getNodeValue());
	if (order == nullptr) {
		fatal(node, "ByteOrder node must have a \"value\" attribute"_s);
	}
	if ($nc(order)->equals(TIFFStreamMetadata::bigEndianString)) {
		$init($ByteOrder);
		$set(this, byteOrder, $ByteOrder::BIG_ENDIAN);
	} else if (order->equals(TIFFStreamMetadata::littleEndianString)) {
		$init($ByteOrder);
		$set(this, byteOrder, $ByteOrder::LITTLE_ENDIAN);
	} else {
		fatal(node, "Incorrect value for ByteOrder \"value\" attribute"_s);
	}
}

void TIFFStreamMetadata::mergeTree($String* formatName, $Node* root) {
	if ($nc(formatName)->equals(this->nativeMetadataFormatName)) {
		if (root == nullptr) {
			$throwNew($NullPointerException, "root == null!"_s);
		}
		mergeNativeTree(root);
	} else {
		$throwNew($IllegalArgumentException, "Not a recognized format!"_s);
	}
}

void TIFFStreamMetadata::reset() {
	$init($ByteOrder);
	$set(this, byteOrder, $ByteOrder::BIG_ENDIAN);
}

void clinit$TIFFStreamMetadata($Class* class$) {
	$assignStatic(TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME, "javax_imageio_tiff_stream_1.0"_s);
	$assignStatic(TIFFStreamMetadata::NATIVE_METADATA_FORMAT_CLASS_NAME, "javax.imageio.plugins.tiff.TIFFStreamMetadataFormat"_s);
	$init($ByteOrder);
	$assignStatic(TIFFStreamMetadata::bigEndianString, $nc($ByteOrder::BIG_ENDIAN)->toString());
	$assignStatic(TIFFStreamMetadata::littleEndianString, $nc($ByteOrder::LITTLE_ENDIAN)->toString());
}

TIFFStreamMetadata::TIFFStreamMetadata() {
}

$Class* TIFFStreamMetadata::load$($String* name, bool initialize) {
	$loadClass(TIFFStreamMetadata, name, initialize, &_TIFFStreamMetadata_ClassInfo_, clinit$TIFFStreamMetadata, allocate$TIFFStreamMetadata);
	return class$;
}

$Class* TIFFStreamMetadata::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com