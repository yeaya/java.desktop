#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFExtensionMarkerSegment.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$IllegalThumbException.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbJPEG.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbPalette.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbRGB.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbUncompressed.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef APP0
#undef DATA_SIZE
#undef ID_SIZE
#undef LENGTH_SIZE
#undef TYPE_GRAY
#undef TYPE_RGB

using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JFIFMarkerSegment$IllegalThumbException = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$IllegalThumbException;
using $JFIFMarkerSegment$JFIFThumb = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb;
using $JFIFMarkerSegment$JFIFThumbJPEG = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbJPEG;
using $JFIFMarkerSegment$JFIFThumbPalette = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbPalette;
using $JFIFMarkerSegment$JFIFThumbRGB = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbRGB;
using $JFIFMarkerSegment$JFIFThumbUncompressed = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbUncompressed;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JFIFMarkerSegment$JFIFExtensionMarkerSegment_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$JFIFExtensionMarkerSegment, this$0)},
	{"code", "I", nullptr, 0, $field(JFIFMarkerSegment$JFIFExtensionMarkerSegment, code)},
	{"thumb", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb;", nullptr, 0, $field(JFIFMarkerSegment$JFIFExtensionMarkerSegment, thumb)},
	{"DATA_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment$JFIFExtensionMarkerSegment, DATA_SIZE)},
	{"ID_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment$JFIFExtensionMarkerSegment, ID_SIZE)},
	{}
};

$MethodInfo _JFIFMarkerSegment$JFIFExtensionMarkerSegment_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFExtensionMarkerSegment::*)($JFIFMarkerSegment*,$JPEGBuffer*,$JPEGImageReader*)>(&JFIFMarkerSegment$JFIFExtensionMarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFExtensionMarkerSegment::*)($JFIFMarkerSegment*,$Node*)>(&JFIFMarkerSegment$JFIFExtensionMarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Ljava/awt/image/BufferedImage;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFExtensionMarkerSegment::*)($JFIFMarkerSegment*,$BufferedImage*)>(&JFIFMarkerSegment$JFIFExtensionMarkerSegment::init$)), "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"setThumbnail", "(Ljava/awt/image/BufferedImage;)V", nullptr, 0},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JFIFMarkerSegment$JFIFExtensionMarkerSegment_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFExtensionMarkerSegment", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFExtensionMarkerSegment", 0},
	{}
};

$ClassInfo _JFIFMarkerSegment$JFIFExtensionMarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFExtensionMarkerSegment",
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	nullptr,
	_JFIFMarkerSegment$JFIFExtensionMarkerSegment_FieldInfo_,
	_JFIFMarkerSegment$JFIFExtensionMarkerSegment_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment$JFIFExtensionMarkerSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
};

$Object* allocate$JFIFMarkerSegment$JFIFExtensionMarkerSegment($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment$JFIFExtensionMarkerSegment));
}

void JFIFMarkerSegment$JFIFExtensionMarkerSegment::init$($JFIFMarkerSegment* this$0, $JPEGBuffer* buffer, $JPEGImageReader* reader) {
	$set(this, this$0, this$0);
	$MarkerSegment::init$(buffer);
	$nc(buffer)->bufPtr += JFIFMarkerSegment$JFIFExtensionMarkerSegment::ID_SIZE;
	this->code = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	buffer->bufAvail -= JFIFMarkerSegment$JFIFExtensionMarkerSegment::DATA_SIZE;
	if (this->code == 16) {
		$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbJPEG, this$0, buffer, this->length, reader));
	} else {
		buffer->loadBuf(2);
		int32_t thumbX = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
		int32_t thumbY = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
		buffer->bufAvail -= 2;
		if (this->code == 17) {
			$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbPalette, this$0, buffer, thumbX, thumbY));
		} else {
			$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbRGB, this$0, buffer, thumbX, thumbY));
		}
	}
}

void JFIFMarkerSegment$JFIFExtensionMarkerSegment::init$($JFIFMarkerSegment* this$0, $Node* node) {
	$set(this, this$0, this$0);
	$MarkerSegment::init$($JPEG::APP0);
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	if ($nc(attrs)->getLength() > 0) {
		this->code = getAttributeValue(node, attrs, "extensionCode"_s, 16, 19, false);
		if (this->code == 18) {
			$throwNew($IIOInvalidTreeException, "invalid extensionCode attribute value"_s, node);
		}
	} else {
		this->code = 18;
	}
	if ($nc($(node->getChildNodes()))->getLength() != 1) {
		$throwNew($IIOInvalidTreeException, "app0JFXX node must have exactly 1 child"_s, node);
	}
	$var($Node, child, node->getFirstChild());
	$var($String, name, $nc(child)->getNodeName());
	if ($nc(name)->equals("JFIFthumbJPEG"_s)) {
		if (this->code == 18) {
			this->code = 16;
		}
		$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbJPEG, this$0, child));
	} else if (name->equals("JFIFthumbPalette"_s)) {
		if (this->code == 18) {
			this->code = 17;
		}
		$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbPalette, this$0, child));
	} else if (name->equals("JFIFthumbRGB"_s)) {
		if (this->code == 18) {
			this->code = 19;
		}
		$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbRGB, this$0, child));
	} else {
		$throwNew($IIOInvalidTreeException, "unrecognized app0JFXX child node"_s, node);
	}
}

