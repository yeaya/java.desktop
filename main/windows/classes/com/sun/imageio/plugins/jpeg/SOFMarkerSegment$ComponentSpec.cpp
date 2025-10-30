#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec.h>

#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $SOFMarkerSegment = ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _SOFMarkerSegment$ComponentSpec_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(SOFMarkerSegment$ComponentSpec, this$0)},
	{"componentId", "I", nullptr, 0, $field(SOFMarkerSegment$ComponentSpec, componentId)},
	{"HsamplingFactor", "I", nullptr, 0, $field(SOFMarkerSegment$ComponentSpec, HsamplingFactor)},
	{"VsamplingFactor", "I", nullptr, 0, $field(SOFMarkerSegment$ComponentSpec, VsamplingFactor)},
	{"QtableSelector", "I", nullptr, 0, $field(SOFMarkerSegment$ComponentSpec, QtableSelector)},
	{}
};

$MethodInfo _SOFMarkerSegment$ComponentSpec_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment;BII)V", nullptr, 0, $method(static_cast<void(SOFMarkerSegment$ComponentSpec::*)($SOFMarkerSegment*,int8_t,int32_t,int32_t)>(&SOFMarkerSegment$ComponentSpec::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(SOFMarkerSegment$ComponentSpec::*)($SOFMarkerSegment*,$JPEGBuffer*)>(&SOFMarkerSegment$ComponentSpec::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment;Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(SOFMarkerSegment$ComponentSpec::*)($SOFMarkerSegment*,$Node*)>(&SOFMarkerSegment$ComponentSpec::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _SOFMarkerSegment$ComponentSpec_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.SOFMarkerSegment$ComponentSpec", "com.sun.imageio.plugins.jpeg.SOFMarkerSegment", "ComponentSpec", 0},
	{}
};

$ClassInfo _SOFMarkerSegment$ComponentSpec_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.SOFMarkerSegment$ComponentSpec",
	"java.lang.Object",
	"java.lang.Cloneable",
	_SOFMarkerSegment$ComponentSpec_FieldInfo_,
	_SOFMarkerSegment$ComponentSpec_MethodInfo_,
	nullptr,
	nullptr,
	_SOFMarkerSegment$ComponentSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.SOFMarkerSegment"
};

$Object* allocate$SOFMarkerSegment$ComponentSpec($Class* clazz) {
	return $of($alloc(SOFMarkerSegment$ComponentSpec));
}

void SOFMarkerSegment$ComponentSpec::init$($SOFMarkerSegment* this$0, int8_t id, int32_t factor, int32_t qSelector) {
	$set(this, this$0, this$0);
	this->componentId = id;
	this->HsamplingFactor = factor;
	this->VsamplingFactor = factor;
	this->QtableSelector = qSelector;
}

void SOFMarkerSegment$ComponentSpec::init$($SOFMarkerSegment* this$0, $JPEGBuffer* buffer) {
	$set(this, this$0, this$0);
	this->componentId = $nc($nc(buffer)->buf)->get(buffer->bufPtr++);
	this->HsamplingFactor = (int32_t)((uint32_t)$nc(buffer->buf)->get(buffer->bufPtr) >> 4);
	this->VsamplingFactor = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)15);
	this->QtableSelector = $nc(buffer->buf)->get(buffer->bufPtr++);
}

void SOFMarkerSegment$ComponentSpec::init$($SOFMarkerSegment* this$0, $Node* node) {
	$set(this, this$0, this$0);
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	this->componentId = $MarkerSegment::getAttributeValue(node, attrs, "componentId"_s, 0, 255, true);
	this->HsamplingFactor = $MarkerSegment::getAttributeValue(node, attrs, "HsamplingFactor"_s, 1, 255, true);
	this->VsamplingFactor = $MarkerSegment::getAttributeValue(node, attrs, "VsamplingFactor"_s, 1, 255, true);
	this->QtableSelector = $MarkerSegment::getAttributeValue(node, attrs, "QtableSelector"_s, 0, 3, true);
}

$Object* SOFMarkerSegment$ComponentSpec::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return $of(nullptr);
}

$IIOMetadataNode* SOFMarkerSegment$ComponentSpec::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "componentSpec"_s));
	node->setAttribute("componentId"_s, $($Integer::toString(this->componentId)));
	node->setAttribute("HsamplingFactor"_s, $($Integer::toString(this->HsamplingFactor)));
	node->setAttribute("VsamplingFactor"_s, $($Integer::toString(this->VsamplingFactor)));
	node->setAttribute("QtableSelector"_s, $($Integer::toString(this->QtableSelector)));
	return node;
}

void SOFMarkerSegment$ComponentSpec::print() {
	$nc($System::out)->print("Component ID: "_s);
	$nc($System::out)->println(this->componentId);
	$nc($System::out)->print("H sampling factor: "_s);
	$nc($System::out)->println(this->HsamplingFactor);
	$nc($System::out)->print("V sampling factor: "_s);
	$nc($System::out)->println(this->VsamplingFactor);
	$nc($System::out)->print("Q table selector: "_s);
	$nc($System::out)->println(this->QtableSelector);
}

SOFMarkerSegment$ComponentSpec::SOFMarkerSegment$ComponentSpec() {
}

$Class* SOFMarkerSegment$ComponentSpec::load$($String* name, bool initialize) {
	$loadClass(SOFMarkerSegment$ComponentSpec, name, initialize, &_SOFMarkerSegment$ComponentSpec_ClassInfo_, allocate$SOFMarkerSegment$ComponentSpec);
	return class$;
}

$Class* SOFMarkerSegment$ComponentSpec::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com