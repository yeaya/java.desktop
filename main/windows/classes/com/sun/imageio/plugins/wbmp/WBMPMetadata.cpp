#include <com/sun/imageio/plugins/wbmp/WBMPMetadata.h>

#include <com/sun/imageio/plugins/common/I18N.h>
#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $I18N = ::com::sun::imageio::plugins::common::I18N;
using $ImageUtil = ::com::sun::imageio::plugins::common::ImageUtil;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace wbmp {

$FieldInfo _WBMPMetadata_FieldInfo_[] = {
	{"nativeMetadataFormatName", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(WBMPMetadata, nativeMetadataFormatName)},
	{"wbmpType", "I", nullptr, $PUBLIC, $field(WBMPMetadata, wbmpType)},
	{"width", "I", nullptr, $PUBLIC, $field(WBMPMetadata, width)},
	{"height", "I", nullptr, $PUBLIC, $field(WBMPMetadata, height)},
	{}
};

$MethodInfo _WBMPMetadata_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WBMPMetadata::*)()>(&WBMPMetadata::init$))},
	{"addChildNode", "(Ljavax/imageio/metadata/IIOMetadataNode;Ljava/lang/String;Ljava/lang/Object;)Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PRIVATE, $method(static_cast<$IIOMetadataNode*(WBMPMetadata::*)($IIOMetadataNode*,$String*,Object$*)>(&WBMPMetadata::addChildNode))},
	{"getAsTree", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNativeTree", "()Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(static_cast<$Node*(WBMPMetadata::*)()>(&WBMPMetadata::getNativeTree))},
	{"getStandardChromaNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"getStandardDimensionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setFromTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WBMPMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.wbmp.WBMPMetadata",
	"javax.imageio.metadata.IIOMetadata",
	nullptr,
	_WBMPMetadata_FieldInfo_,
	_WBMPMetadata_MethodInfo_
};

$Object* allocate$WBMPMetadata($Class* clazz) {
	return $of($alloc(WBMPMetadata));
}

$String* WBMPMetadata::nativeMetadataFormatName = nullptr;

void WBMPMetadata::init$() {
	$IIOMetadata::init$(true, WBMPMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.wbmp.WBMPMetadataFormat"_s, nullptr, nullptr);
}

bool WBMPMetadata::isReadOnly() {
	return true;
}

$Node* WBMPMetadata::getAsTree($String* formatName) {
	if ($nc(formatName)->equals(WBMPMetadata::nativeMetadataFormatName)) {
		return getNativeTree();
	} else {
		$init($IIOMetadataFormatImpl);
		if (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			return getStandardTree();
		} else {
			$throwNew($IllegalArgumentException, $($I18N::getString("WBMPMetadata0"_s)));
		}
	}
}

$Node* WBMPMetadata::getNativeTree() {
	$var($IIOMetadataNode, root, $new($IIOMetadataNode, WBMPMetadata::nativeMetadataFormatName));
	addChildNode(root, "WBMPType"_s, $($Integer::valueOf(this->wbmpType)));
	addChildNode(root, "Width"_s, $($Integer::valueOf(this->width)));
	addChildNode(root, "Height"_s, $($Integer::valueOf(this->height)));
	return root;
}

void WBMPMetadata::setFromTree($String* formatName, $Node* root) {
	$throwNew($IllegalStateException, $($I18N::getString("WBMPMetadata1"_s)));
}

void WBMPMetadata::mergeTree($String* formatName, $Node* root) {
	$throwNew($IllegalStateException, $($I18N::getString("WBMPMetadata1"_s)));
}

void WBMPMetadata::reset() {
	$throwNew($IllegalStateException, $($I18N::getString("WBMPMetadata1"_s)));
}

$IIOMetadataNode* WBMPMetadata::addChildNode($IIOMetadataNode* root, $String* name, Object$* object) {
	$var($IIOMetadataNode, child, $new($IIOMetadataNode, name));
	if (object != nullptr) {
		child->setUserObject(object);
		child->setNodeValue($($ImageUtil::convertObjectToString(object)));
	}
	$nc(root)->appendChild(child);
	return child;
}

$IIOMetadataNode* WBMPMetadata::getStandardChromaNode() {
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "Chroma"_s));
	$var($IIOMetadataNode, subNode, $new($IIOMetadataNode, "BlackIsZero"_s));
	subNode->setAttribute("value"_s, "TRUE"_s);
	node->appendChild(subNode);
	return node;
}

$IIOMetadataNode* WBMPMetadata::getStandardDimensionNode() {
	$var($IIOMetadataNode, dimension_node, $new($IIOMetadataNode, "Dimension"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "ImageOrientation"_s));
	node->setAttribute("value"_s, "Normal"_s);
	dimension_node->appendChild(node);
	return dimension_node;
}

WBMPMetadata::WBMPMetadata() {
}

void clinit$WBMPMetadata($Class* class$) {
	$assignStatic(WBMPMetadata::nativeMetadataFormatName, "javax_imageio_wbmp_1.0"_s);
}

$Class* WBMPMetadata::load$($String* name, bool initialize) {
	$loadClass(WBMPMetadata, name, initialize, &_WBMPMetadata_ClassInfo_, clinit$WBMPMetadata, allocate$WBMPMetadata);
	return class$;
}

$Class* WBMPMetadata::class$ = nullptr;

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com