void JFIFMarkerSegment$JFIFExtensionMarkerSegment::init$($JFIFMarkerSegment* this$0, $BufferedImage* thumbnail) {
	$set(this, this$0, this$0);
	$MarkerSegment::init$($JPEG::APP0);
	$var($ColorModel, cm, $nc(thumbnail)->getColorModel());
	int32_t csType = $nc($($nc(cm)->getColorSpace()))->getType();
	if (cm->hasAlpha()) {
		$throwNew($JFIFMarkerSegment$IllegalThumbException, this$0);
	}
	if ($instanceOf($IndexColorModel, cm)) {
		this->code = 17;
		$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbPalette, this$0, thumbnail));
	} else if (csType == $ColorSpace::TYPE_RGB) {
		this->code = 19;
		$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbRGB, this$0, thumbnail));
	} else if (csType == $ColorSpace::TYPE_GRAY) {
		this->code = 16;
		$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbJPEG, this$0, thumbnail));
	} else {
		$throwNew($JFIFMarkerSegment$IllegalThumbException, this$0);
	}
}

void JFIFMarkerSegment$JFIFExtensionMarkerSegment::setThumbnail($BufferedImage* thumbnail) {
	try {
		switch (this->code) {
		case 17:
			{
				$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbPalette, this->this$0, thumbnail));
				break;
			}
		case 19:
			{
				$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbRGB, this->this$0, thumbnail));
				break;
			}
		case 16:
			{
				$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbJPEG, this->this$0, thumbnail));
				break;
			}
		}
	} catch ($JFIFMarkerSegment$IllegalThumbException&) {
		$var($JFIFMarkerSegment$IllegalThumbException, e, $catch());
		$throwNew($InternalError, "Illegal thumb in setThumbnail!"_s, e);
	}
}

$Object* JFIFMarkerSegment$JFIFExtensionMarkerSegment::clone() {
	$var(JFIFMarkerSegment$JFIFExtensionMarkerSegment, newGuy, $cast(JFIFMarkerSegment$JFIFExtensionMarkerSegment, $MarkerSegment::clone()));
	if (this->thumb != nullptr) {
		$set($nc(newGuy), thumb, $cast($JFIFMarkerSegment$JFIFThumb, $nc(this->thumb)->clone()));
	}
	return $of(newGuy);
}

$IIOMetadataNode* JFIFMarkerSegment$JFIFExtensionMarkerSegment::getNativeNode() {
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "app0JFXX"_s));
	node->setAttribute("extensionCode"_s, $($Integer::toString(this->code)));
	node->appendChild($($nc(this->thumb)->getNativeNode()));
	return node;
}

void JFIFMarkerSegment$JFIFExtensionMarkerSegment::write($ImageOutputStream* ios, $JPEGImageWriter* writer) {
	this->length = $MarkerSegment::LENGTH_SIZE + JFIFMarkerSegment$JFIFExtensionMarkerSegment::DATA_SIZE + $nc(this->thumb)->getLength();
	writeTag(ios);
	$var($bytes, id, $new($bytes, {
		(int8_t)74,
		(int8_t)70,
		(int8_t)88,
		(int8_t)88,
		(int8_t)0
	}));
	$nc(ios)->write(id);
	ios->write(this->code);
	$nc(this->thumb)->write(ios, writer);
}

void JFIFMarkerSegment$JFIFExtensionMarkerSegment::print() {
	printTag("JFXX"_s);
	$nc(this->thumb)->print();
}

JFIFMarkerSegment$JFIFExtensionMarkerSegment::JFIFMarkerSegment$JFIFExtensionMarkerSegment() {
}

$Class* JFIFMarkerSegment$JFIFExtensionMarkerSegment::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment$JFIFExtensionMarkerSegment, name, initialize, &_JFIFMarkerSegment$JFIFExtensionMarkerSegment_ClassInfo_, allocate$JFIFMarkerSegment$JFIFExtensionMarkerSegment);
	return class$;
}

$Class* JFIFMarkerSegment$JFIFExtensionMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com