#include <com/sun/imageio/plugins/jpeg/DRIMarkerSegment.h>

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
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DRI

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _DRIMarkerSegment_FieldInfo_[] = {
	{"restartInterval", "I", nullptr, 0, $field(DRIMarkerSegment, restartInterval)},
	{}
};

$MethodInfo _DRIMarkerSegment_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(DRIMarkerSegment::*)($JPEGBuffer*)>(&DRIMarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(DRIMarkerSegment::*)($Node*)>(&DRIMarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"updateFromNativeNode", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DRIMarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.DRIMarkerSegment",
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	nullptr,
	_DRIMarkerSegment_FieldInfo_,
	_DRIMarkerSegment_MethodInfo_
};

$Object* allocate$DRIMarkerSegment($Class* clazz) {
	return $of($alloc(DRIMarkerSegment));
}

void DRIMarkerSegment::init$($JPEGBuffer* buffer) {
	$MarkerSegment::init$(buffer);
	this->restartInterval = 0;
	this->restartInterval = ((int32_t)($nc($nc(buffer)->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	this->restartInterval |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	buffer->bufAvail -= this->length;
}

void DRIMarkerSegment::init$($Node* node) {
	$MarkerSegment::init$($JPEG::DRI);
	this->restartInterval = 0;
	updateFromNativeNode(node, true);
}

$IIOMetadataNode* DRIMarkerSegment::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "dri"_s));
	node->setAttribute("interval"_s, $($Integer::toString(this->restartInterval)));
	return node;
}

void DRIMarkerSegment::updateFromNativeNode($Node* node, bool fromScratch) {
	this->restartInterval = getAttributeValue(node, nullptr, "interval"_s, 0, 0x0000FFFF, true);
}

void DRIMarkerSegment::write($ImageOutputStream* ios) {
}

void DRIMarkerSegment::print() {
	$useLocalCurrentObjectStackCache();
	printTag("DRI"_s);
	$init($System);
	$nc($System::out)->println($$str({"Interval: "_s, $($Integer::toString(this->restartInterval))}));
}

DRIMarkerSegment::DRIMarkerSegment() {
}

$Class* DRIMarkerSegment::load$($String* name, bool initialize) {
	$loadClass(DRIMarkerSegment, name, initialize, &_DRIMarkerSegment_ClassInfo_, allocate$DRIMarkerSegment);
	return class$;
}

$Class* DRIMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com