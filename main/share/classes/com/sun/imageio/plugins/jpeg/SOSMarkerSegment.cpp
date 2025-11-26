#include <com/sun/imageio/plugins/jpeg/SOSMarkerSegment.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOSMarkerSegment$ScanComponentSpec.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef SOS

using $SOSMarkerSegment$ScanComponentSpecArray = $Array<::com::sun::imageio::plugins::jpeg::SOSMarkerSegment$ScanComponentSpec>;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $SOSMarkerSegment$ScanComponentSpec = ::com::sun::imageio::plugins::jpeg::SOSMarkerSegment$ScanComponentSpec;
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

$FieldInfo _SOSMarkerSegment_FieldInfo_[] = {
	{"startSpectralSelection", "I", nullptr, 0, $field(SOSMarkerSegment, startSpectralSelection)},
	{"endSpectralSelection", "I", nullptr, 0, $field(SOSMarkerSegment, endSpectralSelection)},
	{"approxHigh", "I", nullptr, 0, $field(SOSMarkerSegment, approxHigh)},
	{"approxLow", "I", nullptr, 0, $field(SOSMarkerSegment, approxLow)},
	{"componentSpecs", "[Lcom/sun/imageio/plugins/jpeg/SOSMarkerSegment$ScanComponentSpec;", nullptr, 0, $field(SOSMarkerSegment, componentSpecs)},
	{}
};

$MethodInfo _SOSMarkerSegment_MethodInfo_[] = {
	{"<init>", "(Z[BI)V", nullptr, 0, $method(static_cast<void(SOSMarkerSegment::*)(bool,$bytes*,int32_t)>(&SOSMarkerSegment::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(SOSMarkerSegment::*)($JPEGBuffer*)>(&SOSMarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(SOSMarkerSegment::*)($Node*)>(&SOSMarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"getScanComponentSpec", "(BI)Lcom/sun/imageio/plugins/jpeg/SOSMarkerSegment$ScanComponentSpec;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"updateFromNativeNode", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SOSMarkerSegment_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.SOSMarkerSegment$ScanComponentSpec", "com.sun.imageio.plugins.jpeg.SOSMarkerSegment", "ScanComponentSpec", 0},
	{}
};

$ClassInfo _SOSMarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.SOSMarkerSegment",
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	nullptr,
	_SOSMarkerSegment_FieldInfo_,
	_SOSMarkerSegment_MethodInfo_,
	nullptr,
	nullptr,
	_SOSMarkerSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.SOSMarkerSegment$ScanComponentSpec"
};

$Object* allocate$SOSMarkerSegment($Class* clazz) {
	return $of($alloc(SOSMarkerSegment));
}

void SOSMarkerSegment::init$(bool willSubsample, $bytes* componentIDs, int32_t numComponents) {
	$useLocalCurrentObjectStackCache();
	$MarkerSegment::init$($JPEG::SOS);
	this->startSpectralSelection = 0;
	this->endSpectralSelection = 63;
	this->approxHigh = 0;
	this->approxLow = 0;
	$set(this, componentSpecs, $new($SOSMarkerSegment$ScanComponentSpecArray, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		int32_t tableSel = 0;
		if (willSubsample) {
			if ((i == 1) || (i == 2)) {
				tableSel = 1;
			}
		}
		$nc(this->componentSpecs)->set(i, $$new($SOSMarkerSegment$ScanComponentSpec, this, $nc(componentIDs)->get(i), tableSel));
	}
}

void SOSMarkerSegment::init$($JPEGBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$MarkerSegment::init$(buffer);
	int32_t numComponents = $nc($nc(buffer)->buf)->get(buffer->bufPtr++);
	$set(this, componentSpecs, $new($SOSMarkerSegment$ScanComponentSpecArray, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		$nc(this->componentSpecs)->set(i, $$new($SOSMarkerSegment$ScanComponentSpec, this, buffer));
	}
	this->startSpectralSelection = $nc(buffer->buf)->get(buffer->bufPtr++);
	this->endSpectralSelection = $nc(buffer->buf)->get(buffer->bufPtr++);
	this->approxHigh = $nc(buffer->buf)->get(buffer->bufPtr) >> 4;
	this->approxLow = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)15);
	buffer->bufAvail -= this->length;
}

void SOSMarkerSegment::init$($Node* node) {
	$MarkerSegment::init$($JPEG::SOS);
	this->startSpectralSelection = 0;
	this->endSpectralSelection = 63;
	this->approxHigh = 0;
	this->approxLow = 0;
	updateFromNativeNode(node, true);
}

$Object* SOSMarkerSegment::clone() {
	$useLocalCurrentObjectStackCache();
	$var(SOSMarkerSegment, newGuy, $cast(SOSMarkerSegment, $MarkerSegment::clone()));
	if (this->componentSpecs != nullptr) {
		$set($nc(newGuy), componentSpecs, $cast($SOSMarkerSegment$ScanComponentSpecArray, $nc(this->componentSpecs)->clone()));
		for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
			$nc(newGuy->componentSpecs)->set(i, $cast($SOSMarkerSegment$ScanComponentSpec, $($nc($nc(this->componentSpecs)->get(i))->clone())));
		}
	}
	return $of(newGuy);
}

$IIOMetadataNode* SOSMarkerSegment::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "sos"_s));
	node->setAttribute("numScanComponents"_s, $($Integer::toString($nc(this->componentSpecs)->length)));
	node->setAttribute("startSpectralSelection"_s, $($Integer::toString(this->startSpectralSelection)));
	node->setAttribute("endSpectralSelection"_s, $($Integer::toString(this->endSpectralSelection)));
	node->setAttribute("approxHigh"_s, $($Integer::toString(this->approxHigh)));
	node->setAttribute("approxLow"_s, $($Integer::toString(this->approxLow)));
	for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
		node->appendChild($($nc($nc(this->componentSpecs)->get(i))->getNativeNode()));
	}
	return node;
}

