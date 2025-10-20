#include <com/sun/imageio/plugins/jpeg/COMMarkerSegment.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/io/PrintStream.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
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

#undef COM
#undef ENCODING

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $PrintStream = ::java::io::PrintStream;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _COMMarkerSegment_FieldInfo_[] = {
	{"ENCODING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(COMMarkerSegment, ENCODING)},
	{}
};

$MethodInfo _COMMarkerSegment_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(COMMarkerSegment::*)($JPEGBuffer*)>(&COMMarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(COMMarkerSegment::*)($String*)>(&COMMarkerSegment::init$))},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(COMMarkerSegment::*)($Node*)>(&COMMarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getComment", "()Ljava/lang/String;", nullptr, 0},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _COMMarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.COMMarkerSegment",
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	nullptr,
	_COMMarkerSegment_FieldInfo_,
	_COMMarkerSegment_MethodInfo_
};

$Object* allocate$COMMarkerSegment($Class* clazz) {
	return $of($alloc(COMMarkerSegment));
}

$String* COMMarkerSegment::ENCODING = nullptr;

void COMMarkerSegment::init$($JPEGBuffer* buffer) {
	$MarkerSegment::init$(buffer);
	loadData(buffer);
}

void COMMarkerSegment::init$($String* comment) {
	$MarkerSegment::init$($JPEG::COM);
	$set(this, data, $nc(comment)->getBytes());
}

void COMMarkerSegment::init$($Node* node) {
	$useLocalCurrentObjectStackCache();
	$MarkerSegment::init$($JPEG::COM);
	if ($instanceOf($IIOMetadataNode, node)) {
		$var($IIOMetadataNode, ourNode, $cast($IIOMetadataNode, node));
		$set(this, data, $cast($bytes, $nc(ourNode)->getUserObject()));
	}
	if (this->data == nullptr) {
		$var($String, comment, $nc($($nc($($nc(node)->getAttributes()))->getNamedItem("comment"_s)))->getNodeValue());
		if (comment != nullptr) {
			$set(this, data, comment->getBytes());
		} else {
			$throwNew($IIOInvalidTreeException, "Empty comment node!"_s, node);
		}
	}
}

$String* COMMarkerSegment::getComment() {
	try {
		return $new($String, this->data, COMMarkerSegment::ENCODING);
	} catch ($UnsupportedEncodingException&) {
		$catch();
	}
	return nullptr;
}

$IIOMetadataNode* COMMarkerSegment::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "com"_s));
	node->setAttribute("comment"_s, $(getComment()));
	if (this->data != nullptr) {
		node->setUserObject($($nc(this->data)->clone()));
	}
	return node;
}

void COMMarkerSegment::write($ImageOutputStream* ios) {
	this->length = 2 + $nc(this->data)->length;
	writeTag(ios);
	$nc(ios)->write(this->data);
}

void COMMarkerSegment::print() {
	$useLocalCurrentObjectStackCache();
	printTag("COM"_s);
	$init($System);
	$nc($System::out)->println($$str({"<"_s, $(getComment()), ">"_s}));
}

COMMarkerSegment::COMMarkerSegment() {
}

void clinit$COMMarkerSegment($Class* class$) {
	$assignStatic(COMMarkerSegment::ENCODING, "ISO-8859-1"_s);
}

$Class* COMMarkerSegment::load$($String* name, bool initialize) {
	$loadClass(COMMarkerSegment, name, initialize, &_COMMarkerSegment_ClassInfo_, clinit$COMMarkerSegment, allocate$COMMarkerSegment);
	return class$;
}

$Class* COMMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com