#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
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

#undef JCS_RGB
#undef JCS_UNKNOWN
#undef SOF0
#undef SOF1
#undef SOF2

using $SOFMarkerSegment$ComponentSpecArray = $Array<::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec>;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $SOFMarkerSegment$ComponentSpec = ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
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

$FieldInfo _SOFMarkerSegment_FieldInfo_[] = {
	{"samplePrecision", "I", nullptr, 0, $field(SOFMarkerSegment, samplePrecision)},
	{"numLines", "I", nullptr, 0, $field(SOFMarkerSegment, numLines)},
	{"samplesPerLine", "I", nullptr, 0, $field(SOFMarkerSegment, samplesPerLine)},
	{"componentSpecs", "[Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec;", nullptr, 0, $field(SOFMarkerSegment, componentSpecs)},
	{}
};

$MethodInfo _SOFMarkerSegment_MethodInfo_[] = {
	{"<init>", "(ZZZ[BI)V", nullptr, 0, $method(static_cast<void(SOFMarkerSegment::*)(bool,bool,bool,$bytes*,int32_t)>(&SOFMarkerSegment::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(SOFMarkerSegment::*)($JPEGBuffer*)>(&SOFMarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(SOFMarkerSegment::*)($Node*)>(&SOFMarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getComponentSpec", "(BII)Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec;", nullptr, 0},
	{"getIDencodedCSType", "()I", nullptr, 0},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"updateFromNativeNode", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SOFMarkerSegment_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.SOFMarkerSegment$ComponentSpec", "com.sun.imageio.plugins.jpeg.SOFMarkerSegment", "ComponentSpec", 0},
	{}
};

$ClassInfo _SOFMarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.SOFMarkerSegment",
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	nullptr,
	_SOFMarkerSegment_FieldInfo_,
	_SOFMarkerSegment_MethodInfo_,
	nullptr,
	nullptr,
	_SOFMarkerSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.SOFMarkerSegment$ComponentSpec"
};

$Object* allocate$SOFMarkerSegment($Class* clazz) {
	return $of($alloc(SOFMarkerSegment));
}

void SOFMarkerSegment::init$(bool wantProg, bool wantExtended, bool willSubsample, $bytes* componentIDs, int32_t numComponents) {
	$useLocalCurrentObjectStackCache();
	$MarkerSegment::init$(wantProg ? $JPEG::SOF2 : wantExtended ? $JPEG::SOF1 : $JPEG::SOF0);
	this->samplePrecision = 8;
	this->numLines = 0;
	this->samplesPerLine = 0;
	$set(this, componentSpecs, $new($SOFMarkerSegment$ComponentSpecArray, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		int32_t factor = 1;
		int32_t qsel = 0;
		if (willSubsample) {
			factor = 2;
			if ((i == 1) || (i == 2)) {
				factor = 1;
				qsel = 1;
			}
		}
		$nc(this->componentSpecs)->set(i, $$new($SOFMarkerSegment$ComponentSpec, this, $nc(componentIDs)->get(i), factor, qsel));
	}
}

void SOFMarkerSegment::init$($JPEGBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$MarkerSegment::init$(buffer);
	this->samplePrecision = $nc($nc(buffer)->buf)->get(buffer->bufPtr++);
	this->numLines = ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	this->numLines |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	this->samplesPerLine = ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	this->samplesPerLine |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	int32_t numComponents = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	$set(this, componentSpecs, $new($SOFMarkerSegment$ComponentSpecArray, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		$nc(this->componentSpecs)->set(i, $$new($SOFMarkerSegment$ComponentSpec, this, buffer));
	}
	buffer->bufAvail -= this->length;
}

void SOFMarkerSegment::init$($Node* node) {
	$MarkerSegment::init$($JPEG::SOF0);
	this->samplePrecision = 8;
	this->numLines = 0;
	this->samplesPerLine = 0;
	updateFromNativeNode(node, true);
}

$Object* SOFMarkerSegment::clone() {
	$useLocalCurrentObjectStackCache();
	$var(SOFMarkerSegment, newGuy, $cast(SOFMarkerSegment, $MarkerSegment::clone()));
	if (this->componentSpecs != nullptr) {
		$set($nc(newGuy), componentSpecs, $cast($SOFMarkerSegment$ComponentSpecArray, $nc(this->componentSpecs)->clone()));
		for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
			$nc(newGuy->componentSpecs)->set(i, $cast($SOFMarkerSegment$ComponentSpec, $($nc($nc(this->componentSpecs)->get(i))->clone())));
		}
	}
	return $of(newGuy);
}

$IIOMetadataNode* SOFMarkerSegment::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "sof"_s));
	node->setAttribute("process"_s, $($Integer::toString(this->tag - $JPEG::SOF0)));
	node->setAttribute("samplePrecision"_s, $($Integer::toString(this->samplePrecision)));
	node->setAttribute("numLines"_s, $($Integer::toString(this->numLines)));
	node->setAttribute("samplesPerLine"_s, $($Integer::toString(this->samplesPerLine)));
	node->setAttribute("numFrameComponents"_s, $($Integer::toString($nc(this->componentSpecs)->length)));
	for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
		node->appendChild($($nc($nc(this->componentSpecs)->get(i))->getNativeNode()));
	}
	return node;
}

void SOFMarkerSegment::updateFromNativeNode($Node* node, bool fromScratch) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	int32_t value = getAttributeValue(node, attrs, "process"_s, 0, 2, false);
	this->tag = (value != -1) ? value + $JPEG::SOF0 : this->tag;
	value = getAttributeValue(node, attrs, "samplePrecision"_s, 8, 8, false);
	value = getAttributeValue(node, attrs, "numLines"_s, 0, 0x0000FFFF, false);
	this->numLines = (value != -1) ? value : this->numLines;
	value = getAttributeValue(node, attrs, "samplesPerLine"_s, 0, 0x0000FFFF, false);
	this->samplesPerLine = (value != -1) ? value : this->samplesPerLine;
	int32_t numComponents = getAttributeValue(node, attrs, "numFrameComponents"_s, 1, 4, false);
	$var($NodeList, children, node->getChildNodes());
	if ($nc(children)->getLength() != numComponents) {
		$throwNew($IIOInvalidTreeException, "numFrameComponents must match number of children"_s, node);
	}
	$set(this, componentSpecs, $new($SOFMarkerSegment$ComponentSpecArray, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		$nc(this->componentSpecs)->set(i, $$new($SOFMarkerSegment$ComponentSpec, this, $($nc(children)->item(i))));
	}
}

void SOFMarkerSegment::write($ImageOutputStream* ios) {
}

void SOFMarkerSegment::print() {
	printTag("SOF"_s);
	$init($System);
	$nc($System::out)->print("Sample precision: "_s);
	$nc($System::out)->println(this->samplePrecision);
	$nc($System::out)->print("Number of lines: "_s);
	$nc($System::out)->println(this->numLines);
	$nc($System::out)->print("Samples per line: "_s);
	$nc($System::out)->println(this->samplesPerLine);
	$nc($System::out)->print("Number of components: "_s);
	$nc($System::out)->println($nc(this->componentSpecs)->length);
	for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
		$nc($nc(this->componentSpecs)->get(i))->print();
	}
}