void SOSMarkerSegment::updateFromNativeNode($Node* node, bool fromScratch) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	int32_t numComponents = getAttributeValue(node, attrs, "numScanComponents"_s, 1, 4, true);
	int32_t value = getAttributeValue(node, attrs, "startSpectralSelection"_s, 0, 63, false);
	this->startSpectralSelection = (value != -1) ? value : this->startSpectralSelection;
	value = getAttributeValue(node, attrs, "endSpectralSelection"_s, 0, 63, false);
	this->endSpectralSelection = (value != -1) ? value : this->endSpectralSelection;
	value = getAttributeValue(node, attrs, "approxHigh"_s, 0, 15, false);
	this->approxHigh = (value != -1) ? value : this->approxHigh;
	value = getAttributeValue(node, attrs, "approxLow"_s, 0, 15, false);
	this->approxLow = (value != -1) ? value : this->approxLow;
	$var($NodeList, children, node->getChildNodes());
	if ($nc(children)->getLength() != numComponents) {
		$throwNew($IIOInvalidTreeException, "numScanComponents must match the number of children"_s, node);
	}
	$set(this, componentSpecs, $new($SOSMarkerSegment$ScanComponentSpecArray, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		$nc(this->componentSpecs)->set(i, $$new($SOSMarkerSegment$ScanComponentSpec, this, $($nc(children)->item(i))));
	}
}

void SOSMarkerSegment::write($ImageOutputStream* ios) {
}

void SOSMarkerSegment::print() {
	printTag("SOS"_s);
	$nc($System::out)->print("Start spectral selection: "_s);
	$nc($System::out)->println(this->startSpectralSelection);
	$nc($System::out)->print("End spectral selection: "_s);
	$nc($System::out)->println(this->endSpectralSelection);
	$nc($System::out)->print("Approx high: "_s);
	$nc($System::out)->println(this->approxHigh);
	$nc($System::out)->print("Approx low: "_s);
	$nc($System::out)->println(this->approxLow);
	$nc($System::out)->print("Num scan components: "_s);
	$nc($System::out)->println($nc(this->componentSpecs)->length);
	for (int32_t i = 0; i < $nc(this->componentSpecs)->length; ++i) {
		$nc($nc(this->componentSpecs)->get(i))->print();
	}
}

$SOSMarkerSegment$ScanComponentSpec* SOSMarkerSegment::getScanComponentSpec(int8_t componentSel, int32_t tableSel) {
	return $new($SOSMarkerSegment$ScanComponentSpec, this, componentSel, tableSel);
}

SOSMarkerSegment::SOSMarkerSegment() {
}

$Class* SOSMarkerSegment::load$($String* name, bool initialize) {
	$loadClass(SOSMarkerSegment, name, initialize, &_SOSMarkerSegment_ClassInfo_, allocate$SOSMarkerSegment);
	return class$;
}

$Class* SOSMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com