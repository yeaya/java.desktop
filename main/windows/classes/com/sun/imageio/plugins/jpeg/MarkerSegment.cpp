#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>

#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LENGTH_SIZE

using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IIOException = ::javax::imageio::IIOException;
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

$FieldInfo _MarkerSegment_FieldInfo_[] = {
	{"LENGTH_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(MarkerSegment, LENGTH_SIZE)},
	{"tag", "I", nullptr, 0, $field(MarkerSegment, tag)},
	{"length", "I", nullptr, 0, $field(MarkerSegment, length)},
	{"data", "[B", nullptr, 0, $field(MarkerSegment, data)},
	{"unknown", "Z", nullptr, 0, $field(MarkerSegment, unknown)},
	{}
};

$MethodInfo _MarkerSegment_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(MarkerSegment::*)($JPEGBuffer*)>(&MarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(MarkerSegment::*)(int32_t)>(&MarkerSegment::init$))},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(MarkerSegment::*)($Node*)>(&MarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getAttributeValue", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/NamedNodeMap;Ljava/lang/String;IIZ)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Node*,$NamedNodeMap*,$String*,int32_t,int32_t,bool)>(&MarkerSegment::getAttributeValue)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"loadData", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"print", "()V", nullptr, 0},
	{"printTag", "(Ljava/lang/String;)V", nullptr, 0},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"write2bytes", "(Ljavax/imageio/stream/ImageOutputStream;I)V", nullptr, $STATIC, $method(static_cast<void(*)($ImageOutputStream*,int32_t)>(&MarkerSegment::write2bytes)), "java.io.IOException"},
	{"writeTag", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	"java.lang.Object",
	"java.lang.Cloneable",
	_MarkerSegment_FieldInfo_,
	_MarkerSegment_MethodInfo_
};

$Object* allocate$MarkerSegment($Class* clazz) {
	return $of($alloc(MarkerSegment));
}

void MarkerSegment::init$($JPEGBuffer* buffer) {
	$set(this, data, nullptr);
	this->unknown = false;
	$nc(buffer)->loadBuf(3);
	this->tag = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	this->length = ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	this->length |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	this->length -= 2;
	if (this->length < 0) {
		$throwNew($IIOException, $$str({"Invalid segment length: "_s, $$str(this->length)}));
	}
	buffer->bufAvail -= 3;
	buffer->loadBuf(this->length);
}

void MarkerSegment::init$(int32_t tag) {
	$set(this, data, nullptr);
	this->unknown = false;
	this->tag = tag;
	this->length = 0;
}

void MarkerSegment::init$($Node* node) {
	$set(this, data, nullptr);
	this->unknown = false;
	this->tag = getAttributeValue(node, nullptr, "MarkerTag"_s, 0, 255, true);
	this->length = 0;
	if ($instanceOf($IIOMetadataNode, node)) {
		$var($IIOMetadataNode, iioNode, $cast($IIOMetadataNode, node));
		try {
			$set(this, data, $cast($bytes, $nc(iioNode)->getUserObject()));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$var($IIOInvalidTreeException, newGuy, $new($IIOInvalidTreeException, "Can\'t get User Object"_s, node));
			newGuy->initCause(e);
			$throw(newGuy);
		}
	} else {
		$throwNew($IIOInvalidTreeException, "Node must have User Object"_s, node);
	}
}

$Object* MarkerSegment::clone() {
	$var(MarkerSegment, newGuy, nullptr);
	try {
		$assign(newGuy, $cast(MarkerSegment, $Cloneable::clone()));
	} catch ($CloneNotSupportedException&) {
		$catch();
	}
	if (this->data != nullptr) {
		$set($nc(newGuy), data, $cast($bytes, $nc(this->data)->clone()));
	}
	return $of(newGuy);
}

void MarkerSegment::loadData($JPEGBuffer* buffer) {
	$set(this, data, $new($bytes, this->length));
	$nc(buffer)->readData(this->data);
}

$IIOMetadataNode* MarkerSegment::getNativeNode() {
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "unknown"_s));
	node->setAttribute("MarkerTag"_s, $($Integer::toString(this->tag)));
	node->setUserObject(this->data);
	return node;
}

int32_t MarkerSegment::getAttributeValue($Node* node, $NamedNodeMap* attrs$renamed, $String* name, int32_t min, int32_t max, bool required) {
	$init(MarkerSegment);
	$var($NamedNodeMap, attrs, attrs$renamed);
	if (attrs == nullptr) {
		$assign(attrs, $nc(node)->getAttributes());
	}
	$var($String, valueString, $nc($($nc(attrs)->getNamedItem(name)))->getNodeValue());
	int32_t value = -1;
	if (valueString == nullptr) {
		if (required) {
			$throwNew($IIOInvalidTreeException, $$str({name, " attribute not found"_s}), node);
		}
	} else {
		value = $Integer::parseInt(valueString);
		if ((value < min) || (value > max)) {
			$throwNew($IIOInvalidTreeException, $$str({name, " attribute out of range"_s}), node);
		}
	}
	return value;
}

void MarkerSegment::writeTag($ImageOutputStream* ios) {
	$nc(ios)->write(255);
	ios->write(this->tag);
	write2bytes(ios, this->length);
}

void MarkerSegment::write($ImageOutputStream* ios) {
	this->length = 2 + ((this->data != nullptr) ? $nc(this->data)->length : 0);
	writeTag(ios);
	if (this->data != nullptr) {
		$nc(ios)->write(this->data);
	}
}

void MarkerSegment::write2bytes($ImageOutputStream* ios, int32_t value) {
	$init(MarkerSegment);
	$nc(ios)->write((int32_t)((value >> 8) & (uint32_t)255));
	ios->write((int32_t)(value & (uint32_t)255));
}

void MarkerSegment::printTag($String* prefix) {
	$init($System);
	$nc($System::out)->println($$str({prefix, " marker segment - marker = 0x"_s, $($Integer::toHexString(this->tag))}));
	$nc($System::out)->println($$str({"length: "_s, $$str(this->length)}));
}

void MarkerSegment::print() {
	printTag("Unknown"_s);
	if (this->length > 10) {
		$init($System);
		$nc($System::out)->print("First 5 bytes:"_s);
		for (int32_t i = 0; i < 5; ++i) {
			$nc($System::out)->print($$str({" Ox"_s, $($Integer::toHexString((int32_t)$nc(this->data)->get(i)))}));
		}
		$nc($System::out)->print("\nLast 5 bytes:"_s);
		for (int32_t i = $nc(this->data)->length - 5; i < $nc(this->data)->length; ++i) {
			$nc($System::out)->print($$str({" Ox"_s, $($Integer::toHexString((int32_t)$nc(this->data)->get(i)))}));
		}
	} else {
		$init($System);
		$nc($System::out)->print("Data:"_s);
		for (int32_t i = 0; i < $nc(this->data)->length; ++i) {
			$nc($System::out)->print($$str({" Ox"_s, $($Integer::toHexString((int32_t)$nc(this->data)->get(i)))}));
		}
	}
	$init($System);
	$nc($System::out)->println();
}

MarkerSegment::MarkerSegment() {
}

$Class* MarkerSegment::load$($String* name, bool initialize) {
	$loadClass(MarkerSegment, name, initialize, &_MarkerSegment_ClassInfo_, allocate$MarkerSegment);
	return class$;
}

$Class* MarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com