int32_t SOFMarkerSegment::getIDencodedCSType() {
	for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
		if ($nc($nc(this->componentSpecs)->get(i))->componentId < u'A') {
			return $JPEG::JCS_UNKNOWN;
		}
	}
	switch ($nc(this->componentSpecs)->length) {
	case 3:
		{
			if (($nc($nc(this->componentSpecs)->get(0))->componentId == u'R') && ($nc($nc(this->componentSpecs)->get(1))->componentId == u'G') && ($nc($nc(this->componentSpecs)->get(2))->componentId == u'B')) {
				return $JPEG::JCS_RGB;
			}
			break;
		}
	}
	return $JPEG::JCS_UNKNOWN;
}

$SOFMarkerSegment$ComponentSpec* SOFMarkerSegment::getComponentSpec(int8_t id, int32_t factor, int32_t qSelector) {
	return $new($SOFMarkerSegment$ComponentSpec, this, id, factor, qSelector);
}

SOFMarkerSegment::SOFMarkerSegment() {
}

$Class* SOFMarkerSegment::load$($String* name, bool initialize) {
	$loadClass(SOFMarkerSegment, name, initialize, &_SOFMarkerSegment_ClassInfo_, allocate$SOFMarkerSegment);
	return class$;
}

$Class* SOFMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com