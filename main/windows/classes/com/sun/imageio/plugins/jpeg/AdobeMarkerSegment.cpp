#include <com/sun/imageio/plugins/jpeg/AdobeMarkerSegment.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef APP14
#undef ID_SIZE

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _AdobeMarkerSegment_FieldInfo_[] = {
	{"version", "I", nullptr, 0, $field(AdobeMarkerSegment, version)},
	{"flags0", "I", nullptr, 0, $field(AdobeMarkerSegment, flags0)},
	{"flags1", "I", nullptr, 0, $field(AdobeMarkerSegment, flags1)},
	{"transform", "I", nullptr, 0, $field(AdobeMarkerSegment, transform)},
	{"ID_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AdobeMarkerSegment, ID_SIZE)},
	{}
};

$MethodInfo _AdobeMarkerSegment_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(AdobeMarkerSegment::*)(int32_t)>(&AdobeMarkerSegment::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(AdobeMarkerSegment::*)($JPEGBuffer*)>(&AdobeMarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(AdobeMarkerSegment::*)($Node*)>(&AdobeMarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"updateFromNativeNode", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeAdobeSegment", "(Ljavax/imageio/stream/ImageOutputStream;I)V", nullptr, $STATIC, $method(static_cast<void(*)($ImageOutputStream*,int32_t)>(&AdobeMarkerSegment::writeAdobeSegment)), "java.io.IOException"},
	{}
};

$ClassInfo _AdobeMarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.AdobeMarkerSegment",
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	nullptr,
	_AdobeMarkerSegment_FieldInfo_,
	_AdobeMarkerSegment_MethodInfo_
};

$Object* allocate$AdobeMarkerSegment($Class* clazz) {
	return $of($alloc(AdobeMarkerSegment));
}

void AdobeMarkerSegment::init$(int32_t transform) {
	$MarkerSegment::init$($JPEG::APP14);
	this->version = 101;
	this->flags0 = 0;
	this->flags1 = 0;
	this->transform = transform;
}

void AdobeMarkerSegment::init$($JPEGBuffer* buffer) {
	$MarkerSegment::init$(buffer);
	$nc(buffer)->bufPtr += AdobeMarkerSegment::ID_SIZE;
	this->version = ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	this->version |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	this->flags0 = ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	this->flags0 |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	this->flags1 = ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	this->flags1 |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	this->transform = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	buffer->bufAvail -= this->length;
}

void AdobeMarkerSegment::init$($Node* node) {
	AdobeMarkerSegment::init$(0);
	updateFromNativeNode(node, true);
}

$IIOMetadataNode* AdobeMarkerSegment::getNativeNode() {
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "app14Adobe"_s));
	node->setAttribute("version"_s, $($Integer::toString(this->version)));
	node->setAttribute("flags0"_s, $($Integer::toString(this->flags0)));
	node->setAttribute("flags1"_s, $($Integer::toString(this->flags1)));
	node->setAttribute("transform"_s, $($Integer::toString(this->transform)));
	return node;
}

void AdobeMarkerSegment::updateFromNativeNode($Node* node, bool fromScratch) {
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	this->transform = getAttributeValue(node, attrs, "transform"_s, 0, 2, true);
	int32_t count = $nc(attrs)->getLength();
	if (count > 4) {
		$throwNew($IIOInvalidTreeException, "Adobe APP14 node cannot have > 4 attributes"_s, node);
	}
	if (count > 1) {
		int32_t value = getAttributeValue(node, attrs, "version"_s, 100, 255, false);
		this->version = (value != -1) ? value : this->version;
		value = getAttributeValue(node, attrs, "flags0"_s, 0, 0x0000FFFF, false);
		this->flags0 = (value != -1) ? value : this->flags0;
		value = getAttributeValue(node, attrs, "flags1"_s, 0, 0x0000FFFF, false);
		this->flags1 = (value != -1) ? value : this->flags1;
	}
}

void AdobeMarkerSegment::write($ImageOutputStream* ios) {
	this->length = 14;
	writeTag(ios);
	$var($bytes, id, $new($bytes, {
		(int8_t)65,
		(int8_t)100,
		(int8_t)111,
		(int8_t)98,
		(int8_t)101
	}));
	$nc(ios)->write(id);
	write2bytes(ios, this->version);
	write2bytes(ios, this->flags0);
	write2bytes(ios, this->flags1);
	ios->write(this->transform);
}

void AdobeMarkerSegment::writeAdobeSegment($ImageOutputStream* ios, int32_t transform) {
	$init(AdobeMarkerSegment);
	($$new(AdobeMarkerSegment, transform))->write(ios);
}

void AdobeMarkerSegment::print() {
	printTag("Adobe APP14"_s);
	$init($System);
	$nc($System::out)->print("Version: "_s);
	$nc($System::out)->println(this->version);
	$nc($System::out)->print("Flags0: 0x"_s);
	$nc($System::out)->println($($Integer::toHexString(this->flags0)));
	$nc($System::out)->print("Flags1: 0x"_s);
	$nc($System::out)->println($($Integer::toHexString(this->flags1)));
	$nc($System::out)->print("Transform: "_s);
	$nc($System::out)->println(this->transform);
}

AdobeMarkerSegment::AdobeMarkerSegment() {
}

$Class* AdobeMarkerSegment::load$($String* name, bool initialize) {
	$loadClass(AdobeMarkerSegment, name, initialize, &_AdobeMarkerSegment_ClassInfo_, allocate$AdobeMarkerSegment);
	return class$;
}

$Class* AdobeMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com